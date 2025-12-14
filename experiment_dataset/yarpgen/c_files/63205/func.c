/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63205
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63205 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63205
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
    var_18 ^= var_2;
    var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((max((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned char)187)) : (((/* implicit */int) var_9)))), ((+(((/* implicit */int) (unsigned char)251)))))) - (min((((/* implicit */int) ((unsigned char) 1825195477U))), (min((((/* implicit */int) var_6)), (var_10))))))))));
    /* LoopSeq 3 */
    for (signed char i_0 = 2; i_0 < 14; i_0 += 1) 
    {
        var_20 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) arr_1 [i_0 - 1]))) ? (arr_1 [i_0 + 2]) : (((((/* implicit */_Bool) min((var_7), (((/* implicit */unsigned short) var_13))))) ? (((/* implicit */int) (unsigned char)21)) : (((((/* implicit */_Bool) arr_1 [(signed char)4])) ? (arr_1 [6]) : (arr_1 [i_0])))))));
        var_21 = ((/* implicit */short) min((((unsigned int) arr_2 [i_0 + 1])), (((/* implicit */unsigned int) var_6))));
        arr_3 [(unsigned char)14] &= ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_0] [(unsigned char)11])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : ((+(arr_2 [i_0 - 2])))));
    }
    for (unsigned int i_1 = 0; i_1 < 23; i_1 += 2) 
    {
        var_22 += ((/* implicit */unsigned short) ((arr_5 [i_1] [(unsigned short)20]) > (min((((/* implicit */int) arr_4 [i_1])), (((25625918) ^ (((/* implicit */int) (unsigned char)172))))))));
        var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)20673)) ? (2469771827U) : (((/* implicit */unsigned int) -1113831598)))))));
        var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) arr_6 [i_1]))));
        arr_7 [i_1] = ((/* implicit */unsigned short) arr_6 [i_1]);
    }
    for (unsigned short i_2 = 3; i_2 < 15; i_2 += 4) 
    {
        var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) 3536208171U))));
        var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) arr_5 [i_2 - 3] [12U]))));
    }
    var_27 = ((/* implicit */int) var_12);
    var_28 = ((/* implicit */unsigned long long int) var_16);
}
