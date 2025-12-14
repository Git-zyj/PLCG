/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76632
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76632 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76632
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                for (int i_2 = 3; i_2 < 14;i_2 += 1)
                {
                    var_16 = ((-(arr_5 [i_0])));
                    var_17 = (((!62) ? (18446744073709551588 * 806199775) : -var_4));
                    arr_8 [10] [i_1] [10] |= (((((var_12 == (arr_5 [i_2])))) | var_1));
                }
                /* vectorizable */
                for (int i_3 = 1; i_3 < 14;i_3 += 1)
                {
                    var_18 -= ((~(arr_5 [i_0])));
                    arr_11 [i_0] [i_1] [i_1] [i_3] = (((arr_9 [i_0] [i_0] [i_0]) ? (arr_9 [i_0] [i_0] [i_1]) : (arr_9 [i_0] [i_1] [i_3 + 1])));
                }
                var_19 ^= (max(127, 16281));
            }
        }
    }
    var_20 &= (max((~16281), (((2459437010 <= (!1835530285))))));
    var_21 &= (min(var_2, var_2));
    #pragma endscop
}
