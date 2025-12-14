/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74166
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74166 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74166
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_13 = (max(var_13, (((((var_8 == (((-(arr_0 [i_0])))))) ? 127 : var_11)))));
                var_14 = 1;
                var_15 += (arr_0 [i_0]);
                var_16 -= 971506652114207103;
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                {
                    var_17 = (min(((max(11331, 19380))), (max((((~(arr_4 [i_3])))), var_8))));
                    var_18 |= (min((((arr_5 [i_2] [i_4] [i_4]) ? (-2147483647 - 1) : 18446744073709551615)), 5009));
                    var_19 *= 18446744073709551615;
                }
            }
        }
    }
    var_20 = (min(var_6, var_9));
    #pragma endscop
}
