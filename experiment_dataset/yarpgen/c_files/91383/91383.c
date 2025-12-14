/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91383
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91383 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91383
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(-23, 2069296106));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_21 = 1387772173;

        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            var_22 ^= (((!(((30 ? (arr_0 [1]) : (arr_1 [i_1])))))));
            arr_7 [i_1] [i_1 - 1] = ((-(arr_2 [i_1])));
            var_23 = (max(var_23, (arr_1 [i_0])));
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 18;i_4 += 1)
                    {
                        {
                            var_24 = ((-(((arr_9 [i_1 + 1] [11] [i_2]) ? (arr_9 [i_1 - 1] [i_1 + 2] [i_4]) : (arr_9 [i_1 - 2] [i_1 - 2] [i_2])))));
                            arr_14 [i_4] [6] [i_0] [i_1 + 1] [i_0] |= (((((+((var_8 ? (arr_12 [i_0] [14] [i_2] [i_3] [i_4]) : 3))))) ? (((!(((1325920714 ? (arr_4 [i_4] [i_1 - 2] [i_0]) : 19721)))))) : 26));
                            var_25 = -30;
                            var_26 -= (~var_7);
                        }
                    }
                }
            }
        }
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            arr_18 [i_0] = (max(24, 26));
            var_27 = var_13;
            var_28 = (min(var_28, ((+(max((arr_1 [i_0]), (arr_4 [i_0] [i_0] [14])))))));
            var_29 += ((((((~6160971007862154676) ? (((arr_17 [i_0]) ? -27 : (arr_9 [i_0] [i_5] [i_5]))) : (!-4)))) ? ((3072 ? (max(var_13, (arr_15 [i_0] [i_0]))) : var_12)) : (max((((21028 ? var_5 : 16471))), (max((arr_13 [i_0] [i_0] [i_0] [11] [i_5]), -2188270252364038309))))));
            arr_19 [i_0] [i_5] [i_5] = -3609658591101037846;
        }
        arr_20 [8] &= (min(118, 2719));
    }
    #pragma endscop
}
