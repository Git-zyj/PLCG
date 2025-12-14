/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64137
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64137 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64137
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 21;i_1 += 1)
        {
            {
                var_19 -= (((((-((min(7, 38)))))) ? var_15 : var_10));
                var_20 = (min(var_20, (((15088403304078994982 ? ((((var_9 + var_1) && (~var_18)))) : ((((~4286578688) != (((16384 ? (arr_2 [i_0]) : var_11)))))))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 1; i_2 < 7;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 9;i_4 += 1)
            {
                {
                    var_21 = (((min(((var_10 ? var_7 : 46138)), ((((arr_10 [i_2] [3] [i_2 - 1] [i_2]) < 604436328127899047))))) == (arr_1 [i_2 - 1])));
                    var_22 = (min((((arr_6 [i_3] [i_3]) ? var_18 : (arr_3 [i_2 + 2] [i_3]))), (arr_3 [14] [i_4 + 1])));
                    var_23 = ((arr_5 [i_3] [i_3]) ? (max((max(1827944372, (arr_6 [i_3] [1]))), var_6)) : (~var_11));
                    var_24 = (max(((46139 ? 2256954326 : 1827944372)), (-var_4 / var_16)));
                }
            }
        }
    }

    for (int i_5 = 1; i_5 < 9;i_5 += 1)
    {
        var_25 = (((((!(arr_3 [i_5 - 1] [i_5 + 2])))) ^ (((var_9 >= (arr_3 [i_5 - 1] [16]))))));
        var_26 += ((((((var_14 ? 122 : (arr_0 [1])))) ? -1827944372 : var_9)));
    }
    #pragma endscop
}
