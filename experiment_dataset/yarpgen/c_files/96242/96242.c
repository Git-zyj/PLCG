/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96242
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96242 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96242
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 *= (min(25011, 8070880874721041865));
    var_16 |= (max((((max(var_3, 797958675909397032)) & var_8)), (((var_14 & 5072211044519081809) << (((max(0, var_7)) - 616308950728901220))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_17 = (arr_5 [i_1 - 1] [15] [6] [15]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_18 = (max(var_18, ((((arr_14 [i_0] [i_0] [i_1 + 1] [i_3] [6]) <= ((max((arr_14 [i_0] [i_1 - 1] [i_1 + 1] [6] [18]), (arr_14 [i_0] [i_1 - 1] [i_1 + 1] [i_3] [2])))))))));
                                var_19 = 5072211044519081809;
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 = ((((((min(var_3, var_12))) ? var_1 : (-4503599627370496 & var_4))) - ((((((min(var_9, var_2))) == var_6))))));
    #pragma endscop
}
