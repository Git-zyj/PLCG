/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98153
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98153 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98153
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
    var_15 ^= ((/* implicit */unsigned int) ((signed char) ((((((/* implicit */_Bool) var_9)) && (var_14))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-87)) ? (var_3) : (((/* implicit */long long int) var_1))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (signed char i_1 = 3; i_1 < 22; i_1 += 3) 
        {
            {
                arr_7 [i_0] [i_1] [i_1] = var_8;
                /* LoopSeq 1 */
                for (short i_2 = 0; i_2 < 25; i_2 += 2) 
                {
                    arr_11 [i_0] [i_1] [i_2] = ((/* implicit */unsigned int) ((signed char) min((((/* implicit */long long int) ((_Bool) -7540931640475620421LL))), (-7540931640475620421LL))));
                    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) 7540931640475620441LL)) ? (7540931640475620411LL) : (((/* implicit */long long int) 2277806472U))));
                }
                arr_12 [i_1] = ((((/* implicit */int) ((((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (signed char)52)) : (((/* implicit */int) (_Bool)1))))) == (min((var_3), (9223372036854775807LL)))))) >= (max((((((/* implicit */_Bool) (unsigned short)35644)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_13)))), (((((/* implicit */int) var_11)) & (((/* implicit */int) (signed char)-126)))))));
                var_17 = ((/* implicit */short) ((((/* implicit */_Bool) 4294966272LL)) ? (2017160823U) : (var_12)));
            }
        } 
    } 
    var_18 = ((((long long int) ((((/* implicit */int) (_Bool)1)) >> (((-4294966266LL) + (4294966297LL)))))) >= (((/* implicit */long long int) min((((/* implicit */unsigned int) (_Bool)1)), (var_1)))));
}
