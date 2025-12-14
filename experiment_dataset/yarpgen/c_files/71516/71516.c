/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71516
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71516 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71516
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_16 = (min((arr_3 [1] [i_0] [i_1]), (arr_3 [i_0] [i_1] [10])));
                var_17 += (((32767 * 23) >> (!1)));
                arr_5 [i_1] = (-127 - 1);
            }
        }
    }
    var_18 = var_14;
    /* LoopNest 2 */
    for (int i_2 = 4; i_2 < 10;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            {
                var_19 = (var_0 == (var_12 == 18446744073709551592));
                var_20 = (min(var_20, ((((~(arr_8 [2])))))));
            }
        }
    }
    var_21 = 5756386549233204919;
    var_22 = var_14;
    #pragma endscop
}
