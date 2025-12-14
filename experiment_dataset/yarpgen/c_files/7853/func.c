/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7853
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7853 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7853
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
    var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) (_Bool)0))));
    /* LoopSeq 3 */
    for (long long int i_0 = 2; i_0 < 9; i_0 += 4) 
    {
        var_16 += ((/* implicit */_Bool) ((((((arr_1 [i_0]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)248))))) ^ (((/* implicit */unsigned long long int) min((var_2), (var_7)))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))));
        var_17 ^= ((/* implicit */unsigned char) -82512109);
        arr_3 [i_0 - 2] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_12)) ? (arr_1 [i_0 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 4803641329964633674LL)) && (((/* implicit */_Bool) ((7676903026783432893ULL) ^ (arr_1 [i_0 - 1]))))))))));
        arr_4 [i_0 + 1] = ((((/* implicit */_Bool) (~(min((var_7), (((/* implicit */long long int) (unsigned char)248))))))) ? (((/* implicit */int) (unsigned char)44)) : (((/* implicit */int) var_1)));
    }
    for (unsigned char i_1 = 2; i_1 < 12; i_1 += 4) 
    {
        arr_7 [i_1 + 1] [9] &= ((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) (-(var_11)))) ? ((~(arr_5 [i_1]))) : (var_6))));
        var_18 = ((/* implicit */_Bool) min(((+((+(4294967282U))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) : (arr_6 [i_1 - 2] [i_1 - 2])))))))));
        var_19 ^= ((/* implicit */unsigned int) (((((!(((/* implicit */_Bool) -4107471677843114504LL)))) ? (arr_5 [i_1 - 2]) : (((/* implicit */unsigned long long int) var_2)))) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (-(arr_6 [i_1] [i_1]))))))));
    }
    /* vectorizable */
    for (long long int i_2 = 0; i_2 < 21; i_2 += 2) 
    {
        var_20 = (~(arr_8 [i_2]));
        arr_11 [i_2] = ((/* implicit */_Bool) (-(var_7)));
        var_21 = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) 1833853832)) ? (10769841046926118722ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))))));
    }
}
