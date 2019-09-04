package com.phuket.tour.studio;

public class Mp3Encoder {

	static {
		System.loadLibrary("encoder");
	}

	public static native void encode();
}
