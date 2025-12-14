/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57878
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57878 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57878
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
    var_14 = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)11))) == (var_1))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)17790))) : (var_1)));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)47745))) : (arr_0 [7ULL]))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [(unsigned short)6])) >> (((((/* implicit */int) var_7)) + (16239))))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)5097)) ? (arr_5 [i_0] [i_1]) : (arr_1 [i_1])))) ? (max((((/* implicit */unsigned int) (unsigned char)100)), (15U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) arr_6 [10U] [i_1] [1U]))))))) : (((((/* implicit */_Bool) ((unsigned int) var_10))) ? (((((/* implicit */_Bool) (unsigned short)47755)) ? (134217712U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)17792))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))))));
                var_16 = ((/* implicit */unsigned char) ((max((arr_0 [i_0]), (arr_1 [i_0]))) - (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)47754))))))));
            }
        } 
    } 
}
