/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86948
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86948 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86948
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((((-170 ? ((max(var_3, -19252))) : var_11))) ^ (((((var_0 ? var_2 : 186))) ? var_13 : (8138171102581223487 % 197)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        var_15 = (min(((min(var_10, (!var_4)))), (((~var_8) * ((min(var_8, 0)))))));
                        var_16 = (((((~((min(var_2, var_12)))))) || ((max(((max((-2147483647 - 1), var_4))), (max(-24576, var_1)))))));
                        var_17 &= ((((var_9 & 118) ? 0 : 37)));
                        var_18 = (((((((min(107, -31245))) / 19260))) ? ((~((min(4, var_12))))) : ((~((min(var_8, var_0)))))));
                    }
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        for (int i_5 = 2; i_5 < 22;i_5 += 1)
                        {
                            {
                                var_19 = ((((min(0, -19252))) > 51));
                                arr_17 [i_0] [i_0] [i_2] [i_4] [i_4] = (-((max((!var_11), 19268))));
                                var_20 = (min(6, (((!((min(-84, var_4))))))));
                                var_21 = (max(var_21, (((!((max(-19265, 1))))))));
                            }
                        }
                    }
                    var_22 = 0;
                }
                var_23 = (min(var_23, -var_7));
                arr_18 [12] = ((((((~var_11) || (((137 ? var_7 : var_2)))))) > ((~((max(var_12, 1)))))));
            }
        }
    }
    var_24 = var_2;
    var_25 = (min((((min(30845, -28831)))), var_12));
    #pragma endscop
}
