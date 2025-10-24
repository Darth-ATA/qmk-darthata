# CRKBD Layout Analysis & Optimization Guide
**For: Darth-ATA** | Spanish/English Programmer & Gamer

---

## 📊 Current Layout Overview

Your CRKBD uses 4 layers:
- **Layer 0 (BASE)**: Main typing layer with Spanish QWERTY
- **Layer 1 (_FN)**: Function keys + Navigation
- **Layer 2 (_SY)**: Symbols + Numbers
- **Layer 3 (_CFG)**: Configuration (Tri-layer: activated when both _FN + _SY are held)

---

## 🎹 LAYER DIAGRAMS

### **LAYER 0: BASE** (Default Layer)
```
┌─────┬─────┬─────┬─────┬─────┬─────┐       ┌─────┬─────┬─────┬─────┬─────┬─────┐
│ TAB │  Q  │  W  │  E  │  R  │  T  │       │  Y  │  U  │  I  │  O  │  P  │BSPC │
├─────┼─────┼─────┼─────┼─────┼─────┤       ├─────┼─────┼─────┼─────┼─────┼─────┤
│SHIFT│  A  │  S  │  D  │  F  │  G  │       │  H  │  J  │  K  │  L  │  Ñ  │  ´  │
├─────┼─────┼─────┼─────┼─────┼─────┤       ├─────┼─────┼─────┼─────┼─────┼─────┤
│CTRL │  Z  │  X  │  C  │  V  │  B  │       │  N  │  M  │  ,  │  .  │  -  │SHIFT│
└─────┴─────┴─────┼─────┼─────┼─────┤       ├─────┼─────┼─────┼─────┴─────┴─────┘
                  │ GUI │ _FN │SPACE│       │ENTER│ _SY │ ALT │
                  └─────┴─────┴─────┘       └─────┴─────┴─────┘
```
**Note**: All letters use Spanish layout (ES_Q, ES_A, etc.)

---

### **LAYER 1: _FN** (Function & Navigation)
**Activated by**: Hold left middle thumb key
```
┌─────┬─────┬─────┬─────┬─────┬─────┐       ┌─────┬─────┬─────┬─────┬─────┬─────┐
│ ESC │ F1  │ F2  │ F3  │ F4  │ APP │       │ INS │HOME │  ↑  │ END │PG_UP│BSPC │
├─────┼─────┼─────┼─────┼─────┼─────┤       ├─────┼─────┼─────┼─────┼─────┼─────┤
│     │ F5  │ F6  │ F7  │ F8  │PSCR │       │ DEL │  ←  │  ↓  │  →  │PG_DN│  ¨  │
├─────┼─────┼─────┼─────┼─────┼─────┤       ├─────┼─────┼─────┼─────┼─────┼─────┤
│     │ F9  │ F10 │ F11 │ F12 │PAUSE│       │     │     │  ;  │  :  │  _  │SHIFT│
└─────┴─────┴─────┼─────┼─────┼─────┤       ├─────┼─────┼─────┼─────┴─────┴─────┘
                  │ GUI │ /// │SPACE│       │ENTER│     │ ALT │
                  └─────┴─────┴─────┘       └─────┴─────┴─────┘
```
**Note**: /// means "this key activates this layer"

---

### **LAYER 2: _SY** (Symbols & Numbers)
**Activated by**: Hold right middle thumb key
```
┌─────┬─────┬─────┬─────┬─────┬─────┐       ┌─────┬─────┬─────┬─────┬─────┬─────┐
│ ESC │  !  │  "  │  #  │  ^  │  ¿  │       │  *  │  7  │  8  │  9  │  -  │BSPC │
├─────┼─────┼─────┼─────┼─────┼─────┤       ├─────┼─────┼─────┼─────┼─────┼─────┤
│     │  {  │  }  │  (  │  )  │  €  │       │  /  │  4  │  5  │  6  │  +  │  '  │
├─────┼─────┼─────┼─────┼─────┼─────┤       ├─────┼─────┼─────┼─────┼─────┼─────┤
│     │  [  │  ]  │  º  │  ª  │  =  │       │  0  │  1  │  2  │  3  │  .  │SHIFT│
└─────┴─────┴─────┼─────┼─────┼─────┤       ├─────┼─────┼─────┼─────┴─────┴─────┘
                  │ GUI │     │SPACE│       │ENTER│ /// │ ALT │
                  └─────┴─────┴─────┘       └─────┴─────┴─────┘
```
**Note**: Numbers are in a numpad-style layout (789/456/123/0)

---

