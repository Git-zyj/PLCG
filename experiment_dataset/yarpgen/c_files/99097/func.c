/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99097
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99097 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99097
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
    var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((int) ((var_6) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))) : (((/* implicit */int) var_10))));
    var_15 += ((/* implicit */long long int) ((signed char) ((((var_4) + (9223372036854775807LL))) >> ((+(((/* implicit */int) var_6)))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (unsigned char i_1 = 3; i_1 < 16; i_1 += 4) 
        {
            {
                var_16 = ((/* implicit */unsigned int) ((((((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_4 [i_0] [i_1]) : (((/* implicit */unsigned int) arr_3 [i_1 - 3])))) >= (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_2 [i_0]))))))) ? (504475710) : (((/* implicit */int) (signed char)56))));
                var_17 = ((/* implicit */unsigned long long int) arr_0 [i_0]);
            }
        } 
    } 
    /* LoopSeq 4 */
    /* vectorizable */
    for (int i_2 = 1; i_2 < 15; i_2 += 1) /* same iter space */
    {
        var_18 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_2 + 1])) ? (arr_3 [i_2]) : (((/* implicit */int) var_10))));
        var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((((/* implicit */int) arr_0 [i_2 + 1])) << (((arr_7 [i_2 - 1]) - (3753016942404025842ULL))))))));
        var_20 = ((/* implicit */unsigned long long int) (signed char)56);
        arr_9 [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_2] [i_2 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_2]))) : (var_11)));
        var_21 = ((/* implicit */unsigned short) ((var_1) ^ (((/* implicit */unsigned int) var_8))));
    }
    for (int i_3 = 1; i_3 < 15; i_3 += 1) /* same iter space */
    {
        var_22 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_6 [i_3])) ? (min((arr_1 [i_3]), (((/* implicit */unsigned long long int) var_12)))) : (arr_6 [i_3 - 1])))));
        var_23 = ((/* implicit */int) arr_1 [i_3]);
    }
    for (int i_4 = 1; i_4 < 15; i_4 += 1) /* same iter space */
    {
        var_24 = ((/* implicit */unsigned short) arr_10 [i_4]);
        arr_14 [i_4] [i_4] = ((/* implicit */_Bool) ((var_6) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_1 [2ULL]) != (((/* implicit */unsigned long long int) var_1)))))) ^ (((arr_12 [i_4]) ? (arr_7 [i_4 + 1]) : (arr_7 [i_4]))))) : (((/* implicit */unsigned long long int) (-(arr_3 [i_4 - 1]))))));
        var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) ((((var_0) ? (((/* implicit */int) arr_2 [6LL])) : (((/* implicit */int) arr_2 [(unsigned char)8])))) > (((/* implicit */int) arr_2 [(unsigned char)8])))))));
        var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) arr_5 [i_4] [i_4] [14]))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_5 = 0; i_5 < 16; i_5 += 4) 
        {
            var_27 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_11 [i_5])) || (((/* implicit */_Bool) arr_1 [i_5]))));
            arr_18 [i_4 - 1] [10U] [i_4 - 1] = ((/* implicit */short) (signed char)-56);
        }
    }
    for (int i_6 = 1; i_6 < 15; i_6 += 1) /* same iter space */
    {
        var_28 = ((/* implicit */int) arr_12 [i_6]);
        var_29 *= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_20 [0])) >> (((((((/* implicit */_Bool) var_4)) ? (arr_7 [0LL]) : (((/* implicit */unsigned long long int) arr_19 [8])))) - (3753016942404025819ULL)))));
    }
}
