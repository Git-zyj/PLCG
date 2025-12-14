/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90462
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90462 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90462
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, var_14));
    var_19 = ((((510889128590103466 ? var_16 : -13247)) * ((((((var_10 ? var_16 : var_3)) > ((min(1, var_15)))))))));
    var_20 = var_1;
    var_21 = var_5;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_22 = (min(var_22, ((((arr_1 [i_1 - 1]) ? ((var_4 >> (var_6 - 678683894))) : ((((arr_1 [i_1 - 1]) < 11163315391758115834))))))));
                                var_23 |= var_4;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 14;i_6 += 1)
                        {
                            {
                                var_24 = (min(var_24, ((min(222, 46639232)))));
                                var_25 = (!510889128590103466);
                                var_26 = ((~(max(((67 ? var_1 : 11163315391758115834)), 960))));
                                arr_17 [i_2] [i_1 - 1] [i_1] [i_1] [i_1] [i_1 - 1] = 188;
                            }
                        }
                    }
                    arr_18 [i_0] [i_0] [i_2] [i_0] = ((((max(var_5, (-8808579870199003757 && 8808579870199003756))))) > ((((((arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_2]) ? (arr_1 [i_1]) : 9223372036854775807))) ? (arr_3 [i_1]) : 4536206641541491199)));
                    var_27 -= ((((((arr_0 [i_0]) ? (arr_0 [i_0]) : 1613467836))) ? (((arr_0 [i_0]) + (arr_0 [i_0]))) : ((min((arr_0 [i_1]), var_2)))));
                }
            }
        }
    }
    #pragma endscop
}
