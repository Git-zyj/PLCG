/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58257
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58257 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58257
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [6] = ((((((18446744073709551615 ? 14278410230172197146 : (-9223372036854775807 - 1))))) || (((((min(5691, (arr_7 [8] [i_1])))) ? 4168333843537354467 : ((((14278410230172197139 >= (arr_2 [i_0]))))))))));
                    arr_9 [i_2] [i_1] [4] = (0 - 1);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_16 [5] [i_1] [10] [i_3] = (max((arr_1 [i_4]), (14278410230172197143 == var_3)));
                                arr_17 [i_1] [i_1] [i_1] [i_1] [i_1] = var_6;
                                arr_18 [i_2] = ((4013 ? (((~(((1 < (arr_0 [i_0]))))))) : ((((var_1 ? (arr_6 [i_0] [i_0]) : 9223372036854775796)) & 8))));
                                arr_19 [i_1] = (min(4294967292, -5712));
                                arr_20 [i_1] [i_1] = ((-((-898804343 ? (arr_5 [i_0] [i_1]) : (~0)))));
                            }
                        }
                    }
                    arr_21 [i_1] [i_2] = ((((min((arr_4 [i_0] [i_1] [i_2]), 14278410230172197146))) ? var_6 : 324992001047501670));
                    arr_22 [i_1] [i_1] [i_2] [i_1] = max(((var_2 / (arr_12 [i_0] [i_1]))), ((((-3026760990538624979 == 4294967295) ? var_8 : (arr_0 [i_0])))));
                }
            }
        }
    }
    var_13 = var_11;
    var_14 = ((var_5 + (!var_2)));
    var_15 = (!-9223372036854775797);
    #pragma endscop
}
