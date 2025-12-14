/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64417
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64417 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64417
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((var_4 != ((max(var_7, var_5))))) ? ((-2510 ? 1 : -2493)) : var_10));
    var_12 = ((-1334175510 | (1230588560 ^ var_10)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    var_13 = ((1 ? 1 : 640808525));
                    var_14 = (((arr_4 [i_0] [i_1] [i_2]) ? (1 || 1) : (arr_5 [i_2] [i_1] [i_2] [i_1])));
                    var_15 += ((var_2 >= ((~(arr_4 [i_0] [i_0] [i_2])))));
                }
                for (int i_3 = 0; i_3 < 0;i_3 += 1)
                {
                    var_16 = 1;
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 8;i_4 += 1)
                    {
                        for (int i_5 = 2; i_5 < 10;i_5 += 1)
                        {
                            {
                                arr_14 [i_0] [i_1] [i_0] [1] [i_5] = ((((max((((arr_7 [i_0] [i_1] [i_3] [i_0]) ^ (arr_5 [i_0] [i_3] [1] [i_0]))), (~1)))) ? (max(((1 ? var_4 : var_8)), (arr_9 [i_0] [i_5]))) : -1));
                                arr_15 [i_4 + 2] [i_0] [i_3] [i_0] [i_0] = (((((((((arr_10 [i_0] [0] [i_0] [i_0]) ? (arr_2 [i_0] [i_0]) : -562391555232617234))) ? ((var_0 ? var_5 : (arr_0 [i_5] [i_0]))) : (((((arr_11 [i_1] [i_4] [2] [i_1] [i_0]) > (arr_9 [i_1] [i_1])))))))) ? ((var_1 ? (arr_12 [i_4] [i_4] [i_0] [i_4 + 3] [i_4 - 1]) : 1)) : ((((((min(1, 7))) && (arr_5 [i_3] [1] [1] [1])))))));
                                arr_16 [i_0] [i_1] [i_3] [i_4 + 2] [i_0] = ((((((((min(-19067, (arr_11 [i_0] [i_0] [i_3 + 1] [i_4] [i_5]))))) - (((arr_2 [i_5] [i_4 + 3]) ? (arr_3 [i_0] [i_0] [i_0]) : var_10))))) ? var_0 : ((max(1, -2572)))));
                            }
                        }
                    }
                }
                arr_17 [i_0] [i_0] = (((((((min(var_7, var_0)))) <= (var_9 & var_3))) ? ((((((arr_2 [i_0] [i_0]) || var_5)) || ((max(11213842145725989980, 2523)))))) : (arr_10 [i_0] [i_1] [i_0] [i_0])));
            }
        }
    }
    var_17 = ((-var_5 ^ (max(((min(var_7, var_2))), ((213 ? var_5 : 1))))));
    var_18 = (((((((var_1 ? var_2 : var_2))) + var_8)) * (((((var_1 ? 1 : var_4)) & (1 != var_7))))));
    #pragma endscop
}
