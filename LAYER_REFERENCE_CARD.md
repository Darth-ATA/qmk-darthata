# CRKBD Layer Reference Card - Quick View

## 🎨 Visual Layer Map

### BASE LAYER (Default)
```
┌─────┬─────┬─────┬─────┬─────┬─────┐       ┌─────┬─────┬─────┬─────┬─────┬─────┐
│ TAB │  Q  │  W  │  E  │  R  │  T  │       │  Y  │  U  │  I  │  O  │  P  │BSPC │
├─────┼─────┼─────┼─────┼─────┼─────┤       ├─────┼─────┼─────┼─────┼─────┼─────┤
│SHIFT│  A  │  S  │  D  │  F  │  G  │       │  H  │  J  │  K  │  L  │  Ñ  │  ´  │
├─────┼─────┼─────┼─────┼─────┼─────┤       ├─────┼─────┼─────┼─────┼─────┼─────┤
│CTRL │  Z  │  X  │  C  │  V  │  B  │       │  N  │  M  │  ,  │  .  │  -  │SHIFT│
└─────┴─────┴─────┼─────┼─────┼─────┤       ├─────┼─────┼─────┼─────┴─────┴─────┘
                   │ GUI │ FN→ │SPACE│       │ENTER│ SY→ │RALT │
                   └─────┴─────┴─────┘       └─────┴─────┴─────┘
```

### FN LAYER (Functions & Navigation)
```
┌─────┬─────┬─────┬─────┬─────┬─────┐       ┌─────┬─────┬─────┬─────┬─────┬─────┐
│ ESC │ F1  │ F2  │ F3  │ F4  │ APP │       │ INS │HOME │  ↑  │ END │PgUp │BSPC │
├─────┼─────┼─────┼─────┼─────┼─────┤       ├─────┼─────┼─────┼─────┼─────┼─────┤
│  -  │ F5  │ F6  │ F7  │ F8  │PSCR │       │ DEL │  ←  │  ↓  │  →  │PgDn │  ¨  │
├─────┼─────┼─────┼─────┼─────┼─────┤       ├─────┼─────┼─────┼─────┼─────┼─────┤
│  -  │ F9  │ F10 │ F11 │ F12 │PAUSE│       │  ·  │  ·  │  ;  │  :  │  _  │SHIFT│
└─────┴─────┴─────┼─────┼─────┼─────┤       ├─────┼─────┼─────┼─────┴─────┴─────┘
                   │ GUI │ ███ │SPACE│       │ENTER│ CFG │LALT │
                   └─────┴─────┴─────┘       └─────┴─────┴─────┘
                         HELD                      +SY=CFG
```

### SY LAYER (Symbols & Numbers)
```
┌─────┬─────┬─────┬─────┬─────┬─────┐       ┌─────┬─────┬─────┬─────┬─────┬─────┐
│ ESC │  !  │  "  │  #  │  ^  │  ¿  │       │  *  │  7  │  8  │  9  │  -  │BSPC │
├─────┼─────┼─────┼─────┼─────┼─────┤       ├─────┼─────┼─────┼─────┼─────┼─────┤
│  -  │  {  │  }  │  (  │  )  │  €  │       │  /  │  4  │  5  │  6  │  +  │  '  │
├─────┼─────┼─────┼─────┼─────┼─────┤       ├─────┼─────┼─────┼─────┼─────┼─────┤
│  -  │  [  │  ]  │  º  │  ª  │  =  │       │  0  │  1  │  2  │  3  │  .  │SHIFT│
└─────┴─────┴─────┼─────┼─────┼─────┤       ├─────┼─────┼─────┼─────┴─────┴─────┘
                   │ GUI │ CFG │SPACE│       │ENTER│ ███ │LALT │
                   └─────┴─────┴─────┘       └─────┴─────┴─────┘
                        +FN=CFG                    HELD
```

### CFG LAYER (Config - Hold FN+SY)
```
┌─────┬─────┬─────┬─────┬─────┬─────┐       ┌─────┬─────┬─────┬─────┬─────┬─────┐
│  -  │  ¡  │  @  │  €  │  $  │  ¿  │       │  ·  │  ·  │  ·  │  >  │  ·  │BSPC │
├─────┼─────┼─────┼─────┼─────┼─────┤       ├─────┼─────┼─────┼─────┼─────┼─────┤
│  -  │  <  │  &  │  |  │  \  │  ·  │       │  ·  │  ·  │  ·  │  ·  │  ~  │  `  │
├─────┼─────┼─────┼─────┼─────┼─────┤       ├─────┼─────┼─────┼─────┼─────┼─────┤
│  -  │  ·  │  ¬  │  ç  │  %  │  ·  │       │RGB_T│RGB_M│RGB_H│RGB_S│RGB_V│SHIFT│
└─────┴─────┴─────┼─────┼─────┼─────┤       ├─────┼─────┼─────┼─────┴─────┴─────┘
                   │ GUI │ ███ │SPACE│       │ENTER│ ███ │LALT │
                   └─────┴─────┴─────┘       └─────┴─────┴─────┘
                        HELD                     HELD
```

---

## 🎯 Cheat Sheet by Use Case

### Programming Most Used Keys
| Key | Location | Layer | Notes |
|-----|----------|-------|-------|
| `{` `}` | Left hand middle row | SY | Curly braces |
| `[` `]` | Left hand bottom row | SY | Square brackets |
| `(` `)` | Left hand middle row | SY | Parentheses |
| `=` | Left hand bottom row | SY | Equal sign |
| `/` | Right hand middle row | SY | Forward slash |
| `\` | Left hand middle row | CFG | Backslash |
| `;` | Right hand bottom row | FN | Semicolon |
| `:` | Right hand bottom row | FN | Colon |
| `'` | Right hand middle row | SY | Single quote |
| `"` | Left hand top row | SY | Double quote |

