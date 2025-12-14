/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59107
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59107 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59107
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_15 = (arr_1 [i_1 - 2]);
                                arr_14 [i_1] [i_4] [11] [i_3] [i_4] = ((~(((4121590531 | 2503967405) | (min(var_7, var_6))))));
                            }
                        }
                    }
                }
                arr_15 [i_0] [i_1] = (173376764 | 0);
                /* LoopNest 2 */
                for (int i_5 = 4; i_5 < 11;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 13;i_6 += 1)
                    {
                        {
                            arr_23 [i_0] [i_0] = (min((arr_10 [i_5 - 2] [i_5] [i_5] [i_5]), ((min(1, -122)))));
                            arr_24 [i_0] [i_1] [i_5] = ((((11172010206637099791 << (arr_12 [i_6] [i_1] [i_6] [i_6] [i_1 + 2]))) >= ((((arr_20 [8] [i_1 + 1] [i_0] [8]) ? var_10 : var_6)))));
                            var_16 = min(18446744073709551615, 4121590531);
                        }
                    }
                }
            }
        }
    }
    var_17 = (((4225113982351760013 | (4539628424389459968 ^ 0))) | var_12);
    var_18 = ((127 ? ((min(var_13, var_6))) : ((((((18446744073709551615 ? var_12 : 18446744073709551615)) > var_2))))));
    var_19 = (max(var_19, var_12));
    var_20 = (var_1 * var_4);
    #pragma endscop
}
