/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7046
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7046 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7046
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {
                arr_6 [i_0] = (min(((((((4395 && (arr_2 [i_0] [i_0])))) != 25140))), 19));
                var_12 = (max(var_12, (arr_1 [i_0])));
                var_13 &= ((((max(var_5, 3580875352019642420))) ? var_5 : (~4294967277)));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        {
                            var_14 = var_9;
                            var_15 = ((((!((min(var_7, (arr_3 [i_0] [i_0]))))))));
                        }
                    }
                }
            }
        }
    }
    var_16 ^= (min(var_11, var_7));
    var_17 = var_2;
    var_18 = var_10;
    var_19 = var_2;
    #pragma endscop
}
