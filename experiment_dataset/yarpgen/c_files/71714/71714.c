/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71714
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71714 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71714
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, var_8));
    var_14 = (((((1 ^ 524287) ? (1325090814 - 4294443009) : -2251368022236218376)) % ((((min(524291, var_6)))))));
    var_15 = (max(var_15, 4294443009));
    var_16 = (((((1 ? var_8 : (min(967485557, 4294443009))))) ? ((var_9 ? (((524287 ? 234 : 1549315680))) : 4192425680)) : ((((!(((var_2 ? 220 : 7496602417720243390)))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            {
                var_17 = ((-((~(!106)))));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    arr_11 [i_0] [i_1] [i_2] [i_1] = ((100 ? (arr_3 [i_2] [i_1 - 1]) : var_1));
                    var_18 = (arr_3 [i_1 - 2] [i_1]);
                    var_19 = (min(var_19, (((208 | var_3) ? 3584 : (0 >= 2119677593767550375)))));
                }
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    var_20 = var_4;
                    arr_15 [i_0] [10] [i_3] = (-67 == 524285);
                    var_21 = ((~(min(15, -var_12))));
                    var_22 = ((arr_12 [i_0] [i_0]) ? (min((arr_8 [7] [17] [i_0] [i_0]), (arr_3 [i_0] [i_0]))) : -var_4);
                }
                /* vectorizable */
                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {
                    arr_18 [i_0] [i_1] = 101;
                    arr_19 [i_4] [15] [i_4] [i_4] = (1549315696 >= 1);
                    var_23 = ((~((-110 ? 2435018289 : 2008588634))));
                    var_24 = 524287;
                }
                var_25 = (((~(min(var_12, (arr_3 [13] [i_0]))))));
            }
        }
    }
    #pragma endscop
}
