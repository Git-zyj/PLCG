/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83665
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83665 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83665
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    arr_9 [i_2] [i_0] = 46474;
                    arr_10 [i_0] = (0 ^ 1);
                    arr_11 [i_0 - 3] [i_0] [i_0] = (((!231) >> (var_16 - 16918013551189245580)));
                    arr_12 [1] [i_0] [i_2] [5] = (min(((2297686460 ? 1022194831 : 10)), var_15));
                    var_17 = (i_0 % 2 == zero) ? (((((((arr_0 [i_1]) / (arr_3 [i_0] [i_0])))) ? ((max(-1022194832, 25967))) : (arr_5 [i_2] [i_1] [i_0 + 1])))) : (((((((arr_0 [i_1]) * (arr_3 [i_0] [i_0])))) ? ((max(-1022194832, 25967))) : (arr_5 [i_2] [i_1] [i_0 + 1]))));
                }
            }
        }
    }
    var_18 -= var_2;
    var_19 = var_6;
    #pragma endscop
}
