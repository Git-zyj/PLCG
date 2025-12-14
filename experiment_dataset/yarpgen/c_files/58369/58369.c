/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58369
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58369 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58369
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 += (max(((var_3 ? var_1 : var_8)), var_3));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_12 = var_7;
                            arr_11 [i_0] [i_1] [i_0] [i_3 + 1] = (min((~var_1), var_3));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 25;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 25;i_6 += 1)
                        {
                            {
                                arr_19 [i_0] [i_5] [23] [i_0] = (((max((((arr_4 [15] [i_1] [i_4]) | var_10)), (arr_9 [i_0])))) ? (arr_5 [i_0] [i_1] [i_4]) : (((!((max(8841127410933692600, 1)))))));
                                arr_20 [i_6] [i_0] [i_0] [i_0] = (((((((((arr_1 [i_0]) ? (arr_9 [i_0]) : 1))) || ((!(arr_13 [i_0])))))) ^ ((((arr_4 [i_6] [i_5] [i_0]) >= (arr_7 [i_4]))))));
                                var_13 = ((!((min((-6158 - var_9), var_10)))));
                            }
                        }
                    }
                }
                var_14 = ((((-(arr_1 [i_0]))) % (arr_1 [i_0])));
                var_15 = (min(var_15, ((((max(0, 8841127410933692600)) & ((((((((!(arr_12 [i_0] [i_0]))))) == (arr_6 [23] [9] [9] [i_1]))))))))));
                arr_21 [1] [i_0] = ((((((var_9 + 2441620901316656314) - ((9223372036854775807 ? var_0 : (arr_0 [i_0])))))) ? ((((min((arr_17 [i_0] [i_1]), -512))) ? 239 : (arr_5 [i_1] [i_0] [i_0]))) : ((((min((arr_6 [i_0] [i_0] [i_0] [i_0]), (arr_13 [i_0]))) != (((1 ? (arr_8 [i_0] [18] [i_0]) : (arr_4 [i_0] [21] [i_0])))))))));
            }
        }
    }
    var_16 = (min(((-23354 ? var_4 : (max(var_9, var_0)))), (!-var_8)));
    #pragma endscop
}
