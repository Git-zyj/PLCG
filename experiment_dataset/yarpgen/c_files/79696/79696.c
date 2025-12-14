/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79696
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79696 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79696
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            {
                var_10 |= (min(((244 * (arr_3 [i_1]))), ((max(((min((arr_0 [i_0] [i_0]), 238))), (min(1817280203, 176)))))));
                var_11 = (min(((min(111, 114))), ((-515194388075471307 ? -110 : 101))));

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_12 = (~var_2);
                    var_13 = (min((max(var_7, (arr_7 [i_0]))), ((((max(var_6, var_5))) ? (arr_0 [i_0] [i_2]) : (max(18, 2770021870))))));
                }
            }
        }
    }
    var_14 = ((140 + (-127 - 1)));
    var_15 = (min((max((min(var_7, var_5)), var_2)), (min((((665498959597647284 ? 11 : 14680064))), ((var_2 ? var_7 : var_8))))));
    /* LoopNest 2 */
    for (int i_3 = 2; i_3 < 12;i_3 += 1)
    {
        for (int i_4 = 2; i_4 < 10;i_4 += 1)
        {
            {
                var_16 = (((arr_3 [i_4]) ? var_5 : (min(((max((arr_12 [i_3 + 1] [i_3]), (arr_0 [i_3 - 2] [i_3 - 2])))), (var_8 % var_2)))));
                var_17 ^= var_9;
                arr_14 [i_3] [i_4 + 2] = ((+(((arr_0 [i_3] [i_3]) | (arr_6 [i_4 + 2])))));
                var_18 = 1;
                var_19 = (max(var_19, (arr_5 [i_3] [i_4] [i_4])));
            }
        }
    }
    var_20 = ((var_4 & ((var_3 ? ((var_0 ? var_7 : var_4)) : (var_0 || var_4)))));
    #pragma endscop
}
