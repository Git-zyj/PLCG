/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55039
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55039 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55039
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
    var_20 = ((/* implicit */unsigned char) var_18);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 3; i_0 < 12; i_0 += 2) 
    {
        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-88)) & (((/* implicit */int) (signed char)69))))) ? (((/* implicit */int) (signed char)-102)) : (((/* implicit */int) (_Bool)0))));
        arr_2 [i_0] = ((/* implicit */unsigned long long int) arr_0 [i_0 - 1]);
        arr_3 [i_0 + 1] = ((((/* implicit */_Bool) var_15)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_16)) | (((/* implicit */int) var_16))))));
    }
    for (long long int i_1 = 0; i_1 < 11; i_1 += 2) 
    {
        arr_7 [i_1] &= ((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_1 [i_1])) ? (arr_1 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)96)))))));
        arr_8 [i_1] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1]))) : (var_13)))));
    }
    for (long long int i_2 = 0; i_2 < 14; i_2 += 2) 
    {
        var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)83)) ? (((/* implicit */int) (signed char)-99)) : (((((/* implicit */int) (signed char)94)) & (((/* implicit */int) (unsigned char)149))))));
        var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) max((arr_9 [i_2] [i_2]), (((/* implicit */unsigned char) (signed char)-95)))))));
        arr_12 [i_2] = ((/* implicit */signed char) max((-2070385362), (((/* implicit */int) max(((unsigned char)139), ((unsigned char)125))))));
    }
    var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) (signed char)95)) : (((/* implicit */int) var_7))))) ? ((+(-6313324507645818713LL))) : (((/* implicit */long long int) ((((/* implicit */int) var_10)) / (((/* implicit */int) var_11)))))))) || (((/* implicit */_Bool) var_18)))))));
}
