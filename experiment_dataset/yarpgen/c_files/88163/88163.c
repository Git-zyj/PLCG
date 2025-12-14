/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88163
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88163 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88163
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(((2173475329 ? 108 : 18446744073709551615)), (((((var_14 ? 1358732041 : 121))) ? ((var_2 ? 5660002762757692668 : 8188)) : (((63 ? 144 : var_6)))))));
    var_20 = (23 % 108);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_3 [i_0] = ((((var_15 ? var_10 : (arr_2 [6]))) << (((var_3 > (arr_2 [i_0]))))));
        var_21 = (((1358732041 ? 127 : 4294967295)) << ((((var_7 ? var_9 : (arr_2 [i_0]))) - 13783473025909664366)));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    arr_11 [6] [6] [i_0] = ((((((arr_0 [i_2]) >> (var_0 - 96)))) == (((arr_5 [i_2] [i_0] [i_0]) ? var_11 : (arr_10 [i_0])))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_22 ^= ((var_18 - var_17) ? ((23 ? 3052088005 : 231)) : (var_0 / var_18));
                                arr_19 [3] [12] [13] = (((12786741310951858948 / (arr_2 [i_1]))) ^ (var_12 % var_5));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
