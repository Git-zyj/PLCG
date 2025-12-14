/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78434
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78434 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78434
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = max(var_12, ((min(((min(18, 105))), ((var_2 ? 195 : 5566699529306365108))))));
    var_15 = 18;
    var_16 = (min(var_16, var_11));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_17 = (min(var_17, ((((((1 ? var_5 : (((arr_0 [i_0] [i_0]) | 1))))) ? (var_2 && 6) : ((-((1 ? 63 : 16352605553322404157)))))))));
                arr_6 [i_1] [i_1] = ((((((((arr_3 [i_1] [i_1]) * 18410715276690587648))))) - ((((min(102, 137304735744))) ? (max(11455525869570962001, 64)) : (arr_5 [i_0] [i_0 - 1] [i_1])))));
                arr_7 [i_1] [i_1] [i_1] = ((max(241, (arr_3 [i_1] [i_1]))) / ((-(max(70368744177663, 143)))));

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_18 = (max(var_18, (11326756497975050204 < 844424930131968)));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_19 &= (((max((((arr_10 [i_0] [i_1 - 1] [i_4]) / (arr_11 [i_0] [i_1 - 1] [i_1 - 1]))), (~-5526306395711267334))) * (((min((arr_15 [i_4] [i_4] [i_3] [i_2] [i_1] [i_0 + 1] [i_0]), (max(var_6, (arr_9 [i_0] [i_1 - 1] [i_2] [i_3])))))))));
                                var_20 = (min(var_20, (arr_14 [i_3] [i_2] [i_1 - 1] [i_0])));
                            }
                        }
                    }
                    var_21 = (max(((min(var_1, (-127 - 1)))), ((~(var_12 == 18)))));
                    arr_16 [i_1] [i_1 - 1] [i_2] = (max((max((((arr_11 [i_2] [11] [i_0]) / (arr_3 [i_1] [i_1 - 1]))), (var_3 * 239))), (((arr_14 [i_0] [i_1 - 1] [i_1] [i_1]) | 7378284352739896557))));
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 14;i_5 += 1)
                {

                    for (int i_6 = 1; i_6 < 13;i_6 += 1)
                    {

                        for (int i_7 = 4; i_7 < 13;i_7 += 1)
                        {
                            var_22 -= 111;
                            var_23 = (~3);
                        }
                        var_24 = (min(var_24, (((!(((arr_4 [1]) && 15)))))));
                        var_25 = ((~(((arr_4 [i_1]) ? var_6 : 223))));
                        var_26 = ((-(arr_10 [i_0 + 1] [i_1 - 1] [i_1])));
                    }
                    for (int i_8 = 0; i_8 < 14;i_8 += 1)
                    {
                        arr_28 [i_1] [i_1 - 1] [i_1 - 1] [i_1 - 1] = ((!(45 & 18446744073709551606)));
                        arr_29 [i_0] [i_1] [i_5] [i_5] [i_8] = (-18 && 11455525869570962001);
                        arr_30 [i_0] [i_1] [i_5] [i_1] = -var_10;
                    }
                    for (int i_9 = 1; i_9 < 10;i_9 += 1)
                    {
                        arr_33 [i_0] [8] [i_5] [i_9] |= ((~(arr_21 [2] [i_0] [i_0] [2])));
                        var_27 = (arr_4 [i_1]);
                    }
                    var_28 |= ((-((-(arr_8 [i_1])))));
                    var_29 = (+(((arr_14 [i_5] [i_1] [i_1] [i_0]) ? (arr_23 [i_1] [i_0]) : (arr_24 [i_5] [i_1] [i_1 - 1] [i_1] [i_0]))));
                }
            }
        }
    }
    #pragma endscop
}
