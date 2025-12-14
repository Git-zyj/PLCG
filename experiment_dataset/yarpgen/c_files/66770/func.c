/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66770
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66770 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66770
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
    var_15 = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) <= (var_3))))) / (max((((var_13) + (var_8))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) & (((/* implicit */int) var_0))))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        var_16 = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) (signed char)112)) : (((/* implicit */int) arr_0 [i_0] [i_0])))), ((+(((/* implicit */int) arr_0 [i_0] [i_0]))))));
        var_17 = ((/* implicit */signed char) max((((arr_1 [i_0]) + (arr_1 [i_0]))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_2 [i_0])))))));
    }
    for (unsigned long long int i_1 = 2; i_1 < 12; i_1 += 1) 
    {
        var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_2)))))));
        var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) <= ((-(arr_5 [i_1 + 2])))));
        arr_6 [(signed char)7] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)110))) + (((arr_4 [i_1 + 2]) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1])))))))) ? (min((((/* implicit */unsigned long long int) var_10)), (arr_5 [i_1 - 2]))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-20491)))))));
        var_20 += ((/* implicit */short) arr_5 [i_1]);
        var_21 = ((/* implicit */short) (-((-(arr_4 [i_1 - 2])))));
    }
}
