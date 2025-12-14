/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83761
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83761 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83761
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((((var_10 / var_4) ? (var_5 || var_2) : ((var_6 << (var_5 - 3918625096861690770)))))) * ((var_13 ? var_2 : (var_15 * var_14)))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_8 [i_0] [i_0] = (((((min(-1131674062, 15858370164316191172)))) < (arr_4 [i_0] [i_1] [i_1])));
                arr_9 [i_0] [i_0] = (((max(((var_13 ? var_4 : (arr_7 [i_0]))), var_1)) % ((~(arr_2 [i_0 + 2])))));
                arr_10 [i_0] = (((~(arr_1 [i_1]))));
                arr_11 [i_0] [i_0] = (max((((arr_0 [i_0]) ? (arr_0 [i_1]) : 10264421070067957602)), (arr_5 [i_0 - 2])));
            }
        }
    }
    #pragma endscop
}
