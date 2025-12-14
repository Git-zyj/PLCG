/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82042
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82042 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82042
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {
                var_11 = ((((((arr_6 [i_0] [i_1 - 1] [6]) << (((arr_6 [i_0] [i_0] [i_1 - 1]) - 663586409))))) ? ((((arr_6 [i_0] [i_1 - 2] [i_1 - 1]) == 7617794783029991901))) : -41));
                var_12 = 41;
                arr_7 [i_1 + 1] = ((41 != (max((~-17), 9434))));
            }
        }
    }

    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        var_13 = min(((-41 ? (arr_9 [i_2]) : 9223372036854775807)), (((arr_10 [i_2]) ? (arr_10 [i_2]) : (arr_8 [i_2]))));
        var_14 = ((-((min((min((arr_9 [19]), var_4)), (-41 < 62308))))));
    }
    var_15 = var_0;
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 10;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {
            for (int i_5 = 4; i_5 < 7;i_5 += 1)
            {
                {
                    var_16 = (max(var_16, 3987969041155477741));
                    var_17 = (((((arr_9 [i_4]) - 3240))));
                }
            }
        }
    }

    for (int i_6 = 1; i_6 < 12;i_6 += 1)
    {
        var_18 = (62312 & (((3615042094157929906 <= (((((arr_19 [i_6]) != -1932090015))))))));
        var_19 = ((~((~((-1619621723 ? 1456902073 : 30136))))));
    }
    #pragma endscop
}
