/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9762
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9762 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9762
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_14 = ((50031 != (((arr_5 [i_0]) ? ((var_9 ? 18446744073709551615 : 2752474899)) : (((((arr_6 [i_0]) <= 0))))))));
                arr_7 [i_0] = ((((((arr_3 [i_0 - 1]) && ((min(var_5, var_8)))))) >> (((arr_1 [3]) + 113))));
                var_15 = (max(var_15, ((((((max((arr_3 [6]), var_4))) ? (arr_2 [i_1]) : (127 >= 0))) % (max((arr_2 [i_0 - 3]), (((1 * (-2147483647 - 1))))))))));
            }
        }
    }
    var_16 ^= var_2;
    var_17 = var_10;
    #pragma endscop
}
