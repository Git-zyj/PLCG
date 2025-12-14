/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72233
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72233 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72233
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_17;
    var_19 *= -var_6;
    var_20 ^= var_9;

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 10;i_3 += 1)
                    {
                        var_21 = ((-(((!65464) ? (((15980 ? (arr_3 [i_1] [i_3 + 1]) : 1))) : (~var_5)))));
                        var_22 = (arr_4 [i_2]);
                    }
                    var_23 = ((~((var_0 ^ (arr_9 [i_0] [i_1] [i_2])))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_4 = 1; i_4 < 12;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 13;i_5 += 1)
            {
                {
                    var_24 = ((((27271 ? (arr_9 [i_5] [i_4 + 1] [i_0]) : 10346)) > (arr_4 [i_0])));

                    for (int i_6 = 0; i_6 < 13;i_6 += 1)
                    {
                        var_25 = (-32767 - 1);
                        var_26 = 951552547;
                        var_27 = -519217874;
                        var_28 = 15980;
                    }
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        var_29 = (arr_15 [i_0] [i_0] [i_0] [i_0]);
                        var_30 = (max(var_30, ((((((var_8 ? (arr_1 [i_0] [i_4 + 1]) : (arr_1 [i_7] [i_4 - 1])))) == (~1765867610))))));
                    }
                }
            }
        }
        var_31 = (~2596126386);
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 1;i_8 += 1)
    {
        var_32 = ((arr_24 [i_8]) >= (arr_24 [i_8]));
        var_33 = (((arr_23 [i_8] [i_8]) + (arr_24 [i_8])));
        /* LoopNest 2 */
        for (int i_9 = 3; i_9 < 22;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 23;i_10 += 1)
            {
                {
                    var_34 = (i_8 % 2 == zero) ? ((((arr_24 [i_8]) << ((((3965344941 ? (arr_23 [i_8] [i_8]) : (arr_31 [i_8] [i_9 - 3] [i_10] [i_8]))) - 142))))) : ((((arr_24 [i_8]) << ((((((3965344941 ? (arr_23 [i_8] [i_8]) : (arr_31 [i_8] [i_9 - 3] [i_10] [i_8]))) - 142)) - 82)))));
                    var_35 = -13;
                    var_36 = var_10;
                }
            }
        }
        var_37 = (((arr_26 [i_8] [i_8] [i_8]) ? (arr_26 [i_8] [i_8] [i_8]) : var_14));
    }
    for (int i_11 = 3; i_11 < 16;i_11 += 1)
    {
        var_38 = (((((1 ? var_2 : 10))) ? ((61088 ? (arr_31 [i_11 - 2] [i_11 + 3] [i_11] [i_11 + 3]) : (arr_31 [i_11] [i_11 - 2] [i_11] [i_11 - 2]))) : (((arr_31 [i_11] [i_11 + 3] [i_11] [i_11]) % var_3))));
        var_39 = ((min((arr_29 [i_11] [0] [i_11] [i_11 - 3]), var_9)));
        var_40 = (max(var_40, 1698840910));
    }
    var_41 ^= var_4;
    #pragma endscop
}
