/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94117
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94117 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94117
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        var_16 = ((/* implicit */unsigned short) ((((arr_0 [i_0] [i_0]) > (arr_0 [i_0] [i_0]))) ? (arr_0 [(unsigned char)6] [i_0]) : (arr_0 [i_0] [5])));
        var_17 += ((/* implicit */_Bool) (signed char)-24);
        var_18 = ((/* implicit */int) var_14);
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_19 ^= ((/* implicit */unsigned short) (((+(((/* implicit */int) arr_4 [2])))) << (((var_8) - (1149056880)))));
        var_20 += min((((((/* implicit */_Bool) arr_5 [(_Bool)1])) ? (((((/* implicit */_Bool) (unsigned char)168)) ? (((/* implicit */int) (unsigned char)196)) : (((/* implicit */int) (unsigned char)255)))) : (((/* implicit */int) ((_Bool) arr_0 [i_1] [i_1]))))), ((~(arr_0 [i_1] [i_1]))));
        arr_6 [(unsigned short)6] &= ((min((min((((/* implicit */int) (unsigned short)61838)), (arr_0 [i_1] [i_1]))), (((/* implicit */int) arr_1 [i_1])))) * (((/* implicit */int) ((((/* implicit */_Bool) max((arr_4 [(unsigned char)6]), (((/* implicit */unsigned char) (signed char)64))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 960650271)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_2 [i_1] [i_1])))))))));
    }
    /* LoopSeq 2 */
    for (unsigned char i_2 = 0; i_2 < 21; i_2 += 4) 
    {
        var_21 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_2])) << (((arr_9 [i_2]) + (6976381461229537886LL)))))) ? (var_10) : (((/* implicit */long long int) (+(-960650259))))));
        var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) (+(max((((unsigned int) var_1)), (((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_2]))) == (arr_9 [i_2])))))))))));
    }
    for (int i_3 = 1; i_3 < 18; i_3 += 1) 
    {
        arr_15 [i_3] = ((/* implicit */unsigned int) ((int) ((int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) 1082558942)) : (var_10)))));
        arr_16 [i_3] [i_3] = ((/* implicit */unsigned int) (-(((((((/* implicit */_Bool) arr_14 [i_3 + 1] [i_3])) ? (((/* implicit */int) arr_7 [(_Bool)1])) : (((/* implicit */int) arr_2 [i_3] [i_3])))) << (((((/* implicit */int) var_14)) - (383)))))));
    }
    var_23 = ((/* implicit */_Bool) max((((/* implicit */unsigned short) var_15)), (((unsigned short) ((((/* implicit */_Bool) var_9)) ? (var_12) : (((/* implicit */int) var_14)))))));
}
