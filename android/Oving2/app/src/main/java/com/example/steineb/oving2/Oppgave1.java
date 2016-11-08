package com.example.steineb.oving2;

import android.content.Context;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.util.Log;
import android.widget.Toast;

import java.util.Random;

public class Oppgave1 extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        Random rand = new Random();
        Toast.makeText(getApplicationContext(), "Det tilfeldige tallet: "+rand.nextInt(100), Toast.LENGTH_SHORT).show();
    }
}
