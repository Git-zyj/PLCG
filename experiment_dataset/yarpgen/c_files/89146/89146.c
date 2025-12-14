/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89146
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89146 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89146
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 19;i_2 += 1)
                {
                    var_10 = (min(((((0 ^ 119) | (((arr_8 [i_0] [i_2] [i_2] [i_0]) & -104))))), (max(3198800734, (arr_5 [i_2 + 2] [i_2 + 3] [i_2])))));
                    var_11 = (max(var_11, -32766));
                    arr_9 [i_0] [i_1] [i_2] [i_2] = ((+((53351 * (((arr_2 [i_1]) ? (arr_4 [i_0]) : 1628522332))))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_12 = ((max(((max(3198800734, (arr_1 [i_0])))), (max((arr_5 [i_0] [i_0] [i_2]), 8666833651034790023)))) > ((((!((!(arr_5 [i_3 + 2] [i_2] [i_0]))))))));
                                arr_17 [i_0] [i_1] [i_2] [i_4] = ((((((arr_14 [i_2] [i_1] [i_0] [i_1] [i_4] [i_4]) || (arr_13 [i_0] [i_0]))) && (max(1, 1)))) && ((33295 || (8666833651034790047 || 0))));
                                var_13 = ((41 * (arr_4 [i_1])));
                            }
                        }
                    }
                    var_14 = (min(var_14, (((((((0 | 1) * (((arr_14 [i_0] [i_0] [i_0] [i_0] [i_1] [i_2]) & 1))))) ? (((((((-8666833651034790047 + 9223372036854775807) << (16647 - 16647)))) && ((max((arr_11 [i_0] [i_1] [i_1] [i_1]), 1)))))) : 1)))));
                }
                for (int i_5 = 1; i_5 < 20;i_5 += 1)
                {
                    var_15 = (((((!(arr_16 [i_0] [i_5 - 1] [i_5 + 2] [i_5 - 1] [i_5 + 1])))) + (arr_16 [i_0] [i_5 - 1] [i_5 - 1] [i_5 + 2] [i_5 - 1])));
                    arr_20 [i_5] [i_1] [i_0] = -3560005416;
                }
                for (int i_6 = 0; i_6 < 22;i_6 += 1)
                {
                    var_16 = (min(var_16, ((max((((32767 ? -4259245766847470377 : 1))), (arr_13 [i_0] [i_0]))))));
                    arr_24 [i_1] [i_1] [i_1] = ((~(7353219276672447330 / -1623155293)));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 22;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 22;i_8 += 1)
                        {
                            {
                                arr_31 [i_0] [i_0] [i_1] [i_6] [i_7] [i_8] = max((max((((arr_25 [i_0] [i_1] [i_6] [i_0] [i_7] [i_8]) | 3560005424)), 3560005434)), (((~(arr_15 [i_6])))));
                                var_17 = 16;
                                arr_32 [i_0] [i_0] [i_6] [i_6] [i_7] [i_8] = (~8192);
                            }
                        }
                    }
                }
                var_18 = (max((((arr_30 [i_0]) ? ((8431 - (arr_10 [i_0] [i_1] [i_1] [i_1]))) : -1537414251)), (!-9)));
                arr_33 [i_0] [i_1] = 1;
            }
        }
    }
    var_19 *= (min(3198800750, (min((min(-4320433921483666680, 1)), -8437))));
    var_20 = -1;
    var_21 = var_5;
    #pragma endscop
}
