/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93786
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93786 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93786
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, ((max(var_4, (((!1) >> (((max(8192, var_16)) - 6706400934513515816)))))))));
    var_21 = (min(var_21, ((((var_18 > var_7) ? ((max(var_15, var_3))) : (max((var_7 || var_4), 8178)))))));

    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] = (arr_1 [2]);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 11;i_2 += 1)
            {
                {
                    var_22 = ((((8192 ? 992 : (arr_3 [4] [i_0]))) | (arr_3 [i_2 + 1] [i_0 - 3])));
                    var_23 = (max(var_23, ((max(((min((!222), (arr_1 [i_0 - 1])))), ((var_4 ? (((5442123340874103463 > (arr_4 [i_0])))) : (max(222, var_7)))))))));
                }
            }
        }
    }
    for (int i_3 = 2; i_3 < 10;i_3 += 1)
    {
        var_24 += ((((((((64531 | (arr_7 [i_3])))) + 3271022423782745711))) ? ((((var_15 && (arr_6 [13] [i_3] [11] [0]))))) : ((((min(41, 6017133456358997946))) ? ((var_9 ? var_16 : (arr_9 [i_3]))) : var_8))));
        var_25 = ((((((((arr_8 [i_3]) & (arr_0 [i_3 + 1] [11]))) << (var_13 - 1725382623)))) ? ((((((var_11 + 2147483647) << (var_18 - 178)))) * (min((arr_4 [i_3]), var_2)))) : ((((min((arr_1 [i_3]), (arr_9 [5]))))))));
    }
    #pragma endscop
}
