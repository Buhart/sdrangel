/**
 * SDRangel
 * This is the web API of SDRangel SDR software. SDRangel is an Open Source Qt5/OpenGL 3.0+ GUI and server Software Defined Radio and signal analyzer in software. It supports Airspy, BladeRF, HackRF, LimeSDR, PlutoSDR, RTL-SDR, SDRplay RSP1 and FunCube
 *
 * OpenAPI spec version: 4.0.0
 * Contact: f4exb06@gmail.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */


#include "SWGChannelListItem.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {

SWGChannelListItem::SWGChannelListItem(QString* json) {
    init();
    this->fromJson(*json);
}

SWGChannelListItem::SWGChannelListItem() {
    init();
}

SWGChannelListItem::~SWGChannelListItem() {
    this->cleanup();
}

void
SWGChannelListItem::init() {
    name = new QString("");
    id_uri = new QString("");
    id = new QString("");
    tx = false;
    version = new QString("");
    index = 0;
}

void
SWGChannelListItem::cleanup() {
    
    if(name != nullptr) {
        delete name;
    }

    if(id_uri != nullptr) {
        delete id_uri;
    }

    if(id != nullptr) {
        delete id;
    }


    if(version != nullptr) {
        delete version;
    }

}

SWGChannelListItem*
SWGChannelListItem::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGChannelListItem::fromJsonObject(QJsonObject &pJson) {
    ::Swagger::setValue(&name, pJson["name"], "QString", "QString");
    ::Swagger::setValue(&id_uri, pJson["idURI"], "QString", "QString");
    ::Swagger::setValue(&id, pJson["id"], "QString", "QString");
    ::Swagger::setValue(&tx, pJson["tx"], "bool", "");
    ::Swagger::setValue(&version, pJson["version"], "QString", "QString");
    ::Swagger::setValue(&index, pJson["index"], "qint32", "");
}

QString
SWGChannelListItem::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGChannelListItem::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    toJsonValue(QString("name"), name, obj, QString("QString"));

    toJsonValue(QString("idURI"), id_uri, obj, QString("QString"));

    toJsonValue(QString("id"), id, obj, QString("QString"));

    obj->insert("tx", QJsonValue(tx));

    toJsonValue(QString("version"), version, obj, QString("QString"));

    obj->insert("index", QJsonValue(index));

    return obj;
}

QString*
SWGChannelListItem::getName() {
    return name;
}
void
SWGChannelListItem::setName(QString* name) {
    this->name = name;
}

QString*
SWGChannelListItem::getIdUri() {
    return id_uri;
}
void
SWGChannelListItem::setIdUri(QString* id_uri) {
    this->id_uri = id_uri;
}

QString*
SWGChannelListItem::getId() {
    return id;
}
void
SWGChannelListItem::setId(QString* id) {
    this->id = id;
}

bool
SWGChannelListItem::getTx() {
    return tx;
}
void
SWGChannelListItem::setTx(bool tx) {
    this->tx = tx;
}

QString*
SWGChannelListItem::getVersion() {
    return version;
}
void
SWGChannelListItem::setVersion(QString* version) {
    this->version = version;
}

qint32
SWGChannelListItem::getIndex() {
    return index;
}
void
SWGChannelListItem::setIndex(qint32 index) {
    this->index = index;
}


}

