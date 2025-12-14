/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63291
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63291 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63291
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, ((min(var_7, ((((var_1 ? var_2 : 4)) >> var_5)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_16 = (((11 ? (((arr_4 [i_1]) + (arr_2 [i_0] [i_1]))) : (arr_2 [i_1] [15]))));

                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    arr_11 [i_1] [i_1] [i_0] = ((((((arr_8 [i_0] [i_2] [i_2] [i_0]) + (arr_3 [i_1])))) ? (((arr_8 [6] [i_1] [i_1] [i_1]) - (arr_0 [i_0]))) : ((7 + (arr_3 [i_0])))));
                    var_17 = 3;
                }
                arr_12 [i_1] [i_0] [i_0] |= (arr_9 [i_1] [i_1] [i_1] [i_0]);
                arr_13 [i_1] [i_1] [i_0] = ((!(arr_7 [i_0] [i_0])));
            }
        }
    }
    var_18 = (min(((19 ? 9223372036837998592 : 4294967295)), var_3));
    var_19 ^= (max(var_2, (var_10 * var_4)));
    #pragma endscop
}
