/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8305
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8305 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8305
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
    var_12 = ((/* implicit */unsigned long long int) max((var_12), (((/* implicit */unsigned long long int) var_7))));
    /* LoopSeq 1 */
    for (signed char i_0 = 4; i_0 < 23; i_0 += 3) 
    {
        var_13 = ((/* implicit */short) max((((/* implicit */int) arr_0 [i_0])), (((((/* implicit */_Bool) min((var_9), (arr_1 [11] [i_0])))) ? (((/* implicit */int) ((var_8) <= (((/* implicit */int) arr_0 [i_0]))))) : (var_1)))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) min((arr_0 [i_0 - 3]), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_7)))))));
        var_14 = ((/* implicit */unsigned long long int) var_5);
    }
    var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)11)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_0))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_10))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))))) && (((/* implicit */_Bool) var_5))));
    /* LoopNest 3 */
    for (unsigned long long int i_1 = 1; i_1 < 22; i_1 += 1) 
    {
        for (unsigned long long int i_2 = 3; i_2 < 23; i_2 += 4) 
        {
            for (int i_3 = 3; i_3 < 22; i_3 += 4) 
            {
                {
                    var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_1] [i_3])))))))) ? (((/* implicit */int) ((unsigned char) ((((/* implicit */int) arr_0 [i_2])) & (var_1))))) : (min(((~(((/* implicit */int) (unsigned char)11)))), (var_1)))));
                    var_17 = ((/* implicit */signed char) (((~(arr_2 [i_2 + 1] [i_1 + 2]))) & (((((/* implicit */_Bool) var_4)) ? (arr_2 [i_2 + 1] [i_1 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-125)))))));
                }
            } 
        } 
    } 
}
