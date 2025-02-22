/////////////////////////////////////////////////////////////////////////////
// Authors:     Laurent Pugin and Rodolfo Zitellini
// Created:     2014
// Copyright (c) Authors and others. All rights reserved.
//
// Code generated using a modified version of libmei
// by Andrew Hankinson, Alastair Porter, and Others
/////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////////
// NOTE: this file was generated with the Verovio libmei version and
// should not be edited because changes will be lost.
/////////////////////////////////////////////////////////////////////////////

#ifndef __VRV_ATTS_GESTURAL_H__
#define __VRV_ATTS_GESTURAL_H__

#include "att.h"
#include "attdef.h"
#include "pugixml.hpp"

//----------------------------------------------------------------------------

#include <string>

namespace vrv {

//----------------------------------------------------------------------------
// AttAccidentalGes
//----------------------------------------------------------------------------

class AttAccidentalGes : public Att {
public:
    AttAccidentalGes();
    virtual ~AttAccidentalGes();

    /** Reset the default values for the attribute class **/
    void ResetAccidentalGes();

    /** Read the values for the attribute class **/
    bool ReadAccidentalGes(pugi::xml_node element);

    /** Write the values for the attribute class **/
    bool WriteAccidentalGes(pugi::xml_node element);

    /**
     * @name Setters, getters and presence checker for class members.
     * The checker returns true if the attribute class is set (e.g., not equal
     * to the default value)
     **/
    ///@{
    void SetAccidGes(data_ACCIDENTAL_GESTURAL accidGes_) { m_accidGes = accidGes_; }
    data_ACCIDENTAL_GESTURAL GetAccidGes() const { return m_accidGes; }
    bool HasAccidGes() const;
    ///@}

private:
    /** Records the performed pitch inflection. **/
    data_ACCIDENTAL_GESTURAL m_accidGes;

    /* include <attaccid.ges> */
};

//----------------------------------------------------------------------------
// AttArticulationGes
//----------------------------------------------------------------------------

class AttArticulationGes : public Att {
public:
    AttArticulationGes();
    virtual ~AttArticulationGes();

    /** Reset the default values for the attribute class **/
    void ResetArticulationGes();

    /** Read the values for the attribute class **/
    bool ReadArticulationGes(pugi::xml_node element);

    /** Write the values for the attribute class **/
    bool WriteArticulationGes(pugi::xml_node element);

    /**
     * @name Setters, getters and presence checker for class members.
     * The checker returns true if the attribute class is set (e.g., not equal
     * to the default value)
     **/
    ///@{
    void SetArticGes(data_ARTICULATION_List articGes_) { m_articGes = articGes_; }
    data_ARTICULATION_List GetArticGes() const { return m_articGes; }
    bool HasArticGes() const;
    ///@}

private:
    /** Records performed articulation that differs from the written value. **/
    data_ARTICULATION_List m_articGes;

    /* include <attartic.ges> */
};

//----------------------------------------------------------------------------
// AttBendGes
//----------------------------------------------------------------------------

class AttBendGes : public Att {
public:
    AttBendGes();
    virtual ~AttBendGes();

    /** Reset the default values for the attribute class **/
    void ResetBendGes();

    /** Read the values for the attribute class **/
    bool ReadBendGes(pugi::xml_node element);

    /** Write the values for the attribute class **/
    bool WriteBendGes(pugi::xml_node element);

    /**
     * @name Setters, getters and presence checker for class members.
     * The checker returns true if the attribute class is set (e.g., not equal
     * to the default value)
     **/
    ///@{
    void SetAmount(double amount_) { m_amount = amount_; }
    double GetAmount() const { return m_amount; }
    bool HasAmount() const;
    ///@}

private:
    /**
     * Records the amount of detuning.
     * The decimal values should be rendered as a fraction (or an integer plus a
     * fraction) along with the bend symbol.
     **/
    double m_amount;

    /* include <attamount> */
};

//----------------------------------------------------------------------------
// AttDurationGes
//----------------------------------------------------------------------------

class AttDurationGes : public Att {
public:
    AttDurationGes();
    virtual ~AttDurationGes();

    /** Reset the default values for the attribute class **/
    void ResetDurationGes();

    /** Read the values for the attribute class **/
    bool ReadDurationGes(pugi::xml_node element);

    /** Write the values for the attribute class **/
    bool WriteDurationGes(pugi::xml_node element);

