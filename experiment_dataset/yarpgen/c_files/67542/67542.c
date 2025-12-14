/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67542
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67542 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67542
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_5;
    var_16 += (~var_0);
    var_17 = ((var_7 ^ (!var_2)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_18 = (min(var_18, ((((arr_2 [i_0]) || var_2)))));
                            var_19 = ((((~(arr_2 [i_0]))) >> (var_14 + 65)));
                        }
                    }
                }
                var_20 = ((-(-1691042337 > 127)));
            }
        }
    }
    #pragma endscop
}
