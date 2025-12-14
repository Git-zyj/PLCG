/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61587
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61587 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61587
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        var_16 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [9LL] [i_0 + 1])) ? (((/* implicit */int) var_9)) : (var_14)));
        var_17 = ((/* implicit */int) (((~(9156695531248633058LL))) == (arr_0 [i_0] [i_0])));
    }
    for (short i_1 = 0; i_1 < 16; i_1 += 1) 
    {
        var_18 += ((/* implicit */unsigned short) (signed char)96);
        /* LoopSeq 3 */
        /* vectorizable */
        for (short i_2 = 0; i_2 < 16; i_2 += 4) 
        {
            var_19 = ((/* implicit */int) var_6);
            var_20 = ((/* implicit */unsigned int) arr_1 [i_1] [i_2]);
        }
        for (short i_3 = 0; i_3 < 16; i_3 += 3) 
        {
            arr_8 [i_1] [i_1] = ((/* implicit */long long int) var_12);
            var_21 = ((/* implicit */short) max((((/* implicit */unsigned char) (signed char)101)), (arr_1 [i_1] [(_Bool)1])));
        }
        for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 4) 
        {
            var_22 += ((/* implicit */int) ((((/* implicit */_Bool) (-(arr_12 [i_1] [i_4] [i_4])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-10)) ? (arr_2 [10U]) : (arr_5 [i_1] [12LL] [i_4])))) ? (((/* implicit */int) ((((/* implicit */int) var_3)) >= (((/* implicit */int) arr_1 [17LL] [10U]))))) : (var_1)))) : (arr_12 [i_4] [i_4] [i_4])));
            var_23 += ((/* implicit */unsigned char) ((((/* implicit */int) ((signed char) min((var_0), (((/* implicit */unsigned long long int) 1833143092299363828LL)))))) & (((/* implicit */int) (signed char)96))));
        }
    }
    for (signed char i_5 = 0; i_5 < 25; i_5 += 3) 
    {
        var_24 += ((((/* implicit */_Bool) min((min((((/* implicit */unsigned short) arr_14 [i_5])), (var_10))), (((/* implicit */unsigned short) ((_Bool) arr_13 [i_5])))))) ? (min((((/* implicit */unsigned long long int) arr_13 [i_5])), (((((/* implicit */_Bool) arr_14 [(short)14])) ? (var_5) : (var_5))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_14 [i_5])) >= (((/* implicit */int) arr_13 [i_5])))))));
        var_25 = ((/* implicit */unsigned int) (signed char)-96);
    }
    var_26 = ((/* implicit */unsigned int) ((((min((-9223372036854775802LL), (((/* implicit */long long int) (_Bool)1)))) % (((/* implicit */long long int) min((((/* implicit */unsigned int) var_8)), (var_15)))))) & (((/* implicit */long long int) ((/* implicit */int) var_8)))));
}
