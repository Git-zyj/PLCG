/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77497
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77497 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77497
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 8638956537343216596;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_0] = 7857647257333979995;
                arr_8 [21] [i_0] [i_1] = ((arr_0 [i_0]) ? ((-(arr_6 [i_0] [i_0] [i_1]))) : ((max((arr_1 [i_0]), (arr_4 [i_1] [i_0 - 1] [i_1])))));
            }
        }
    }
    var_20 = (min((var_4 / var_9), ((-var_0 ? var_0 : 17629391711249709030))));

    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        var_21 &= (arr_9 [i_2] [10]);
        var_22 = (max(var_22, 8852448756183931044));
        arr_11 [i_2] [i_2] = 36028797002186752;
        arr_12 [i_2] = min(((((arr_4 [7] [22] [i_2]) ? ((36028797002186752 ? var_17 : -4630030394071221014)) : (arr_3 [21])))), (((((-(arr_3 [i_2])))) ? (arr_9 [8] [7]) : (var_6 * 15464729479903978320))));
    }
    for (int i_3 = 1; i_3 < 22;i_3 += 1)
    {
        var_23 &= -8852448756183931050;
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 23;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 23;i_5 += 1)
            {
                {
                    var_24 = (var_9 ? (((((arr_5 [i_3]) < (min(var_18, 10967670779417455868)))))) : (min((arr_4 [i_3 + 1] [i_3 + 1] [16]), (arr_4 [i_3] [i_4] [7]))));
                    var_25 = (max(var_25, (((16 + 11249176445635043840) ? (min((!536870896), (arr_21 [i_4] [i_4] [i_4]))) : (var_12 <= var_6)))));
                    var_26 = (((min(((0 ? 7479073294292095746 : var_8)), (min(7479073294292095748, var_2)))) < (!-8852448756183931044)));
                    var_27 *= 8852448756183931044;
                }
            }
        }
    }
    for (int i_6 = 4; i_6 < 22;i_6 += 1)
    {
        var_28 = (max(var_28, ((((((7479073294292095748 ? 36028797002186752 : (arr_5 [i_6])))) ? (arr_5 [i_6]) : -2532850751107785429)))));
        var_29 *= 6954145644342647546;
    }
    #pragma endscop
}
