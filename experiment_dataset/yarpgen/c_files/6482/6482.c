/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6482
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6482 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6482
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 812432185;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_18 -= (((((arr_2 [i_0]) ? (arr_2 [i_1]) : (arr_2 [i_1]))) == (max((arr_2 [i_1]), -88))));
                var_19 = (((((arr_0 [i_0]) + (arr_1 [i_0] [i_0]))) & (~var_6)));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 17;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 1;i_6 += 1)
                        {
                            {
                                arr_21 [i_2] [i_3] [i_4] [i_2] [2] = ((-((((((arr_11 [i_2] [i_4] [i_2] [6]) >> (51828 - 51800))) <= (arr_2 [i_3]))))));
                                arr_22 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = (5750581855907731397 + -443786486);
                                arr_23 [i_2 + 3] [1] [i_2] [i_5] [i_6 - 1] = (max((((var_5 || (arr_16 [i_2] [i_2] [i_6 - 1] [0])))), (((arr_10 [i_2 - 2]) ? (arr_10 [i_2 - 1]) : 5750581855907731388))));
                                var_20 = (max(var_20, ((((12696162217801820221 * 0) % ((5750581855907731397 ? 27962 : 14)))))));
                                arr_24 [i_2] [i_3] [14] [i_2] [19] [i_5] [i_6] = (var_12 / var_12);
                            }
                        }
                    }
                }

                for (int i_7 = 3; i_7 < 17;i_7 += 1)
                {
                    var_21 = ((((max(12, (arr_15 [i_2])))) && (5750581855907731397 & 18446744073709551606)));
                    arr_28 [i_2] = ((((((arr_27 [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_7 - 1]) + (arr_27 [i_7 - 3] [i_7 + 2] [i_7] [i_7])))) ? (544131427 & 5750581855907731397) : ((18006201340164564546 << (((arr_26 [i_2]) - 63462827))))));
                    var_22 = (max(var_22, ((((arr_2 [i_2 - 2]) != 0)))));
                    var_23 -= ((1 ? -443786458 : -1790446725));
                }
            }
        }
    }
    var_24 = (max(var_24, var_3));
    #pragma endscop
}
