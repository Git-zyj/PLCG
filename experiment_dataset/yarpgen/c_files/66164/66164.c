/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66164
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66164 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66164
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_17 += (min(-2287828610704211968, ((min(var_9, var_3)))));
                var_18 = (max(var_18, (((-(min(((min(1, (arr_2 [2] [i_1])))), (max(4095, var_15)))))))));
            }
        }
    }
    var_19 = (!var_7);

    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        var_20 &= (max((((~(!18158513697557839872)))), (min(var_3, (min(-13485, (arr_4 [i_2])))))));

        /* vectorizable */
        for (int i_3 = 1; i_3 < 10;i_3 += 1)
        {
            var_21 &= ((-(((!(arr_7 [1] [i_3]))))));

            for (int i_4 = 1; i_4 < 9;i_4 += 1)
            {
                arr_11 [i_4] [i_3 + 1] [i_2] = -146;
                var_22 = (min(var_22, -26665));
            }
            for (int i_5 = 0; i_5 < 11;i_5 += 1) /* same iter space */
            {
                arr_14 [i_5] |= ((!(arr_12 [i_5] [i_3 + 1] [i_5])));
                arr_15 [i_2] = ((!(arr_8 [i_2] [i_2] [i_3 + 1] [i_5])));
            }
            for (int i_6 = 0; i_6 < 11;i_6 += 1) /* same iter space */
            {
                arr_18 [i_2] [7] [i_6] = var_3;
                var_23 = (~4718251217096119110);
                arr_19 [i_6] [i_2] [i_2] [i_2] = (~var_2);
                var_24 &= -436294613605211943;
                arr_20 [i_2] [i_3] [i_2] = 27807;
            }

            for (int i_7 = 3; i_7 < 10;i_7 += 1)
            {
                arr_23 [i_2] [i_2] [6] &= ((~(arr_2 [18] [18])));
                var_25 = (max(var_25, (~-24)));
                var_26 += ((!(arr_7 [i_7 + 1] [i_3 + 1])));
                arr_24 [i_2] [i_2] [i_2] [8] &= ((!(arr_6 [0] [i_7 - 3] [i_7 - 1])));
            }
            var_27 |= -0;
            arr_25 [i_2] [i_3 + 1] [i_2] = (-(arr_4 [i_3 - 1]));
        }
        /* vectorizable */
        for (int i_8 = 0; i_8 < 11;i_8 += 1)
        {
            arr_29 [i_2] [i_8] = ((!(arr_28 [i_2] [i_8] [i_2])));
            var_28 = (max(var_28, (((-(arr_1 [i_8]))))));
            var_29 = (~var_1);
        }
        for (int i_9 = 0; i_9 < 11;i_9 += 1)
        {
            arr_32 [2] &= ((+(max((!27820), (~var_6)))));
            var_30 += (max(((min((min(var_7, var_8)), (arr_22 [i_9] [0] [0] [i_2])))), -var_4));
        }
        var_31 &= max(2047, 17060);
        var_32 = (max(var_32, ((((~(!7340)))))));
    }
    #pragma endscop
}