### **LAYER 3: _CFG** (Configuration)
**Activated by**: Hold BOTH _FN + _SY keys (tri-layer)
```
┌─────┬─────┬─────┬─────┬─────┬─────┐       ┌─────┬─────┬─────┬─────┬─────┬─────┐
│     │  ¡  │  @  │  €  │  $  │  ¿  │       │     │     │     │  >  │     │BSPC │
├─────┼─────┼─────┼─────┼─────┼─────┤       ├─────┼─────┼─────┼─────┼─────┼─────┤
│     │  <  │  &  │  |  │  \  │     │       │     │     │     │     │  ~  │  `  │
├─────┼─────┼─────┼─────┼─────┼─────┤       ├─────┼─────┼─────┼─────┼─────┼─────┤
│     │     │  ¬  │  ç  │  %  │     │       │RGB_T│RGB_M│HUE +│SAT +│VAL +│SHIFT│
└─────┴─────┴─────┼─────┼─────┼─────┤       ├─────┼─────┼─────┼─────┴─────┴─────┘
                  │ GUI │     │SPACE│       │ENTER│     │ ALT │
                  └─────┴─────┴─────┘       └─────┴─────┴─────┘
```
**Legend**: RGB_T=Toggle, RGB_M=Mode, HUE/SAT/VAL=Color adjustments

---

## 🎯 OPTIMIZATION ANALYSIS

### ✅ **What's Working Well**

1. **Spanish Characters**: Good coverage of Ñ, ´, ¿, ¡, €, ç, etc.
2. **Thumb Keys**: Well-utilized with layer switching
3. **Symbols for Programming**: Brackets [], {}, () are accessible
4. **Navigation**: Arrow keys in vim-style (hjkl) position
5. **RGB Matrix**: Nice visual feedback enabled

---

### ⚠️ **Issues for Gaming**

1. **ESC Key Position**: ESC is in the _FN layer (needs holding another key)
   - **Impact**: Critical for games that use ESC frequently
   - **Solution**: Move ESC to BASE layer

2. **Number Access**: Numbers require holding _SY layer
   - **Impact**: Slow for quick weapon switching (1-9 keys)
   - **Solution**: Add numbers to BASE layer or create a toggle layer

3. **No F-keys on BASE**: F1-F12 need layer hold
   - **Impact**: Can't quickly press F1-F12 during gameplay
   - **Current**: Acceptable since most games use 1-9

---

### 🖥️ **Issues for Programming**

1. **Number Row Missing**: Have to hold _SY for numbers
   - **Impact**: Typing `array[123]` is slower
   - **Solution**: Consider home row mods or number toggle

2. **Backtick/Grave**: On _CFG layer (requires 2 layer holds)
   - **Impact**: Used in markdown, JavaScript templates
   - **Solution**: Move to _SY layer

3. **Underscore**: Currently in _FN layer
   - **Impact**: Common in variable names (snake_case)
   - **Current**: Acceptable position, easy to reach

---

### 🎮 **Alt/Option Key Analysis**

**Current State**:
- `KC_RALT` (Right Alt): BASE layer, right thumb (outer position) ✅
- `KC_LALT`: Appears in _FN and _SY layers, right thumb (outer position)

**Assessment**:
- ✅ **Good position**: Right thumb outer position is easily accessible
- ✅ **Consistent**: Available on multiple layers
- ⚠️ **Could be better**: Currently you have ALT but it's in the rightmost thumb position

**Recommendation**: Your ALT key is actually well-placed! The outer right thumb is a prime position. However:
- Consider adding `KC_LALT` to BASE layer LEFT thumb cluster
- Keep `KC_RALT` where it is
- This gives you both left and right Alt for different use cases

---

## 🔧 PROPOSED OPTIMIZATIONS

### **Option 1: Gaming-Focused (Recommended for Gamers)**

**Changes to BASE Layer**:
```
┌─────┬─────┬─────┬─────┬─────┬─────┐       ┌─────┬─────┬─────┬─────┬─────┬─────┐
│ ESC │  Q  │  W  │  E  │  R  │  T  │       │  Y  │  U  │  I  │  O  │  P  │BSPC │
├─────┼─────┼─────┼─────┼─────┼─────┤       ├─────┼─────┼─────┼─────┼─────┼─────┤
│SHIFT│  A  │  S  │  D  │  F  │  G  │       │  H  │  J  │  K  │  L  │  Ñ  │  ´  │
├─────┼─────┼─────┼─────┼─────┼─────┤       ├─────┼─────┼─────┼─────┼─────┼─────┤
│CTRL │  Z  │  X  │  C  │  V  │  B  │       │  N  │  M  │  ,  │  .  │  -  │SHIFT│
└─────┴─────┴─────┼─────┼─────┼─────┤       ├─────┼─────┼─────┼─────┴─────┴─────┘
                  │ GUI │ _FN │SPACE│       │ENTER│ _SY │L_ALT│
                  └─────┴─────┴─────┘       └─────┴─────┴─────┘
