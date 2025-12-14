/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7354
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7354 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7354
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 *= 1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 9;i_2 += 1)
                {
                    var_12 = ((((-(((arr_5 [i_2] [i_0]) - -5982)))) + 3908414720));
                    arr_7 [i_0] = 53944;
                    arr_8 [i_0] [i_0] [i_0] = ((-((max((!56261), (-56 > -125))))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 8;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_13 -= (((((arr_5 [i_0] [i_2]) ? ((var_3 | (arr_13 [10] [i_3] [1] [i_1] [i_1] [5]))) : ((-125 ? var_9 : var_0)))) / ((((var_9 << (((var_8 + 26035) - 21)))) << (!-4768987993169681153)))));
                                var_14 = 6543286313964970976;
                                arr_14 [i_0] [i_1] [i_1] [i_0] [i_3 + 4] [i_4] = var_4;
                            }
                        }
                    }
                }
                for (int i_5 = 0; i_5 < 12;i_5 += 1)
                {
                    arr_18 [i_0] [i_0] = var_0;
                    var_15 = (((((((max(var_5, var_10))) ? var_0 : ((0 ? (arr_13 [i_5] [i_5] [i_5] [5] [i_0] [i_0]) : (arr_12 [i_0] [i_5])))))) ? ((6543286313964970966 ? -6543286313964970954 : (min(var_5, var_2)))) : (max((arr_17 [7] [8]), (arr_10 [i_0] [i_1 + 1])))));
                    var_16 = ((~(arr_1 [i_0])));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 12;i_6 += 1)
                    {
                        for (int i_7 = 4; i_7 < 9;i_7 += 1)
                        {
                            {
                                var_17 = ((((((((arr_21 [i_7] [i_6] [i_5] [i_0] [i_0]) ^ (arr_4 [i_1] [i_1 + 1])))) | -1189622981641332107)) == ((((var_9 ? var_3 : 1593394733))))));
                                var_18 = ((~(var_1 >= var_5)));
                            }
                        }
                    }
                }
                for (int i_8 = 0; i_8 < 12;i_8 += 1)
                {
                    arr_26 [i_0] [i_0] [i_0] = 5985;
                    var_19 = (arr_15 [i_1 + 1] [i_1] [i_1 + 1]);
                }
                arr_27 [i_0] [i_0] [i_0] = 5988;
            }
        }
    }
    #pragma endscop
}
