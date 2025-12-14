/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57446
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57446 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57446
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((~(((((21363 ? -21361 : var_1))) ? (var_6 ^ var_8) : (((82 ? var_14 : 19)))))));
    var_16 = var_2;
    var_17 = (min(var_17, (((((-15101 ? var_0 : var_14)) + var_8)))));
    var_18 = (((((var_12 ? ((34662 ? 4165 : 1994049636)) : (((58193 ? 7342 : 12267)))))) ? 1117114565014243905 : (~var_11)));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                var_19 = (min(var_19, (((!((((((var_6 ? var_12 : 2471615359))) ? ((2208066393 ? var_5 : 53271)) : (((1 ? 58194 : 200)))))))))));
                var_20 = (max((!58178), (((var_0 ? 3798639068 : 7369)))));
                var_21 = ((58178 ^ ((1051378723 ? 27631 : 3266672229))));
            }
        }
    }
    #pragma endscop
}
