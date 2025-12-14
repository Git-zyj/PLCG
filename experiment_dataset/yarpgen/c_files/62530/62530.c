/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62530
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62530 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62530
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((min(((2837 - (-32767 - 1))), (var_8 == var_6)))) ? ((((min(var_2, 65))) ? var_12 : (var_4 & var_4))) : (-32754 % 32767)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_5 [i_1] = (min((((-32767 - 1) ? 0 : 16566398907235737468)), (((32752 ? (((max((arr_1 [i_0]), var_3)))) : -32764)))));
                var_14 ^= (min((min(32744, ((-10 ? (arr_4 [i_1] [i_1] [i_0]) : var_11)))), (~4503599627370496)));
            }
        }
    }
    var_15 = (((((var_4 ? ((var_2 ? 32755 : 28672)) : ((max(var_3, var_9)))))) ? var_2 : 4775209111332699755));
    #pragma endscop
}
