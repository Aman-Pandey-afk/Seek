using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class GameUI : MonoBehaviour
{
    public GameObject GameWinUI;
    public GameObject GameLoseUI;
    public Text SecondsToWin;
    bool gameIsOver;

    void Start()
    {
        Guard.OnPlayerSpotted += ShowGameLoseUI;
        FindObjectOfType<Player>().OnReachedCheckpoint += ShowGameWinUI;
    }

    
    void Update()
    {
        if(gameIsOver)
        {
            if(Input.GetKeyDown(KeyCode.Space))
            { SceneManager.LoadScene(0); }
        }
    }

    void ShowGameLoseUI()
    {
        OnGameOver(GameLoseUI);
    }

    void ShowGameWinUI()
    {
        OnGameOver(GameWinUI);
    }

    void OnGameOver(GameObject gameOverUI)
    {
        gameOverUI.SetActive(true);
        gameIsOver = true;
        SecondsToWin.text = "Congrats, you won in " + (Mathf.Round(Time.timeSinceLevelLoad * 10) / 10f).ToString() + "s";
        Guard.OnPlayerSpotted -= ShowGameLoseUI;
        FindObjectOfType<Player>().OnReachedCheckpoint -= ShowGameWinUI;
    }
}
