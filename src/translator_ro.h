/******************************************************************************
 *
 * 
 *
 * Copyright (C) 1997-2000 by Dimitri van Heesch.
 *
 * Permission to use, copy, modify, and distribute this software and its
 * documentation under the terms of the GNU General Public License is hereby 
 * granted. No representations are made about the suitability of this software 
 * for any purpose. It is provided "as is" without express or implied warranty.
 * See the GNU General Public License for more details.
 *
 * Documents produced by Doxygen are derivative works derived from the
 * input used in their production; they are not affected by this license.
 *
 */

/* The translation from English to Romanian by Alexandru Iosup [aiosup@yahoo.com].
 *
 * Disclaimer: I hope I translated these to Romanian keeping
 * the meaning of the sentences intact. Keep in mind that I used C-words were possible,
 * (e.g. the romanian for typedef is much unexpressive than the original), since we are
 * producing C-documentation of our projects.
 *
 * If you have suggestions, please mail the comments and text proposals to the address 
 * shown aprox.10 lines above
 *
 * Project start:
 * --------------
 * 20.Sep.2k 
 */
#ifndef TRANSLATOR_RO_H
#define TRANSLATOR_RO_H

#include "qtbc.h"
#include "classdef.h"
#include "util.h"

class TranslatorRomanian: public Translator
{
  public:

    // --- Language contol methods -------------------
    
    /*! Used for identification of the language. May resemble 
     * the string returned by latexBabelPackage(), but it is not used
     * for the same purpose. The identification should not be translated.
     * It should be replaced by the name of the language in English
     * (e.g. Czech, Japanese, Russian, etc.). It should be equal to 
     * the identification in language.h.
     */
    virtual QCString idLanguage()
    { return "romanian"; }
    /*! Used to get the command(s) for the language support. This method
     *  was designed for languages which do not prefer babel package.
     *  If this methods returns empty string, then the latexBabelPackage()
     *  method is used to generate the command for using the babel package.
     */
    virtual QCString latexLanguageSupportCommand()
    {
      return "\\usepackage{romanian}\n";
    }
    /*! returns the name of the package that is included by LaTeX */
    virtual QCString latexBabelPackage() 
    { return "romanian"; }

    /*! return the language charset. This will be used for the HTML output */
    virtual QCString idLanguageCharset()
    {
      return "iso-8859-2";
    }

    // --- Language translation methods -------------------

    /*! used in the compound documentation before a list of related functions. */
    virtual QCString trRelatedFunctions()
    { return "Func�ii �nrudite"; }

    /*! subscript for the related functions. */
    virtual QCString trRelatedSubscript()
    { return "(Aten�ie: NU sunt func�ii membre.)"; }

    /*! header that is put before the detailed description of files, classes and namespaces. */
    virtual QCString trDetailedDescription()
    { return "Descriere Detaliat�"; }

    /*! header that is put before the list of typedefs. */
    virtual QCString trMemberTypedefDocumentation()
    { return "Documenta�ia Declara�iilor Typedef membre"; }
    
    /*! header that is put before the list of enumerations. */
    virtual QCString trMemberEnumerationDocumentation()
    { return "Documenta�ia membrilor Enum"; }
    
    /*! header that is put before the list of member functions. */
    virtual QCString trMemberFunctionDocumentation()
    { return "Documenta�ia Func�iilor membre"; }
    
    /*! header that is put before the list of member attributes. */
    virtual QCString trMemberDataDocumentation()
    { return "Documenta�ia Datelor membre"; }

    /*! this is the text of a link put after brief descriptions. */
    virtual QCString trMore() 
    { return "Mai mult..."; }

    /*! put in the class documentation */
    virtual QCString trListOfAllMembers()
    { return "Lista tuturor membrilor."; }

    /*! used as the title of the "list of all members" page of a class */
    virtual QCString trMemberList()
    { return "Lista Membrilor"; }

    /*! this is the first part of a sentence that is followed by a class name */
    virtual QCString trThisIsTheListOfAllMembers()
    { return "Aceasta este lista complet� a membrilor din "; }

    /*! this is the remainder of the sentence after the class name */
    virtual QCString trIncludingInheritedMembers()
    { return ", inclusiv a tuturor membrilor mo�teni�i."; }
    
