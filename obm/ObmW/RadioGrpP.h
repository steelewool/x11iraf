/* Generated by wbuild from "RadioGrp.w"
** (generator version $Revision: 2.0 $ of $Date: 93/07/06 16:08:04 $)
*/
#ifndef _XfwfRadioGroupP_H_
#define _XfwfRadioGroupP_H_
#include "GroupP.h"
#include "RadioGrp.h"
typedef struct {
/* methods */
/* class variables */
int dummy;
} XfwfRadioGroupClassPart;
typedef struct _XfwfRadioGroupClassRec {
CoreClassPart core_class;
CompositeClassPart composite_class;
XfwfCommonClassPart xfwfCommon_class;
XfwfFrameClassPart xfwfFrame_class;
XfwfBoardClassPart xfwfBoard_class;
XfwfRowColClassPart xfwfRowCol_class;
XfwfGroupClassPart xfwfGroup_class;
XfwfRadioGroupClassPart xfwfRadioGroup_class;
} XfwfRadioGroupClassRec;

typedef struct {
/* resources */
StringArray  labels;
/* private state */
} XfwfRadioGroupPart;

typedef struct _XfwfRadioGroupRec {
CorePart core;
CompositePart composite;
XfwfCommonPart xfwfCommon;
XfwfFramePart xfwfFrame;
XfwfBoardPart xfwfBoard;
XfwfRowColPart xfwfRowCol;
XfwfGroupPart xfwfGroup;
XfwfRadioGroupPart xfwfRadioGroup;
} XfwfRadioGroupRec;

externalref XfwfRadioGroupClassRec xfwfRadioGroupClassRec;

#endif /* _XfwfRadioGroupP_H_ */
