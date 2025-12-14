/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95308
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95308 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95308
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_19 += 255;
                var_20 -= (min(((max(1, 7))), (((arr_1 [i_0]) ? var_6 : (arr_5 [21])))));
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_21 ^= (max(((7 ? 248 : -3874419509404070661)), (((arr_1 [i_0]) ^ -3874419509404070643))));
                            var_22 = (((((max(562, 32232)))) / (max(3707750298, 63))));
                            var_23 = -721000682;
                        }
                    }
                }
            }
        }
    }
    var_24 = var_0;
    #pragma endscop
}
