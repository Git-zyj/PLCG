/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67875
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67875 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67875
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((max((160 && -3551), var_5))) || -22471));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 23;i_3 += 1)
                    {
                        {
                            var_15 = (9472550681988962937 != -3564);
                            var_16 = var_4;
                            var_17 += ((((!1) ? (arr_5 [i_3 + 2]) : var_7)));
                        }
                    }
                }
                var_18 = ((((arr_5 [i_0]) / 75)));
            }
        }
    }
    var_19 = var_2;
    var_20 ^= 3559;
    var_21 = var_13;
    #pragma endscop
}
