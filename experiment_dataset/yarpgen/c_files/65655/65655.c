/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65655
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65655 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65655
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((min(0, 0))) || (var_8 && 224)));
    var_13 = (max((8522793358675889695 == 18446744073709551615), 24));
    var_14 ^= var_11;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_15 ^= (min((42838 - 0), ((((max(13406964796422998519, (arr_3 [i_0])))) ? (var_9 & var_9) : (var_6 < var_0)))));
                var_16 = (min(var_16, ((min(var_5, var_11)))));
            }
        }
    }
    #pragma endscop
}
