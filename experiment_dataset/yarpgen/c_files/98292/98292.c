/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98292
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98292 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98292
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (-7886779997411320776 >= var_9);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_8 [i_0] [i_1] [i_1] = (min((((var_6 ? (arr_5 [i_1]) : (arr_5 [i_1])))), (max((~60), ((50201 ? 15344 : (arr_6 [i_0] [i_0] [12])))))));
                var_19 *= (arr_2 [i_0]);
            }
        }
    }
    var_20 = (max(var_20, var_3));
    #pragma endscop
}
