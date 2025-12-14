/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84728
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84728 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84728
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_14;
    var_19 = (6502 ? -6510 : 17036);
    var_20 = (min((((var_16 == var_17) ? 17040 : var_1)), var_13));
    var_21 = (~var_12);

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_22 = (((arr_1 [i_0]) && (((-(min((arr_0 [i_0] [i_0]), 14978531535665179545)))))));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 24;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                arr_13 [i_1] = ((((min(24, 45920))) ^ ((((((arr_5 [i_0] [i_0] [5]) << (((arr_11 [20] [i_3] [i_4]) - 53241)))) > ((59885 ? (arr_8 [i_0] [i_1]) : 31)))))));
                                var_23 = ((-(max(var_13, -17025))));
                                var_24 = ((+(min((arr_11 [i_0] [i_0] [i_2 - 1]), ((-32767 - (arr_1 [i_0])))))));
                                var_25 = (arr_6 [i_1] [i_2] [11]);
                            }
                        }
                    }
                    arr_14 [i_1] = (((((-(min(26160, 9223372036854775804))))) || var_17));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 25;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                {
                    arr_21 [i_5] [i_6] [5] [i_6] = ((3571397334738588446 ? (3473020028 > 17048) : (arr_4 [i_5] [i_0])));
                    var_26 = (min(var_9, 673102602));
                    var_27 = 11507136633636941573;
                }
            }
        }
    }
    #pragma endscop
}
