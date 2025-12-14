/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6187
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6187 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6187
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
    var_11 = (~(((/* implicit */int) max((max(((short)-16819), ((short)16819))), (max((((/* implicit */short) var_4)), (var_10)))))));
    var_12 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (short)19848)) : (((/* implicit */int) var_5))))))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        arr_2 [i_0] = ((unsigned long long int) min((((/* implicit */short) ((signed char) var_5))), (arr_1 [i_0] [i_0])));
        var_13 = ((/* implicit */_Bool) var_5);
    }
    for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
    {
        var_14 = ((/* implicit */short) (!(((/* implicit */_Bool) min(((short)16819), (((/* implicit */short) (!(((/* implicit */_Bool) arr_3 [i_1]))))))))));
        /* LoopSeq 1 */
        for (int i_2 = 1; i_2 < 22; i_2 += 2) 
        {
            var_15 = ((/* implicit */short) max((arr_5 [i_1 + 1]), (((/* implicit */unsigned long long int) ((short) arr_8 [(signed char)18] [i_2] [i_1])))));
            arr_9 [i_1] [i_2] = ((/* implicit */short) ((((/* implicit */int) ((short) arr_6 [i_2 + 2] [i_2 - 1]))) <= (((/* implicit */int) min((arr_4 [i_1 + 1]), (arr_4 [i_1 + 1]))))));
            var_16 = max((((unsigned long long int) ((18446744073709551615ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))), (((/* implicit */unsigned long long int) var_6)));
        }
        var_17 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */signed char) (_Bool)1)), (arr_6 [i_1 + 1] [i_1 + 1])))) ? (((/* implicit */int) min((arr_6 [i_1 + 1] [i_1 + 1]), (arr_6 [i_1 + 1] [i_1 + 1])))) : (((((/* implicit */int) (signed char)127)) >> (((((/* implicit */int) arr_6 [i_1 + 1] [i_1 + 1])) + (71)))))));
        var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_5 [i_1 + 1]), (((/* implicit */unsigned long long int) arr_3 [i_1 + 1]))))) ? (min((((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)0))))), ((+(123207197643006933ULL))))) : (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-18230)) ? (((/* implicit */int) (short)-7898)) : (((/* implicit */int) (short)-16819))))), (13403429696476836724ULL)))));
    }
}
