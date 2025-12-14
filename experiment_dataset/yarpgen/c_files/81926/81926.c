/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81926
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81926 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81926
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        {
                            var_12 = (max(var_12, ((((926060629 * 270215977642229760) ? ((((arr_5 [i_2] [i_1 - 3] [i_1]) & 69))) : (((~64276) ? 2986908505 : (((~(arr_6 [6] [6] [i_2])))))))))));
                            arr_10 [i_0] [i_2] [i_0] [i_3] [i_1] [i_3] = ((1510603510 ? (~878858937560748004) : (arr_3 [i_3])));
                            var_13 = (((arr_9 [i_0] [i_1 + 1] [i_2] [i_3]) == (max(0, -1898122173))));
                        }
                    }
                }

                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    var_14 = (max(var_14, (arr_11 [i_0 - 2] [i_1] [i_1 + 3] [i_4])));
                    arr_13 [i_1] [i_1 + 3] = (arr_11 [i_0] [i_0] [i_1] [i_4]);
                    var_15 += (((((((255358697 ? (arr_12 [i_0]) : 0)) - var_11))) ? (((((~(arr_2 [i_0] [i_1])))) * (arr_8 [i_0] [i_4] [i_4] [i_4]))) : (((((arr_1 [i_0 - 1]) < (((!(arr_7 [i_4] [8] [8]))))))))));
                }
            }
        }
    }
    var_16 = ((((max(((max(var_6, var_9))), var_11))) ? ((max(var_8, var_3))) : ((-(min(var_4, var_5))))));
    #pragma endscop
}
