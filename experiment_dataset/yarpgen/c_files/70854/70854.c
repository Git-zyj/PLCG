/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70854
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70854 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70854
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = 53054;
    var_12 = ((min((var_2 - var_4), var_3)) ^ (((12477 < ((var_5 ? 40048 : var_1))))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    arr_8 [i_1] [i_0] [i_0] = (min((31 * -31), 2720064000218006370));
                    var_13 = (((arr_2 [i_0 + 2] [i_0 + 1] [i_0 - 2]) ? ((((((var_6 ? var_5 : (arr_7 [i_0] [i_1] [i_2])))) && (((~(arr_4 [i_1] [i_1] [i_1] [13]))))))) : ((((arr_5 [i_0 + 1] [i_0] [i_0 - 1]) || (arr_2 [i_0 - 2] [6] [i_1]))))));
                }
            }
        }
    }
    #pragma endscop
}
