/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73095
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73095 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73095
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_2] |= ((6093 / ((15 ? 31868 : (-127 - 1)))));
                                var_17 = (max(var_17, (((~(((arr_5 [i_0] [i_2]) % var_12)))))));
                                var_18 ^= 166;
                            }
                        }
                    }
                }
                arr_13 [i_1] [i_1] [i_0] = (max((min((min(18143152713151856227, var_7)), -102)), 0));
                /* LoopNest 2 */
                for (int i_5 = 2; i_5 < 17;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 19;i_6 += 1)
                    {
                        {
                            var_19 = ((62517 & (min(((max(-32764, -1891261658616229480))), ((1125497972 ? (arr_5 [i_1] [i_1]) : 48555981))))));
                            var_20 = 102;
                            var_21 = (((((-(((arr_0 [11]) ? 48555981 : -7518394843237052775))))) ? (((-(~14761)))) : (((var_7 + 9223372036854775807) << (448970768 >= var_1)))));
                            arr_18 [i_0] [i_6] [i_1] [i_6] [i_1] [8] = (arr_3 [i_5 + 1] [i_5] [i_5 + 1]);
                        }
                    }
                }
            }
        }
    }
    var_22 = ((~(max((var_4 == var_12), var_2))));
    var_23 = ((~(!var_0)));
    #pragma endscop
}
