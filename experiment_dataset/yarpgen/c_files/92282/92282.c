/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92282
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92282 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92282
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (var_5 + -8070450532247928832);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_13 = (((992 ? 35606 : (arr_2 [i_0]))));
        var_14 = (((arr_1 [i_0] [i_0]) & (arr_1 [i_0] [i_0])));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_0] &= (arr_2 [i_0]);
                    var_15 = (max(var_15, (arr_0 [i_2])));
                    arr_9 [i_0] [i_1] [i_0] = ((((arr_4 [i_2] [i_0] [i_0]) ? 5284602200204329660 : (arr_4 [i_0] [i_0] [i_2]))) ^ ((((arr_7 [i_0] [i_1] [i_2] [i_2]) ? 35616 : var_7))));
                }
            }
        }
    }
    var_16 = (((((-var_4 * (var_8 >= var_3)))) ? ((((var_6 ? var_2 : var_8)) * ((var_0 ? 9397083478632147699 : 11934496385790804602)))) : (((var_6 ? (((var_6 >> (11934496385790804602 - 11934496385790804595)))) : var_7)))));
    #pragma endscop
}
