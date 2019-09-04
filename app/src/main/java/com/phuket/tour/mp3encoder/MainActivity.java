package com.phuket.tour.mp3encoder;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;

import com.ilifesmart.mp3encoder.R;
import com.phuket.tour.studio.Mp3Encoder;

public class MainActivity extends AppCompatActivity {

	@Override
	protected void onCreate(Bundle savedInstanceState) {
		super.onCreate(savedInstanceState);
		setContentView(R.layout.activity_main);

		Mp3Encoder.encode();
	}
}
