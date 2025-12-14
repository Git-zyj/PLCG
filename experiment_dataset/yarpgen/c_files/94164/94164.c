/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94164
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94164 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94164
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_13 = arr_3 [i_0] [i_1] [i_1];
                var_14 = ((-((~(arr_2 [i_0 + 1] [i_0 + 1])))));
                var_15 = (((88 ? (arr_3 [i_0 + 3] [i_0 + 2] [i_0 - 1]) : 2271108337604788416)));
                var_16 = var_8;
            }
        }
    }
    var_17 = (--1);
    var_18 |= var_0;
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 19;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 18;i_3 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        {
                            var_19 = ((-(5037848233031240201 >= 5037848233031240201)));
                            var_20 = (min((arr_9 [i_2 + 1] [i_3]), ((-(127 >= -5037848233031240183)))));
                            var_21 = (((-(var_2 | 5037848233031240201))) / (--5037848233031240201));
                        }
                    }
                }
                var_22 = (min(5037848233031240201, (arr_9 [i_2] [i_3 - 1])));
            }
        }
    }
    var_23 = (!124);
    #pragma endscop
}
