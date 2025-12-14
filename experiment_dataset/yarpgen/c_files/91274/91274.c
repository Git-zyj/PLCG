/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91274
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91274 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91274
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, ((min(var_1, var_16)))));

    for (int i_0 = 1; i_0 < 12;i_0 += 1) /* same iter space */
    {
        var_21 ^= (max((((~var_7) % (((max(36, 36)))))), (((219 > ((min(var_18, 1))))))));
        arr_3 [i_0] [i_0] = ((!((((((-1 ? -25612 : 0))) ? var_5 : ((max((arr_2 [i_0 - 1]), var_12))))))));
        var_22 = ((((((132 ? (arr_2 [i_0]) : var_14)) == (~var_18))) || var_6));
    }
    for (int i_1 = 1; i_1 < 12;i_1 += 1) /* same iter space */
    {
        var_23 = (min(var_23, ((max((~0), -1)))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            for (int i_3 = 4; i_3 < 14;i_3 += 1)
            {
                {
                    var_24 -= ((104 ? var_17 : (((arr_12 [i_1 - 1] [i_2] [i_3 - 4]) ? (arr_12 [i_1 - 1] [i_2] [i_3 - 3]) : var_10))));
                    arr_13 [i_1] [i_2] [i_1] [i_1] = ((~(arr_11 [i_1])));
                    var_25 = (((arr_2 [i_1 + 1]) ? (arr_2 [i_1 - 1]) : 37));
                }
            }
        }
    }
    for (int i_4 = 1; i_4 < 12;i_4 += 1) /* same iter space */
    {
        arr_16 [i_4] [2] = (max((!5715202033164663420), ((1448904720 ? (var_4 ^ -102) : (var_1 & -6863)))));
        var_26 *= var_11;
    }
    for (int i_5 = 1; i_5 < 12;i_5 += 1) /* same iter space */
    {
        arr_19 [i_5] = (((var_18 & (~101))));
        /* LoopNest 2 */
        for (int i_6 = 1; i_6 < 14;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 15;i_7 += 1)
            {
                {
                    var_27 = (min(var_27, -102));
                    arr_24 [i_5] [4] [4] &= ((~(1 || var_3)));
                    var_28 -= var_9;

                    for (int i_8 = 1; i_8 < 1;i_8 += 1)
                    {
                        var_29 = (max(var_29, ((((arr_27 [i_8] [i_7] [i_6] [i_5 - 1] [i_5 - 1]) ? (min(((max(var_15, -102))), var_11)) : (((max(((max(1, 1))), 255)))))))));
                        var_30 = (min(var_30, var_7));
                        var_31 = (max(var_31, ((((min((var_7 & 23976), 4))) ? (~104) : var_16))));
                        arr_28 [i_5] [i_6] [i_7] [i_5] = (4 - 1442);
                        arr_29 [i_5] [i_5] [i_6] [i_6] [i_7] [i_8] = 1;
                    }
                    var_32 = (arr_26 [i_6] [i_6]);
                }
            }
        }
    }
    var_33 = (((~(~-1))));
    #pragma endscop
}
