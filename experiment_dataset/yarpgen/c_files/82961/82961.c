/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82961
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82961 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82961
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((0 && 7212271583264945764) > (((min(0, -4817230616992366839)) + ((min(0, 0)))))));
    var_19 = (((max(8, (101 * 4294967295))) - (((((var_16 * var_15) && (var_7 ^ -747623425)))))));
    var_20 = (min(var_20, (((((((((max(119, var_16))) && (13 && 5737764))))) & (((var_3 / 4294967287) * (4294967282 ^ 4294967280))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_8 [i_1] [i_1] [i_1] [i_0] |= (((max((min(var_5, var_7)), (var_5 / 93))) < ((((46 == var_8) || (var_16 ^ var_13))))));
                    arr_9 [i_2] = ((((13 % (18446744073709551615 * 4294967295))) == ((max((46 / 119), ((101 & (arr_0 [i_2] [i_2]))))))));
                }
            }
        }
    }
    var_21 = (max(((((var_1 + var_13) + (var_17 + -127)))), (max(-4752, -7959601820047114268))));
    #pragma endscop
}
