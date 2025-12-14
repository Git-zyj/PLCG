/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69359
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69359 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69359
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_4 [11] [6] = ((76 ? ((var_11 ? (((max((arr_2 [i_0]), (arr_2 [2]))))) : -var_12)) : ((((((min(237, 28))) || -123))))));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    arr_13 [5] [i_1] = 28;
                    var_13 = (max((((arr_10 [i_2] [i_1 + 2] [2]) && (arr_3 [i_0] [i_0]))), var_4));
                    var_14 ^= ((((16993 / (arr_5 [i_1 + 2] [i_1 - 2] [i_1 + 1])))) ? 32757 : 18446744073709551615);
                }
            }
        }
        arr_14 [i_0] = var_1;
        var_15 ^= (min((((var_9 ^ var_10) ? ((((arr_12 [3]) ^ (arr_11 [8] [1] [3])))) : var_9)), (arr_6 [5] [i_0])));
    }
    var_16 = (var_4 ? var_11 : ((var_9 ? (((var_2 ? var_12 : var_12))) : var_9)));
    #pragma endscop
}
