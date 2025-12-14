/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86882
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86882 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86882
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_15 = (arr_1 [i_0 + 1]);
                var_16 = 4294967280;
            }
        }
    }
    var_17 = var_2;
    var_18 = (max(var_18, var_1));
    /* LoopNest 3 */
    for (int i_2 = 2; i_2 < 12;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 12;i_4 += 1)
            {
                {
                    arr_13 [7] [i_3] [i_3] [3] = (min((-2147483647 - 1), 525940375));
                    var_19 = (min(53855, (min(4294967295, (((4294967295 ? (arr_5 [i_3] [i_3]) : (arr_5 [i_3] [i_4 + 1]))))))));
                }
            }
        }
    }
    var_20 = 0;
    #pragma endscop
}
