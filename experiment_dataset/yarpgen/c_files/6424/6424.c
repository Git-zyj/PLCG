/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6424
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6424 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6424
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = -18191434417262333208;
    var_16 = var_12;
    var_17 = (((((!var_7) | (max(6, 2409673569))))) ? (max((min(var_1, -5310638053984682625)), var_13)) : 1885293729);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [i_0] = (max((((!(((var_3 ^ (arr_3 [i_0] [i_1]))))))), (--5465273048489739418)));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_18 *= ((!(((~(arr_11 [i_3] [i_4] [i_2] [i_2] [i_4]))))));
                                arr_14 [i_0] = (max((~4714021628260065368), ((var_14 ? (arr_5 [i_3 - 1]) : 25953))));
                                var_19 = ((~(((((var_13 ? var_12 : var_12))) / (arr_11 [i_3] [i_3 - 1] [i_3 - 1] [i_3 + 2] [i_3 - 1])))));
                                var_20 -= (arr_0 [i_2]);
                                arr_15 [i_0] [i_0] [i_1] [i_0] [i_3] [i_3 + 2] [i_4] = (((0 == (arr_2 [i_3 + 2]))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
