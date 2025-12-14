/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55698
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55698 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55698
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 6086;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    arr_9 [i_2] = ((~(((!((((arr_4 [i_2]) ^ (arr_4 [i_1])))))))));
                    arr_10 [i_2] = arr_6 [3] [i_1];
                }
            }
        }
    }
    var_13 |= (min(var_5, (min(var_0, var_5))));
    var_14 = (max(var_14, ((!(((var_2 ^ (~15))))))));
    #pragma endscop
}
