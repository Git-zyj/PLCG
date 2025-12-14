/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84598
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84598 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84598
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 += 0;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 16;i_3 += 1)
                    {
                        {
                            var_19 = (min(var_19, (((((((arr_8 [i_1]) ? (arr_6 [i_0] [i_0 - 1] [i_2] [i_0 + 1]) : (arr_3 [i_0 + 1])))) ? (~65532) : ((3 ^ (arr_6 [i_1] [i_1] [i_1] [i_1]))))))));
                            arr_9 [i_0] [i_1] [i_2] [i_0] [i_0] = (((((((14714482877629455497 ? (arr_0 [i_0 - 1]) : (arr_1 [i_3] [i_3]))) * (arr_3 [i_2])))) ? var_9 : (((((var_7 ? (arr_1 [i_1] [i_2]) : 1))) ? var_3 : var_1))));
                            var_20 = ((((((arr_0 [i_0 + 1]) ? (arr_1 [i_0] [i_0]) : (var_14 <= var_15)))) ? ((127 ? ((max(0, (arr_0 [i_0])))) : (((-2147483647 - 1) & (arr_1 [i_0 - 1] [i_1]))))) : 3));
                        }
                    }
                }
                var_21 = ((((min((arr_8 [i_0]), ((0 ? var_2 : (arr_3 [i_1])))))) != (arr_4 [i_1] [i_1] [i_1] [i_1])));
                var_22 = (min(var_22, (2156351399082954618 ^ 0)));
            }
        }
    }
    var_23 = (max(((((((var_15 ? var_10 : var_11))) ? var_0 : (max(2147483638, var_2))))), var_4));
    #pragma endscop
}
