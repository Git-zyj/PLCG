/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58606
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58606 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58606
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 ^= (((((((var_3 ? var_3 : var_0)) - var_6))) ? (((!(((var_11 ? var_1 : 262143)))))) : ((var_3 ? var_13 : (min(var_10, var_12))))));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_15 = (max(var_15, (((((min(6, var_9))) ? var_13 : (arr_1 [i_0]))))));
        arr_2 [i_0] [i_0] = 0;
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 19;i_2 += 1) /* same iter space */
        {
            var_16 &= ((((((arr_7 [i_1] [i_2] [i_1]) ? (arr_7 [i_1] [i_2] [i_1]) : var_12))) - 262143));

            for (int i_3 = 1; i_3 < 16;i_3 += 1)
            {
                arr_11 [i_1] [i_2] [i_2] = 4294705157;
                arr_12 [i_2] [4] [i_1] [i_2] = (min((((var_5 ? (arr_7 [i_2] [i_2] [i_2]) : (arr_9 [i_2] [i_2])))), ((((arr_7 [i_3] [i_3 - 1] [i_3 - 1]) | (140737488355296 >= 122))))));
                var_17 = (min(((~(arr_7 [i_3] [i_3 - 1] [i_3 + 1]))), ((((arr_5 [i_1]) < ((max((arr_10 [i_1]), (arr_9 [i_2] [i_2])))))))));
                var_18 *= (arr_7 [i_3] [i_3 - 1] [i_3 - 1]);
            }
        }
        for (int i_4 = 0; i_4 < 19;i_4 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 17;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 19;i_7 += 1)
                    {
                        {
                            var_19 = var_5;
                            var_20 = (((((arr_19 [i_6 + 2] [i_7] [i_7] [i_6 + 2] [i_6 + 2]) & (arr_13 [i_1] [i_5] [i_5])))) ? (max((arr_18 [i_4]), (arr_18 [i_4]))) : ((((((arr_15 [i_6]) > var_9)) ? (min(7935, (arr_8 [i_4]))) : ((max(58264, var_10)))))));
                        }
                    }
                }
            }
            arr_22 [i_4] = ((~(arr_20 [i_1] [i_1] [i_1] [i_4] [i_4])));
            var_21 = (((((!(arr_6 [i_4] [i_1])))) >= ((max((arr_6 [i_1] [i_4]), (arr_6 [i_4] [i_4]))))));
        }
        var_22 = (max(var_22, ((min(((((min(var_4, (arr_7 [i_1] [i_1] [4])))) ? (((var_12 ? var_7 : 127))) : ((var_5 ? (arr_19 [i_1] [i_1] [i_1] [i_1] [i_1]) : (arr_17 [i_1] [i_1]))))), ((-1822481848 ? (arr_19 [i_1] [i_1] [i_1] [i_1] [i_1]) : (~2496656811))))))));
    }
    var_23 = (max(var_6, (((var_9 ^ var_4) ^ (var_0 ^ var_12)))));
    #pragma endscop
}
