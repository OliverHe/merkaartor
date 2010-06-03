#ifndef MERKAARTOR_FEATUREMANIPULATIONS_H_
#define MERKAARTOR_FEATUREMANIPULATIONS_H_

class CommandList;
class Document;
class Layer;
class PropertiesDock;
class Way;

#include <QList>

void joinRoads(Document* theDocument, CommandList* theList, PropertiesDock* theDock);
void splitRoads(Document* theDocument, CommandList* theList, PropertiesDock* theDock);
void breakRoads(Document* theDocument, CommandList* theList, PropertiesDock* theDock);
bool canCreateJunction(PropertiesDock* theDock);
int createJunction(Document* theDocument, CommandList* theList, PropertiesDock* theDock, bool doIt=true);
void addStreetNumbers(Document* theDocument, CommandList* theList, PropertiesDock* theDock);
void reversePoints(Document* theDocument, CommandList* theList, Way* R);
void simplifyRoads(Document* theDocument, CommandList* theList, PropertiesDock* theDock, double threshold);
void alignNodes(Document* theDocument, CommandList* theList, PropertiesDock* theDock);
void spreadNodes(Document* theDocument, CommandList* theList, PropertiesDock* theDock);
void mergeNodes(Document* theDocument, CommandList* theList, PropertiesDock* theDock);
void detachNode(Document* theDocument, CommandList* theList, PropertiesDock* theDock);
void commitFeatures(Document* theDocument, CommandList* theList, PropertiesDock* theDock);
bool canJoinRoads(PropertiesDock* theDock);
bool canBreakRoads(PropertiesDock* theDock);
bool canDetachNodes(PropertiesDock* theDock);
void addRelationMember(Document* theDocument, CommandList* theList, PropertiesDock* theDock);
void removeRelationMember(Document* theDocument, CommandList* theList, PropertiesDock* theDock);
void subdivideRoad(Document* theDocument, CommandList* theList, PropertiesDock* theDock, unsigned int divisions);
void splitArea(Document* theDocument, CommandList* theList, PropertiesDock* theDock);
void terraceArea(Document* theDocument, CommandList* theList, PropertiesDock* theDock, unsigned int divisions);


#endif

