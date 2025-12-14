/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97464
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97464 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97464
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 += (min((232 ^ var_12), var_8));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                var_15 = -621240540;
                                var_16 = ((var_1 ? 3673726781 : -var_5));
                                var_17 = var_9;
                                var_18 = (min(var_18, ((((max(255, 621240566)) & (((232 ? (!621240565) : 5239487872158161009))))))));
                            }
                        }
                    }
                }
                var_19 ^= ((621240514 | var_3) ? (((((1 ? (arr_12 [13] [i_1] [i_1] [i_1] [13] [i_0] [i_0]) : 1))) ? ((var_10 ? 3673726773 : 1)) : (!4263945773))) : ((((((var_1 ? 185 : -31236))) ? (arr_6 [i_0]) : ((-(arr_4 [i_0])))))));
            }
        }
    }
    var_20 = (max(7919620513616086068, 24));
    #pragma endscop
}
