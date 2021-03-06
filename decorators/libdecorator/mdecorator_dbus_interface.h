/*
 * This file was generated by qdbusxml2cpp version 0.7
 * Command line was: qdbusxml2cpp -i mabstractappinterface.h -c MDecoratorInterface -p mdecorator_dbus_interface.h: mdecorator_dbus.xml
 *
 * qdbusxml2cpp is Copyright (C) 2011 Nokia Corporation and/or its subsidiary(-ies).
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#ifndef MDECORATOR_DBUS_INTERFACE_H_1364764190
#define MDECORATOR_DBUS_INTERFACE_H_1364764190

#include <QtCore/QObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>
#include <QtDBus/QtDBus>
#include "mabstractappinterface.h"

/*
 * Proxy class for interface com.nokia.MDecorator
 */
class MDecoratorInterface: public QDBusAbstractInterface
{
    Q_OBJECT
public:
    static inline const char *staticInterfaceName()
    { return "com.nokia.MDecorator"; }

public:
    MDecoratorInterface(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent = 0);

    ~MDecoratorInterface();

public Q_SLOTS: // METHODS
    inline QDBusPendingReply<> setActions(MDecoratorIPCActionList actions, uint window)
    {
        QList<QVariant> argumentList;
        argumentList << qVariantFromValue(actions) << qVariantFromValue(window);
        return asyncCallWithArgumentList(QLatin1String("setActions"), argumentList);
    }

Q_SIGNALS: // SIGNALS
    void toggled(const QString &uuid, bool checked);
    void triggered(const QString &uuid, bool checked);
};

namespace com {
  namespace nokia {
    typedef ::MDecoratorInterface MDecorator;
  }
}
#endif
