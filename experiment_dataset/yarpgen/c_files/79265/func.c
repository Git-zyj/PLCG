/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79265
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79265 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79265
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
    var_11 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_5))));
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) (-(arr_1 [(signed char)3])));
        var_12 = ((/* implicit */signed char) min((var_12), (((/* implicit */signed char) min((((/* implicit */unsigned int) ((((((/* implicit */int) arr_0 [i_0])) + (((/* implicit */int) (unsigned char)183)))) * (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)183)))))))), (min((((/* implicit */unsigned int) min((((/* implicit */int) var_1)), (arr_1 [2])))), (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-18309))) : (var_0))))))))));
        var_13 -= ((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_2)))), (((/* implicit */int) (unsigned char)73))));
    }
    for (unsigned char i_1 = 0; i_1 < 13; i_1 += 1) 
    {
        var_14 |= ((/* implicit */unsigned char) arr_3 [i_1]);
        var_15 = ((unsigned char) (-(((/* implicit */int) arr_4 [i_1]))));
        var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)123))) + (((var_9) / (((/* implicit */unsigned int) ((var_10) & (((/* implicit */int) var_1)))))))));
    }
    for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 1) 
    {
        arr_9 [i_2] = ((/* implicit */unsigned int) var_2);
        arr_10 [i_2] = ((/* implicit */int) min((((((/* implicit */_Bool) max((((/* implicit */unsigned int) 679494165)), (var_8)))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((arr_4 [i_2]), (((/* implicit */unsigned char) (signed char)-68)))))) : (var_4))), (((((/* implicit */_Bool) (short)13774)) ? (((((/* implicit */unsigned int) arr_1 [8])) / (var_8))) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_2)))))))));
    }
}
