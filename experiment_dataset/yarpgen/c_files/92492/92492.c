/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92492
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92492 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92492
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 11;i_2 += 1)
            {
                {
                    var_11 = (arr_6 [i_2] [i_2] [i_2] [i_1]);
                    var_12 = (max((arr_3 [i_0]), ((((((arr_5 [i_2] [i_2] [i_2]) | (arr_0 [i_0] [9])))) ? ((18446744073709551598 ? 783078929 : 49261)) : -2121378340))));
                }
            }
        }
    }
    var_13 = var_7;
    #pragma endscop
}
