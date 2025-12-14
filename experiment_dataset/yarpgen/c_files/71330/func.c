/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71330
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71330 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71330
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
    var_12 = ((short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((((/* implicit */int) var_0)) + (((/* implicit */int) (short)5899))))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) var_2)) : (var_11)))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_1] = ((/* implicit */unsigned char) min((((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_0] [i_0])))))))), (((arr_0 [i_1]) - (((/* implicit */int) arr_2 [i_1]))))));
                arr_5 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) (short)11636);
            }
        } 
    } 
    /* LoopSeq 1 */
    for (short i_2 = 0; i_2 < 15; i_2 += 1) 
    {
        var_13 *= ((/* implicit */unsigned long long int) (+(((var_9) - (((/* implicit */long long int) min((((/* implicit */int) arr_3 [i_2] [9LL])), (arr_0 [i_2]))))))));
        var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_2])) ? (((/* implicit */int) arr_1 [i_2])) : (arr_0 [i_2])))) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_3)))));
    }
}