```

**Key Changes**:
- 🎮 Move **TAB → ESC** (ESC now on BASE for gaming)
- 🎮 Move **ESC → TAB** in _FN layer (TAB still accessible)
- 💡 Change right thumb **RALT → LALT** for more versatility

**Benefits**:
- Quick ESC access for gaming
- WASD movement unaffected
- Tab still accessible via _FN layer

---

### **Option 2: Programming-Focused (Balanced)**

**Add a NUMBER LAYER** (Layer 4) activated by holding TAB:

When holding TAB:
```
┌─────┬─────┬─────┬─────┬─────┬─────┐       ┌─────┬─────┬─────┬─────┬─────┬─────┐
│ TAB │  1  │  2  │  3  │  4  │  5  │       │  6  │  7  │  8  │  9  │  0  │BSPC │
├─────┼─────┼─────┼─────┼─────┼─────┤       ├─────┼─────┼─────┼─────┼─────┼─────┤
│     │  !  │  @  │  #  │  $  │  %  │       │  ^  │  &  │  *  │  (  │  )  │  `  │
├─────┼─────┼─────┼─────┼─────┼─────┤       ├─────┼─────┼─────┼─────┼─────┼─────┤
│     │     │     │     │     │     │       │     │     │     │     │  _  │     │
└─────┴─────┴─────┼─────┼─────┼─────┤       ├─────┼─────┼─────┼─────┴─────┴─────┘
                  │     │     │     │       │     │     │     │
                  └─────┴─────┴─────┘       └─────┴─────┴─────┘
```

**Implementation**: Make TAB a "hold for numbers" key
```c
LT(_NUM, KC_TAB)  // Tap=TAB, Hold=Numbers layer
```

**Benefits**:
- Quick number access (hold TAB + 1-9)
- Gaming: Hold TAB for weapon switching
- Programming: Quick number typing
- Backtick (`) now more accessible

---

### **Option 3: Hybrid Approach (Best of Both Worlds)**

**Modifications**:
1. **BASE Layer**: 
   - Keep TAB in top-left
   - Add `LT(_NUM, KC_ESC)` to top-right corner replacing something less used
   
2. **Add Gaming Layer** (toggled):
   - Traditional number row (1-9-0) 
   - ESC in top-left
   - Toggle with key combo

3. **Improve _FN Layer**:
   - Add TAB somewhere accessible
   - Keep F-keys as is

---

## 🌟 SPECIFIC RECOMMENDATIONS

### **For Your Use Case (Spanish Programmer/Gamer)**:

#### **Immediate Quick Wins**:

1. **Add Home Row Mods** (optional but powerful):
   ```c
   // Left hand: GUI, Alt, Shift, Ctrl
   // Right hand: Ctrl, Shift, Alt, GUI
   // Hold A/S/D/F or J/K/L/; for modifiers
   ```

2. **Move backtick to _SY layer**:
   - Currently: _CFG layer (hard to reach)
   - Suggested: _SY layer, easily accessible

3. **Consider Tap Dance** for dual-function keys:
   ```c
   // Example: Tap once = ESC, Tap twice = `
   ```

4. **Add combos** for frequently used symbols:
   ```c
   // Example: Press J+K together = ESC
   ```

#### **Gaming Improvements**:

1. **Option A**: Swap TAB ↔ ESC positions in BASE layer
2. **Option B**: Add gaming layer with number row
3. **Option C**: Use `LT(layer, key)` for quick number access

#### **Programming Improvements**:

1. Move `ES_GRV` (`) from _CFG to _SY layer
2. Consider adding `->`, `=>`, `!=` as combos
3. Add `=` to an easier position (currently in _SY layer)

---

## 🔑 KEY PLACEMENT GUIDE

### **Current Alt/Option Keys**:
| Key | Layer | Position | Accessibility |
|-----|-------|----------|--------------|
| KC_RALT | BASE | Right thumb outer | ⭐⭐⭐⭐⭐ Excellent |
| KC_LALT | _FN | Right thumb outer | ⭐⭐⭐ Good (requires layer) |
| KC_LALT | _SY | Right thumb outer | ⭐⭐⭐ Good (requires layer) |

### **Recommended Alt/Option Setup**:
```
Left Thumb:   [GUI] [_FN] [SPACE]
Right Thumb:  [ENTER] [_SY] [LALT or RALT]
```