    /*! this is put at the author sections at the bottom of man pages.
     *  parameter s is name of the project name.
     */
    virtual QCString trGeneratedAutomatically(const char *s)
    { QCString result="Generat automat de Doxygen";
      if (s) result+=(QCString)" pentru "+s;
      result+=" din codul surs�."; 
      return result;
    }

    /*! put after an enum name in the list of all members */
    virtual QCString trEnumName()
    { return "nume enum"; }
    
    /*! put after an enum value in the list of all members */
    virtual QCString trEnumValue()
    { return "valoare enum"; }
    
    /*! put after an undocumented member in the list of all members */
    virtual QCString trDefinedIn()
    { return "definit �n"; }

    /*! put as in introduction in the verbatim header file of a class.
     *  parameter f is the name of the include file.
     */
    virtual QCString trVerbatimText(const char *f)
    { return (QCString)"Acesta este textul original al fi�ierului inclus "+f; }
    
    // quick reference sections

    /*! This is put above each page as a link to the list of all groups of 
     *  compounds or files (see the \group command).
     */
    virtual QCString trModules()
    { return "Module"; }
    
    /*! This is put above each page as a link to the class hierarchy */
    virtual QCString trClassHierarchy()
    { return "Ierarhia Claselor"; }
    
    /*! This is put above each page as a link to the list of annotated classes */
    virtual QCString trCompoundList()
    { return "Lista Componen�ilor"; }
    
    /*! This is put above each page as a link to the list of documented files */
    virtual QCString trFileList()
    { return "Lista fi�ierelor"; }

    /*! This is put above each page as a link to the list of all verbatim headers */
    virtual QCString trHeaderFiles()
    { return "Fi�iere Header"; }

    /*! This is put above each page as a link to all members of compounds. */
    virtual QCString trCompoundMembers()
    { return "Membrii Componen�i"; }//cu articol hotarat

    /*! This is put above each page as a link to all members of files. */
    virtual QCString trFileMembers()
    { return "Membrii din Fi�ier"; }//cu articol hotarat

    /*! This is put above each page as a link to all related pages. */
    virtual QCString trRelatedPages()
    { return "Pagini �nrudite"; }

    /*! This is put above each page as a link to all examples. */
    virtual QCString trExamples()
    { return "Exemples"; }

    /*! This is put above each page as a link to the search engine. */
    virtual QCString trSearch()
    { return "Caut�"; }

    /*! This is an introduction to the class hierarchy. */
    virtual QCString trClassHierarchyDescription()
    { return "Aceast� list� de leg�turi este sortat� �n mare, "
             "dar nu complet, �n ordine alfabetic�:";
    }

    /*! This is an introduction to the list with all files. */
    virtual QCString trFileListDescription(bool extractAll)
    {
      QCString result="Aici este lista tuturor ";
      result+="fi�ierelor";
	  if (!extractAll) result+=" documentate";
	  result+=", cu scurte descrieri:";
      return result;
    }

    /*! This is an introduction to the annotated compound list. */
    virtual QCString trCompoundListDescription()
    { return "Aici sunt clasele, structurile, uniunile �i interfe�ele"
		", cu scurte descrieri"; 
    }

    /*! This is an introduction to the page with all class members. */
    virtual QCString trCompoundMembersDescription(bool extractAll)
    {
      QCString result="Aici este lista tuturor ";
      result+="membrilor ";
	  if (!extractAll) result+="documenta�i ";
	  result+="din toate clasele, cu leg�turi c�tre ";
		  
      if (extractAll) 
        result+="documenta�ia clasei pentru fiecare membru �n parte:";
      else 
        result+="clasele de care apar�in:";
      return result;
    }

    /*! This is an introduction to the page with all file members. */
    virtual QCString trFileMembersDescription(bool extractAll)
    {
      QCString result="Aici este lista tuturor ";
	  result+="membrilor ";
	  if (!extractAll) result+="documenta�i ";
	  result+="din toate fi�ierele, cu leg�turi c�tre ";
      if (extractAll) 
        result+="documenta�ia fi�ierului pentru fiecare membru �n parte:";
      else 
        result+="fi�ierele de care apar�in:";
      return result;
    }

