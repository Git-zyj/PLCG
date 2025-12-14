/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82791
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82791 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82791
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] = ((-32764 ? 14360 : -14360));
        var_14 = ((((~(~5139))) | var_9));
    }

    for (int i_1 = 2; i_1 < 12;i_1 += 1)
    {
        var_15 = ((29606 == (-32767 - 1)));
        arr_7 [i_1 + 2] [i_1] = ((!((!(!var_7)))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 15;i_3 += 1)
            {
                {
                    arr_13 [i_2] [i_2] = ((((min(((min(var_10, var_1))), ((25646 << (9072 - 9068)))))) ? (6897 != 32767) : (((!var_11) ? (((arr_4 [4] [i_3]) ? var_10 : var_13)) : (arr_12 [i_1] [i_2] [i_3])))));
                    var_16 = ((((((arr_6 [i_1 + 4]) / var_5))) ? -var_12 : ((var_3 & (arr_10 [i_1 + 4])))));
                }
            }
        }
        arr_14 [i_1] = ((~(arr_11 [i_1] [i_1] [i_1] [i_1])));
    }
    var_17 = (min(var_7, (max((((-32767 - 1) ? 0 : -21828)), (~var_7)))));
    #pragma endscop
}
