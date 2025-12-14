/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8621
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8621 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8621
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        var_15 ^= ((/* implicit */signed char) ((((((/* implicit */_Bool) 247079607)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 + 1]))) - (8853167685065374796ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-2753))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-74))))))));
        arr_2 [i_0] = ((/* implicit */signed char) max((((((/* implicit */_Bool) (short)-2762)) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) arr_0 [i_0])) : (9593576388644176820ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))), (((/* implicit */unsigned long long int) min(((-(((/* implicit */int) (short)8094)))), (min((arr_0 [i_0]), (((/* implicit */int) (short)2753)))))))));
        var_16 = ((/* implicit */signed char) max((((((/* implicit */_Bool) ((var_6) ? (var_14) : (((/* implicit */unsigned long long int) arr_0 [(short)7]))))) ? (((/* implicit */int) arr_1 [i_0 + 2])) : (arr_0 [i_0]))), (((/* implicit */int) var_6))));
        arr_3 [i_0] = ((((/* implicit */int) ((9593576388644176814ULL) > (((/* implicit */unsigned long long int) -2237689332781885419LL))))) & (((((((/* implicit */_Bool) var_3)) ? (arr_0 [i_0]) : (((/* implicit */int) (signed char)53)))) + (arr_0 [i_0]))));
    }
    var_17 = ((/* implicit */unsigned long long int) (signed char)0);
}
