/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64731
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64731 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64731
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        {
                            var_11 += 1332268905;
                            var_12 = (((var_2 ? (arr_6 [i_2] [i_2] [i_2]) : (131071 % 1881))));
                            var_13 = (((~-12112) || (((1881 == 39) != 914755770))));
                        }
                    }
                }
                var_14 = (min(((48 ? 34 : 488466410)), ((min(74, 6)))));
            }
        }
    }
    #pragma endscop
}
