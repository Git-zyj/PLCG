/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79482
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79482 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79482
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_12 = (min(var_12, ((max((((arr_1 [i_0]) ? var_10 : (arr_1 [i_0]))), (var_7 / var_2))))));
        var_13 = ((((((8487133177770734261 < var_1) / (((arr_0 [i_0] [i_0]) ^ 49152))))) ^ (((~9036137541508164007) / (((-12 ? 19353 : (arr_0 [i_0] [i_0]))))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    {
                        var_14 = ((((((arr_8 [i_2] [i_1]) || (arr_8 [i_3] [i_2])))) << (arr_8 [i_3] [i_2])));
                        arr_10 [i_0] [i_0] = ((((var_10 == var_2) >= (((arr_0 [i_0] [i_0]) ? var_9 : 6364195320554081149)))) ? ((((6364195320554081177 <= var_11) ^ (var_2 <= var_7)))) : (((min(var_1, (arr_0 [i_0] [i_0]))) * (arr_6 [i_0] [i_2]))));
                        var_15 = (max(((var_8 == (arr_2 [i_2] [i_1] [i_0]))), ((((min(2178521325, 1))) >= ((-27909 | (arr_4 [i_1])))))));
                    }
                }
            }
        }
    }
    var_16 = (((((((9025 ? 0 : 2407082690174074748))) ? (var_11 == var_0) : ((var_7 << (var_0 - 7876478010238472759))))) >= (max(var_3, ((var_10 ? 1 : 44769))))));
    #pragma endscop
}
