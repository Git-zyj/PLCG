/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92424
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92424 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92424
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((!(((-28 ? ((0 ? var_12 : 1528903228)) : (var_0 ^ var_2))))));
    var_21 ^= (max(((-((var_0 >> (var_13 - 31636))))), var_4));
    var_22 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 3; i_2 < 10;i_2 += 1)
                {
                    var_23 += (1 >> 24);
                    var_24 = var_13;
                    var_25 ^= (((arr_3 [i_0] [i_1 - 2]) > var_6));
                }
                /* LoopNest 3 */
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 11;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 11;i_5 += 1)
                        {
                            {
                                var_26 += ((~(61848 / 35148)));
                                var_27 += (max(((-(arr_4 [i_1 + 1] [i_5] [i_5]))), (((~(arr_16 [i_1 - 2] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 2] [i_1 - 2]))))));
                                var_28 += (((((max(var_1, 243)) > (((((arr_12 [i_0] [i_4] [i_3] [0]) > var_7)))))) ? var_18 : (((((arr_14 [i_0] [i_1 - 2] [i_1 - 2] [i_1 + 1] [i_1 - 2]) >= ((((var_8 > (arr_9 [i_0] [i_3] [i_4] [9])))))))))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 11;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 8;i_7 += 1)
                    {
                        {
                            var_29 = (((((~(((arr_10 [i_0] [i_0] [i_0]) ? 33 : -78))))) <= (((255 == 6099782345126746443) ? (3263798117 >= 24) : (3040769493805195864 ^ -25)))));
                            var_30 &= (((((-var_19 ? ((((arr_14 [i_0] [i_1] [i_1] [i_6] [i_7]) % 2147483647))) : (max(11, (arr_11 [1] [i_0] [i_0])))))) ? (~2331543669) : ((((3850947510083459921 != (arr_22 [i_7 + 1] [i_7 + 2] [i_7] [i_1 + 1] [i_7 + 3] [i_1 + 1])))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
