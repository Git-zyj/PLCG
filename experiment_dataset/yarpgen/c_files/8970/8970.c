/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8970
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8970 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8970
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_12;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_16 -= (max(16275, 0));
        var_17 |= ((0 - (((((var_6 >> (4362862139015168 - 4362862139015158)))) ? ((min(var_8, 125))) : (max(var_1, 0))))));
        var_18 = (max(var_18, ((!(((((max(3840, 218))) ? (((((arr_0 [i_0] [i_0]) < var_5)))) : (max((arr_3 [i_0]), (arr_1 [i_0]))))))))));
    }
    for (int i_1 = 1; i_1 < 23;i_1 += 1)
    {
        var_19 += ((((max(38528, 10600577974150648241))) ? (((((126 ? -2115213028918890515 : (arr_1 [i_1]))) > (arr_5 [i_1 - 1])))) : (((8721 >= -1780786893) | (!130)))));
        var_20 = ((-24 ? ((max((arr_5 [i_1]), 57344))) : (arr_0 [i_1] [i_1])));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 23;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    {
                        var_21 ^= (((((var_1 ? var_0 : 6))) ^ ((((arr_1 [i_3 + 1]) + ((-2 ? 0 : -124)))))));
                        var_22 = 255;
                    }
                }
            }
        }
        var_23 = (((((arr_7 [i_1 - 1] [i_1 - 1]) ? (arr_7 [i_1 - 1] [i_1 - 1]) : (arr_7 [i_1 - 1] [i_1 - 1]))) - 16384));
        var_24 = (max(var_24, (min(((-(var_12 / var_11))), (max(((var_14 * (arr_12 [i_1] [i_1] [i_1] [i_1]))), 1))))));
    }
    var_25 = 8998309872006337081;
    #pragma endscop
}
