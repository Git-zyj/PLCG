/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61147
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61147 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61147
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 10;i_1 += 1)
        {
            {
                var_11 = (max((arr_1 [i_1 + 1] [i_1 - 2]), (198604595906029885 <= 6873368692952583117)));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 9;i_3 += 1)
                    {
                        {
                            var_12 *= 1;
                            var_13 = var_2;
                            arr_8 [i_0] &= (arr_6 [i_0] [i_1] [i_1] [i_1 - 3]);
                        }
                    }
                }
                var_14 = ((~-1182937060) ? ((min((max(20392, (arr_0 [i_1]))), var_0))) : ((((arr_4 [i_0] [i_1] [i_1] [i_1]) <= var_5))));
            }
        }
    }
    var_15 = var_2;
    #pragma endscop
}
