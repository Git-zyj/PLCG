/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92517
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92517 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92517
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = max((18446744073709551615 / -244038422), 18446744073709551615);
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 24;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                arr_11 [1] [i_0] [i_0] [i_0] [i_0] = ((((arr_7 [i_4] [i_3] [5]) ? (arr_7 [19] [i_0 - 1] [i_0 - 1]) : 0)) >> (arr_7 [i_1 - 3] [i_1 - 3] [i_1 - 3]));
                                var_15 = ((((~(arr_1 [i_4] [3]))) % (~-1402949924)));
                                arr_12 [i_4] [i_0] [i_2] [i_1 - 3] [0] [i_0] [5] = (max((min(65509, 1563472241713547728)), ((max(28843, (arr_7 [i_2] [i_3] [i_4]))))));
                            }
                        }
                    }
                    var_16 = (!195);
                    arr_13 [i_0] [i_1] [i_2] = ((((arr_9 [i_0] [i_1] [i_1 - 1]) ? (arr_8 [i_0] [i_0] [i_1] [i_2 + 1] [3]) : (arr_2 [i_0 - 2] [i_0 - 1]))));
                }
            }
        }
    }
    var_17 = ((var_0 ? (((15 ? -6371 : 2186324510))) : (((!31) ? ((3629935979 ? 10216 : 10446745507815723416)) : (min(var_3, 1))))));
    #pragma endscop
}
