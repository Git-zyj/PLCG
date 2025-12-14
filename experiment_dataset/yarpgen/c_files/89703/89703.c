/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89703
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89703 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89703
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 17;i_2 += 1)
            {
                {
                    arr_7 [i_1] [i_2] = ((!(((var_2 ? 17 : ((-1293228170 ? (arr_2 [10] [5] [12]) : 50318)))))));
                    var_14 *= (((((var_11 ? (arr_5 [i_2 + 3] [i_2] [i_2 - 1]) : var_7))) * ((227 ? ((((arr_5 [4] [i_1] [17]) ? 0 : var_7))) : (arr_0 [i_2])))));
                }
            }
        }
    }
    var_15 = var_11;
    var_16 = var_3;
    #pragma endscop
}
