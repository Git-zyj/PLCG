/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62501
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62501 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62501
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 |= (!var_0);
    var_13 = ((!((max(0, 4294967272)))));
    var_14 ^= (-122 != -26458);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 9;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        {
                            var_15 = (min(var_15, var_6));
                            var_16 = var_3;
                        }
                    }
                }
                var_17 ^= (!4294967272);
            }
        }
    }
    #pragma endscop
}
