/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91432
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91432 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91432
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                arr_7 [i_0] = (min(((~(min((arr_3 [i_0] [16] [i_1]), (arr_3 [i_0] [i_0] [i_1 + 1]))))), (max(-768350516, -8034183089668361081))));
                var_20 = ((!(((var_13 ? (arr_3 [i_0 - 1] [11] [i_1 + 1]) : (((((arr_1 [i_0]) && (arr_2 [i_0]))))))))));
            }
        }
    }
    var_21 *= var_7;
    #pragma endscop
}
