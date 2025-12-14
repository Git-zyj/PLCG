/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69479
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69479 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69479
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 *= var_10;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_20 = -10830;
                    var_21 = (min(var_21, (arr_2 [6])));
                    var_22 -= ((((max(18096129294048670231, 504848991))) ? ((max((arr_3 [i_0]), (arr_3 [i_0])))) : ((~(arr_3 [i_1 + 1])))));
                }
            }
        }
        arr_8 [i_0] [i_0] = (504848991 >= 2345384709);
    }
    var_23 += ((((((((var_3 ? 61295247665218178 : var_6))) ? (var_17 * var_12) : -22356))) && var_10));
    var_24 |= (((max(-35, 3622824997))) ? 1949582587 : (((((-1 ? -2130622471577838630 : var_9))) ? -74 : (max(var_6, 4863704487849810654)))));
    var_25 = var_13;
    #pragma endscop
}
