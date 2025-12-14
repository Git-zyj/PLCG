/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91384
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((var_4 ? -719483888779606246 : (var_15 > var_5))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_0] [i_0] = (min((((arr_3 [i_0]) % (arr_3 [i_0]))), ((((arr_3 [i_0]) ? var_11 : 0)))));
                var_17 = (min(var_17, ((min(((max((min((arr_6 [i_0] [i_1]), (arr_4 [0] [2]))), 0))), ((~(((arr_0 [2] [i_1]) ? 14228243705224042067 : var_7)))))))));
                var_18 &= var_6;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        {
                            var_19 = arr_2 [i_0];
                            var_20 = (min((((((var_7 ? 757531323 : (arr_1 [i_2] [i_2])))) ? (arr_13 [i_0]) : (arr_9 [1] [i_0] [i_0] [i_0]))), ((max((var_11 & -7), (arr_2 [i_0]))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
