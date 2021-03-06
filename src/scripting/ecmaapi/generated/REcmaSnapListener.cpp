// ***** AUTOGENERATED CODE, DO NOT EDIT *****
            // ***** This class is not copyable.
        
        #include "REcmaSnapListener.h"
        #include "RMetaTypes.h"
        #include "../REcmaHelper.h"

        // forwards declarations mapped to includes
        
                #include "RDocumentInterface.h"
            
                #include "REntity.h"
            
            
        // includes for base ecma wrapper classes
         void REcmaSnapListener::initEcma(QScriptEngine& engine, QScriptValue* proto 
    
    ) 
    
    {

    bool protoCreated = false;
    if(proto == NULL){
        proto = new QScriptValue(engine.newVariant(qVariantFromValue(
                (RSnapListener*) 0)));
        protoCreated = true;
    }

    

    QScriptValue fun;

    // toString:
    REcmaHelper::registerFunction(&engine, proto, toString, "toString");
    

    // destroy:
    REcmaHelper::registerFunction(&engine, proto, destroy, "destroy");
    

    // get class name
    REcmaHelper::registerFunction(&engine, proto, getClassName, "getClassName");
    

    // conversion to all base classes (multiple inheritance):
    REcmaHelper::registerFunction(&engine, proto, getBaseClasses, "getBaseClasses");
    

    // properties:
    

    // methods:
    
            REcmaHelper::registerFunction(&engine, proto, updateSnap, "updateSnap");
            
        engine.setDefaultPrototype(
            qMetaTypeId<RSnapListener*>(), *proto);

        
    

    QScriptValue ctor = engine.newFunction(createEcma, *proto, 2);
    
    // static methods:
    

    // static properties:
    

    // enum values:
    

    // enum conversions:
    
        
    // init class:
    engine.globalObject().setProperty("RSnapListener",
    ctor, QScriptValue::SkipInEnumeration);
    
    if( protoCreated ){
       delete proto;
    }
    
    }
     QScriptValue REcmaSnapListener::createEcma(QScriptContext* context, QScriptEngine* engine) 
    
    {
           return REcmaHelper::throwError("Abstract class RSnapListener: Cannot be constructed.",
               context); 
    }
    

    // conversion functions for base classes:
    

    // returns class name:
     QScriptValue REcmaSnapListener::getClassName(QScriptContext *context, QScriptEngine *engine) 
        
    {
        return qScriptValueFromValue(engine, QString("RSnapListener"));
    }
    

    // returns all base classes (in case of multiple inheritance):
     QScriptValue REcmaSnapListener::getBaseClasses(QScriptContext *context, QScriptEngine *engine) 
        
    {
        QStringList list;
        

        return qScriptValueFromSequence(engine, list);
    }
    

    // properties:
    

    // public methods:
     QScriptValue
        REcmaSnapListener::updateSnap
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaSnapListener::updateSnap", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaSnapListener::updateSnap";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RSnapListener* self = 
                        getSelf("updateSnap", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    1 && (
            context->argument(0).isVariant() || 
            context->argument(0).isQObject() || 
            context->argument(0).isNull()
        ) /* type: RDocumentInterface * */
    
    ){
    // prepare arguments:
    
                    // argument is pointer
                    RDocumentInterface * a0 = NULL;

                    a0 = 
                        REcmaHelper::scriptValueTo<RDocumentInterface >(
                            context->argument(0)
                        );
                    
                    if (a0==NULL && 
                        !context->argument(0).isNull()) {
                        return REcmaHelper::throwError("RSnapListener: Argument 0 is not of type RDocumentInterface *RDocumentInterface *.", context);                    
                    }
                
    // end of arguments

    // call C++ function:
    // return type 'void'
    
               self->updateSnap(a0);
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RSnapListener.updateSnap().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaSnapListener::updateSnap", context, engine);
            return result;
        }
         QScriptValue REcmaSnapListener::toString
    (QScriptContext *context, QScriptEngine *engine)
    
    {

    RSnapListener* self = getSelf("toString", context);
    
    QString result;
    
            result = QString("RSnapListener(0x%1)").arg((unsigned long int)self, 0, 16);
        
    return QScriptValue(result);
    }
     QScriptValue REcmaSnapListener::destroy(QScriptContext *context, QScriptEngine *engine)
    
    {

        RSnapListener* self = getSelf("RSnapListener", context);
        //Q_ASSERT(self!=NULL);
        if (self==NULL) {
            return REcmaHelper::throwError("self is NULL", context);
        }
        
    
        delete self;
        context->thisObject().setData(engine->nullValue());
        context->thisObject().prototype().setData(engine->nullValue());
        context->thisObject().setPrototype(engine->nullValue());
        context->thisObject().setScriptClass(NULL);
        return engine->undefinedValue();
    }
    RSnapListener* REcmaSnapListener::getSelf(const QString& fName, QScriptContext* context)
    
        {
            RSnapListener* self = NULL;

            
                // self could be a normal object (e.g. from an UI file) or
                // an ECMA shell object (made from an ECMA script):
                //self = getSelfShell(fName, context);
                

            //if (self==NULL) {
                self = REcmaHelper::scriptValueTo<RSnapListener >(context->thisObject())
                
                ;
            //}

            if (self == NULL){
                // avoid recursion (toString is used by the backtrace):
                if (fName!="toString") {
                    REcmaHelper::throwError(QString("RSnapListener.%1(): "
                        "This object is not a RSnapListener").arg(fName),
                        context);
                }
                return NULL;
            }

            return self;
        }
        RSnapListener* REcmaSnapListener::getSelfShell(const QString& fName, QScriptContext* context)
    
        {
          RSnapListener* selfBase = getSelf(fName, context);
                RSnapListener* self = dynamic_cast<RSnapListener*>(selfBase);
                //return REcmaHelper::scriptValueTo<RSnapListener >(context->thisObject());
            if(self == NULL){
                REcmaHelper::throwError(QString("RSnapListener.%1(): "
                    "This object is not a RSnapListener").arg(fName),
                    context);
            }

            return self;
            


        }
        