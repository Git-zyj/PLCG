/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91959
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91959 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91959
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_10;
    var_17 *= var_8;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_18 = (min(var_18, var_8));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    var_19 = var_10;
                    var_20 = (var_2 ? (arr_3 [i_0] [i_0] [i_0]) : (arr_3 [i_2] [4] [i_0]));
                    arr_7 [i_1] |= (arr_6 [i_2] [i_1] [17]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_1] [10] [6] [i_0] = (((arr_10 [i_0]) != (arr_3 [i_0] [6] [i_4])));
                                var_21 -= (~73);
                                var_22 = (((arr_12 [i_4] [i_4] [i_0]) - ((var_6 ? var_4 : (arr_6 [i_2] [i_1] [i_3])))));
                            }
                        }
                    }
                    var_23 = ((((((!(arr_5 [i_0] [i_1] [i_1]))))) + var_8));
                }
                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 20;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 18;i_7 += 1)
                        {
                            {
                                arr_22 [i_0] [i_1] [i_5] [i_1] [i_0] [i_6] = ((-((-(max((arr_9 [i_0] [i_0]), var_13))))));
                                var_24 |= ((!((((arr_0 [i_1]) ? 576460752303423487 : (arr_17 [i_7 + 1]))))));
                                var_25 -= ((((min(17870283321406128128, var_6))) ? (!var_1) : (min((arr_21 [i_7] [i_1] [i_7] [i_7] [i_5]), (arr_21 [i_7 + 1] [i_6] [i_0] [i_0] [i_0])))));
                                var_26 = ((((((((-1167031732 ? var_14 : var_9))) ? (!1) : (arr_3 [i_7] [i_7 + 1] [i_7 - 1])))) ? ((((!(!576460752303423487))))) : (((arr_11 [i_0] [i_7 + 2] [i_0] [i_6] [i_7 + 2]) ? var_13 : var_10))));
                            }
                        }
                    }
                    var_27 = -12114124306516134124;
                    arr_23 [i_0] [i_0] = (max((65535 * var_14), (((var_5 <= (arr_15 [i_0] [i_0] [i_0] [i_5]))))));
                    arr_24 [i_0] = ((max(208277568, -1071344313)));
                }
            }
        }
    }
    var_28 = var_15;
    #pragma endscop
}
