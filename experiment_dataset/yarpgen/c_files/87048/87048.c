/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87048
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87048 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87048
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_20 ^= (arr_5 [i_2] [8] [i_0]);
                    var_21 = (max(var_21, ((((((min((~var_10), 38827)) + 2147483647)) << (((max((arr_4 [i_2] [12] [i_0]), (arr_1 [i_0]))) - 151619183)))))));
                    arr_7 [i_0] [i_1 + 1] [i_2] [3] = (((((!(arr_2 [i_0])))) + ((max(63, 65535)))));
                }
            }
        }
    }
    var_22 = max(var_16, var_0);
    var_23 = var_9;
    var_24 = var_0;
    var_25 = (max(var_25, var_4));
    #pragma endscop
}
