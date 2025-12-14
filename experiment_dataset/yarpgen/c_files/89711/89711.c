/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89711
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89711 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89711
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 56029;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 11;i_2 += 1)
            {
                {
                    var_18 = (((~1348072380) ? 56043 : 483018188548013502));
                    var_19 = (max((min((arr_4 [i_2 - 1]), (arr_4 [i_2 - 3]))), (max((arr_4 [i_2 - 1]), (arr_4 [i_2 + 1])))));
                }
            }
        }
    }
    var_20 = (((-56017 ? var_10 : 10485)));
    #pragma endscop
}
