/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6181
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6181 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6181
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_20 *= var_13;
                            var_21 = ((var_15 % (((((max(var_0, var_10))) || ((min(var_16, (arr_1 [i_0])))))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        {
                            var_22 = (max(var_22, ((((((((arr_1 [i_0]) / var_17)) >> (((min(var_10, var_9)) + 268319792846729028)))) ^ (arr_7 [i_0] [i_1 - 1] [4] [i_5] [i_4 - 1]))))));
                            var_23 ^= (((((((var_10 + (arr_8 [i_0]))) >= (arr_6 [i_0] [i_4 - 1] [i_4 - 1] [i_5] [i_0])))) == ((max((max((arr_8 [i_0]), (arr_12 [i_0] [i_1 + 1] [12]))), ((((arr_4 [i_0]) || var_17))))))));
                        }
                    }
                }
                var_24 = (min(var_24, (arr_2 [i_1 + 3] [8] [i_1 - 1])));
                var_25 += (((((max(var_2, var_0)) & var_0)) > var_0));
            }
        }
    }
    var_26 = var_18;
    var_27 = var_16;
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 14;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 14;i_7 += 1)
        {
            {
                var_28 = (max(var_28, var_3));
                var_29 = var_1;
                var_30 = (min(var_30, (max(((var_15 << (((min((arr_15 [i_7]), var_19)) - 10702501762417446428)))), (arr_18 [i_6])))));
            }
        }
    }
    #pragma endscop
}
