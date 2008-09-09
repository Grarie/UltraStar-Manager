#ifndef QUDETAILSTABLE_H_
#define QUDETAILSTABLE_H_

#include <QTableWidget>
#include <QList>

#include "QU.h"
#include "QUSongItem.h"

class QUDetailsTable: public QTableWidget {
	Q_OBJECT

public:
	QUDetailsTable(QWidget *parent = 0);

	void updateValueColumn(const QList<QUSongItem*> &songItems);

	void reset();

private:
	void initTagColumn();
	void initValueColumn();

	void initSeparator(const QString &text, int row);
};

#endif /*QUDETAILSTABLE_H_*/
