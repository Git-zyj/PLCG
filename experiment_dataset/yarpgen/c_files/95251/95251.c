/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95251
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95251 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95251
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_5;
    var_21 = var_17;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {
                var_22 = (arr_3 [i_0 - 1]);
                var_23 *= (((arr_4 [i_0 - 1]) % (((((((arr_2 [i_0] [i_1]) ? (arr_0 [i_0 - 1] [i_1]) : 16382))) && (arr_4 [i_0 - 1]))))));
                var_24 = (min(var_24, ((((arr_3 [i_0 - 1]) ? (max((arr_2 [i_0 - 1] [i_0 - 1]), 0)) : (((75 - (arr_2 [i_0 - 1] [i_0 - 1])))))))));
                var_25 = (0 || (arr_3 [i_0 - 1]));
                arr_5 [10] [i_1] |= ((-(arr_2 [i_0 - 1] [i_1 + 1])));
            }
        }
    }
    #pragma endscop
}