    /**
     * @name Setters, getters and presence checker for class members.
     * The checker returns true if the attribute class is set (e.g., not equal
     * to the default value)
     **/
    ///@{
    void SetDurGes(data_DURATION durGes_) { m_durGes = durGes_; }
    data_DURATION GetDurGes() const { return m_durGes; }
    bool HasDurGes() const;
    //
    void SetDotsGes(int dotsGes_) { m_dotsGes = dotsGes_; }
    int GetDotsGes() const { return m_dotsGes; }
    bool HasDotsGes() const;
    //
    void SetDurMetrical(double durMetrical_) { m_durMetrical = durMetrical_; }
    double GetDurMetrical() const { return m_durMetrical; }
    bool HasDurMetrical() const;
    //
    void SetDurPpq(int durPpq_) { m_durPpq = durPpq_; }
    int GetDurPpq() const { return m_durPpq; }
    bool HasDurPpq() const;
    //
    void SetDurReal(double durReal_) { m_durReal = durReal_; }
    double GetDurReal() const { return m_durReal; }
    bool HasDurReal() const;
    //
    void SetDurRecip(std::string durRecip_) { m_durRecip = durRecip_; }
    std::string GetDurRecip() const { return m_durRecip; }
    bool HasDurRecip() const;
    ///@}

private:
    /** Records performed duration information that differs from the written duration. **/
    data_DURATION m_durGes;
    /**
     * Number of dots required for a gestural duration when different from that of the
     * written duration.
     **/
    int m_dotsGes;
    /** Duration as a count of units provided in the time signature denominator. **/
    double m_durMetrical;
    /**
     * Duration recorded as pulses-per-quarter note, e.g., MIDI clicks or MusicXML
     * divisions.
     **/
    int m_durPpq;
    /** Duration in seconds, e.g., 1.732. **/
    double m_durReal;
    /** Duration as an optionally dotted Humdrum **recip value. **/
    std::string m_durRecip;

    /* include <attdur.recip> */
};

//----------------------------------------------------------------------------
// AttMdivGes
//----------------------------------------------------------------------------

class AttMdivGes : public Att {
public:
    AttMdivGes();
    virtual ~AttMdivGes();

    /** Reset the default values for the attribute class **/
    void ResetMdivGes();

    /** Read the values for the attribute class **/
    bool ReadMdivGes(pugi::xml_node element);

    /** Write the values for the attribute class **/
    bool WriteMdivGes(pugi::xml_node element);

    /**
     * @name Setters, getters and presence checker for class members.
     * The checker returns true if the attribute class is set (e.g., not equal
     * to the default value)
     **/
    ///@{
    void SetAttacca(data_BOOLEAN attacca_) { m_attacca = attacca_; }
    data_BOOLEAN GetAttacca() const { return m_attacca; }
    bool HasAttacca() const;
    ///@}

private:
    /**
     * Indicates that the performance of the next musical division should begin
     * immediately following this one.
     **/
    data_BOOLEAN m_attacca;

    /* include <attattacca> */
};

//----------------------------------------------------------------------------
// AttNcGes
//----------------------------------------------------------------------------

class AttNcGes : public Att {
public:
    AttNcGes();
    virtual ~AttNcGes();

    /** Reset the default values for the attribute class **/
    void ResetNcGes();

    /** Read the values for the attribute class **/
    bool ReadNcGes(pugi::xml_node element);

    /** Write the values for the attribute class **/
    bool WriteNcGes(pugi::xml_node element);

    /**
     * @name Setters, getters and presence checker for class members.
     * The checker returns true if the attribute class is set (e.g., not equal
     * to the default value)
     **/
    ///@{
    void SetOctGes(data_OCTAVE octGes_) { m_octGes = octGes_; }
    data_OCTAVE GetOctGes() const { return m_octGes; }
    bool HasOctGes() const;
    //
    void SetPnameGes(data_PITCHNAME pnameGes_) { m_pnameGes = pnameGes_; }
    data_PITCHNAME GetPnameGes() const { return m_pnameGes; }
    bool HasPnameGes() const;
    //
    void SetPnum(int pnum_) { m_pnum = pnum_; }
    int GetPnum() const { return m_pnum; }
    bool HasPnum() const;
    ///@}

private:
    /** Records performed octave information that differs from the written value. **/
    data_OCTAVE m_octGes;
    /** Contains a performed pitch name that differs from the written value. **/
    data_PITCHNAME m_pnameGes;
    /** Holds a pitch-to-number mapping, a base-40 or MIDI note number, for example. **/
    int m_pnum;

