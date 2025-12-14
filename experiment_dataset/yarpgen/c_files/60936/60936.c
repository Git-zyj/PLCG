/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60936
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60936 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60936
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    for (int i_4 = 2; i_4 < 19;i_4 += 1)
                    {
                        {
                            var_15 = var_5;
                            var_16 = (2 || 2845907820);
                        }
                    }
                }
            }
            var_17 = (((min(((2888015262 ? 15900016413228411180 : 239)), ((var_14 ? 2546727660481140435 : 81)))) - (((-(arr_1 [i_0] [i_0]))))));
        }
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 23;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 23;i_6 += 1)
            {
                {
                    var_18 ^= ((((((arr_2 [4]) >= (~var_14)))) >> (((min(var_6, (var_7 ^ var_0))) + 129))));
                    arr_22 [i_0] [i_0] = var_3;
                }
            }
        }

        for (int i_7 = 0; i_7 < 23;i_7 += 1)
        {
            var_19 = (max(var_19, (max((arr_16 [i_0] [6] [6] [i_0] [10] [i_7] [i_7]), (((arr_16 [i_0] [i_7] [i_7] [i_7] [0] [i_7] [i_7]) / (arr_10 [1] [1])))))));
            arr_25 [i_0] [17] = ((0 ? 1 : 720376445));
            arr_26 [i_0] [i_0] [i_0] = ((3574590837 ? -var_10 : ((((var_7 ? 7853684061309250215 : (arr_21 [i_0]))) * -var_3))));
        }
    }
    for (int i_8 = 0; i_8 < 17;i_8 += 1) /* same iter space */
    {
        var_20 = (min(var_20, (arr_1 [i_8] [i_8])));
        arr_30 [i_8] [1] = (((((var_0 ? (arr_12 [i_8] [i_8] [i_8] [i_8] [4]) : (arr_12 [i_8] [i_8] [i_8] [i_8] [i_8])))) ? ((var_2 ? var_5 : (arr_12 [i_8] [i_8] [i_8] [i_8] [i_8]))) : ((min((arr_12 [i_8] [i_8] [i_8] [i_8] [i_8]), (arr_12 [i_8] [i_8] [i_8] [16] [i_8]))))));
        arr_31 [i_8] [i_8] = (((min((arr_24 [i_8] [i_8]), 109)) >> ((((var_4 ? var_6 : ((34 ? (arr_9 [4]) : var_3)))) - 4294967180))));
        var_21 = (((((arr_8 [i_8] [18] [i_8] [i_8]) == ((max(var_3, var_10))))) ? ((var_2 ? ((var_5 ? var_10 : 18376059440059390910)) : ((((arr_15 [i_8]) ? (arr_10 [i_8] [22]) : var_3))))) : ((max((arr_10 [i_8] [i_8]), 2490692024)))));
    }
    for (int i_9 = 0; i_9 < 17;i_9 += 1) /* same iter space */
    {
        var_22 = (min(var_2, ((var_12 ? (((var_13 / (arr_28 [i_9] [i_9])))) : -var_1))));
        var_23 ^= (5 != (((((var_2 ^ (arr_14 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9] [i_9])))))));
        /* LoopNest 2 */
        for (int i_10 = 1; i_10 < 1;i_10 += 1)
        {
            for (int i_11 = 1; i_11 < 16;i_11 += 1)
            {
                {
                    var_24 = (((((var_12 ? var_12 : 0))) % var_4));
                    arr_41 [i_10] [1] [i_11 + 1] = var_11;
                    var_25 = (min(var_25, (arr_20 [i_9])));
                }
            }
        }
        arr_42 [i_9] |= (min(var_3, (min((arr_18 [i_9]), 24))));
    }
    for (int i_12 = 0; i_12 < 17;i_12 += 1) /* same iter space */
    {
        arr_45 [i_12] = 281474974613504;
        arr_46 [i_12] = (arr_34 [i_12] [i_12]);
        var_26 ^= ((-(arr_12 [i_12] [14] [i_12] [i_12] [i_12])));
    }
    var_27 = var_10;
    var_28 = ((min(var_12, (-32756 && var_12))));
    #pragma endscop
}