**Why this works**:
- ✅ Alt on base layer (no layer switching)
- ✅ Outer thumb position (easy to reach)
- ✅ Available for Alt+Tab, Alt+F4, etc.
- ✅ Works for both Mac (Option) and Linux/Windows (Alt)

---

## 📝 IMPLEMENTATION PRIORITY

### **High Priority** (Immediate Impact):
1. ✅ Keep current Alt position (it's good!)
2. 🎮 Move ESC to BASE layer if you game frequently
3. 💻 Move backtick (`) to _SY layer for programming

### **Medium Priority** (Quality of Life):
1. Consider adding number layer via `LT()`
2. Add useful combos (JK = ESC, DF = TAB, etc.)
3. Fine-tune symbol positions based on usage

### **Low Priority** (Advanced):
1. Explore home row mods
2. Add auto-shift feature
3. Create gaming-specific layer toggle

---

## 🎨 ADDITIONAL FEATURES TO CONSIDER

### **1. Caps Word** (QMK Feature):
Instead of Caps Lock, use "Caps Word" - automatically capitalizes until you press space.
```c
// Add to keymap: QK_CAPS_WORD_ON
```

### **2. Key Overrides**:
Make Shift+Backspace = Delete
```c
const key_override_t delete_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_BSPC, KC_DEL);
```

### **3. Combos** (Examples):
```c
// Press J+K together quickly = ESC
// Press D+F together = TAB
// Press S+D = Ctrl
```

### **4. Auto Shift**:
Hold any key longer = Shifted version
```c
// Hold 'a' = 'A', Hold '1' = '!'
```

---

## 🎯 FINAL RECOMMENDATION

**For a Spanish Programmer/Gamer**:

### **Implement These Changes**:

1. **BASE Layer**: 
   - Move ESC to top-left (replace TAB)
   - Keep Alt where it is (perfect position)

2. **_FN Layer**:
   - Move TAB here (top-left position)
   - Keep everything else as is

3. **_SY Layer**:
   - Move backtick (`) from _CFG to _SY
   - Consider adding `=` to a better spot

4. **NEW - Number Layer (Optional)**:
   - Make TAB a dual-function key: `LT(_NUM, KC_TAB)`
   - Tap = TAB, Hold = access to numbers 1-9-0

### **Result**:
- ✅ Gaming: Quick ESC access
- ✅ Programming: Better symbol access
- ✅ Spanish: All characters maintained
- ✅ Alt/Option: Already well-positioned
- ✅ Numbers: Accessible via TAB hold

---

## 📊 COMPARISON TABLE

| Aspect | Current | After Changes | Improvement |
|--------|---------|---------------|-------------|
| ESC Access | _FN layer | BASE layer | 🎮⭐⭐⭐⭐⭐ |
| Alt/Option | Good | Same (keep it!) | ✅ Already optimal |
| Numbers | _SY layer | _SY + optional TAB hold | 💻⭐⭐⭐ |
| Backtick | _CFG layer | _SY layer | 💻⭐⭐⭐⭐ |
| Gaming | 3/5 | 5/5 | 🎮⭐⭐⭐⭐⭐ |
| Programming | 4/5 | 5/5 | 💻⭐⭐⭐⭐ |
| Spanish | 5/5 | 5/5 | ✅ Maintained |

---

## 💡 LEARNING YOUR LAYERS

### **Memory Tips**:

1. **_FN Layer** (Left Middle Thumb):
   - Think: "**F**unctions and **N**avigation"
   - F1-F12 on left side
   - Arrows on right side

2. **_SY Layer** (Right Middle Thumb):
   - Think: "**SY**mbols and Numbers"
   - Symbols on left side
   - Numbers on right side (789/456/123/0)

3. **_CFG Layer** (Both Thumbs):
   - Think: "**C**on**F**i**G**uration"
   - Special Spanish chars
   - RGB controls

### **Practice Sequences**:
- Type `function_name_123` to practice _SY layer
- Navigate `Ctrl+F` to practice _FN layer
- Adjust RGB while holding both layers

---

## 🚀 NEXT STEPS

1. **Review** this analysis
2. **Decide** which optimization path fits your style:
   - Gaming-focused (Option 1)
   - Programming-focused (Option 2)
   - Hybrid (Option 3)
3. **Test** changes in your keymap
4. **Iterate** based on usage patterns
5. **Enjoy** your optimized CRKBD!

---

**Questions? Want me to implement any of these changes in your keymap.c file?**

Let me know which direction you'd like to go! 🎹✨
