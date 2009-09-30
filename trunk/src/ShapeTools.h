// ShapeTools.h
// Copyright (c) 2009, Dan Heeks
// This program is released under the BSD license. See the file COPYING for details.

#pragma once

class CFace;
class CEdge;

class CFaceList: public ObjList{
public:
	const wxChar* GetTypeString(void)const{return _("Faces");}
	HeeksObj *MakeACopy(void)const{ return new CFaceList(*this);}
	wxString GetIcon(){return wxGetApp().GetResFolder() + _T("/icons/faces");}
	bool DescendForUndo(){return false;}
};

class CEdgeList: public ObjList{
public:
	const wxChar* GetTypeString(void)const{return _("Edges");}
	HeeksObj *MakeACopy(void)const{ return new CEdgeList(*this);}
	wxString GetIcon(){return wxGetApp().GetResFolder() + _T("/icons/edges");}
	bool DescendForUndo(){return false;}
};

class CVertexList: public ObjList{
public:
	const wxChar* GetTypeString(void)const{return _("Vertices");}
	HeeksObj *MakeACopy(void)const{ return new CVertexList(*this);}
	wxString GetIcon(){return wxGetApp().GetResFolder() + _T("/icons/vertices");}
	bool DescendForUndo(){return false;}
};

void CreateFacesAndEdges(TopoDS_Shape shape, CFaceList* faces, CEdgeList* edges, CVertexList* vertices);