    /*! This is an introduction to the page with the list of all header files. */
    virtual QCString trHeaderFilesDescription()
    { return "Aici sunt fi�ierele Header care fac parte din API:"; }

    /*! This is an introduction to the page with the list of all examples */
    virtual QCString trExamplesDescription()
    { return "Aici este lista tuturor exemplelor:"; }

    /*! This is an introduction to the page with the list of related pages */
    virtual QCString trRelatedPagesDescription()
    { return "Aici este lista tuturor documenta�iilor �nrudite:"; }

    /*! This is an introduction to the page with the list of class/file groups */
    virtual QCString trModulesDescription()
    { return "Aici este lista tuturor modulelor:"; }

    /*! This sentences is used in the annotated class/file lists if no brief
     * description is given. 
     */
    virtual QCString trNoDescriptionAvailable()
    { return "Nici o descriere disponibil�"; }
    
    // index titles (the project name is prepended for these) 


    /*! This is used in HTML as the title of index.html. */
    virtual QCString trDocumentation()
    { return "Documenta�ie"; }

    /*! This is used in LaTeX as the title of the chapter with the 
     * index of all groups.
     */
    virtual QCString trModuleIndex()
    { return "Indexul Modulelor"; }

    /*! This is used in LaTeX as the title of the chapter with the 
     * class hierarchy.
     */
    virtual QCString trHierarchicalIndex()
    { return "Index Ierarhic"; }

    /*! This is used in LaTeX as the title of the chapter with the 
     * annotated compound index.
     */
    virtual QCString trCompoundIndex()
    { return "Indexul Componen�ilor"; }

    /*! This is used in LaTeX as the title of the chapter with the
     * list of all files.
     */
    virtual QCString trFileIndex() 
    { return "Indexul Fi�ierelor"; }

    /*! This is used in LaTeX as the title of the chapter containing
     *  the documentation of all groups.
     */
    virtual QCString trModuleDocumentation()
    { return "Documenta�ia Modulelor"; }

    /*! This is used in LaTeX as the title of the chapter containing
     *  the documentation of all classes, structs and unions.
     */
    virtual QCString trClassDocumentation()
    { return "Documenta�ia Claselor"; }

    /*! This is used in LaTeX as the title of the chapter containing
     *  the documentation of all files.
     */
    virtual QCString trFileDocumentation()
    { return "Documenta�ia Fi�ierelor"; }

    /*! This is used in LaTeX as the title of the chapter containing
     *  the documentation of all examples.
     */
    virtual QCString trExampleDocumentation()
    { return "Documenta�ia Exemplelor"; }

    /*! This is used in LaTeX as the title of the chapter containing
     *  the documentation of all related pages.
     */
    virtual QCString trPageDocumentation()
    { return "Documenta�ii �nrudite"; }

    /*! This is used in LaTeX as the title of the document */
    virtual QCString trReferenceManual()
    { return "Manual de utilizare"; }
    
    /*! This is used in the documentation of a file as a header before the 
     *  list of defines
     */
    virtual QCString trDefines()
    { return "Defini�ii"; }

    /*! This is used in the documentation of a file as a header before the 
     *  list of function prototypes
     */
    virtual QCString trFuncProtos()
    { return "Prototipuri de func�ii"; }

    /*! This is used in the documentation of a file as a header before the 
     *  list of typedefs
     */
    virtual QCString trTypedefs()
    { return "Declara�ii Typedef"; }

    /*! This is used in the documentation of a file as a header before the 
     *  list of enumerations
     */
    virtual QCString trEnumerations()
    { return "Enumera�ii"; }

    /*! This is used in the documentation of a file as a header before the 
     *  list of (global) functions
     */
    virtual QCString trFunctions()
    { return "Func�ii"; }

    /*! This is used in the documentation of a file as a header before the 
     *  list of (global) variables
     */
    virtual QCString trVariables()
    { return "Variabile"; }

    /*! This is used in the documentation of a file as a header before the 
     *  list of (global) variables
     */
    virtual QCString trEnumerationValues()
    { return "Valori enum"; }
    
    /*! This is used in man pages as the author section. */
    virtual QCString trAuthor()
    { return "Autor"; }

