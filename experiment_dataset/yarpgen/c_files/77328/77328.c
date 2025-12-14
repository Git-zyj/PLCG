/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77328
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77328 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77328
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((min(((0 ? 64868 : 659)), ((var_10 ? var_14 : var_15))))) ? ((64882 ? (var_5 && 109) : 1)) : (!var_1)));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 17;i_2 += 1)
                {
                    var_17 = ((1 == (65519 || var_8)));
                    var_18 = ((((min(972915818, (max(1466681108, var_0))))) ? ((3876353845 ? (min((arr_5 [i_0] [i_0] [i_1] [i_2]), 1466681108)) : var_10)) : (((var_7 > (arr_6 [3] [i_2 - 1] [i_2 + 4] [i_2 + 2]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_19 = (min((~64861), var_8));
                                var_20 = (1 & -1658567156);
                                var_21 ^= (arr_4 [i_4] [i_1]);
                            }
                        }
                    }
                }
                arr_13 [i_0] [i_1] = (min(((~(arr_10 [i_1] [i_0 + 1]))), (((arr_10 [i_1] [i_0 - 3]) ? (arr_10 [i_1] [i_0 - 1]) : (arr_10 [i_1] [i_0 + 1])))));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 21;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 21;i_6 += 1)
                    {
                        {
                            var_22 ^= (max(0, 7373935310612076345));
                            var_23 ^= (max((((67 ? 1 : 1))), ((((((arr_14 [i_1] [i_5] [i_1] [i_0]) << (189 - 174)))) & (((arr_0 [11]) ^ -21677))))));
                            var_24 ^= (((min((((arr_3 [i_0 + 1] [i_1] [i_5]) ? 272002416 : (arr_9 [i_5]))), (arr_18 [i_6] [i_1] [i_1] [i_0 + 2] [i_0]))) % ((min(((0 ? 1726244249 : 1466681095)), ((var_1 ? (arr_4 [i_0] [i_1]) : var_2)))))));
                            var_25 ^= ((var_7 && (((1 ? var_6 : 1)))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
