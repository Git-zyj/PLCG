/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63833
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63833 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63833
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] = ((((!(arr_0 [i_0 - 1]))) ? (max((arr_3 [i_0]), 26)) : ((((((min((arr_1 [i_0]), -43))) == var_5))))));

                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        var_11 *= ((-(-43 - -9223372036854775789)));
                        var_12 = (((44 / (arr_9 [i_0 - 1] [i_1] [3] [3] [i_0] [i_3]))));

                        for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
                        {
                            arr_14 [i_0] = (((~(arr_5 [i_0] [i_2] [i_3]))));
                            var_13 ^= (((((44 >= 39) <= (arr_8 [i_0] [i_1] [i_3] [i_3]))) ? 4764589523764400581 : (var_5 < 511)));
                        }
                        for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
                        {
                            var_14 = (min(var_14, (((!(((min((arr_2 [0]), var_3)) < (60 - var_6))))))));
                            var_15 = (((((~((1846767184 ? (arr_5 [i_0] [i_5] [i_5]) : var_9))))) ? (((~(((!(arr_9 [i_5] [3] [6] [i_5] [i_0] [i_5]))))))) : (arr_3 [i_5])));
                            arr_17 [i_0] [i_3] [i_0 - 1] [i_0] &= ((var_8 ? ((((arr_15 [0] [i_1] [i_1] [i_5]) ^ (arr_5 [i_3] [i_1] [i_2])))) : (((~var_0) | 3))));
                            var_16 = ((~(((((var_4 ? var_6 : 2827125847631189015)) < (arr_13 [i_5] [i_0] [5] [16] [i_0]))))));
                        }
                    }
                    for (int i_6 = 4; i_6 < 16;i_6 += 1)
                    {

                        for (int i_7 = 1; i_7 < 17;i_7 += 1)
                        {
                            var_17 = (arr_0 [i_7 + 3]);
                            var_18 = (max(var_18, ((((((((((arr_20 [1]) > 31261)))) < (-26 / -8912882905219807409))) || ((!(arr_9 [i_7 - 1] [i_7] [i_7 - 1] [i_7 - 1] [6] [i_7 - 1]))))))));
                        }
                        arr_24 [i_0] [i_0 - 1] [3] = (min((max(0, 1512373208)), (31261 || 44)));
                        var_19 = (((((var_0 ? ((8601 ? var_6 : (arr_16 [i_2] [i_2] [i_2] [i_2] [i_2] [11] [i_2]))) : -8610380006885556759))) ? (((arr_18 [3] [i_6 - 2] [i_6 - 4] [i_6 + 4] [i_6 + 2]) % (arr_18 [i_6] [i_6 + 2] [i_6 + 2] [i_6 + 4] [i_6 - 3]))) : (((((3803613941 ? (arr_19 [i_6] [i_0] [i_0]) : -45)))))));
                        var_20 = (((arr_7 [i_0] [i_0] [i_0 - 1] [i_0 - 1]) ? ((0 ^ (29876 & -6281))) : 65534));
                    }
                    var_21 = (max(var_21, (((!(~var_0))))));
                    var_22 = (((((arr_12 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1]) < (arr_21 [2] [i_2] [i_0 - 1] [4]))) ? (-9223372036854775807 - 1) : 66));
                }
                var_23 = var_10;
            }
        }
    }
    var_24 = var_0;
    #pragma endscop
}
