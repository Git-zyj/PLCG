/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9483
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9483 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9483
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, (var_5 + var_3)));
    var_16 = ((((!((max(var_6, var_0))))) && ((var_3 || (var_14 && 1)))));
    var_17 |= -var_11;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {
                        arr_13 [i_0] [i_1] [i_1] [i_3] [i_0] [i_0] = (min((((var_3 < (arr_9 [i_1])))), 1));
                        var_18 = (((((-(arr_0 [i_0 + 1] [i_1])))) ? (min(((var_6 ? 1 : 732376125)), (((52090 + (arr_12 [i_0] [11] [1])))))) : (((((0 ? var_13 : var_12)) ^ ((-(arr_0 [i_2] [i_1]))))))));

                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            var_19 = (max(var_19, (((((max(6464072149821137555, (arr_15 [i_0] [21] [i_3 - 1] [21] [i_0 + 1])))) && ((((0 && var_5) % (((arr_15 [i_0] [i_1] [i_2] [i_4] [i_0]) ^ var_1))))))))));
                            var_20 = (max((((var_6 ? 155 : var_12))), (max(var_13, (arr_7 [i_0 + 3] [i_1] [i_3 + 3])))));
                        }
                    }
                    var_21 = (~13459);
                    var_22 *= (((var_12 > (arr_1 [i_0] [i_1]))));
                }
            }
        }
    }
    var_23 = ((((((var_5 - var_2) ? var_8 : ((0 >> (var_14 - 778558186)))))) || var_5));
    #pragma endscop
}
