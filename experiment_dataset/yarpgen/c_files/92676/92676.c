/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92676
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92676 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92676
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_7 [5] [i_0] = (((((max(1, (arr_4 [i_0]))) <= (((min(1, 62)))))) ? (((-1655245063497118260 >= 1) >> (248 != 1))) : (((arr_2 [i_0]) & (arr_2 [i_0])))));
                var_15 = (max(var_15, ((((((arr_1 [i_0]) + (arr_0 [i_0] [i_0]))) < (arr_0 [5] [i_0]))))));
            }
        }
    }
    var_16 -= (!var_9);
    var_17 = ((var_13 == (min(((21 ? var_7 : var_14)), 1))));
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 13;i_4 += 1)
            {
                {
                    var_18 = (min(var_18, (((~((-1015808 ? 287667426198290432 : (10560 | 1))))))));
                    var_19 -= (((max((arr_1 [i_4 + 1]), (arr_13 [i_4 - 1] [i_4 - 1] [i_4])))) ? ((((((3618980050 ? 15569 : 194))) / (arr_4 [i_4 + 1])))) : (arr_15 [i_2]));
                    var_20 = (((((-797031648 ? (((251 == (arr_15 [i_2])))) : ((((arr_15 [13]) == 1)))))) ? (((arr_8 [i_4 + 1]) ? (arr_8 [i_4 + 1]) : (arr_8 [i_4 + 1]))) : ((((!(arr_6 [i_4 - 1])))))));
                    var_21 = (min(var_21, (((-(8191 <= 287667426198290458))))));
                }
            }
        }
    }
    var_22 = (var_8 < (((((201 ? 1 : 235))) ? (7936 & 250) : ((min(1, 384))))));
    #pragma endscop
}
