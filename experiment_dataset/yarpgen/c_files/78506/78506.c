/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78506
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78506 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78506
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_10 = (max(var_10, 8498));
        var_11 = (max(var_11, ((!(((arr_0 [i_0]) <= 13))))));
        arr_3 [i_0] = ((-(max(14772, var_7))));
        var_12 = ((((((54 ? -28007 : 15)) >= (((-3687941868916145838 ? 1 : 3172))))) ? (31592 & 200) : ((4294967273 ? (!549414459448986704) : 62378))));
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 23;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 21;i_3 += 1)
            {
                {
                    arr_12 [i_1] [i_2] [i_3] [i_1] = ((4045 <= (!16775168)));
                    var_13 -= 1;
                    var_14 -= var_2;
                }
            }
        }
        var_15 = (min(var_15, ((max(-10145, -16567)))));
    }
    for (int i_4 = 3; i_4 < 14;i_4 += 1)
    {
        arr_15 [i_4] [i_4] = var_5;
        var_16 = (min(var_16, (arr_10 [i_4] [6] [i_4])));
        var_17 = (max((((((4294967271 ? 1 : -25394))) ? (max(-16564, (arr_8 [i_4]))) : 833526182)), 1));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 19;i_5 += 1)
    {
        var_18 = (max(var_18, (-10140 - var_7)));
        var_19 = (max(var_19, var_0));
    }
    var_20 = (max(var_20, (((~(!var_6))))));
    var_21 = ((35184371957760 < ((((16775171 || (var_2 <= 30720)))))));
    var_22 = (min(var_22, (-var_1 << var_5)));
    #pragma endscop
}
