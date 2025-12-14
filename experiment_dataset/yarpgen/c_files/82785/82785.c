/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82785
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82785 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82785
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((~(((var_9 & var_4) ? (!0) : var_0))));
    var_12 = ((-1047577837 ? (~1) : 18));
    var_13 = (((((~17037) ? var_7 : 5186445405124611899)) == 21));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 18;i_3 += 1)
                    {
                        {
                            arr_8 [i_0] [i_0 - 1] [i_3] [i_0 + 2] [i_0] = (-1 / -1047577841);
                            var_14 = (min(var_14, (((+(min((!-17038), (29649 / 3077482453364563263))))))));
                            arr_9 [i_0 + 1] [i_1] [i_3] [i_3] = var_8;
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 19;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 20;i_6 += 1)
                        {
                            {
                                var_15 = 24576;
                                var_16 += (((-534897827308010645 / -4863945368050571042) ? (max((arr_3 [i_0 - 1]), var_7)) : (0 | var_5)));
                                arr_19 [1] [i_1] [i_1] [i_1] = (((!0) == ((var_9 ? (~var_8) : (var_0 && var_3)))));
                            }
                        }
                    }
                }
                arr_20 [i_0] [i_0] [i_0] = ((var_6 ^ ((var_6 ? (((!(arr_3 [i_0])))) : var_6))));
                arr_21 [i_0] [i_0] [i_0 - 1] = (251 == -994679919);
            }
        }
    }
    #pragma endscop
}
