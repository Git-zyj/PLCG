/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56907
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56907 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56907
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 -= (var_14 - 55868);

    for (int i_0 = 4; i_0 < 13;i_0 += 1)
    {
        var_21 ^= var_16;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 12;i_2 += 1)
            {
                {
                    var_22 = 246;
                    var_23 |= ((40148 == (max(6184673901823221098, 57))));
                }
            }
        }
        arr_8 [i_0 - 1] = (arr_5 [i_0 - 1] [i_0 - 1] [i_0 - 3]);
        arr_9 [i_0 - 4] [i_0 + 1] = (((((32767 ? 30958 : var_16))) || var_17));
    }
    for (int i_3 = 0; i_3 < 16;i_3 += 1)
    {
        arr_12 [i_3] [i_3] = ((22 ? ((((((arr_11 [i_3]) ? var_8 : 2085563722))) ? ((25166 ? var_12 : (arr_11 [i_3]))) : (arr_10 [i_3]))) : (((~var_8) ? var_4 : var_2))));
        var_24 = (min(var_24, var_7));
        var_25 = (min(37455, ((((12262070171886330532 ? (arr_11 [i_3]) : var_14))))));
    }
    for (int i_4 = 1; i_4 < 14;i_4 += 1)
    {
        var_26 = ((!(((var_0 ? (((arr_15 [i_4 + 2] [i_4]) % (arr_11 [i_4 + 2]))) : ((max(var_16, (arr_11 [i_4 - 1])))))))));
        arr_16 [i_4 + 1] [i_4] = ((-1342919497 - (max((arr_11 [i_4 + 1]), 6184673901823221089))));
        var_27 = ((((((min((arr_11 [i_4 - 1]), (arr_13 [i_4])))) || var_10)) ? 65535 : (min((((arr_10 [i_4 - 1]) / 6420908870385758914)), (((101 ? 197 : var_15)))))));
        arr_17 [i_4] = ((((((var_9 >= var_4) & var_8))) ? ((((!(!230))))) : (((min((arr_14 [i_4]), var_15)) - (((max((arr_15 [i_4 + 2] [i_4]), 4402))))))));
    }
    for (int i_5 = 1; i_5 < 18;i_5 += 1)
    {
        /* LoopNest 2 */
        for (int i_6 = 1; i_6 < 18;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 20;i_7 += 1)
            {
                {
                    var_28 ^= (min(((-443552362 ? 511 : 239)), var_10));
                    var_29 = var_3;
                }
            }
        }
        var_30 &= 57699;
        var_31 = min(101, 246);
    }
    #pragma endscop
}
