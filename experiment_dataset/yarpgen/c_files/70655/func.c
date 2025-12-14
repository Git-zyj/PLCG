/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70655
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70655 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70655
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
    /* LoopSeq 4 */
    for (signed char i_0 = 1; i_0 < 16; i_0 += 4) 
    {
        arr_2 [i_0 + 2] [(unsigned short)17] &= ((/* implicit */unsigned long long int) 4151265340U);
        var_20 ^= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) && (((/* implicit */_Bool) var_4)))))))) ^ (((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_19)), (var_10)))) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_1 [i_0] [i_0]) > (((/* implicit */long long int) var_10)))))) : ((-9223372036854775807LL - 1LL))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 1) 
    {
        arr_5 [i_1] = ((/* implicit */long long int) max((((((/* implicit */int) arr_4 [i_1])) + (((/* implicit */int) var_3)))), ((-(((((/* implicit */int) arr_4 [i_1])) ^ (((/* implicit */int) arr_4 [i_1]))))))));
        arr_6 [(unsigned short)4] [(unsigned short)4] |= (-(((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) arr_0 [i_1])))));
    }
    /* vectorizable */
    for (long long int i_2 = 1; i_2 < 11; i_2 += 4) 
    {
        arr_11 [i_2] &= ((/* implicit */long long int) ((arr_1 [i_2 - 1] [i_2 + 1]) != (((/* implicit */long long int) arr_8 [i_2 + 1] [i_2 - 1]))));
        arr_12 [i_2] = ((/* implicit */unsigned int) ((((/* implicit */int) var_3)) == (((/* implicit */int) var_13))));
        arr_13 [i_2] = (!(((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) > (arr_9 [i_2]))));
        var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_2 - 1])) && (((/* implicit */_Bool) var_3)))))));
    }
    /* vectorizable */
    for (signed char i_3 = 2; i_3 < 22; i_3 += 4) 
    {
        /* LoopNest 2 */
        for (short i_4 = 2; i_4 < 20; i_4 += 2) 
        {
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                {
                    var_22 = ((/* implicit */unsigned long long int) var_2);
                    arr_22 [i_5] = ((/* implicit */long long int) var_18);
                    var_23 *= ((/* implicit */signed char) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (arr_20 [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_5])))));
                    var_24 &= ((/* implicit */long long int) arr_17 [i_3]);
                }
            } 
        } 
        arr_23 [i_3] [i_3] = ((/* implicit */unsigned char) arr_16 [i_3]);
    }
    var_25 = ((/* implicit */unsigned short) var_9);
}
