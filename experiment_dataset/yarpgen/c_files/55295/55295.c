/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55295
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55295 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55295
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((max(((-1 ? 55367 : 1)), (14 != 0)))) ? var_3 : (min(14, -3435497247472643794))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] = (((((((((arr_3 [i_0] [i_1] [i_1]) / 19129))) ? (2147483623 < var_2) : ((var_0 >> (((arr_2 [i_0] [i_0] [i_0]) - 3466103409))))))) ? (((2147483623 ? var_1 : 1))) : 20669));
                var_14 = (((max(4, (min(var_12, 8994)))) | (((((arr_0 [i_0]) != (1 == var_8)))))));
                arr_7 [i_0] [i_0] [i_1] = ((((((arr_0 [i_0]) | 3758645588))) ? (((0 - 4294967295) ? 65535 : -var_12)) : (arr_4 [i_1])));
            }
        }
    }
    #pragma endscop
}