    /* include <attpnum> */
};

//----------------------------------------------------------------------------
// AttNoteGes
//----------------------------------------------------------------------------

class AttNoteGes : public Att {
public:
    AttNoteGes();
    virtual ~AttNoteGes();

    /** Reset the default values for the attribute class **/
    void ResetNoteGes();

    /** Read the values for the attribute class **/
    bool ReadNoteGes(pugi::xml_node element);

    /** Write the values for the attribute class **/
    bool WriteNoteGes(pugi::xml_node element);

    /**
     * @name Setters, getters and presence checker for class members.
     * The checker returns true if the attribute class is set (e.g., not equal
     * to the default value)
     **/
    ///@{
    void SetExtremis(noteGes_EXTREMIS extremis_) { m_extremis = extremis_; }
    noteGes_EXTREMIS GetExtremis() const { return m_extremis; }
    bool HasExtremis() const;
    //
    void SetOctGes(data_OCTAVE octGes_) { m_octGes = octGes_; }
    data_OCTAVE GetOctGes() const { return m_octGes; }
    bool HasOctGes() const;
    //
    void SetPnameGes(data_PITCHNAME pnameGes_) { m_pnameGes = pnameGes_; }
    data_PITCHNAME GetPnameGes() const { return m_pnameGes; }
    bool HasPnameGes() const;
    //
    void SetPnum(int pnum_) { m_pnum = pnum_; }
    int GetPnum() const { return m_pnum; }
    bool HasPnum() const;
    ///@}

private:
    /** Indicates an extreme, indefinite performed pitch. **/
    noteGes_EXTREMIS m_extremis;
    /** Records performed octave information that differs from the written value. **/
    data_OCTAVE m_octGes;
    /** Contains a performed pitch name that differs from the written value. **/
    data_PITCHNAME m_pnameGes;
    /** Holds a pitch-to-number mapping, a base-40 or MIDI note number, for example. **/
    int m_pnum;

    /* include <attpnum> */
};

//----------------------------------------------------------------------------
// AttOrnamentAccidGes
//----------------------------------------------------------------------------

class AttOrnamentAccidGes : public Att {
public:
    AttOrnamentAccidGes();
    virtual ~AttOrnamentAccidGes();

    /** Reset the default values for the attribute class **/
    void ResetOrnamentAccidGes();

    /** Read the values for the attribute class **/
    bool ReadOrnamentAccidGes(pugi::xml_node element);

    /** Write the values for the attribute class **/
    bool WriteOrnamentAccidGes(pugi::xml_node element);

    /**
     * @name Setters, getters and presence checker for class members.
     * The checker returns true if the attribute class is set (e.g., not equal
     * to the default value)
     **/
    ///@{
    void SetAccidupperGes(data_ACCIDENTAL_GESTURAL accidupperGes_) { m_accidupperGes = accidupperGes_; }
    data_ACCIDENTAL_GESTURAL GetAccidupperGes() const { return m_accidupperGes; }
    bool HasAccidupperGes() const;
    //
    void SetAccidlowerGes(data_ACCIDENTAL_GESTURAL accidlowerGes_) { m_accidlowerGes = accidlowerGes_; }
    data_ACCIDENTAL_GESTURAL GetAccidlowerGes() const { return m_accidlowerGes; }
    bool HasAccidlowerGes() const;
    ///@}

private:
    /** Records the sounding accidental associated with an upper neighboring note. **/
    data_ACCIDENTAL_GESTURAL m_accidupperGes;
    /** Records the sounding accidental associated with a lower neighboring note. **/
    data_ACCIDENTAL_GESTURAL m_accidlowerGes;

    /* include <attaccidlower.ges> */
};

//----------------------------------------------------------------------------
// AttSectionGes
//----------------------------------------------------------------------------

class AttSectionGes : public Att {
public:
    AttSectionGes();
    virtual ~AttSectionGes();

    /** Reset the default values for the attribute class **/
    void ResetSectionGes();

    /** Read the values for the attribute class **/
    bool ReadSectionGes(pugi::xml_node element);

    /** Write the values for the attribute class **/
    bool WriteSectionGes(pugi::xml_node element);

    /**
     * @name Setters, getters and presence checker for class members.
     * The checker returns true if the attribute class is set (e.g., not equal
     * to the default value)
     **/
    ///@{
    void SetAttacca(data_BOOLEAN attacca_) { m_attacca = attacca_; }
    data_BOOLEAN GetAttacca() const { return m_attacca; }
    bool HasAttacca() const;
    ///@}

private:
    /**
     * Indicates that the performance of the next musical division should begin
     * immediately following this one.
     **/
    data_BOOLEAN m_attacca;

