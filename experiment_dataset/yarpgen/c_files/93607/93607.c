/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93607
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93607 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93607
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_20 = (min(var_20, ((~(min(var_6, (max((arr_4 [i_0] [i_1] [i_0]), 1))))))));
                arr_5 [8] = (((((arr_2 [i_0]) ? (max((arr_3 [i_0] [i_0] [i_1]), 1)) : (min(65011712, (arr_0 [i_1])))))) ? var_14 : ((~(arr_1 [i_1]))));
                var_21 = ((((-(var_1 * var_12))) ^ (((var_11 && (arr_4 [i_0] [i_0] [i_0]))))));
                var_22 = ((max((!var_13), (!0))) && 1);
            }
        }
    }
    var_23 = var_4;
    #pragma endscop
}
