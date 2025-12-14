/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56947
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56947 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56947
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 |= 716543027;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_1] [i_1] = (18446744073709551615 > 616705430);
                var_15 = var_2;
                var_16 ^= (min(((((((arr_2 [i_0] [i_1]) + 18446744073709551615))) ? ((min((arr_2 [16] [16]), (arr_0 [i_0])))) : (arr_0 [i_0 + 2]))), ((-(arr_0 [i_0])))));
            }
        }
    }
    #pragma endscop
}
