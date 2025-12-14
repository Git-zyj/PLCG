/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80935
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80935 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80935
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = 0;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_15 &= (((~0) ? (((~2057986436) | (((var_1 << (((var_2 + 28) - 14))))))) : (((~(~1476))))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        {
                            arr_10 [i_1] [i_2] [i_1] = 63488;
                            arr_11 [i_0] [i_1] [i_1] [15] = ((((((-4636650408802576043 - 27812) ? -var_1 : -var_8))) ? (((((var_9 ? var_4 : var_1))) - (((arr_6 [i_1] [i_3]) ? var_4 : (arr_4 [i_1] [i_1]))))) : (arr_3 [11] [i_1])));
                            arr_12 [i_1] [i_1] = ((10585822147739963846 ? (18446744073709551615 <= 9766678011733835166) : 65525));
                        }
                    }
                }
            }
        }
    }
    var_16 = (((((var_11 * var_3) ? (18446744073709551615 + var_9) : var_8))) ? ((~(var_13 * var_8))) : (414123755 <= var_6));
    var_17 = (!3880843524);
    #pragma endscop
}
