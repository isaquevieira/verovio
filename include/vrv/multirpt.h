/////////////////////////////////////////////////////////////////////////////
// Name:        multirpt.h
// Author:      Klaus Rettinghaus
// Created:     2018
// Copyright (c) Authors and others. All rights reserved.
/////////////////////////////////////////////////////////////////////////////

#ifndef __VRV_MULTIRPT_H__
#define __VRV_MULTIRPT_H__

#include "atts_cmn.h"
#include "atts_shared.h"
#include "beam.h"
#include "layerelement.h"

namespace vrv {

//----------------------------------------------------------------------------
// MultiRpt (multiple repeat)
//----------------------------------------------------------------------------

/**
 * This class models the MEI <multiRpt> element.
 */
class MultiRpt : public LayerElement, public AttNumbered {
public:
    /**
     * @name Constructors, destructors, reset and class name methods
     * Reset method resets all attribute classes
     */
    ///@{
    MultiRpt();
    virtual ~MultiRpt();
    Object *Clone() const override { return new MultiRpt(*this); }
    void Reset() override;
    std::string GetClassName() const override { return "MultiRpt"; }
    ///@}

private:
    //
public:
    //
private:
};

} // namespace vrv

#endif
