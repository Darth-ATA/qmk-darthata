# CRKBD Layout Analysis - Darth-ATA

## Current Layer Diagrams

### Layer 0: BASE (Default Layer)
```
╔═════════════════════════════════════════════════════════════════╗
║                    LEFT HAND                    RIGHT HAND      ║
╠═════════════════════════════════════════════════════════════════╣
║   TAB     Q      W      E      R      T      Y      U      I      O      P    BSPC  ║
║  LSFT     A      S      D      F      G      H      J      K      L      Ñ     ´    ║
║  LCTL     Z      X      C      V      B      N      M      ,      .      -    RSFT  ║
║                           GUI   _FN▼   SPC   ENT   _SY▼   RALT                      ║
╚═════════════════════════════════════════════════════════════════╝
```
**Purpose:** Main typing layer with Spanish QWERTY layout
- Spanish characters: Ñ, ´ (accent)
- Standard modifier keys on home positions
- Layer access via thumb keys

---

### Layer 1: FUNCTION & NAVIGATION (_FN)
```
╔═════════════════════════════════════════════════════════════════╗
║                    LEFT HAND                    RIGHT HAND      ║
╠═════════════════════════════════════════════════════════════════╣
║   ESC     F1     F2     F3     F4    APP    INS   HOME    ↑    END   PGUP  BSPC  ║
║   ---     F5     F6     F7     F8   PSCR   DEL    ←      ↓     →    PGDN    ¨    ║
║   ---     F9    F10    F11    F12   PAUS   XXX   XXX     ;      :     _    RSFT  ║
║                           GUI   ▼▼▼   SPC   ENT   ___    LALT                      ║
╚═════════════════════════════════════════════════════════════════╝
```
**Purpose:** Function keys (F1-F12) + Navigation (arrows, Home/End/PgUp/PgDn)
- ESC in top-left (important for gaming!)
- Navigation cluster on right hand (vim-style arrows)
- Holding this + _SY activates _CFG layer

---

### Layer 2: SYMBOLS & NUMBERS (_SY)
```
╔═════════════════════════════════════════════════════════════════╗
║                    LEFT HAND                    RIGHT HAND      ║
╠═════════════════════════════════════════════════════════════════╣
║   ESC     !      "      #      ^      ¿      *      7      8      9      -    BSPC  ║
║   ---     {      }      (      )      €      /      4      5      6      +     '    ║
║   ---     [      ]      º      ª      =      0      1      2      3      .    RSFT  ║
║                           GUI   ___   SPC   ENT   ▼▼▼    LALT                      ║
╚═════════════════════════════════════════════════════════════════╝
```
**Purpose:** Numbers (in numpad arrangement) + Symbols + Brackets
- Numbers on right hand (like a numpad: 789/456/123/0)
- Programming symbols on left: {}, [], ()
- Spanish symbols: ¿, º, ª
- Holding this + _FN activates _CFG layer

---

### Layer 3: CONFIG (_CFG)
*Activated by holding both _FN and _SY simultaneously*

```
╔═════════════════════════════════════════════════════════════════╗
║                    LEFT HAND                    RIGHT HAND      ║
╠═════════════════════════════════════════════════════════════════╣
║   ---     ¡      @      €      $      ¿     XXX   XXX   XXX     >    XXX   BSPC  ║
║   ---     <      &      |      \     XXX    XXX   XXX   XXX   XXX     ~     `    ║
║   ---    XXX     ¬      ç      %     XXX   RGB_T RGB_M RGB_H RGB_S RGB_V  RSFT  ║
║                           GUI   ___   SPC   ENT   ___    LALT                      ║
╚═════════════════════════════════════════════════════════════════╝
```
**Purpose:** Special characters + RGB LED controls
- Advanced Spanish/special chars: ¡, ¿, ç, ¬
- Programmer symbols: @, $, &, |, \, >, <, ~, `
- RGB Matrix controls on bottom-right

---

## Optimization Recommendations

### 🎯 For Programming

**STRENGTHS:**
- ✅ Good bracket access on _SY layer: {} [] ()
- ✅ Common symbols easily accessible: -, +, *, /
- ✅ Numbers in logical numpad layout
- ✅ ESC accessible on _FN and _SY layers

**OPTIMIZATIONS:**
1. **Add Option/Alt Key:**
   - **Recommended:** Replace `KC_LCTL` (bottom-left) with `KC_LOPT` or use a mod-tap: `MT(MOD_LCTL, KC_LALT)`
   - Alternative: Make `KC_LGUI` a dual-function key: `MT(MOD_LGUI, KC_LOPT)`
   - This gives you Ctrl+Alt combinations needed for programming shortcuts

2. **Consider Home Row Mods:**
   - For advanced users: Add mod-tap keys on home row (A=Ctrl, S=Alt, D=GUI, F=Shift)
   - This frees up bottom row for other keys

