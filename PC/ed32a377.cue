REM Change thr read/write attributes of associated files

attrib /D /S -R "C:\Projects\Miami Vice\MiamiViceProject\Code\source\ALE_Headers\*.*"
attrib /D /S -R "C:\Projects\Miami Vice\MiamiViceProject\Code\GameData\PC\*.*"

REM Copy relavant files

xcopy "C:\Projects\Miami Vice\MiamiViceProject\Code\Source\Ale_Headers\*.h" "C:\Projects\Miami Vice\MiamiViceProject\Code\GameData\PC\Levels"  /D /Y /R

REM Run the game

MiamiViceD