    /* include <attattacca> */
};

//----------------------------------------------------------------------------
// AttSoundLocation
//----------------------------------------------------------------------------

class AttSoundLocation : public Att {
public:
    AttSoundLocation();
    virtual ~AttSoundLocation();

    /** Reset the default values for the attribute class **/
    void ResetSoundLocation();

    /** Read the values for the attribute class **/
    bool ReadSoundLocation(pugi::xml_node element);

    /** Write the values for the attribute class **/
    bool WriteSoundLocation(pugi::xml_node element);

    /**
     * @name Setters, getters and presence checker for class members.
     * The checker returns true if the attribute class is set (e.g., not equal
     * to the default value)
     **/
    ///@{
    void SetAzimuth(double azimuth_) { m_azimuth = azimuth_; }
    double GetAzimuth() const { return m_azimuth; }
    bool HasAzimuth() const;
    //
    void SetElevation(double elevation_) { m_elevation = elevation_; }
    double GetElevation() const { return m_elevation; }
    bool HasElevation() const;
    ///@}

private:
    /** The lateral or left-to-right plane. **/
    double m_azimuth;
    /** The above-to-below axis. **/
    double m_elevation;

    /* include <attelevation> */
};

//----------------------------------------------------------------------------
// AttTimestampGes
//----------------------------------------------------------------------------

class AttTimestampGes : public Att {
public:
    AttTimestampGes();
    virtual ~AttTimestampGes();

    /** Reset the default values for the attribute class **/
    void ResetTimestampGes();

    /** Read the values for the attribute class **/
    bool ReadTimestampGes(pugi::xml_node element);

    /** Write the values for the attribute class **/
    bool WriteTimestampGes(pugi::xml_node element);

    /**
     * @name Setters, getters and presence checker for class members.
     * The checker returns true if the attribute class is set (e.g., not equal
     * to the default value)
     **/
    ///@{
    void SetTstampGes(double tstampGes_) { m_tstampGes = tstampGes_; }
    double GetTstampGes() const { return m_tstampGes; }
    bool HasTstampGes() const;
    //
    void SetTstampReal(std::string tstampReal_) { m_tstampReal = tstampReal_; }
    std::string GetTstampReal() const { return m_tstampReal; }
    bool HasTstampReal() const;
    ///@}

private:
    /**
     * Encodes the onset time in terms of musical time, i.e., beats[.fractional beat
     * part], as expressed in the written time signature.
     **/
    double m_tstampGes;
    /** Records the onset time in terms of ISO time. **/
    std::string m_tstampReal;

    /* include <atttstamp.real> */
};

//----------------------------------------------------------------------------
// AttTimestamp2Ges
//----------------------------------------------------------------------------

class AttTimestamp2Ges : public Att {
public:
    AttTimestamp2Ges();
    virtual ~AttTimestamp2Ges();

    /** Reset the default values for the attribute class **/
    void ResetTimestamp2Ges();

    /** Read the values for the attribute class **/
    bool ReadTimestamp2Ges(pugi::xml_node element);

    /** Write the values for the attribute class **/
    bool WriteTimestamp2Ges(pugi::xml_node element);

    /**
     * @name Setters, getters and presence checker for class members.
     * The checker returns true if the attribute class is set (e.g., not equal
     * to the default value)
     **/
    ///@{
    void SetTstamp2Ges(data_MEASUREBEAT tstamp2Ges_) { m_tstamp2Ges = tstamp2Ges_; }
    data_MEASUREBEAT GetTstamp2Ges() const { return m_tstamp2Ges; }
    bool HasTstamp2Ges() const;
    //
    void SetTstamp2Real(std::string tstamp2Real_) { m_tstamp2Real = tstamp2Real_; }
    std::string GetTstamp2Real() const { return m_tstamp2Real; }
    bool HasTstamp2Real() const;
    ///@}

private:
    /**
     * Encodes the ending point of an event, i.e., a count of measures plus a beat
     * location in the ending measure.
     **/
    data_MEASUREBEAT m_tstamp2Ges;
    /** Records the ending point of an event in terms of ISO time. **/
    std::string m_tstamp2Real;

    /* include <atttstamp2.real> */
};

} // namespace vrv

#endif // __VRV_ATTS_GESTURAL_H__
