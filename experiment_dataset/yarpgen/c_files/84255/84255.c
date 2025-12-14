/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84255
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84255 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84255
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (!1);
    var_19 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_20 = -var_5;
                arr_5 [i_0] [1] [i_0] = 1;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            {
                arr_10 [i_2] [i_3] = (max(((var_6 ? (arr_9 [i_2] [i_3]) : 1)), ((var_5 ? (arr_9 [i_2] [i_2]) : (arr_9 [i_2] [i_3])))));
                var_21 = (((!var_13) ? var_5 : (min((min((arr_3 [i_2] [i_2] [i_2]), var_16)), var_5))));
                var_22 = 1;
                var_23 = (min((!1), var_15));
                arr_11 [i_3] = (min((((arr_0 [i_2]) != 17459)), (((arr_0 [i_2]) && (arr_0 [i_2])))));
            }
        }
    }
    #pragma endscop
}
