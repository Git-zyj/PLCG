/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67646
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67646 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67646
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 &= var_5;
    var_17 = (max(var_11, (max((14693 < 14857), var_8))));
    var_18 = ((!(((~(1 | var_11))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    {
                        var_19 = (((arr_8 [i_0] [i_1 + 2] [i_0]) ? (arr_6 [10]) : (((arr_10 [i_0] [i_0] [i_2] [i_2]) % (arr_11 [i_2] [i_2] [i_3])))));
                        var_20 = ((((((arr_2 [i_2]) / (arr_6 [i_0])))) / (arr_10 [i_0] [i_0] [i_2] [i_0])));
                    }
                }
            }
        }
        var_21 = 62;
        arr_12 [i_0] = -117;
        var_22 = (((arr_4 [i_0]) % (arr_4 [i_0])));
    }
    for (int i_4 = 0; i_4 < 11;i_4 += 1) /* same iter space */
    {
        arr_15 [i_4] = (min((min((arr_0 [i_4]), (arr_7 [i_4] [i_4]))), (((0 || (arr_0 [i_4]))))));
        arr_16 [i_4] [i_4] = -30014;
    }
    for (int i_5 = 0; i_5 < 11;i_5 += 1) /* same iter space */
    {
        var_23 = (min((0 & 1), (min((((arr_0 [i_5]) ? -111 : 989716991)), (arr_3 [i_5] [i_5])))));
        /* LoopNest 2 */
        for (int i_6 = 3; i_6 < 8;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 11;i_7 += 1)
            {
                {
                    var_24 = ((((+((40504 ? (arr_4 [i_7]) : 14857)))) - (((((14875 ? var_6 : (arr_4 [i_7]))) <= ((1028607864 ? var_12 : 41)))))));
                    var_25 += ((-(((((54708 ? (arr_19 [i_7]) : 0))) ? (min((arr_10 [i_5] [i_5] [11] [i_7]), 41)) : ((min(93, -1143471023)))))));
                    var_26 += ((14865 ? (arr_9 [i_7] [i_6] [i_5]) : (arr_13 [i_7] [i_6])));
                }
            }
        }
    }
    #pragma endscop
}
