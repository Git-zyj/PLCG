/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86839
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86839 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86839
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 4368431197288588310;
    var_16 = var_10;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_17 = ((~var_3) ? (((~(arr_0 [i_0])))) : (((arr_0 [i_0]) ? var_8 : var_4)));

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 15;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 16;i_4 += 1)
                    {
                        {
                            var_18 = max((((arr_13 [i_2] [i_2] [i_2] [i_2 + 1] [i_2 - 1] [i_2 - 1] [i_0]) ? (arr_13 [i_2 - 1] [i_2] [13] [i_2 + 1] [i_2 - 1] [i_2 + 1] [i_0]) : 63)), ((((arr_5 [i_0] [i_0]) ? 24414 : (arr_3 [i_0])))));
                            var_19 = (-var_7 ? (3611297804859866930 & 3672965129523504596) : ((((arr_2 [i_3 - 1] [i_2 + 1]) ? (arr_2 [i_3 + 1] [i_2 - 1]) : (arr_8 [i_3 + 1] [i_3] [i_3 - 1] [i_3])))));
                            var_20 &= (((((-(arr_8 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_3 + 1])))) ? (((((arr_10 [6] [i_2 + 1]) + 2147483647)) >> (2064 - 2056))) : (!41122)));
                        }
                    }
                }
            }
            var_21 = (max(var_7, (arr_9 [i_0] [i_0] [i_0] [i_1])));
        }
    }
    #pragma endscop
}
