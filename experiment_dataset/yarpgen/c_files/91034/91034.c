/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91034
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91034 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91034
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 13;i_2 += 1)
                {
                    var_20 = (arr_2 [i_1]);
                    var_21 = (max(var_21, (((0 >> (1595166258 - 1595166208))))));
                    arr_9 [i_0] [i_0] [i_1] [i_2] = (((min(-1, (arr_5 [i_0] [i_0] [i_2])))) ? (max((arr_5 [i_0] [i_1] [i_2]), (arr_0 [i_2 - 1]))) : ((((arr_1 [i_0]) ? (arr_0 [i_1]) : var_14))));
                    var_22 = (((~46940) | (2 + 5769040660788958711)));
                }
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    var_23 += 18596;
                    arr_12 [i_1] &= ((((18446744073709551612 ? (arr_6 [i_3] [i_1] [i_1] [i_0]) : 1)) << (((min(1330263700, 82)) - 72))));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 15;i_5 += 1)
                        {
                            {
                                arr_17 [i_0] [i_1] [i_3] [i_4] [i_0] = (((((10141598939571769895 ? 4744 : -46920))) >= (min(var_10, (arr_2 [i_0 - 2])))));
                                arr_18 [i_0] = (((max(3120783659606336966, 1932399387)) - (((max((arr_7 [i_0] [i_0 + 2] [i_0]), (arr_7 [i_0] [i_0 - 2] [i_0])))))));
                            }
                        }
                    }
                }
                arr_19 [i_0] = (arr_5 [i_0] [i_0] [i_0]);
            }
        }
    }
    var_24 = ((-3120783659606336944 != ((((!((max(1, var_6)))))))));
    #pragma endscop
}
