/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91859
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91859 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91859
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1) /* same iter space */
    {
        var_13 = 1;
        var_14 = (max(var_14, (((24181 ? (((min((arr_0 [i_0] [i_0]), (max((arr_0 [i_0] [i_0]), (arr_3 [i_0] [i_0]))))))) : (arr_2 [i_0]))))));
        arr_4 [i_0] = ((((min((arr_3 [i_0] [i_0]), var_0))) ? (((((((var_11 > (arr_2 [i_0]))))) <= ((3093122131 ? 1201845153 : 139))))) : ((min((arr_0 [i_0] [i_0]), ((!(arr_2 [i_0]))))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 18;i_1 += 1) /* same iter space */
    {
        var_15 = (4002553065 | 65515);
        var_16 = (min(var_16, (arr_7 [16])));
    }
    for (int i_2 = 0; i_2 < 18;i_2 += 1) /* same iter space */
    {
        var_17 = 17173303992935523618;
        var_18 += (max(((min(var_7, (arr_0 [i_2] [i_2])))), (arr_3 [i_2] [i_2])));
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 18;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    {
                        var_19 = (((~24167) + (min(292414249, 41355))));
                        var_20 = (((((arr_13 [i_2]) ? (min(11, 1)) : var_0))) ? (arr_13 [i_4]) : (max(((min((arr_6 [i_4]), var_10))), (min((arr_10 [i_3] [i_2]), (arr_2 [i_2]))))));
                    }
                }
            }
        }
        arr_18 [i_2] = (max(((24166 ? 292414255 : ((1 ? 4430497542920964218 : 14016246530788587398)))), ((min((arr_1 [i_2]), ((1 ? (arr_16 [14] [i_2] [i_2] [i_2] [i_2]) : (arr_13 [i_2]))))))));
        arr_19 [i_2] [i_2] = ((((max(((max(41355, (arr_14 [i_2] [i_2])))), (arr_17 [0] [i_2] [i_2] [i_2] [16])))) ? (arr_13 [i_2]) : var_5));
    }
    var_21 = ((4294967295 ? (min((1273440080774027998 - 104), 3584)) : 0));
    var_22 = (((292414249 ? 1 : 10071918284440190305)));
    var_23 = var_1;
    #pragma endscop
}
