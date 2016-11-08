package com.example.steineb.oving1;

import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.util.Log;
import android.view.Menu;
import android.view.MenuItem;

public class MainActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
    }

    public boolean onCreateOptionsMenu(Menu meny){
        super.onCreateOptionsMenu(meny);
        meny.add("Stein-Erik");
        meny.add("Bjørnnes");

        Log.i("onCreateOptionsMenu()", "Meny laget");

        return true;
    }

    public boolean onOptionsItemSelected(MenuItem item){
        if(item.getTitle().equals("Stein-Erik")){
            Log.i("onOptionsItemSelected()", "Fornavn");
        }else if(item.getTitle().equals("Bjørnnes")){
            Log.i("onOptionsItemSelected()", "Etternavn");
        }
        return true;
    }
}