    /*! This is used in the documentation of a file before the list of
     *  documentation blocks for defines
     */
    virtual QCString trDefineDocumentation()
    { return "Documenta�ia defini�iilor"; }

    /*! This is used in the documentation of a file/namespace before the list 
     *  of documentation blocks for function prototypes
     */
    virtual QCString trFunctionPrototypeDocumentation()
    { return "Documenta�ia prototipurilor de func�ii"; }

    /*! This is used in the documentation of a file/namespace before the list 
     *  of documentation blocks for typedefs
     */
    virtual QCString trTypedefDocumentation()
    { return "Documenta�ia defini�iilor Typedef"; }

    /*! This is used in the documentation of a file/namespace before the list 
     *  of documentation blocks for enumeration types
     */
    virtual QCString trEnumerationTypeDocumentation()
    { return "Documenta�ia tipurilor enum"; }

    /*! This is used in the documentation of a file/namespace before the list 
     *  of documentation blocks for enumeration values
     */
    virtual QCString trEnumerationValueDocumentation()
    { return "Documenta�ia valorilor enum"; }

    /*! This is used in the documentation of a file/namespace before the list 
     *  of documentation blocks for functions
     */
    virtual QCString trFunctionDocumentation()
    { return "Documenta�ia func�iilor"; }

    /*! This is used in the documentation of a file/namespace before the list 
     *  of documentation blocks for variables
     */
    virtual QCString trVariableDocumentation()
    { return "Documenta�ia variabilelor"; }

    /*! This is used in the documentation of a file/namespace/group before 
     *  the list of links to documented compounds
     */
    virtual QCString trCompounds()
    { return "Membri"; }

    /*! This is used in the documentation of a group before the list of 
     *  links to documented files
     */
    virtual QCString trFiles()
    { return "Fi�iere"; }

    /*! This is used in the standard footer of each page and indicates when 
     *  the page was generated 
     */
    virtual QCString trGeneratedAt(const char *date,const char *projName)
    { 
      QCString result=(QCString)"Generat la "+date;
      if (projName) result+=(QCString)" pentru "+projName;
      result+=(QCString)" de c�tre";
      return result;
    }
    /*! This is part of the sentence used in the standard footer of each page.
     */
    virtual QCString trWrittenBy()
    {
      return "scris de";
    }

    /*! this text is put before a class diagram */
    virtual QCString trClassDiagram(const char *clName)
    {
      return (QCString)"Diagrama de rela�ii pentru "+clName;
    }
    
    /*! this text is generated when the \internal command is used. */
    virtual QCString trForInternalUseOnly()
    { return "Doar pentru uz intern."; }

    /*! this text is generated when the \reimp command is used. */
    virtual QCString trReimplementedForInternalReasons()
    { return "Reimplementat din motive interne; API-ul nu este afectat."; }

    /*! this text is generated when the \warning command is used. */
    virtual QCString trWarning()
    { return "Aten�ie"; }

    /*! this text is generated when the \bug command is used. */
    virtual QCString trBugsAndLimitations()
    { return "Buguri �i limit�ri"; }

    /*! this text is generated when the \version command is used. */
    virtual QCString trVersion()
    { return "Versiunea"; }

    /*! this text is generated when the \date command is used. */
    virtual QCString trDate()
    { return "Data"; }

    /*! this text is generated when the \author command is used. */
    virtual QCString trAuthors()
    { return "Autorul/Autorii"; }

    /*! this text is generated when the \return command is used. */
    virtual QCString trReturns()
    { return "�ntoarce"; }

    /*! this text is generated when the \sa command is used. */
    virtual QCString trSeeAlso()
    { return "Vezi �i"; }

    /*! this text is generated when the \param command is used. */
    virtual QCString trParameters()
    { return "Parametri"; }

    /*! this text is generated when the \exception command is used. */
    virtual QCString trExceptions()
    { return "Excep�ii"; }
    
    /*! this text is used in the title page of a LaTeX document. */
    virtual QCString trGeneratedBy()
    { return "Generat de"; }

    // new since 0.49-990307
    
    /*! used as the title of page containing all the index of all namespaces. */
    virtual QCString trNamespaceList()
    { return "Lista Namespace"; }

