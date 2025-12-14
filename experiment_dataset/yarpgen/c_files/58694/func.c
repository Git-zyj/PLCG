/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58694
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58694 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58694
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
    var_14 = ((/* implicit */_Bool) var_3);
    /* LoopSeq 2 */
    for (signed char i_0 = 1; i_0 < 11; i_0 += 3) 
    {
        var_15 = ((/* implicit */unsigned long long int) max((max((arr_1 [i_0 + 3]), (max((arr_1 [i_0]), (arr_0 [i_0]))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_0 [i_0 + 1])))))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-18915)) ? (((/* implicit */int) (signed char)-47)) : (((/* implicit */int) (signed char)-29))));
        var_16 = ((/* implicit */_Bool) arr_0 [i_0]);
        arr_3 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_0 + 2])) ? (((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (arr_1 [i_0 + 3]) : (arr_0 [i_0 + 2]))) : (((/* implicit */long long int) ((/* implicit */int) var_6)))));
    }
    for (int i_1 = 0; i_1 < 17; i_1 += 4) 
    {
        arr_6 [i_1] = ((/* implicit */signed char) ((unsigned char) ((arr_5 [i_1] [(unsigned char)2]) || (arr_5 [i_1] [i_1]))));
        var_17 = ((/* implicit */signed char) ((((_Bool) (!(((/* implicit */_Bool) var_12))))) || (((/* implicit */_Bool) ((((/* implicit */int) arr_5 [(unsigned char)16] [i_1])) >> (((((/* implicit */int) (signed char)-12)) + (25))))))));
    }
    var_18 = ((/* implicit */long long int) var_1);
}
