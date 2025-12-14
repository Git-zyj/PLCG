/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82630
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82630 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82630
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_16 = var_13;
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        var_17 = (~((+(var_10))));
        var_18 &= ((arr_1 [i_0]) ^ (arr_0 [i_0]));
        var_19 |= ((((/* implicit */_Bool) 16106127360ULL)) ? (8725724278030336ULL) : (16106127360ULL));
        arr_3 [12ULL] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_10)) ? (arr_1 [i_0]) : (var_13))) != (((arr_2 [i_0]) ^ (arr_2 [3ULL])))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 3) 
    {
        var_20 &= ((((/* implicit */_Bool) var_5)) ? (((arr_4 [i_1]) ^ (arr_5 [16ULL]))) : (((((/* implicit */_Bool) 18438018349431521279ULL)) ? (arr_6 [i_1] [i_1]) : (1036761753339828189ULL))));
        var_21 = var_7;
        arr_7 [i_1] [7ULL] = ((((/* implicit */_Bool) arr_6 [i_1] [17ULL])) ? (arr_5 [i_1]) : (arr_4 [i_1]));
        /* LoopNest 3 */
        for (unsigned long long int i_2 = 2; i_2 < 17; i_2 += 3) 
        {
            for (unsigned long long int i_3 = 3; i_3 < 16; i_3 += 1) 
            {
                for (unsigned long long int i_4 = 0; i_4 < 19; i_4 += 3) 
                {
                    {
                        arr_17 [i_1] = (-(((unsigned long long int) arr_11 [i_1] [i_3])));
                        arr_18 [i_1] [i_2] [i_1] [i_1] = ((((/* implicit */_Bool) (~(var_6)))) ? (arr_5 [i_1]) : (((((/* implicit */_Bool) arr_10 [i_1])) ? (arr_4 [i_1]) : (arr_13 [i_1] [i_3 - 3] [i_1] [i_1]))));
                        var_22 += (((~(arr_14 [2ULL] [i_2] [4ULL] [i_4]))) << (((((arr_14 [16ULL] [i_3] [i_3] [i_3]) + (arr_8 [12ULL] [12ULL]))) - (4477095563340300772ULL))));
                        arr_19 [i_1] [i_3] [i_4] = arr_16 [i_1] [i_1] [3ULL] [i_3 - 3] [13ULL] [i_4];
                    }
                } 
            } 
        } 
        var_23 = arr_8 [i_1] [i_1];
    }
    var_24 = max((((((/* implicit */_Bool) ((18446744057603424274ULL) * (1125899906777088ULL)))) ? (((var_9) >> (((var_2) - (12697049133703796347ULL))))) : (((((/* implicit */_Bool) var_1)) ? (var_4) : (var_12))))), (((var_1) - (((((/* implicit */_Bool) var_8)) ? (var_12) : (var_10))))));
}
