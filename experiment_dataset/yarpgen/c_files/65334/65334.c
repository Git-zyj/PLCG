/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65334
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65334 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65334
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((-163 ? ((((min(var_15, 93))) ? var_10 : (var_16 % 54936))) : (((var_4 ? var_0 : var_18)))));
    var_20 |= (((max(13183136494369140248, (var_13 > 36903))) == 114));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_21 = ((12850 ? 32380 : 52696));
                                var_22 = (max(var_22, (((164 ^ (var_5 && 84))))));
                                arr_13 [i_0] [i_0 - 2] [i_0 + 1] [i_3] [7] [i_0] = ((((-(min(var_17, var_6)))) < (((min((arr_8 [i_3 + 1] [i_3] [i_3 - 3] [i_3]), (arr_8 [i_3 - 1] [i_3] [i_3 - 3] [i_3])))))));
                            }
                        }
                    }
                    var_23 = (arr_0 [i_0 + 1] [i_0]);
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 20;i_6 += 1)
                        {
                            {
                                arr_18 [i_2] [i_2] = 18446744073709551615;
                                arr_19 [i_1] [i_1] [i_1] [1] [i_1] = (max((max(var_16, var_4)), ((min(((var_13 ? 24 : var_10)), var_1)))));
                                arr_20 [i_0] [i_0] [i_0] = var_5;
                                var_24 = (max(((max(92, (arr_14 [i_0 - 2] [i_0] [i_0] [i_0 - 3] [i_0] [i_0 - 2])))), (arr_0 [i_0 - 2] [i_0])));
                            }
                        }
                    }
                }
            }
        }
    }
    var_25 &= (~1);
    #pragma endscop
}
