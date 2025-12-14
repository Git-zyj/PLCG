/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8855
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8855 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8855
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
    var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) ((((/* implicit */_Bool) min((var_6), (var_5)))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)21072)) > (((/* implicit */int) ((short) var_16)))))) : (((/* implicit */int) var_1)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 11; i_0 += 2) 
    {
        for (long long int i_1 = 2; i_1 < 12; i_1 += 2) 
        {
            {
                var_21 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) (signed char)0)), (((((/* implicit */_Bool) 15U)) ? (183730599U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-126)))))));
                var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) min((((/* implicit */unsigned short) arr_1 [i_0 + 1] [i_1 - 2])), (var_1)))), (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0 + 2]))) : (var_6)))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)105))))) : (((var_11) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1 - 1] [i_0 + 1])))))));
                var_23 &= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_2 [i_1]))));
            }
        } 
    } 
    var_24 = ((/* implicit */long long int) var_18);
    /* LoopSeq 1 */
    for (signed char i_2 = 1; i_2 < 9; i_2 += 2) 
    {
        var_25 *= ((/* implicit */unsigned long long int) ((((((long long int) arr_3 [i_2 - 1] [(signed char)1] [(_Bool)1])) + (9223372036854775807LL))) << (((((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_0 [i_2 - 1])) : (((/* implicit */int) arr_6 [2ULL]))))) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_1 [i_2 + 1] [i_2 + 1]))))) : (((long long int) 2326742248U)))) + (104LL))) - (40LL)))));
        var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 17179869183LL)) || ((_Bool)1)));
    }
    var_27 = ((/* implicit */unsigned long long int) min(((-(-17179869166LL))), (((/* implicit */long long int) var_5))));
}
