/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55711
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55711 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55711
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 += (((((((var_19 ? var_8 : 60))) ? -var_18 : ((57 >> (var_12 + 31991))))) >= (min(-var_8, -17749))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            {
                var_21 += var_17;
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_22 = arr_1 [i_1] [i_1 + 3];
                                arr_14 [i_0] [i_2] [i_1 - 2] [22] [i_2 + 1] [i_2] [i_4] = (((((((max(var_7, 17737))) ? ((max(27639, (arr_12 [i_0] [i_2 + 2])))) : (var_13 - -24417)))) ? (arr_8 [i_1 + 3] [i_1 + 1] [i_1]) : ((-((-(arr_7 [i_3] [i_3] [i_2])))))));
                                var_23 = (max((arr_9 [i_3 - 1] [i_3 + 3] [i_3 - 1] [i_3]), (arr_9 [i_3 + 2] [i_3 + 1] [i_3 + 2] [i_3 + 2])));
                                var_24 ^= var_9;
                            }
                        }
                    }
                }
                arr_15 [i_0] [i_0] [i_1] = var_18;
                /* LoopNest 3 */
                for (int i_5 = 1; i_5 < 20;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 23;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 23;i_7 += 1)
                        {
                            {
                                arr_23 [i_0] [i_5 + 3] = 16250;
                                arr_24 [i_5 + 3] [i_1] = ((~(((~var_8) / ((-(arr_11 [i_0] [14] [i_0] [i_0] [i_0] [i_0])))))));
                                var_25 = ((-((-9993 | ((16297 / (arr_13 [18] [i_1] [i_1] [i_1] [i_1])))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_26 = var_8;
    var_27 = (((!var_16) == ((((max(var_11, var_18))) ? ((var_16 ? var_18 : var_16)) : ((max(32744, var_18)))))));
    var_28 &= ((((var_5 < ((var_15 >> (11947 - 11925))))) ? var_1 : var_17));
    #pragma endscop
}
