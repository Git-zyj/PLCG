/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66308
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66308 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66308
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_3 [i_0] = (max((arr_0 [i_0]), (((1 ? -8179549799783969917 : 11662)))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    var_12 = min((max(var_6, (arr_4 [i_0]))), 226);
                    var_13 = (max((var_11 * var_10), ((186 ? (arr_0 [i_0]) : ((var_1 ? 5114280791711541415 : var_8))))));
                    var_14 = 65314;
                    var_15 = (((((~(arr_0 [i_0])))) ? (((var_11 ? -4294967287 : (var_6 & var_0)))) : ((var_6 ? (((arr_6 [i_0] [i_1]) ? var_0 : var_5)) : var_0))));

                    for (int i_3 = 1; i_3 < 12;i_3 += 1) /* same iter space */
                    {
                        arr_11 [i_0] [i_1] [i_0] [i_1] [i_0] [i_0] = var_2;
                        var_16 ^= -780961543;
                        var_17 = 3555650162;
                        var_18 = ((min(202, (arr_9 [i_0] [i_0] [i_2 - 1] [i_0] [i_3 + 1]))));
                    }
                    for (int i_4 = 1; i_4 < 12;i_4 += 1) /* same iter space */
                    {

                        for (int i_5 = 1; i_5 < 10;i_5 += 1) /* same iter space */
                        {
                            var_19 = (max((((arr_15 [i_5 + 3] [i_2 - 1] [i_0] [i_0] [i_0] [i_0]) / (arr_14 [i_2] [i_1] [i_1]))), ((((arr_15 [i_5 - 1] [i_2 - 1] [i_0] [i_0] [i_2] [i_0]) ? (arr_14 [1] [1] [1]) : (arr_14 [i_2] [i_2] [i_2]))))));
                            var_20 = var_2;
                        }
                        for (int i_6 = 1; i_6 < 10;i_6 += 1) /* same iter space */
                        {
                            arr_20 [i_0] [i_0] = 249;
                            var_21 = (arr_5 [i_6 + 3] [i_4 - 1] [i_1]);
                            var_22 = (max(1418895952, 65310));
                            var_23 = (min(var_23, ((((min((20965 | 40), (~var_3))) ^ (((arr_13 [i_4 - 1] [i_1] [i_2 - 1] [i_1] [i_2 - 1]) ? (arr_13 [i_4 + 1] [i_1] [0] [i_1] [i_2 - 1]) : var_2)))))));
                        }
                        for (int i_7 = 1; i_7 < 10;i_7 += 1) /* same iter space */
                        {
                            arr_24 [i_0] [i_0] [i_0] [i_0] [i_0] = ((((((max(11185, (arr_9 [i_0] [i_0] [i_0] [i_0] [i_0])))) ^ (arr_17 [i_0] [i_0] [i_2 - 1] [i_0]))) != (((((var_5 > (arr_12 [i_0] [i_0] [i_0])))) & 1))));
                            var_24 = (((arr_2 [i_0]) != var_9));
                        }
                        arr_25 [i_0] = ((((min((arr_23 [i_2 - 1] [10] [i_2 - 1] [i_2] [i_4 + 1] [i_0]), 6539000989827737179))) ? (((((min(194, 18005552318546386326))) ? (arr_13 [i_2] [i_2 - 1] [i_2 - 1] [i_0] [7]) : 225))) : ((((((arr_18 [i_1] [i_4]) ? 65306 : 1777342818))) ? (min((arr_12 [i_1] [i_2] [i_0]), var_0)) : 1))));
                    }
                    for (int i_8 = 1; i_8 < 12;i_8 += 1) /* same iter space */
                    {
                        arr_29 [i_0] [i_0] [i_0] = (((var_1 ? ((min(50023, 65309))) : (arr_7 [i_0] [i_0]))));
                        var_25 = ((((min((arr_8 [i_2 - 1] [i_2 - 1] [i_0]), (arr_8 [i_2 - 1] [i_2 - 1] [i_0])))) ? (arr_15 [i_0] [i_2 - 1] [i_2 - 1] [i_0] [i_2 - 1] [i_8]) : (((arr_8 [i_2 - 1] [i_2 - 1] [i_0]) ? (arr_15 [i_2] [i_2] [i_2] [i_0] [i_0] [i_8]) : (arr_15 [i_2] [i_2] [i_2] [i_0] [i_2] [i_2 - 1])))));
                    }
                }
            }
        }
        var_26 = (max(253, 1));
    }
    var_27 = (min((~1), var_4));
    #pragma endscop
}
