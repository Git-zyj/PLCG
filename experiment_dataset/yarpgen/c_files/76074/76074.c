/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76074
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76074 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76074
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((!(!var_3))) ? var_18 : ((((~6) ? (250 < var_17) : ((3175576814 ? 250 : 31450)))))));
    var_20 += (((((5871859757693166848 / -5871859757693166833) + 9223372036854775807)) >> (var_7 - 29290)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_21 *= (((--5871859757693166818) / (min(236, ((var_4 ? -5871859757693166833 : 804047560))))));
                arr_4 [i_0] = (5871859757693166839 ? ((((((~(arr_1 [1])))) > 941818234088024893))) : var_11);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        {
                            arr_9 [i_0] [i_1] [i_2] [i_3] = ((((-(~-23837))) % (((min((arr_6 [i_0] [i_1] [i_0] [i_0]), (-127 - 1)))))));
                            var_22 += (arr_1 [i_0]);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 19;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        {
                            arr_16 [i_0] [i_0] [i_0] [i_0] = (((((-(arr_11 [i_4] [i_4] [i_4] [i_4])))) ? (arr_11 [i_0] [i_0] [i_4] [i_5]) : ((var_14 ? (arr_11 [i_5] [i_5] [i_4] [1]) : 1))));
                            arr_17 [i_0] [i_5] = (-((((arr_2 [i_0]) && (arr_15 [i_0] [i_1] [i_0] [i_5] [i_1] [4])))));
                            var_23 = (max((arr_12 [i_0]), (((5871859757693166848 + (arr_0 [i_4] [i_0]))))));
                        }
                    }
                }
            }
        }
    }
    var_24 = (max(((((max(var_8, 5871859757693166812))) ? ((-5871859757693166804 ? 2034401409 : var_0)) : -var_0)), ((-var_11 ? 6 : ((14 ? var_5 : var_17))))));
    #pragma endscop
}
