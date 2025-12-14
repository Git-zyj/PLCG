/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76764
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76764 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76764
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
    for (unsigned long long int i_0 = 4; i_0 < 14; i_0 += 1) 
    {
        arr_3 [i_0 + 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_1 [i_0 - 4])) + (2147483647))) >> (((((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (arr_2 [i_0 + 1] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) - (12614838155778337332ULL)))))) && (((((/* implicit */int) arr_0 [i_0 - 3])) <= (((/* implicit */int) arr_0 [i_0 - 1]))))));
        var_12 = ((/* implicit */unsigned long long int) min((var_12), (((/* implicit */unsigned long long int) var_3))));
        arr_4 [i_0] = ((/* implicit */unsigned int) var_7);
    }
    var_13 = ((/* implicit */short) var_0);
    /* LoopNest 2 */
    for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 2) 
    {
        for (short i_2 = 2; i_2 < 13; i_2 += 3) 
        {
            {
                var_14 = ((/* implicit */unsigned int) min(((~(((/* implicit */int) ((short) var_8))))), (((/* implicit */int) ((((/* implicit */int) arr_8 [i_2 - 1] [i_2 + 1] [i_2 - 1])) < ((~(((/* implicit */int) var_7)))))))));
                var_15 = ((/* implicit */short) ((((((arr_2 [i_1] [i_2 - 2]) >> (((arr_2 [3U] [i_2]) - (12614838155778337286ULL))))) << (((var_6) - (15892241111074189861ULL))))) >= (((var_6) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [(short)3] [(_Bool)1])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_0 [i_1])))))))));
            }
        } 
    } 
}
