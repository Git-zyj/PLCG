/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88624
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88624 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88624
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_20 = (((max(54, ((1 ? 143 : 11226)))) < ((((-(arr_2 [i_0] [4]))) - ((3931948394 ? 2 : 11226))))));
                    var_21 = 137;
                    var_22 = (((((-(arr_2 [i_1] [i_1])))) ? (arr_2 [i_0] [i_2]) : ((((arr_2 [i_0] [i_0]) || (arr_2 [i_2] [i_0]))))));
                }
            }
        }
    }
    var_23 &= ((var_0 ? var_3 : var_5));
    var_24 = 1;
    var_25 = ((var_7 / (max((~var_14), ((var_9 ? var_6 : var_11))))));
    #pragma endscop
}
