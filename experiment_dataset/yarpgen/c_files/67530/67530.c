/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67530
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67530 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67530
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 &= (8057 >= 7766930922528097370);
    var_19 = (((-(18446744073709551615 ^ 2474601976))) < 8038);
    var_20 = var_0;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 19;i_3 += 1)
                {
                    {
                        var_21 = (max(var_21, (((var_1 ? (arr_5 [i_3 + 1]) : (arr_3 [17]))))));
                        var_22 = (((arr_9 [i_3] [i_3] [i_3 - 1] [i_3] [i_3] [i_3 - 2]) + (arr_9 [i_3 - 1] [i_3] [i_3] [i_3 - 1] [i_3 - 1] [i_3 - 1])));
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {
                    {

                        for (int i_6 = 0; i_6 < 0;i_6 += 1)
                        {
                            var_23 = ((1820365319 ? (1820365319 == 940237410) : -23676));
                            var_24 = (~var_2);
                            var_25 = (((!var_15) <= ((var_6 ? 2221417435 : 10546))));
                        }
                        var_26 = (!var_11);
                        arr_18 [i_0] [15] [i_4] [0] [0] &= (((-940237411 && var_0) + ((6 ? var_15 : var_8))));
                    }
                }
            }
            var_27 = ((-(arr_16 [i_0] [i_0] [i_0] [i_1] [i_1] [i_1])));
            arr_19 [i_1] |= ((arr_7 [i_0]) ? (arr_7 [i_0]) : var_4);
        }
        var_28 = (((((var_0 + (arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))) ? -23688 : ((var_2 + (arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))));
        var_29 = ((~(arr_11 [i_0] [i_0] [i_0] [i_0])));
    }
    #pragma endscop
}
