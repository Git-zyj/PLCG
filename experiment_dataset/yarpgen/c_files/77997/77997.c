/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77997
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77997 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77997
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 ^= var_13;
    var_15 = 92;
    var_16 = -65427;

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        var_17 = ((((max((arr_2 [i_0 + 1] [i_0 + 1]), ((-1223375365 / (arr_2 [i_0] [i_0 + 1])))))) * 92));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 20;i_2 += 1)
            {
                {
                    var_18 = ((121 - (arr_1 [i_1 - 1] [i_1 - 1])));
                    var_19 *= ((!(((-99 ? (((arr_1 [i_1 - 1] [2]) >> (var_9 - 1999955158066831226))) : (arr_4 [i_1 - 1] [i_2 + 3]))))));
                }
            }
        }
        var_20 = (min((((((arr_2 [i_0 + 1] [i_0 + 1]) + 2147483647)) >> (((arr_5 [21] [i_0] [i_0 + 1]) + 47)))), ((~((min((arr_0 [i_0]), (arr_2 [i_0] [i_0]))))))));
        var_21 = (min(var_10, ((3224889345 - (arr_1 [i_0] [i_0])))));
    }
    #pragma endscop
}
