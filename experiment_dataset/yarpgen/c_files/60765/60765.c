/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60765
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60765 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60765
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((var_1 ? (min((arr_3 [i_0] [i_0] [i_0]), var_10)) : ((((var_7 && (-13917 && var_7)))))));
                arr_6 [i_0] = ((var_9 - (min(-2097152, 12554055292187077586))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        {
                            arr_14 [i_3] = (((((var_5 ? (!111) : (arr_13 [i_0] [i_1 - 1] [i_0] [i_0])))) ? var_0 : ((((18446744073709551610 && (arr_10 [i_1 - 2] [i_2])))))));
                            var_12 += (18446744073709551610 * var_7);
                        }
                    }
                }
                var_13 = (min(var_13, 2778037407));
            }
        }
    }

    for (int i_4 = 3; i_4 < 8;i_4 += 1)
    {

        for (int i_5 = 0; i_5 < 11;i_5 += 1)
        {

            /* vectorizable */
            for (int i_6 = 1; i_6 < 8;i_6 += 1)
            {
                arr_23 [i_4] [i_5] [i_4] = 25703;
                var_14 = var_3;
            }
            var_15 = (((((var_1 == ((-122 ? 47374 : 0))))) != ((min((arr_16 [i_4]), ((max(var_11, 31))))))));
            var_16 = ((-(((((47381 ? -1488458787 : var_5))) ? (((var_6 ? -14 : var_0))) : ((var_0 ? (arr_21 [i_4] [i_4] [i_4] [i_4]) : 2778037412))))));
            arr_24 [i_4] [i_4] [i_5] = ((!(arr_15 [i_4])));
        }
        for (int i_7 = 0; i_7 < 11;i_7 += 1)
        {
            var_17 = 111;
            var_18 = ((~(arr_18 [i_4])));
        }
        arr_27 [i_4] [2] = ((((3 + -121) || 53633)) ? (((((arr_16 [i_4]) ? (arr_17 [i_4]) : 95)) << (1516929867 < 2778037428))) : -114);
    }
    #pragma endscop
}
