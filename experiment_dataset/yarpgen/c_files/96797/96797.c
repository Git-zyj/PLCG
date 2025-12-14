/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96797
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96797 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96797
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min((!231), -3969214560499018249));
    var_20 = 2860101605;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] [i_0] = ((~(arr_0 [i_0] [i_0])));

                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    var_21 = ((((((arr_7 [14] [i_1] [i_2]) ? -95 : var_12))) - (((min((arr_1 [i_0]), var_4))))));
                    arr_8 [i_0] [i_1] [9] [i_0] = ((571394485 * ((min((arr_4 [i_0]), (arr_0 [i_0] [i_0]))))));
                    var_22 = (i_0 % 2 == zero) ? ((((arr_0 [i_0] [i_0]) << (((arr_6 [i_0] [i_2] [i_2] [i_2]) - 36059))))) : ((((arr_0 [i_0] [i_0]) << (((((arr_6 [i_0] [i_2] [i_2] [i_2]) - 36059)) + 12924)))));
                    arr_9 [i_0] [i_0] [i_1] [i_0] = (((((19950 >= -3969214560499018249) | ((var_9 / (arr_7 [0] [i_1] [i_2])))))) ? (max(((max((arr_6 [i_0] [i_1] [i_1] [16]), var_3))), (arr_1 [i_0]))) : (((((var_1 ? var_18 : var_4))))));
                }
            }
        }
    }
    var_23 = var_13;
    #pragma endscop
}
