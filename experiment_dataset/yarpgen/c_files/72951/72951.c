/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72951
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72951 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72951
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
                arr_5 [i_0] [i_1] = ((((28645 * (arr_4 [i_0] [i_0] [i_1]))) & ((var_0 ? 0 : ((var_10 << (var_6 - 1467919271)))))));

                for (int i_2 = 2; i_2 < 10;i_2 += 1)
                {
                    var_15 ^= (((1 + var_13) ? ((max((arr_7 [2]), 62745))) : -8546581481615840119));
                    arr_8 [i_0] [i_1] [i_2 + 4] [i_2 + 4] = (arr_0 [i_0 - 1]);
                    arr_9 [i_0 - 1] [i_1] [i_1] [i_0 - 1] = var_7;
                }
            }
        }
    }
    var_16 = ((var_0 & (((((max(1, 1))) >= var_14)))));
    #pragma endscop
}
