// Copyright (C) 2018 The Qt Company Ltd.
// SPDX-License-Identifier: LicenseRef-Qt-Commercial OR GPL-3.0-only

#ifndef QMQTTTYPE_H
#define QMQTTTYPE_H

#include <QtCore/QDebug>
#include <QtCore/QList>
#include <QtCore/QPair>
#include <QtCore/QSharedDataPointer>
#include <QtCore/QString>

QT_BEGIN_NAMESPACE

class QMqttStringPairData;
class QMqttStringPair
{
public:
    QMqttStringPair();
    QMqttStringPair(const QString &name, const QString &value);
    QMqttStringPair(const QMqttStringPair &);
    ~QMqttStringPair();

    QString name() const;
    void setName(const QString &n);

    QString value() const;
    void setValue(const QString &v);

    bool operator==(const QMqttStringPair &other) const;
    bool operator!=(const QMqttStringPair &other) const;
    QMqttStringPair &operator=(const QMqttStringPair &);
private:
    QSharedDataPointer<QMqttStringPairData> data;
};

#ifndef QT_NO_DEBUG_STREAM
QDebug operator<<(QDebug d, const QMqttStringPair &s);
#endif

class QMqttUserProperties : public QList<QMqttStringPair>
{
public:
};

QT_END_NAMESPACE

#endif // QMQTTTYPE_H
