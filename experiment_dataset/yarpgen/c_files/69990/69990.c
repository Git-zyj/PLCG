/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69990
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69990 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69990
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 8;i_3 += 1)
                    {
                        {
                            var_15 |= var_7;
                            arr_9 [i_0] [i_0] [i_2] [i_0] = ((31 ? (8191 | 1) : (((!((((arr_3 [i_3]) - var_2))))))));
                        }
                    }
                }
                arr_10 [i_0] = ((1 ? 1 : 11791004852806114653));
            }
        }
    }
    var_16 = var_13;
    var_17 = (((((111 ? 5411548658135870557 : var_3))) ? (max((max(11791004852806114653, var_9)), -var_12)) : (((~(var_8 * var_4))))));
    #pragma endscop
}