    /*! used as an introduction to the namespace list */
    virtual QCString trNamespaceListDescription(bool extractAll)
    {
      QCString result="Aici este lista tuturor ";
      result+="namespace-urilor ";
	  if (!extractAll) result+="documentate ";
	  result+=", cu scurte descrieri:";
      return result;
    }

    /*! used in the class documentation as a header before the list of all
     *  friends of a class
     */
    virtual QCString trFriends()
    { return "Prieteni"; }
    
//////////////////////////////////////////////////////////////////////////
// new since 0.49-990405
//////////////////////////////////////////////////////////////////////////
    
    /*! used in the class documentation as a header before the list of all
     * related classes 
     */
    virtual QCString trRelatedFunctionDocumentation()
    { return "Documenta�ia func�iilor prietene sau �nrudite"; }
    
//////////////////////////////////////////////////////////////////////////
// new since 0.49-990425
//////////////////////////////////////////////////////////////////////////

    /*! used as the title of the HTML page of a class/struct/union */
    virtual QCString trCompoundReference(const char *clName,
                                    ClassDef::CompoundType compType,
                                    bool isTemplate)
    {
	  QCString result="Referin�� la ";
      switch(compType)
      {
        case ClassDef::Class:      result+="clasa"; break;
        case ClassDef::Struct:     result+="structura"; break;
        case ClassDef::Union:      result+="uniunea"; break;
        case ClassDef::Interface:  result+="interfa�a"; break;
        case ClassDef::Exception:  result+="excep�ia"; break;
      }
	  if (isTemplate) result+=" (Template) ";
	  result+=(QCString)clName;
      
      return result;
    }

    /*! used as the title of the HTML page of a file */
    virtual QCString trFileReference(const char *fileName)
    {
      QCString result="Referin�� la fi�ierul";
      result+=fileName;
      return result;
    }

    /*! used as the title of the HTML page of a namespace */
    virtual QCString trNamespaceReference(const char *namespaceName)
    {
      QCString result="Referin�� la Namespace-ul ";
      result+=namespaceName;
      return result;
    }
    
    /*! \mgroup Class sections
     *  these are for the member sections of a class, struct or union 
     */
    virtual QCString trPublicMembers()
    { return "Metode Publice"; }
    virtual QCString trPublicSlots()
    { return "Sloturi Publice"; }
    virtual QCString trSignals()
    { return "Semnale"; }
    virtual QCString trStaticPublicMembers()
    { return "Metode Statice Publice"; }
    virtual QCString trProtectedMembers()
    { return "Metode Protejate"; }
    virtual QCString trProtectedSlots()
    { return "Sloturi Protejate"; }
    virtual QCString trStaticProtectedMembers()
    { return "Metode Statice Protejate"; }
    virtual QCString trPrivateMembers()
    { return "Metode Private"; }
    virtual QCString trPrivateSlots()
    { return "Sloturi Private"; }
    virtual QCString trStaticPrivateMembers()
    { return "Metode Statice Private"; }
    /*! \endmgroup */ 
    
    /*! this function is used to produce a comma-separated list of items.
     *  use generateMarker(i) to indicate where item i should be put.
     */
    virtual QCString trWriteList(int numEntries)
    {
      QCString result;
      int i;
      // the inherits list contain `numEntries' classes
      for (i=0;i<numEntries;i++) 
      {
        // use generateMarker to generate placeholders for the class links!
        result+=generateMarker(i); // generate marker for entry i in the list 
                                   // (order is left to right)
        
        if (i!=numEntries-1)  // not the last entry, so we need a separator
        {
          if (i<numEntries-2) // not the fore last entry 
            result+=", ";
          else                // the fore last entry
            result+=" �i ";
        }
      }
      return result; 
    }
    
    /*! used in class documentation to produce a list of base classes,
     *  if class diagrams are disabled.
     */
    virtual QCString trInheritsList(int numEntries)
    {
      return "Mo�tene�te "+trWriteList(numEntries)+".";
    }

    /*! used in class documentation to produce a list of super classes,
     *  if class diagrams are disabled.
     */
    virtual QCString trInheritedByList(int numEntries)
    {
      return "Mo�tenit de "+trWriteList(numEntries)+".";
    }

