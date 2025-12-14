/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60890
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60890 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60890
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_5 [i_1] = ((((((((arr_2 [i_1]) * 216))) ? 1438416717616489187 : var_4)) != ((max(var_7, (min(11, (arr_1 [i_1]))))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 18;i_3 += 1)
                    {
                        {
                            var_15 = var_13;
                            arr_10 [i_0 + 1] [i_1] [i_0 + 1] [i_2] [0] = (min(var_3, ((min(var_4, (arr_9 [i_3 + 3] [i_3 + 3] [i_3 + 3] [7]))))));
                        }
                    }
                }
                var_16 = (max(var_16, ((min(((((((min(var_4, -118)))) > (max((arr_8 [i_1] [i_1] [i_1] [i_1] [20]), -120))))), (max((arr_2 [i_1]), ((max((arr_7 [i_0 + 2] [1] [15]), var_10))))))))));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 22;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        {

                            for (int i_6 = 0; i_6 < 22;i_6 += 1) /* same iter space */
                            {
                                arr_18 [i_0 - 1] [i_1] [i_0 - 1] [i_5] [i_6] = ((((((arr_11 [i_0 + 2]) ? (arr_11 [i_0 + 2]) : 3760810696))) <= (max((arr_11 [i_0 + 1]), var_13))));
                                arr_19 [i_1] [i_1] [i_1] [i_4] [i_5] [5] [i_6] = (i_1 % 2 == 0) ? ((min((((((arr_4 [2] [i_0]) & var_13)) * (arr_8 [i_0 + 1] [i_1] [0] [i_6] [i_6]))), (((arr_7 [i_0] [i_0 + 2] [i_4]) & (((((arr_12 [20] [i_1] [20] [19]) + 9223372036854775807)) << (var_6 - 30)))))))) : ((min((((((arr_4 [2] [i_0]) & var_13)) * (arr_8 [i_0 + 1] [i_1] [0] [i_6] [i_6]))), (((arr_7 [i_0] [i_0 + 2] [i_4]) & (((((((arr_12 [20] [i_1] [20] [19]) - 9223372036854775807)) + 9223372036854775807)) << (var_6 - 30))))))));
                                var_17 = (min(var_13, (((-(arr_13 [i_6] [15] [i_4] [15] [6] [15]))))));
                                var_18 = (max((max((arr_2 [i_0]), (var_4 / 2147483647))), ((((((((arr_1 [i_5]) + 2147483647)) << (((arr_2 [i_0]) - 4560932313772192651)))) >> (((arr_2 [i_0 - 1]) - 4560932313772192626)))))));
                            }
                            for (int i_7 = 0; i_7 < 22;i_7 += 1) /* same iter space */
                            {
                                var_19 = (max((arr_17 [i_7]), (!var_3)));
                                arr_23 [i_1] [13] = (arr_8 [i_7] [i_1] [i_7] [i_5] [i_7]);
                                arr_24 [i_0] [i_0 - 1] [i_0] [i_4] [i_1] [1] = ((+(min(((var_12 ? (arr_11 [16]) : (arr_4 [i_4] [i_4]))), (arr_14 [i_0] [18] [i_7])))));
                            }
                            arr_25 [i_1] = (max(((max((((arr_20 [i_5] [i_1] [i_1] [i_0 + 2] [i_0 + 2]) >> (65535 - 65476))), 65529))), (((!32) / (arr_2 [i_0 + 1])))));
                            var_20 = ((((((min((arr_13 [i_0] [i_0] [i_0] [i_0 - 1] [20] [i_0]), var_3))) ? (arr_7 [i_0 - 1] [i_0 - 1] [i_0]) : (arr_22 [15] [i_0 - 2] [0] [i_0 - 2] [i_5] [i_0 - 2]))) == ((~(arr_0 [i_0])))));
                        }
                    }
                }
                var_21 = min(7, 84);
            }
        }
    }
    #pragma endscop
}
