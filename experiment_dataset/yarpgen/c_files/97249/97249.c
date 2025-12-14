/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97249
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97249 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97249
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    {
                        arr_9 [i_0] [i_1 - 1] [i_2] [i_3] = ((15 ? 2251799813685247 : -2251799813685242));
                        var_17 = (min(var_17, ((((((((max(-126, 0))) ? (arr_2 [i_0]) : ((var_0 ? var_10 : 59659))))) ? (1345137889 / -2251799813685251) : (((((min((arr_0 [i_0]), (arr_6 [i_2])))) ? var_1 : (arr_4 [i_2] [i_1 + 1] [i_1 + 1])))))))));
                        arr_10 [i_0] [i_0] [i_2] [22] [i_0] &= var_15;
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 24;i_5 += 1)
            {
                {
                    var_18 = (~113);
                    arr_15 [i_5] = ((((max((((-1345137890 + (arr_12 [i_0] [i_4])))), (2251799813685251 >> 0)))) ? 2147483647 : ((((arr_5 [i_0] [19] [19]) != ((2251799813685247 ? 207 : 239)))))));
                    var_19 = (min((20 - 0), ((((~(arr_2 [i_0])))))));
                    var_20 = (124 != 1149150450);
                }
            }
        }
        arr_16 [i_0] = (((1345137889 / 2251799813685239) != (((arr_11 [i_0] [i_0]) ? (arr_8 [i_0] [i_0] [i_0] [i_0] [i_0]) : var_6))));
    }
    var_21 = ((((((~18446744073709551604) ? var_16 : ((min(65527, var_14)))))) ? (~197) : ((((var_9 ? var_12 : -1345137890))))));
    var_22 = var_2;
    var_23 = 786432;
    #pragma endscop
}