    /*! used in member documentation blocks to produce a list of 
     *  members that are hidden by this one.
     */
    virtual QCString trReimplementedFromList(int numEntries)
    {
      return "Reimplementat din "+trWriteList(numEntries)+".";
    }

    /*! used in member documentation blocks to produce a list of
     *  all member that overwrite the implementation of this member.
     */
    virtual QCString trReimplementedInList(int numEntries)
    {
      return "Reimplementat �n "+trWriteList(numEntries)+".";
    }

    /*! This is put above each page as a link to all members of namespaces. */
    virtual QCString trNamespaceMembers()
    { return "Membrii Namespace-ului"; }

    /*! This is an introduction to the page with all namespace members */
    virtual QCString trNamespaceMemberDescription(bool extractAll)
    { 
      QCString result="Aici este lista tuturor membrilor ";
      if (!extractAll) result+="documenta�i ";
	  result+="din toate namespace-urile, cu leg�turi c�tre ";
		  
      if (extractAll) 
        result+="documenta�ia namespace-ului pentru fiecare membru �n parte:";
      else 
        result+="namespace-urile de care apar�in:";
      return result;
    }
    /*! This is used in LaTeX as the title of the chapter with the 
     *  index of all namespaces.
     */
    virtual QCString trNamespaceIndex()
    { return "Indexul Namespace-ului"; }

    /*! This is used in LaTeX as the title of the chapter containing
     *  the documentation of all namespaces.
     */
    virtual QCString trNamespaceDocumentation()
    { return "Documenta�ia Namespace-ului"; }

//////////////////////////////////////////////////////////////////////////
// new since 0.49-990522
//////////////////////////////////////////////////////////////////////////

    /*! This is used in the documentation before the list of all
     *  namespaces in a file.
     */
    virtual QCString trNamespaces()
    { return "Namespace-uri"; }

//////////////////////////////////////////////////////////////////////////
// new since 0.49-990728
//////////////////////////////////////////////////////////////////////////

    /*! This is put at the bottom of a class documentation page and is
     *  followed by a list of files that were used to generate the page.
     */
    virtual QCString trGeneratedFromFiles(ClassDef::CompoundType compType,
        bool single)
    { // here s is one of " Class", " Struct" or " Union"
      // single is true implies a single file
      QCString result=(QCString)"Documenta�ia pentru aceast� ";
      switch(compType)
      {
        case ClassDef::Class:      result+="clas�"; break;
        case ClassDef::Struct:     result+="structur�"; break;
        case ClassDef::Union:      result+="uniune"; break;
        case ClassDef::Interface:  result+="interfa��"; break;
        case ClassDef::Exception:  result+="excep�ie"; break;
      }
      result+=" a fost generat� din fi�ier";
      if (single) result+="ul:"; else result+="ele:";
      return result;
    }

    /*! This is in the (quick) index as a link to the alphabetical compound
     * list.
     */
    virtual QCString trAlphabeticalList()
    { return "List� Alfabetic�"; }

//////////////////////////////////////////////////////////////////////////
// new since 0.49-990901
//////////////////////////////////////////////////////////////////////////

    /*! This is used as the heading text for the retval command. */
    virtual QCString trReturnValues()
    { return "Valori returnate"; }

    /*! This is in the (quick) index as a link to the main page (index.html)
     */
    virtual QCString trMainPage()
    { return "Pagina principal�"; }

    /*! This is used in references to page that are put in the LaTeX 
     *  documentation. It should be an abbreviation of the word page.
     */
    virtual QCString trPageAbbreviation()
    { return "pg."; }

//////////////////////////////////////////////////////////////////////////
// new since 0.49-991003
//////////////////////////////////////////////////////////////////////////

    virtual QCString trSources()
    {
      return "Surse";
    }
    virtual QCString trDefinedAtLineInSourceFile()
    {
      return "Defini�ia �n linia @0 a fi�ierului @1.";
    }
    virtual QCString trDefinedInSourceFile()
    {
      return "Defini�ia �n fi�ierul @0.";
    }

//////////////////////////////////////////////////////////////////////////
// new since 0.49-991205
//////////////////////////////////////////////////////////////////////////

