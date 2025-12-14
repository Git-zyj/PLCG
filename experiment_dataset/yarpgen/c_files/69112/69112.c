/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69112
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69112 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69112
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((var_8 - ((var_3 ? var_4 : (var_7 + var_7)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 1; i_2 < 19;i_2 += 1)
                {
                    arr_8 [i_0] [i_1] [i_2] [i_0] = (!var_11);
                    var_18 = (max(var_18, (((((((arr_2 [i_0] [i_2]) ^ (arr_0 [i_1])))) && (arr_1 [i_2 + 1]))))));
                    var_19 = (((!32410) ? (arr_7 [i_2]) : (((arr_7 [i_2]) + 33125))));
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    var_20 = (max(var_20, var_12));
                    var_21 = (min(var_21, (arr_9 [i_0 - 1] [i_0 + 1] [i_0 + 1])));
                }
                var_22 = (arr_4 [i_0] [i_1]);
                var_23 = (!43);
            }
        }
    }
    #pragma endscop
}
