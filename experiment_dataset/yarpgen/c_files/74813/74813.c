/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74813
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74813 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74813
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_18 = arr_0 [i_0];
        var_19 = -2097151;
        arr_2 [i_0] [i_0] = (arr_0 [i_0]);
        var_20 = ((5 ? 4292870144 : 43436734139544123));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 7;i_1 += 1)
    {
        arr_6 [8] = ((!(arr_5 [i_1 + 3])));
        arr_7 [i_1 + 3] = -43436734139544124;
        arr_8 [i_1 + 2] = (!5428418734016855729);
    }
    for (int i_2 = 3; i_2 < 7;i_2 += 1)
    {
        var_21 ^= (arr_10 [i_2] [i_2 + 2]);

        for (int i_3 = 0; i_3 < 11;i_3 += 1) /* same iter space */
        {
            var_22 = (max(var_22, ((min((((((3835600846174165205 ? 1 : var_3))) ? (68 || var_1) : (arr_0 [i_3]))), (!43436734139544147))))));
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 11;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 1;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 11;i_6 += 1)
                    {
                        {
                            arr_22 [i_6] [i_4] [i_3] [i_2] = (arr_1 [i_2] [i_2 + 2]);
                            arr_23 [i_6] [i_2] [i_5 - 1] [i_4] [i_3] [i_2] [i_2] = ((var_2 ? ((-43436734139544123 ^ (((17037770633592376108 ? (arr_17 [i_2] [i_3] [i_5 - 1] [i_6]) : (-32767 - 1)))))) : -4858));
                            var_23 = (min(var_23, 3835600846174165205));
                            var_24 = (min(var_24, ((min((arr_20 [i_5 - 1] [i_5] [i_5 - 1] [i_4] [i_4] [i_2 - 2]), -4999775727479996784)))));
                        }
                    }
                }
            }

            for (int i_7 = 2; i_7 < 10;i_7 += 1)
            {
                var_25 ^= 652497948;
                var_26 ^= (arr_0 [i_7 + 1]);
            }
            /* vectorizable */
            for (int i_8 = 4; i_8 < 9;i_8 += 1)
            {
                var_27 = var_9;
                arr_29 [i_2] [i_2] [i_2] = ((!(((~(arr_21 [i_2] [i_2] [i_2] [i_2] [i_2 - 2] [i_2]))))));
                var_28 ^= (((arr_14 [i_8 - 3] [i_2 + 2] [i_2] [i_2 + 4]) ? (arr_14 [i_8 - 3] [i_2 + 2] [i_2] [i_2]) : (arr_14 [i_8 - 3] [i_2 + 2] [i_2] [i_2])));
            }
        }
        /* vectorizable */
        for (int i_9 = 0; i_9 < 11;i_9 += 1) /* same iter space */
        {
            var_29 = (arr_24 [i_2] [i_9] [i_2 + 1]);
            var_30 = ((-3835600846174165206 ? -1284597960468350266 : -3835600846174165206));
            var_31 = (arr_18 [i_2] [i_2]);
            var_32 = ((!(arr_31 [i_2 - 3] [i_2 - 3])));
            var_33 ^= (arr_19 [i_9] [i_9]);
        }
        var_34 ^= ((((max(2097138, (arr_14 [i_2] [i_2] [i_2] [6])))) - ((-43436734139544124 / (arr_15 [i_2 + 4])))));
        var_35 ^= (min((min(11777789749667245922, 0)), ((max(((-3835600846174165191 ? 3835600846174165215 : 3835600846174165206)), (var_0 - 43436734139544123))))));
        arr_33 [6] = (arr_0 [i_2]);
    }
    var_36 ^= var_6;
    #pragma endscop
}