    virtual QCString trDeprecated()
    {
      return "�nvechit�(Deprecated)";
    }

//////////////////////////////////////////////////////////////////////////
// new since 1.0.0
//////////////////////////////////////////////////////////////////////////

    /*! this text is put before a collaboration diagram */
    virtual QCString trCollaborationDiagram(const char *clName)
    {
      return (QCString)"Diagrama de rela�ii pentru "+clName+":";
    }
    /*! this text is put before an include dependency graph */
    virtual QCString trInclDepGraph(const char *fName)
    {
      return (QCString)"Graful dependen�elor prin incluziune pentru "+fName+":";
    }
    /*! header that is put before the list of constructor/destructors. */
    virtual QCString trConstructorDocumentation()
    {
      return "Documenta�ia pentru Constructori �i Destructori"; 
    }
    /*! Used in the file documentation to point to the corresponding sources. */
    virtual QCString trGotoSourceCode()
    {
      return "Vezi sursele.";
    }
    /*! Used in the file sources to point to the corresponding documentation. */
    virtual QCString trGotoDocumentation()
    {
      return "Vezi documenta�ia.";
    }
    /*! Text for the \pre command */
    virtual QCString trPrecondition()
    {
      return "Precondi�ie";
    }
    /*! Text for the \post command */
    virtual QCString trPostcondition()
    {
      return "Postcondi�ie";
    }
    /*! Text for the \invariant command */
    virtual QCString trInvariant()
    {
      return "Invariant";
    }
    /*! Text shown before a multi-line variable/enum initialization */
    virtual QCString trInitialValue()
    {
      return "Ini�ializare:";
    }
    /*! Text used the source code in the file index */
    virtual QCString trCode()
    {
      return "cod";
    }
    virtual QCString trGraphicalHierarchy()
    {
      return "Ierarhia claselor �n mod grafic";
    }
    virtual QCString trGotoGraphicalHierarchy()
    {
      return "Vezi ierarhia claselor �n mod grafic";
    }
    virtual QCString trGotoTextualHierarchy()
    {
      return "Vezi ierarhia claselor �n mod text";
    }
    virtual QCString trPageIndex()
    {
      return "Indexul Paginilor";
    }

//////////////////////////////////////////////////////////////////////////
// new since 1.1.0
//////////////////////////////////////////////////////////////////////////
    
    virtual QCString trNote()
    {
      return "Not�";
    }
    virtual QCString trPublicTypes()
    {
      return "Tipuri publice";
    }
    virtual QCString trPublicAttribs()
    {
      return "Atribute Publice";
    }
    virtual QCString trStaticPublicAttribs()
    {
      return "Atribute Statice Publice";
    }
    virtual QCString trProtectedTypes()
    {
      return "Tipuri Protejate";
    }
    virtual QCString trProtectedAttribs()
    {
      return "Atribute Protejate";
    }
    virtual QCString trStaticProtectedAttribs()
    {
      return "Atribute Statice Protejate";
    }
    virtual QCString trPrivateTypes()
    {
      return "Tipuri Private";
    }
    virtual QCString trPrivateAttribs()
    {
      return "Atribute Private";
    }
    virtual QCString trStaticPrivateAttribs()
    {
      return "Atribute Statice Private";
    }

//////////////////////////////////////////////////////////////////////////
// new since 1.1.3
//////////////////////////////////////////////////////////////////////////

    /*! Used as a marker that is put before a todo item */
    virtual QCString trTodo()
    {
      return "De f�cut";
    }
    /*! Used as the header of the todo list */
    virtual QCString trTodoList()
    {
      return "Lista lucrurilor r�mase de f�cut";
    }

//////////////////////////////////////////////////////////////////////////
// new since 1.1.4
//////////////////////////////////////////////////////////////////////////

    virtual QCString trReferencedBy()
    {
      return "Semnalat de";
    }
    virtual QCString trRemarks()
    {
      return "Observa�ii";
    }
    virtual QCString trAttention()
    {
      return "Aten�ie";
    }
    virtual QCString trInclByDepGraph()
    {
      return "Acest graf arat� care fi�iere includ, "
		  "direct sau indirect, acest fi�ier:";
    }
    virtual QCString trSince()
    {
      return "Din";
    }
    
//////////////////////////////////////////////////////////////////////////
// new since 1.1.5
//////////////////////////////////////////////////////////////////////////

