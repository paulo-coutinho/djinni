// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from varnames.djinni

package com.dropbox.djinni.test;

import javax.annotation.CheckForNull;
import javax.annotation.Nonnull;

/**
 * Underscore is used as a separator in Djinni names, so we don't really
 * anticipate it to be used as a prefix/suffix.  Some name styles behave
 * badly when it is.  However this test case ensures we at least don't crash.
 */
public class VarnameRecord {


    /*package*/ final byte mField;

    public VarnameRecord(
            byte Field) {
        this.mField = Field;
    }

    public byte getField() {
        return mField;
    }

    @Override
    public String toString() {
        return "VarnameRecord{" +
                "mField=" + mField +
        "}";
    }

}
