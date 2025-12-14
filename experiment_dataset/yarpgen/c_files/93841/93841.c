/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93841
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93841 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93841
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_12 = (min(((((min(0, 1))) ? var_10 : ((var_2 ? var_10 : (arr_6 [i_0]))))), (((max(0, 1))))));
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            var_13 = var_4;
                            var_14 = (((arr_5 [i_0] [i_1]) >> (((min(var_0, ((0 >> (15241 - 15240))))) + 1868870934134199306))));
                        }
                    }
                }
            }
        }
    }
    var_15 = (((~var_9) * ((var_2 ? var_11 : 1107809751))));
    #pragma endscop
}
