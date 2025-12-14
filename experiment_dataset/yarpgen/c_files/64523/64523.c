/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64523
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64523 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64523
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 *= var_3;

    for (int i_0 = 1; i_0 < 22;i_0 += 1) /* same iter space */
    {
        var_16 = (i_0 % 2 == zero) ? ((((((!((min(var_6, (arr_2 [i_0]))))))) >> ((((((min(21681, 43846))) ? (arr_1 [i_0]) : (!24295))) - 41434))))) : ((((((!((min(var_6, (arr_2 [i_0]))))))) >> ((((((((min(21681, 43846))) ? (arr_1 [i_0]) : (!24295))) - 41434)) + 36471)))));
        var_17 = (((arr_1 [i_0]) ? -var_2 : ((((((arr_2 [i_0]) >> (21677 - 21652))) != (arr_2 [i_0]))))));
    }
    for (int i_1 = 1; i_1 < 22;i_1 += 1) /* same iter space */
    {
        var_18 = 59879;
        var_19 = (!45824);
        var_20 = (min(var_20, -18284));
        var_21 *= var_1;
        arr_7 [i_1] [i_1] = 33699;
    }
    for (int i_2 = 1; i_2 < 22;i_2 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_3 = 1; i_3 < 21;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 23;i_4 += 1)
            {
                for (int i_5 = 3; i_5 < 23;i_5 += 1)
                {
                    {
                        var_22 *= arr_2 [22];
                        var_23 = (((arr_15 [i_4 + 1] [i_2] [i_4]) ? (arr_15 [i_4 + 1] [i_2] [i_4]) : ((min((arr_15 [i_4 - 2] [i_2] [i_4]), (arr_15 [i_4 - 1] [i_2] [i_4]))))));
                        var_24 = 50330;
                    }
                }
            }
        }
        var_25 = ((((((((var_2 ? (arr_17 [i_2] [i_2 - 1] [i_2]) : var_9))) || ((var_13 >= (arr_21 [12] [i_2] [i_2 + 2] [i_2] [i_2])))))) + (min(((min(21140, var_7))), -var_11))));
        var_26 *= (10759 && 10262);
        var_27 = var_3;
    }
    for (int i_6 = 1; i_6 < 22;i_6 += 1) /* same iter space */
    {
        var_28 = (((((arr_1 [i_6]) ? var_10 : (arr_9 [i_6] [i_6]))) & ((43844 ? var_7 : 21694))));
        arr_26 [i_6] = ((+((min((arr_10 [i_6 - 1]), (arr_10 [i_6 + 2]))))));
        arr_27 [i_6] [i_6] = arr_16 [i_6] [i_6] [i_6 - 1] [i_6 + 1];
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 24;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 24;i_8 += 1)
            {
                {

                    for (int i_9 = 0; i_9 < 24;i_9 += 1)
                    {
                        var_29 = ((21668 ? 60945 : ((((45845 ? 8989 : 54751))))));
                        var_30 |= ((((min((arr_35 [i_7] [i_7] [i_7] [i_7] [i_8] [i_9]), (arr_35 [i_8] [i_6 - 1] [i_7] [0] [i_6 - 1] [2])))) ? ((((arr_35 [i_7] [i_7] [i_8] [i_8] [i_9] [i_9]) || (arr_35 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7])))) : (((!(arr_35 [i_7] [i_8] [i_8] [i_9] [i_9] [i_7]))))));
                        arr_37 [i_6] [i_6] [i_7] [i_6] [i_6] = ((!((min((arr_9 [i_6] [i_6]), 65515)))));
                        var_31 = (max(var_31, (((-((min((arr_13 [i_6] [i_6 + 1]), (arr_23 [i_7])))))))));
                    }
                    for (int i_10 = 0; i_10 < 24;i_10 += 1)
                    {
                        var_32 = ((((!((min((arr_31 [i_6] [i_8] [i_6]), 63885))))) ? var_8 : (min(((var_7 << (var_12 - 33697))), (((arr_24 [i_6]) % 32481))))));
                        var_33 = (min(var_33, (((((min((arr_19 [i_8] [i_7]), (max(var_3, 42669))))) ? ((((43311 ? 14932 : 56528)))) : (~65515))))));
                        var_34 = (max(var_34, ((((-(arr_17 [i_6 + 1] [i_6 - 1] [i_6])))))));
                    }
                    var_35 -= arr_12 [i_8];
                    var_36 = (10783 ^ 21768);
                }
            }
        }
    }
    var_37 = var_8;
    #pragma endscop
}
