/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93076
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93076 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93076
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            {
                var_19 += ((((max((((-23946 ? 11735 : 1792))), (max(2980827163066739013, -1))))) ? (min(((max(-72, -82))), (min(95, 3744208750)))) : ((((-29448 < (max(10401981303949515877, 127))))))));
                arr_6 [i_1] [i_0] [i_0] = (((min(((max(0, 812630754))), 13013038846629197553)) == (min((((arr_4 [i_0]) ? (arr_3 [4] [i_0] [i_0]) : (arr_5 [i_0] [i_1]))), (var_5 == -1590263513)))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 2; i_2 < 20;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 21;i_4 += 1)
            {
                {
                    arr_16 [i_2 + 3] [i_3] [i_4] [i_4 - 1] = ((((((((((arr_9 [i_2] [i_3] [i_4]) != -30535)))) < ((11691667675302925063 ? var_2 : (arr_11 [i_4 - 1] [i_3] [i_2 + 3])))))) << (((((min(1675525903, (arr_7 [i_2 + 2]))) - (106 > 18097))) - 1675525887))));
                    arr_17 [i_2 + 2] [i_3] [i_4] = ((((((var_17 ? (arr_7 [i_2]) : (arr_10 [i_2 + 3] [i_3] [i_4]))) & (((min(-106, var_4)))))) ^ ((((((arr_11 [i_2 + 1] [i_3] [i_4]) && 5601462241252672427)) ? (-22 != 39) : ((min(-22, 224))))))));
                    arr_18 [i_4] = (((((((max((arr_7 [i_4]), 63))) ? ((var_11 ? 7 : (arr_15 [i_2] [i_2 - 2] [i_2 - 2] [i_2]))) : (((min(65535, var_7))))))) ? (((max((arr_14 [i_2] [i_2] [i_2]), var_17)) / ((var_4 ? var_3 : var_18)))) : ((min(((0 ? 22788 : 1397034542)), ((min(45230, -18092))))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 8;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 10;i_6 += 1)
        {
            {
                var_20 = (max(var_20, ((max((((-1 < 268435455) == ((var_6 ? 77 : (arr_0 [i_5]))))), (((min(550758547, 20307)) > (var_0 | 22770))))))));
                var_21 = ((((((-22794 == 101) < ((min(42770, 37647)))))) < (((((-123 ? var_9 : 11104))) ? ((var_11 / (arr_0 [i_5]))) : ((min((arr_2 [i_5] [i_6] [i_6]), (arr_0 [i_5]))))))));
            }
        }
    }
    var_22 = (min(((((max(var_17, var_4)) == (((81 ? 268435451 : -77)))))), (max((min(-268435427, 200762202)), (var_0 <= 81)))));
    #pragma endscop
}
