/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65396
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65396 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65396
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 ^= var_11;
    var_14 = ((var_7 ? ((((var_5 ? var_4 : var_2)))) : (min((((-32767 - 1) - var_2)), (var_5 < var_12)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            {
                var_15 ^= (3980049341388521220 + 1961876630103453563);
                var_16 = (max(var_16, ((((max(((var_1 ? var_4 : var_11)), 16484867443606098052)) + (arr_1 [i_0]))))));

                for (int i_2 = 0; i_2 < 13;i_2 += 1) /* same iter space */
                {
                    var_17 = (min((min(var_9, ((((arr_6 [i_0] [i_0]) | var_8))))), -407387291));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_18 = var_12;
                                var_19 = (((((((6667561006063680564 ? (arr_6 [i_0] [i_1]) : -1))))) >= (max(((2128261532 ? (-9223372036854775807 - 1) : -329869320)), (arr_6 [i_1 - 1] [i_1 - 3])))));
                            }
                        }
                    }
                }
                for (int i_5 = 0; i_5 < 13;i_5 += 1) /* same iter space */
                {
                    var_20 = 1961876630103453563;
                    var_21 *= ((12902257443259392773 >> (((((2911711951 ? -278911375 : 14876127835385429948))) ? (0 <= var_6) : 1961876630103453563))));
                    var_22 = (~18446744073709551597);
                }
                /* vectorizable */
                for (int i_6 = 0; i_6 < 13;i_6 += 1) /* same iter space */
                {
                    var_23 *= ((162616103229966762 >= ((((96 >= (arr_17 [i_0] [i_0])))))));
                    arr_18 [2] [i_1] [2] = (!-7903);
                }
                /* vectorizable */
                for (int i_7 = 0; i_7 < 13;i_7 += 1) /* same iter space */
                {
                    var_24 = (max(var_24, (!var_11)));
                    arr_21 [i_1] = ((!(arr_2 [i_0] [2] [i_7])));
                }
            }
        }
    }
    #pragma endscop
}
