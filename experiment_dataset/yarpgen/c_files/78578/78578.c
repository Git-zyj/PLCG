/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78578
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78578 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78578
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 467651891;
    var_16 = ((((max(((var_3 ? 34761 : 6573144127019142276)), (((var_12 ? var_2 : var_7)))))) ? (((-var_11 - (var_14 - var_8)))) : (max(1837705742060462103, 2942562185))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_17 = ((-(max((arr_2 [i_0] [i_0]), ((max(13370, 32415)))))));
                arr_5 [i_0] [i_0] = ((((arr_0 [i_0] [i_1]) ? (arr_4 [i_0] [i_0] [i_0]) : (arr_2 [i_0] [i_1]))));
                var_18 = ((((((4013888307 ^ 3949046961) << (((min((arr_2 [i_0] [i_1]), (arr_4 [i_0] [i_0] [i_0]))) - 44))))) ? (arr_3 [i_0] [i_1] [i_0]) : (arr_2 [i_1] [i_1])));
                var_19 = (((((((467651875 / (-2147483647 - 1)))) * ((2430465351 ? 2147483647 : -8470559618450426707)))) << ((((770993147062704111 != (arr_1 [i_0] [i_0]))) ? ((((arr_0 [i_0] [i_0]) && -12456))) : ((0 ? (arr_1 [i_0] [i_1]) : 1554591811))))));
            }
        }
    }
    var_20 ^= var_5;
    var_21 = ((((((max(8470559618450426696, -8470559618450426697)) ^ 8526299536605193233))) ? var_4 : var_3));
    #pragma endscop
}
