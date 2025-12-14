/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67262
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67262 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67262
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_10 += (min((var_3 - var_4), -var_7));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        {

                            for (int i_4 = 2; i_4 < 13;i_4 += 1)
                            {
                                var_11 |= (!(641063579 | -641063599));
                                var_12 += ((((min(var_0, var_8))) ? var_5 : ((min(var_8, var_4)))));
                                var_13 = (((min((!var_3), (var_2 <= 641063579))) ? ((max(var_0, (min(var_0, 14789))))) : ((-var_7 ? ((var_8 ? 18446744073709551615 : var_7)) : (((var_5 ? var_1 : 1)))))));
                            }
                            var_14 = (max(var_14, (((((max(var_8, (min(var_1, var_5))))) ? var_6 : var_0)))));
                        }
                    }
                }
                var_15 = (min(((max(((var_9 ? var_4 : 2040203415)), 641063568))), var_5));
                /* LoopNest 3 */
                for (int i_5 = 1; i_5 < 14;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 12;i_6 += 1)
                    {
                        for (int i_7 = 2; i_7 < 13;i_7 += 1)
                        {
                            {
                                var_16 += ((max(1, 1)) ? (var_2 && var_8) : (max((1 * var_5), ((min(var_6, 1))))));
                                var_17 = ((~((var_9 ? var_1 : var_7))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_18 |= (((((max(var_6, var_5)) | var_0)) >> (-937817276 + 937817339)));
    var_19 &= ((((min((min(var_5, var_7)), var_4))) ? (min(((var_8 ? 0 : var_1)), var_7)) : var_7));
    #pragma endscop
}
