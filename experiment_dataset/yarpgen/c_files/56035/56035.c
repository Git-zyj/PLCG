/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56035
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56035 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56035
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(-23, 0));
    var_17 = ((((((8855904652312382853 - 9223372036854775807) ? var_11 : (var_12 % var_6)))) ? (((((-6182 == var_4) == (115 / 2296835809958952960))))) : (min((var_1 * var_9), ((var_9 ? var_3 : 74))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_5 [i_0] = var_15;
                var_18 = ((((114688 >= 0) ? (arr_1 [i_0]) : -70)));
                var_19 = (arr_4 [i_0]);
                var_20 = 14575532203271789650;
            }
        }
    }

    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        var_21 += (((min((arr_7 [i_2]), (arr_7 [i_2])))) ? ((min((arr_4 [i_2]), var_1))) : (((2831597458 << (130048 - 130026)))));
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 14;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 14;i_5 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_6 = 4; i_6 < 11;i_6 += 1)
                        {
                            var_22 = (((arr_18 [i_3]) ? ((((arr_4 [i_6]) ? var_11 : (arr_14 [i_3])))) : (((arr_15 [4] [i_3] [i_4] [i_5]) - 112))));
                            arr_24 [i_2] [i_2] [i_3] [i_3] [i_5] [i_6] [i_6] = ((((arr_10 [i_2] [i_3] [i_6]) ? -1457232753832530422 : (arr_0 [0] [i_6 - 1]))));
                            arr_25 [i_6 + 3] [i_3] [i_3] [i_2] [i_6 + 1] [i_6] = 8693842619475307010;
                        }
                        for (int i_7 = 0; i_7 < 14;i_7 += 1)
                        {
                            var_23 |= (((var_9 || var_13) < ((32767 ? (max(2296835809958952960, 0)) : 1557728486))));
                            var_24 ^= (min((((arr_6 [i_2]) << (((arr_6 [i_2]) - 487015302)))), (arr_20 [2] [i_3] [1] [i_3] [i_3] [i_3])));
                        }
                        arr_29 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] = -12972;
                    }
                }
            }
        }
    }
    #pragma endscop
}
