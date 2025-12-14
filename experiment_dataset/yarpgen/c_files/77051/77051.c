/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77051
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77051 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77051
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = -32754;
    var_12 = (((((max(var_5, 1206144546)))) ? var_2 : ((min(((29 % (-32767 - 1))), ((-32763 + (-32767 - 1))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_13 = (max(var_13, 65513));
                            var_14 = (((((var_1 >= 31) & ((var_1 ? var_6 : (-32767 - 1))))) & ((min((((255 ? 32763 : 91))), (max(var_10, 4294967295)))))));
                        }
                    }
                }
                var_15 = ((((((var_3 ? var_4 : var_1)))) ? (19 % var_1) : var_4));
                var_16 -= 1;
                arr_8 [i_0] [i_0] [i_0] = var_9;

                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    arr_11 [i_0] [i_1] [i_4] = ((var_6 & (((((min(1, var_1))) ? -32742 : ((32760 ? 3 : 0)))))));
                    var_17 = (((((((32763 + -32763) >= (32746 & 11))))) & (1 & 549755813887)));
                    arr_12 [i_0] [i_4] |= (((-717234098 % 1) + ((((1 ? var_6 : var_1)) * (var_6 >= var_4)))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 20;i_6 += 1)
                        {
                            {
                                var_18 = (((205 % var_10) + (1 + 1)));
                                var_19 *= (-717234093 & 128);
                                var_20 += (((((1 >= (max(-1278174760269712496, 1048575))))) & ((51 + (238 & 204)))));
                            }
                        }
                    }
                    var_21 = (max(var_21, ((((max(-8844024313131688685, var_7)) >= (26 & -7435159818001516349))))));
                }
            }
        }
    }
    #pragma endscop
}
