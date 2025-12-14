/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99914
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99914 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99914
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        var_12 = ((var_8 ? 1007462266 : ((7251076737935373599 & (arr_1 [i_0] [i_0])))));
        arr_3 [i_0] [i_0] = (arr_2 [i_0 - 1] [i_0 - 1]);
        var_13 = (((var_9 > 941762178) + var_11));

        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                arr_9 [i_0] [i_1] = (~1377059540);
                /* LoopNest 2 */
                for (int i_3 = 3; i_3 < 9;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 10;i_4 += 1)
                    {
                        {
                            var_14 = ((arr_5 [i_2] [i_0 + 2] [i_0]) ? 1 : 1);
                            var_15 *= ((((261120 ? (arr_2 [i_0] [i_0]) : (arr_11 [i_0] [i_1] [i_1] [i_2] [i_3] [i_4]))) <= (arr_4 [i_0] [i_1] [i_2])));
                            arr_15 [i_0] [i_1] [i_2] [i_3] [i_0] = (((arr_1 [i_0 - 1] [i_1 + 2]) ? (arr_1 [i_0 - 1] [i_1 + 2]) : 141));
                        }
                    }
                }
                var_16 *= (((arr_2 [i_0] [i_1]) ? (arr_0 [i_0]) : -8416982255692452882));
                arr_16 [i_0] [i_1] = 135;
                var_17 ^= (((((var_10 ? -1007462267 : var_7))) == 775087562));
            }
            for (int i_5 = 0; i_5 < 10;i_5 += 1)
            {
                arr_21 [i_0] = (arr_0 [i_1]);
                arr_22 [i_0] [i_1] [i_0] [i_5] = (((((1307030159 ? var_5 : (arr_7 [i_0] [i_0] [i_5])))) ? ((((arr_11 [i_0] [i_0] [i_1] [i_1] [i_1] [i_5]) ? 1 : (arr_17 [i_0] [i_1] [i_5])))) : ((11794496444432459868 ? var_8 : 8018835285015000865))));
            }
            arr_23 [i_0] [i_0] = (((arr_13 [i_0] [i_0] [i_0] [i_0 - 1] [i_1] [i_1] [i_1]) ? (arr_13 [i_1] [i_1] [i_0] [i_0] [i_0] [i_0] [i_0]) : var_11));
            arr_24 [i_0] [i_0] [i_0] = (+((((arr_20 [i_0] [i_0]) >= (arr_6 [i_0] [i_0] [i_0])))));
            arr_25 [i_0] [i_0] [i_0] = ((9406 ? 1 : (arr_8 [i_0] [i_1] [i_1])));
            arr_26 [i_0] [i_1] [i_0] = 1;
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 24;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 24;i_7 += 1)
        {
            {
                arr_31 [i_6] [i_6] = (arr_27 [i_6]);
                var_18 |= -914262635;
            }
        }
    }
    #pragma endscop
}
