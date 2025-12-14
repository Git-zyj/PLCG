/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91587
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91587 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91587
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_10 = min(((((~37) <= -83153708483082678))), var_5);
                                arr_16 [i_0 + 2] [i_1] [i_1] [i_1] [1] [i_0 + 2] = min((-83153708483082656 / 190), ((((arr_13 [i_0 - 1]) - (arr_13 [i_0 - 1])))));
                            }
                        }
                    }
                    arr_17 [i_2] = (((arr_10 [i_0 - 2] [i_0 - 1] [i_0 - 3]) ? ((((min(var_8, var_4))))) : -83153708483082668));
                    arr_18 [i_2] [i_0] = ((!(((min(2720556327, -1965048636560507400))))));
                    arr_19 [i_1] [i_1] [i_1] [i_1] = (min(((min(((10284 << (var_3 - 14316153872673856070))), (((1574410965 && (arr_8 [i_0] [i_0 + 3] [i_2]))))))), (min(3796049951735991404, -65))));
                }
            }
        }
    }
    var_11 -= (min((min((~18446744073709551607), 117)), (min(0, -1))));
    #pragma endscop
}
