/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86287
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86287 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86287
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((var_11 ? 4294967295 : 4632750761547774811)) >> (((min(-4632750761547774812, (34 || var_10))) + 4632750761547774833))));
    var_17 -= var_10;
    var_18 = (min(var_5, (min(var_8, ((min(-2, 1007320374)))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_19 = ((((26911 | -6425100842963773366) & ((~(arr_1 [i_0 - 1]))))));
                var_20 = (max(var_20, (min(var_13, (max(((671591058 ? var_13 : 1867743051)), (~1311591952)))))));
                var_21 = var_13;
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 1; i_2 < 12;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 11;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 14;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 12;i_6 += 1)
                        {
                            {
                                arr_17 [i_2 + 2] [i_3] [i_4] [i_5] = (((arr_9 [i_3] [i_3]) ? var_11 : 2243539038));
                                var_22 = (max((arr_1 [i_3 - 1]), var_11));
                            }
                        }
                    }
                    var_23 = (arr_2 [i_2] [i_2] [i_4]);
                }
            }
        }
    }
    #pragma endscop
}
