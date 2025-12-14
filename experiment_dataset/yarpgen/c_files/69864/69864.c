/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69864
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69864 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69864
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (31919 - -31898);
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_13 = (max(((~(~var_10))), ((((31895 ? 31919 : var_10))))));
                /* LoopNest 3 */
                for (int i_2 = 4; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_14 &= (arr_0 [i_0] [i_4 + 1]);
                                arr_12 [i_0 - 2] [i_1] [i_4 + 2] [i_1] = (((var_0 ? (arr_6 [i_1] [i_0 - 2] [i_0] [i_1]) : (((max(var_7, (arr_0 [i_0] [i_0]))))))) >> (((max((1 | 2844543840), ((min(var_3, -16))))) - 2844543810)));
                                var_15 = (~12183220034439000653);
                                arr_13 [i_0] [i_0 + 1] [i_1] [i_2 - 2] [i_3] [i_4 + 1] [i_1] = ((var_10 ? (((min(var_4, (arr_5 [i_3] [i_2 + 1] [i_0 - 1] [i_4 - 1]))))) : (arr_10 [i_0] [i_2 + 1] [i_0 - 1])));
                                var_16 = (((!var_5) || ((max((arr_11 [i_4 + 2] [i_4] [i_4] [i_3] [i_2 - 4]), (arr_11 [i_4 - 2] [i_4] [i_4] [i_4 + 2] [i_2 - 4]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_17 |= 24574;
    var_18 = ((var_4 ? var_6 : (((((var_7 ? var_10 : var_4)) << (4000429567612771108 - 23303))))));
    #pragma endscop
}