### Gaming Essentials
| Key | Location | Layer | Notes |
|-----|----------|-------|-------|
| ESC | Top-left | FN/SY | ⚠️ Needs layer hold |
| WASD | Left hand | BASE | Perfect for gaming |
| Space | Left thumb | BASE | Jump/action |
| Numbers | Right hand | SY | ⚠️ Needs layer hold |
| Shift | Pinkies | BASE | Sprint/crouch |
| Ctrl | Left pinky | BASE | Crouch |

### Spanish Characters
| Key | Location | Layer | Notes |
|-----|----------|-------|-------|
| `Ñ` | Right home row | BASE | Easy access ✓ |
| `´` | Right home row | BASE | Dead accent |
| `¨` | Right home row | FN | Diaeresis |
| `¿` | Right top row | SY | Question mark |
| `¡` | Left top row | CFG | Exclamation |
| `ç` | Left bottom row | CFG | Cedilla |
| `€` | Right middle | SY | Euro symbol |

---

## 🔥 Common Key Combinations

### Programmer Combos
```
Ctrl+C / Ctrl+V    → LCTL + C/V (one hand!)
Ctrl+Z             → LCTL + Z (one hand!)
Ctrl+S             → LCTL + S (one hand!)
Alt+Tab            → RALT + TAB (⚠️ awkward - see optimization)
```

### Navigation
```
Home/End           → FN + HOME/END (right hand)
Page Up/Down       → FN + PGUP/PGDN (right hand)
Arrows             → FN + arrow cluster (vim-style: H/J/K/L position)
Ctrl+Home          → LCTL + FN + HOME (possible but hard)
```

### Spanish Typing
```
á → ´ then A
é → ´ then E
ñ → direct key on BASE
¿? → SY + ¿, then BASE + ?
```

---

## ⚡ Quick Tips

1. **Layer Memory Aid:**
   - FN = Left thumb = Functions & Navigation
   - SY = Right thumb = Symbols & Numbers
   - CFG = Both thumbs = Configuration & Special

2. **Thumb Fatigue:**
   - If thumb hurts from holding layers, consider home row mods
   - Or add tap-dance keys for frequently used symbols

3. **Gaming Mode:**
   - Current layout requires holding SY for numbers
   - Consider a dedicated gaming layer toggle

4. **Learning the Layout:**
   - OLED shows current layer - watch it while typing
   - Print this reference card
   - Practice layer switching without looking

---

## 🎮 Suggested Gaming Layer (Optional)

If you add a 5th layer for gaming:
```
┌─────┬─────┬─────┬─────┬─────┬─────┐       ┌─────┬─────┬─────┬─────┬─────┬─────┐
│ ESC │  1  │  2  │  3  │  4  │  5  │       │  6  │  7  │  8  │  9  │  0  │BSPC │
├─────┼─────┼─────┼─────┼─────┼─────┤       ├─────┼─────┼─────┼─────┼─────┼─────┤
│ TAB │  Q  │  W  │  E  │  R  │  T  │       │  Y  │  U  │  I  │  O  │  P  │ENTER│
├─────┼─────┼─────┼─────┼─────┼─────┤       ├─────┼─────┼─────┼─────┼─────┼─────┤
│SHIFT│  A  │  S  │  D  │  F  │  G  │       │  H  │  J  │  K  │  L  │  ;  │  '  │
└─────┴─────┴─────┼─────┼─────┼─────┤       ├─────┼─────┼─────┼─────┴─────┴─────┘
                   │CTRL │SPACE│ ALT │       │ENTER│ FN→ │GAME │
                   └─────┴─────┴─────┘       └─────┴─────┴─────┘
                                                            TOGGLE
```
Toggle this layer on/off from CFG layer!

---

## 📝 Symbol Reference

| Symbol | Name | Layer | Position |
|--------|------|-------|----------|
| `!` | Exclamation | SY | Top-left area |
| `@` | At | CFG | Left side |
| `#` | Hash | SY | Top-left area |
| `$` | Dollar | CFG | Left side |
| `%` | Percent | CFG | Left bottom |
| `^` | Caret | SY | Top-left area |
| `&` | Ampersand | CFG | Left middle |
| `*` | Asterisk | SY | Right top |
| `()` | Parentheses | SY | Left middle |
| `[]` | Brackets | SY | Left bottom |
| `{}` | Braces | SY | Left middle |
| `<>` | Angle brackets | CFG | Left side |
| `=` | Equals | SY | Left bottom |
| `+` | Plus | SY | Right middle |
| `-` | Minus/Hyphen | BASE | Right bottom |
| `_` | Underscore | FN | Right bottom |
| `/` | Slash | SY | Right middle |
| `\` | Backslash | CFG | Left middle |
| `|` | Pipe | CFG | Left middle |
| `;` | Semicolon | FN | Right bottom |
| `:` | Colon | FN | Right bottom |
| `'` | Quote | SY | Right middle |
| `"` | Double quote | SY | Top-left |
| `` ` `` | Backtick | CFG | Right top |
| `~` | Tilde | CFG | Right middle |

---

**Print this and keep it near your keyboard while learning! 🎯**
