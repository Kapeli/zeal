#ifndef DOCSET_H
#define DOCSET_H

#include "docsetinfo.h"
#include "docsetmetadata.h"

#include <QIcon>
#include <QString>
#include <QSqlDatabase>

namespace Zeal {

class Docset
{
public:
    enum class Type {
        Dash,
        ZDash
    };

    explicit Docset();
    ~Docset();

    QIcon icon() const;

    QString name;
    QString prefix;
    Type type;
    QString documentPath;
    QSqlDatabase db;
    DocsetMetadata metadata;
    DocsetInfo info;
};

} // namespace Zeal

#endif // DOCSET_H
