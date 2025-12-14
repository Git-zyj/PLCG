/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62064
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62064 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62064
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
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        arr_2 [i_0] [(short)0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((1152921504573292544ULL) << (((17293822569136259071ULL) - (17293822569136259040ULL)))))) ? (((arr_0 [1ULL]) ? (((/* implicit */long long int) arr_1 [i_0])) : (8589934591LL))) : (((/* implicit */long long int) ((arr_1 [i_0]) * (((/* implicit */int) var_10))))))) != ((-(-5974824448891060639LL)))));
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((1152921504573292545ULL) & (((/* implicit */unsigned long long int) ((arr_1 [4LL]) ^ (arr_1 [9U]))))))) && ((!(((/* implicit */_Bool) (+(arr_1 [(unsigned char)5]))))))));
        var_18 *= ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_12))));
    }
    for (long long int i_1 = 0; i_1 < 13; i_1 += 1) /* same iter space */
    {
        var_19 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(4294967270U))))));
        arr_7 [i_1] = (short)-26984;
    }
    for (long long int i_2 = 0; i_2 < 13; i_2 += 1) /* same iter space */
    {
        var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) (-(min((max((((/* implicit */unsigned long long int) (unsigned short)0)), (17293822569136259049ULL))), (((/* implicit */unsigned long long int) max((((/* implicit */short) arr_8 [i_2])), (var_5)))))))))));
        var_21 |= ((/* implicit */unsigned char) ((((max((arr_6 [(short)3]), (((/* implicit */unsigned long long int) (signed char)96)))) >> (((arr_4 [i_2]) - (5356191453572134297LL))))) + (min(((~(arr_6 [(unsigned char)9]))), (min((((/* implicit */unsigned long long int) (short)-853)), (arr_9 [i_2])))))));
    }
    var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) ((max((min((8674330627324510934ULL), (((/* implicit */unsigned long long int) var_4)))), (((/* implicit */unsigned long long int) var_2)))) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) ((var_3) > (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-6854)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_17)))))))))))));
    var_23 = var_5;
}
