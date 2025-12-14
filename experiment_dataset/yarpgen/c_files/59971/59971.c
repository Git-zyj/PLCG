/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59971
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59971 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59971
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                var_15 = ((-(((((var_4 ? (arr_2 [20] [i_1]) : (arr_2 [i_0] [i_0])))) ? (min(5863291098046138998, (arr_1 [i_0]))) : ((((-5863291098046138998 + 9223372036854775807) >> (var_14 - 7718947537554778342))))))));
                var_16 = max(((((min(11677273362524863025, 13281244050337813503)) == 930830696))), (min(var_8, 65527)));
            }
        }
    }
    var_17 = ((var_6 && ((max(96, -104)))));
    var_18 = ((((((((var_14 ? -3332024496850907588 : var_4))) ? var_12 : -var_8))) || (((5863291098046138998 ? var_3 : ((23020 ? var_2 : var_5)))))));
    #pragma endscop
}
