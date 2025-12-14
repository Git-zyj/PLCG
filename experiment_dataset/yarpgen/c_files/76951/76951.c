/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76951
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76951 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76951
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (!((((((-28955 + 2147483647) << (var_3 - 1931151505))) ^ var_4))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        {
                            var_14 = ((((((arr_8 [i_0] [i_1] [i_2 - 1]) % (arr_4 [i_3 + 1] [i_2 - 2])))) / (arr_6 [i_0] [i_0] [i_2] [i_0])));
                            arr_9 [i_0] [i_2 - 1] &= ((+(((arr_3 [i_0]) | var_2))));
                        }
                    }
                }

                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    var_15 = (max(((-(arr_13 [i_0] [i_1] [6] [i_4]))), ((((arr_12 [i_0] [i_1] [i_0]) / (arr_12 [i_4] [i_1] [i_0]))))));
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 16;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 17;i_6 += 1)
                        {
                            {
                                var_16 = (((((min(var_8, (arr_16 [15] [i_1] [i_4] [i_5] [14] [i_1]))) ^ ((((arr_10 [i_0] [i_5]) ? 28930 : 28935))))) == (min(-28941, (((arr_11 [i_6]) - var_11))))));
                                arr_18 [i_0] [i_0] [i_1] [i_4] [i_1] [i_6] = (((!(((28949 ? -28930 : (arr_17 [i_0] [i_1] [i_4] [i_1] [i_6] [9] [14])))))));
                                var_17 = (max(var_17, ((((28937 ^ 28930) << ((((((((arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) ? (arr_1 [i_1] [i_1]) : var_0))) & (min(28933, (arr_13 [i_0] [i_4] [i_5 - 1] [i_6]))))) - 20479)))))));
                                arr_19 [i_0] = (min((((-28937 ? (arr_1 [i_5 - 1] [i_5 + 1]) : (arr_1 [i_5 - 1] [i_5 - 1])))), 28945));
                            }
                        }
                    }
                }
                arr_20 [10] [i_0] = var_0;
            }
        }
    }
    #pragma endscop
}