    /*! title of the graph legend page */
    virtual QCString trLegendTitle()
    {
      return "Legenda grafului";
    }
    /*! page explaining how the dot graph's should be interpreted */
    virtual QCString trLegendDocs()
    {
      return 
        "Aceast� pagin� arat� modul �n care trebuie s� interpreta�i "
		"grafurile generate de doxygen.<p>\n"
        "Considera�i urm�torul exemplu:\n"
        "\\code\n"
        "/*! Clas� invizibil�, t�iat� din cauza dep�irii spa�iului */\n"
        "class Invisible { };\n\n"
        "/*! Alt� clas� t�iat�, rela�ia de mo�tenire este ascuns� */\n"
        "class Truncated : public Invisible { };\n\n"
        "/* Clas� necomentat� �n stil doxygen */\n"
        "class Undocumented { };\n\n"
        "/*! Clas� care este mo�tenit� �n mod public */\n"
        "class PublicBase : public Truncated { };\n\n"
        "/*! Clas� care este mo�tenit� �n mod protejat */\n"
        "class ProtectedBase { };\n\n"
        "/*! Clas� care este mo�tenit� �n mod privat */\n"
        "class PrivateBase { };\n\n"
        "/*! Clas� care este folosit� de clasa Inherited */\n"
        "class Used { };\n\n"
        "/*! Superclas� care mo�tene�te un num�r de alte clase */\n"
        "class Inherited : public PublicBase,\n"
        "                  protected ProtectedBase,\n"
        "                  private PrivateBase,\n"
        "                  public Undocumented\n"
        "{\n"
        "  private:\n"
        "    Used *m_usedClass;\n"
        "};\n"
        "\\endcode\n"
        "Dac� tagul \\c MAX_DOT_GRAPH_HEIGHT din fi�ierul de configura�ie "
        "Este setat la 200 acesta este graful rezultat:"
        "<p><center><img src=\"graph_legend.gif\"></center>\n"
        "<p>\n"
        "C�su�ele din partea de sus au urm�toarea semnifica�ie:\n"
        "<ul>\n"
        "<li>O c�su�� neagr� reprezint� structura sau clasa pentru care "
        "graful este generat.\n"
        "<li>O c�su�� cu marginea neagr� reprezint� o structur� sau o clas� documentate.\n"
        "<li>O c�su�� cu marginea gri reprezint� o structur� sau o clas� nedocumentate.\n"
        "<li>O c�su�� cu marginea ro�ie reprezint� o structur� sau o clas� documentate, pentru\n"
        "care nu toate rela�iile de mo�tenire/incluziune sunt ar�tate. Un graf este "
        "t�iat dac� nu �ncape �n marginile specificate."
        "</ul>\n"
        "S�ge�ile au urm�toarea semnifica�ie:\n"
        "<ul>\n"
        "<li>O s�geat� de un albastru �nchis este folosit� c�nd avem o rela�ie de "
        "mo�tenire public� �ntre dou� clase.\n"
        "<li>O s�geat� de un verde �nchis este folosit� c�nd avem o mo�tenire protejat�.\n"
        "<li>O s�geat� de un ro�u �nchis este folosit� c�nd avem o mo�tenire privat�.\n"
        "<li>O s�geat� violet� punctat� este folosit� pentru o clas� con�inut� sau folosit� "
        "de o alt� clas�. S�geata este marcat� cu variabila(e) "
        "prin care este accesibil� clasa sau structura spre care este �ndreptat�. \n"
        "</ul>\n";
    }
    /*! text for the link to the legend page */
    virtual QCString trLegend()
    {
      return "legenda";
    }
    
//////////////////////////////////////////////////////////////////////////
// new since 1.2.0
//////////////////////////////////////////////////////////////////////////
    
    /*! Used as a marker that is put before a test item */
    virtual QCString trTest()
    {
      return "Test";
    }
    /*! Used as the header of the test list */
    virtual QCString trTestList()
    {
      return "List� de teste";
    }

};

#endif