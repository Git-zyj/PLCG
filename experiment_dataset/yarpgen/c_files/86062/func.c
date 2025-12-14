/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86062
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86062 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86062
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
    var_17 = ((/* implicit */unsigned char) var_14);
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        arr_2 [i_0] |= ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) ((unsigned char) 1021238528))) : (((/* implicit */int) arr_0 [i_0])));
        /* LoopSeq 2 */
        for (unsigned char i_1 = 3; i_1 < 14; i_1 += 3) 
        {
            arr_5 [i_1] [i_1 + 1] [i_1] = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */int) (short)-6266)) - (arr_3 [i_0] [i_1])))) ? (((((/* implicit */_Bool) -39039465202492586LL)) ? (10630298980680138664ULL) : (7816445093029412951ULL))) : (((/* implicit */unsigned long long int) max((((/* implicit */int) var_13)), (arr_1 [i_0])))))) - (((/* implicit */unsigned long long int) arr_3 [i_1 - 3] [i_1]))));
            var_18 = ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (short)17028))))) ? (((/* implicit */int) arr_4 [i_0] [i_0])) : (min((((/* implicit */int) arr_4 [i_0] [10])), (arr_3 [i_0] [i_1]))))) : (((/* implicit */int) var_5)));
        }
        for (signed char i_2 = 0; i_2 < 15; i_2 += 4) 
        {
            var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)36)) ? ((~(10630298980680138661ULL))) : ((~(var_0))))))));
            var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (max((2147483647), (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)93)) && (((/* implicit */_Bool) arr_3 [i_0] [i_2]))))))) : (((((/* implicit */_Bool) ((arr_1 [i_0]) - (((/* implicit */int) var_3))))) ? (((((/* implicit */_Bool) arr_4 [i_0] [i_2])) ? (((/* implicit */int) (unsigned char)219)) : (((/* implicit */int) (unsigned char)233)))) : (((arr_3 [i_0] [i_2]) - (var_10)))))));
            arr_8 [i_0] [i_0] [i_0] &= ((/* implicit */short) arr_6 [i_0] [i_0] [i_0]);
        }
        var_21 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_3 [i_0] [6ULL])) ? (arr_3 [i_0] [12]) : (arr_3 [i_0] [(signed char)0]))), (((/* implicit */int) var_13))));
    }
    for (signed char i_3 = 2; i_3 < 8; i_3 += 3) 
    {
        var_22 = ((/* implicit */long long int) (signed char)127);
        arr_12 [i_3] [i_3] = -1787429398;
    }
    var_23 |= ((/* implicit */short) var_9);
    var_24 += ((/* implicit */short) ((int) ((((/* implicit */_Bool) max((((/* implicit */long long int) (signed char)-2)), (var_11)))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_16)))));
}
