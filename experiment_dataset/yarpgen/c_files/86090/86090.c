/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86090
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86090 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86090
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                var_17 = (max(var_17, (((((((var_14 % ((~(arr_2 [i_0]))))) + 2147483647)) << (((!(arr_4 [i_1] [i_1 + 3] [i_1 + 1])))))))));
                var_18 = 7;
                var_19 = (((((arr_4 [i_0] [i_0] [i_0]) ? (((1 ? 7 : 133))) : (arr_3 [i_0] [i_1 + 4] [i_0]))) < (~1944)));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 0;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_20 &= ((((108 ? (max(10497238413772239294, 1125899906842624)) : (34711382 != 0))) * ((((((arr_3 [i_3] [i_2 + 1] [i_0]) ? 1 : 64))) ? (!11169) : ((1 ? (arr_9 [i_0] [i_1] [i_2 + 1] [i_3]) : 1))))));
                            var_21 = (arr_5 [i_0] [i_1] [i_3 - 2]);
                        }
                    }
                }
                arr_10 [i_1] = (((((-(arr_9 [i_1 + 1] [i_1] [i_0] [i_1])))) && (((arr_9 [i_1 + 1] [i_1] [i_0] [i_1]) && var_2))));
            }
        }
    }
    var_22 = var_11;
    #pragma endscop
}