3. **Improve Symbol Access:**
   - `=` is buried in _SY layer - consider adding it to _BASE for easier access
   - `/` and `\` could be more accessible for path typing

---

### 🎮 For Gaming

**STRENGTHS:**
- ✅ WASD cluster available on base layer
- ✅ ESC on _FN layer (accessible with thumb)
- ✅ Space bar on dominant thumb

**OPTIMIZATIONS:**
1. **Quick ESC Access:**
   - Current: Need to hold _FN thumb key
   - **Recommendation:** Add `MT(MOD_LSFT, KC_ESC)` - tap for ESC, hold for Shift
   - Or: Make Tab a tap-dance (double-tap for ESC)

2. **Number Row for Gaming:**
   - Currently numbers require holding _SY layer
   - **Option A:** Add a dedicated gaming layer with numbers on top row
   - **Option B:** Use Tap-Dance on QWERTY row (tap for letter, double-tap for number)

3. **Gaming Layer Suggestion:**
   ```
   Add new layer toggle in _CFG for gaming mode:
   - Numbers 1-6 on top row (for weapon switching)
   - ESC on Tab position
   - Keep all other keys the same
   ```

---

### 🇪🇸 For Spanish/English Typing

**STRENGTHS:**
- ✅ Excellent Spanish character support: Ñ, ´, ¿, ¡, º, ª, ç
- ✅ Ñ on base layer (home row)
- ✅ Common accents easily accessible

**OPTIMIZATIONS:**
1. **Accent Placement:**
   - Current: ´ (ES_ACUT) is well-placed on base layer
   - Consider: Dead key implementation for automatic accent combos
   - Add `¨` (diaeresis) to base layer if you use ü often

2. **Spanish Punctuation:**
   - ¿ and ¡ are in different layers
   - **Suggestion:** Move both to _SY layer for consistency

---

### 🔧 Option Key Placement

**Best Locations for Option/Alt Key:**

1. **🥇 RECOMMENDED: Replace Left Control**
   ```c
   // Line 52: Change
   KC_LCTL,    ES_Z, ...
   // To:
   KC_LOPT,    ES_Z, ...  // or KC_LALT
   ```
   - **Why:** You have RALT on thumb, so left pinky Alt gives both hands access
   - **Trade-off:** Less Ctrl access (but you can use RCTL or add Ctrl elsewhere)

2. **🥈 ALTERNATIVE: Mod-Tap on GUI**
   ```c
   // Line 54: Change
   KC_LGUI, MO(_FN), ...
   // To:
   MT(MOD_LGUI, KC_LOPT), MO(_FN), ...
   ```
   - **Why:** Tap for Option, hold for GUI/Win
   - **Trade-off:** Requires getting used to tap vs. hold

3. **🥉 ALTERNATIVE: Dual-Function Shift**
   ```c
   // Line 50: Change
   KC_LSFT,    ES_A, ...
   // To:
   MT(MOD_LSFT, KC_LOPT),    ES_A, ...
   ```
   - **Why:** Tap for Option, hold for Shift
   - **Trade-off:** May cause accidental Option presses

---

## Priority Optimizations Summary

### HIGH PRIORITY:
1. ✅ **Add Option key** - Replace LCTL or use Mod-Tap on LGUI
2. ✅ **Better ESC access for gaming** - Add to base layer via mod-tap or dedicated position
3. ✅ **Consolidate Spanish punctuation** - Move ¿¡ to same layer

### MEDIUM PRIORITY:
4. ⚠️ **Gaming layer** - Add dedicated gaming mode with number row
5. ⚠️ **Symbol optimization** - Move = to more accessible position
6. ⚠️ **Consider home row mods** - Advanced but very efficient

### LOW PRIORITY:
7. 💡 **Tap-dance keys** - For multi-function keys
8. 💡 **Dead key accents** - For faster Spanish typing
9. 💡 **Macro keys** - Add custom programming macros

---

## Implementation Suggestions

### Quick Win: Add Option Key (5 minutes)
Replace bottom-left Ctrl with Option:
```c
[_BASE] = LAYOUT_split_3x6_3(
  KC_TAB,    ES_Q,    ES_W,    ES_E,    ES_R,    ES_T,         ES_Y,    ES_U,    ES_I,    ES_O,   ES_P,  KC_BSPC,
  KC_LSFT,   ES_A,    ES_S,    ES_D,    ES_F,    ES_G,         ES_H,    ES_J,    ES_K,    ES_L, ES_NTIL, ES_ACUT,
  KC_LOPT,   ES_Z,    ES_X,    ES_C,    ES_V,    ES_B,         ES_N,    ES_M, ES_COMM,  ES_DOT, ES_MINS, KC_RSFT,
                                         KC_LGUI, MO(_FN),  KC_SPC,     KC_ENT, MO(_SY), KC_RALT
),
```

### Medium Effort: Gaming Layer (30 minutes)
Add a toggle-able gaming layer with better number access and ESC.

### Advanced: Home Row Mods (requires practice)
Implement GACS (GUI, Alt, Ctrl, Shift) on home row for ultimate efficiency.

---

## Legend
- `▼` = Hold to activate layer
- `▼▼▼` = Currently held layer
- `---` = Transparent (uses base layer key)
- `XXX` = No key assigned
- RGB_T/M/H/S/V = RGB Toggle/Mode/Hue/Saturation/Value

---

## Your Current Setup Pros ✨

1. **Excellent Spanish support** - All necessary characters accessible
2. **Logical layer structure** - Functions, symbols, and config clearly separated
3. **Good programming symbols** - Brackets and operators well-placed
4. **OLED integration** - Shows current layer (great for learning!)
5. **RGB Matrix enabled** - Visual feedback for layers

## Next Steps 🚀

1. Try the Option key replacement first (lowest risk)
2. Test for a week, see how it feels
3. Then consider adding gaming layer or home row mods
4. Iterate based on your most common pain points

¡Buena suerte con tu teclado! 🎹
