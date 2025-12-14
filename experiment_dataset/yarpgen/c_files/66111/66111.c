/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66111
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66111 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66111
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_6;
    var_13 = ((((var_6 & ((-2776586131998737593 ? var_3 : var_4)))) << (!2776586131998737564)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 23;i_2 += 1)
            {
                {
                    var_14 = (max(var_14, ((((((((4294967295 ? -2776586131998737537 : 2776586131998737578))) + 2147483647)) >> ((((~((34 ? (arr_4 [i_0] [i_0]) : (arr_5 [i_0] [i_0] [i_0]))))) - 18446744073709551568)))))));
                    var_15 = ((~((~(arr_9 [i_1 - 1] [i_1] [i_1 + 1] [i_1])))));
                    arr_10 [i_0] [i_0] [i_1] = 2776586131998737537;
                }
            }
        }
    }
    #pragma endscop
}
