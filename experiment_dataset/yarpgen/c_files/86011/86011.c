/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86011
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86011 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86011
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((-(((var_14 + 7339351664441428593) - ((-2147483647 ? var_5 : 268435454))))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_20 = ((!(((((~(arr_1 [i_0]))) + ((-(arr_1 [i_0]))))))));
        var_21 = (((-((((arr_1 [i_0]) != var_6))))));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    var_22 ^= (~65534);
                    var_23 *= ((max((max(7339351664441428593, 15360)), -6)));
                }
            }
        }
    }
    for (int i_3 = 1; i_3 < 10;i_3 += 1)
    {

        for (int i_4 = 4; i_4 < 11;i_4 += 1)
        {
            arr_13 [i_3] = 268435449;
            arr_14 [i_3] [i_3] [i_4 - 4] = arr_9 [i_3 - 1] [i_4];
            var_24 = (arr_8 [i_3 + 1]);
            var_25 = ((36 ? ((~((var_18 ? 552490837 : var_3)))) : ((max((((arr_2 [i_3] [i_3]) << (-6377260329374132999 + 6377260329374133014))), (-1 + 9))))));
        }
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 0;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 12;i_6 += 1)
            {
                {
                    arr_20 [i_3] [i_5 + 1] [i_3] = ((+(((-268435455 < (((-2147483647 - 1) ? 54293 : var_18)))))));
                    var_26 *= var_17;
                    var_27 = (((-(~7))));

                    /* vectorizable */
                    for (int i_7 = 1; i_7 < 10;i_7 += 1)
                    {
                        var_28 = ((-18446744073709551615 + ((((arr_0 [i_5]) * 0)))));
                        arr_23 [i_3] [i_5 + 1] [i_3] = ((268435433 == (-16 + 0)));
                        arr_24 [i_3] [i_5] [i_6] [i_7] = (((arr_2 [i_3 + 2] [i_7]) ? 6100844188642663437 : var_11));
                    }
                    arr_25 [i_3 + 2] [i_3] [i_6] = ((-9 || ((((max(var_11, 0)) - (!1))))));
                }
            }
        }
        arr_26 [i_3] = ((~((~(((arr_7 [i_3] [i_3]) % -32))))));
    }
    #pragma endscop
}
