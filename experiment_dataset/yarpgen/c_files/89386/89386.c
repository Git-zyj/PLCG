/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89386
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89386 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89386
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 ^= ((!(~-1)));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_11 ^= ((max((1607795005 | 13863), ((32172 & (arr_2 [i_0] [i_0]))))) | ((min(((1037441053 ? -1922729555779598530 : 46966)), (62914560 & -13863)))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_10 [i_0] [i_1] = ((((min(-3321759485500694977, (arr_8 [i_4] [i_4] [i_4 + 1] [i_4] [i_1])))) ? ((~(arr_6 [i_2] [i_4 - 1] [i_4] [i_4] [i_4 - 1]))) : (((arr_8 [6] [i_1] [i_1] [i_1] [i_1]) ? (arr_8 [i_2] [i_2] [i_2] [i_2] [i_1]) : (arr_8 [i_2] [i_3] [i_2] [i_3] [i_1])))));
                                var_12 = (max(var_12, (!var_0)));
                            }
                        }
                    }
                }
                var_13 ^= 45286;
                var_14 = ((((var_0 - (1198455159813078811 ^ var_7))) > ((((max(19, var_8)) & (arr_4 [i_1] [i_0] [i_0] [i_0 - 2]))))));
            }
        }
    }
    #pragma endscop
}
