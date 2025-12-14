/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98285
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98285 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98285
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_19 = (max(var_19, ((~(((-(arr_5 [i_2]))))))));
                    var_20 = (arr_4 [i_2]);
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 16;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 18;i_4 += 1)
        {
            {
                var_21 = (arr_4 [19]);
                var_22 = ((~(arr_10 [i_4])));
            }
        }
    }
    var_23 = (max(((var_12 ? 19 : var_0)), (~-var_10)));
    var_24 = -27730;
    #pragma endscop
}
