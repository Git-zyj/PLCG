/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88611
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88611 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88611
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, ((((((-255 ? ((31 ? 32 : 107)) : var_16))) ? (min(189, 148)) : var_7)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [i_1] = 202;

                for (int i_2 = 1; i_2 < 13;i_2 += 1)
                {
                    arr_9 [i_0] = var_6;
                    arr_10 [i_0] [i_1] [i_2 + 2] = ((-((16 ? 179 : 255))));
                    var_19 = (max(var_19, (!253)));
                    var_20 = (((!3) ? (((arr_7 [i_2]) ? (((arr_2 [i_0] [i_2 + 1]) & 144)) : ((((arr_3 [i_0]) < var_13))))) : 207));
                }
                for (int i_3 = 2; i_3 < 14;i_3 += 1)
                {
                    var_21 = 107;
                    arr_14 [i_3] [i_3] = (((arr_13 [i_3 + 1] [i_3] [i_3 - 2] [i_3 - 2]) ? ((min((arr_4 [i_3 - 2] [i_1] [i_3 - 1]), var_11))) : ((min(207, (arr_4 [i_3 - 2] [i_1] [10]))))));
                }
                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    var_22 *= (((arr_8 [i_1] [i_1]) ? ((178 ? ((max(113, (arr_5 [i_4])))) : ((max(189, 183))))) : ((min((arr_8 [i_0] [i_1]), (arr_8 [i_1] [i_4]))))));
                    var_23 = (max(var_23, (arr_8 [i_4] [i_1])));
                }
            }
        }
    }
    var_24 = (max(var_24, 32));
    #pragma endscop
}
