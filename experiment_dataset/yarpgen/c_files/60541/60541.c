/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60541
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60541 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60541
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {

        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            var_12 = ((-1860527010 ? (max((((var_9 ? var_11 : var_4))), -6847661801074971249)) : (arr_2 [i_0] [i_0])));
            arr_4 [i_1] [i_1] [i_1] = ((min(var_11, (1860526994 + var_8))));
            var_13 = (((((((var_6 ? 65535 : 37)) & (((arr_2 [i_0] [i_0]) ? -22685 : var_0))))) ^ (min(((66 ^ (arr_3 [i_0] [i_1]))), (((var_10 << (((arr_1 [i_0] [14]) - 2025437809)))))))));
            var_14 &= ((((((arr_3 [i_0] [i_1 - 3]) ? (arr_3 [i_0] [i_1 - 3]) : (arr_1 [1] [i_1 - 3])))) ? ((((min(98, (arr_0 [i_1 - 2])))) ? (min(var_9, var_5)) : ((var_10 ? var_3 : 2071448230)))) : ((((var_4 + 3) | (arr_2 [i_1] [i_0]))))));
        }
        var_15 = min(((var_0 ? 2692176914 : -11)), var_5);
        var_16 = (arr_0 [i_0]);

        for (int i_2 = 1; i_2 < 22;i_2 += 1)
        {
            arr_9 [i_2] = (((((max((arr_0 [i_2]), var_10))) ^ (((arr_7 [i_0]) ? (arr_8 [i_0]) : 2008787581)))));
            var_17 = (max(var_3, ((var_4 * (((arr_0 [i_2]) ? var_2 : (arr_5 [i_2])))))));
        }
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            arr_12 [4] [i_0] = -var_11;
            arr_13 [i_0] [7] = ((((((arr_3 [i_3] [i_0]) ? (min((arr_2 [i_3] [4]), (arr_5 [i_3]))) : ((var_4 ? (arr_6 [i_0] [1]) : 66))))) ^ ((min(17609211553367790063, var_2)))));
            arr_14 [19] [i_3] = ((((max((min((arr_1 [i_0] [4]), 9223372036854775807)), var_3))) || (((arr_8 [i_0]) && (var_7 && 2223519065)))));

            for (int i_4 = 1; i_4 < 22;i_4 += 1) /* same iter space */
            {
                var_18 = (max(((45 ? var_11 : 1001)), (((min(29747, var_6))))));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 23;i_5 += 1)
                {
                    for (int i_6 = 3; i_6 < 19;i_6 += 1)
                    {
                        {
                            var_19 = var_5;
                            var_20 = (min((((arr_15 [i_0] [i_3] [i_4]) % (arr_15 [i_6 - 2] [i_4] [i_4 + 1]))), var_5));
                            var_21 = (min(var_21, (arr_20 [i_6 - 1] [i_6 - 1] [i_4 - 1])));
                            var_22 = var_6;
                        }
                    }
                }
            }
            for (int i_7 = 1; i_7 < 22;i_7 += 1) /* same iter space */
            {
                var_23 = ((((min((arr_19 [i_3] [i_3] [i_3] [i_7 - 1] [i_3] [6]), (arr_23 [i_7] [i_3] [i_7] [i_7 + 1])))) ? (arr_20 [i_7 - 1] [i_7 - 1] [i_7]) : (((arr_22 [i_0] [i_7 + 1] [i_0]) ? ((min(var_6, (arr_8 [i_0])))) : 46999))));
                arr_24 [i_7] = (max((((-var_0 * (((arr_0 [i_0]) ? -21777 : (arr_0 [i_0])))))), (((arr_19 [i_0] [i_0] [i_3] [i_0] [i_0] [i_0]) + var_1))));
                var_24 = ((((max((arr_5 [i_7]), (arr_5 [i_7])))) ^ ((max((arr_5 [i_7]), (arr_5 [i_7]))))));
            }
        }
        var_25 = ((((((arr_7 [i_0]) ? (1 < var_7) : (3865715596 != 182)))) | ((2223519065 << (((max((arr_23 [i_0] [i_0] [i_0] [i_0]), (arr_8 [i_0]))) - 6262236288009990980))))));
    }
    for (int i_8 = 0; i_8 < 11;i_8 += 1)
    {
        var_26 = (max((-9223372036854775807 - 1), ((min(1, (17382 >= 1))))));
        arr_29 [i_8] [i_8] = (((((1 ? (((arr_26 [i_8]) ? 22010 : var_1)) : ((max(var_1, var_3)))))) / (min(244, -7379566286089957054))));
    }
    for (int i_9 = 0; i_9 < 16;i_9 += 1)
    {
        var_27 = (min(-4286792009394708881, ((((68 && -6498598928519113225) && var_8)))));
        var_28 = (((((((max(6123661391084101815, (arr_5 [i_9])))) ? var_8 : ((((arr_18 [i_9] [i_9] [22] [i_9] [i_9]) == var_0)))))) ? (max(1, (894062575 * var_5))) : ((((((var_11 ? (arr_10 [i_9] [i_9] [i_9]) : var_6))) ? var_8 : ((min(var_3, var_0))))))));
        var_29 *= (((((arr_19 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9]) || (arr_30 [i_9]))) ? (((arr_2 [i_9] [i_9]) ? 2223519065 : (arr_19 [i_9] [i_9] [i_9] [17] [i_9] [i_9]))) : (min((arr_1 [i_9] [i_9]), (arr_19 [i_9] [1] [i_9] [i_9] [i_9] [10])))));
    }
    var_30 = (min(var_5, var_5));

    /* vectorizable */
    for (int i_10 = 0; i_10 < 19;i_10 += 1)
    {
        var_31 = ((((2692176914 >> (22864 - 22860))) < 22275));
        arr_35 [i_10] = ((var_4 ? var_11 : var_8));
    }
    var_32 += (-17106 ? ((((var_9 < var_8) ? (867821304 / var_4) : var_2))) : ((min(var_5, var_2))));
    #pragma endscop
}
