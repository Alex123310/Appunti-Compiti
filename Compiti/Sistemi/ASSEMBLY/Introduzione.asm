; commento

org 100h   ;indirizzo del cs della prima istruzione

    ; add your code here
    ;ax bc cx dx registri ad uso genrale
    ;cs ip ss sp bp si di ds es speciali
    ; MOV ASSEGNAZIONE 
          
    ; un istruzione e formata da codop Dati 2byte per MOV      
    MOV AX,03Fh        ; AX = 003F
    MOV AH,3Fh         ;istruzione prende 2 byte invece di 3 vado a toccare solo la parte altra del registro
    MOV BL,AH          ; BL = AH                                               
    MOV AL, [0200h]    ; []sono indirizzo di memoria al = contenuto dell indirizzo 0200
    MOV AL,07Ch             
    MOV [0200h], AL    
    JMP ET1            ; SALTA AD ISTRUZIONE CON ETICHETTA ET1
    ;*-----------------------------------------------------------------------------------------------*
    INC AL             ;AL = AL + 1
    DEC BL             ;BL = BL - 1
    ;*-----------------------------------------------------------------------------------------------*
ET1:
;SE (A > B) A-B=0 -> A=B
;< 0 -> B > A
;> 0 -> A > B
    CMP AL,00h   
    ;JG                 ;Jump if Greater
    ;JGE                ;Jump if greater or equal
    ;JE                 ;Jump if Equal
    ;JNE                ;Jump if Not Equal
    ;JL                 ;Jump if Lesser
    ;JLE                ;Jump if Lesser or Equal
    JG ALLORA
    INC AL
    JMP ET2   
ALLORA:
    DEC AL
ET2:
    ret




