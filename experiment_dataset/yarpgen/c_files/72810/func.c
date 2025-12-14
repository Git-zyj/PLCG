/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72810
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72810 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72810
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
    var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(var_9)))))))));
    /* LoopSeq 3 */
    for (signed char i_0 = 4; i_0 < 17; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = max((min((((/* implicit */int) (_Bool)1)), ((-(((/* implicit */int) var_7)))))), (((/* implicit */int) ((((/* implicit */_Bool) 8037889192073811057ULL)) || (((/* implicit */_Bool) var_3))))));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 2; i_1 < 17; i_1 += 3) 
        {
            var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) min((((/* implicit */int) ((signed char) min(((unsigned char)0), (((/* implicit */unsigned char) (_Bool)1)))))), (min(((+(((/* implicit */int) var_11)))), (((/* implicit */int) var_0)))))))));
            var_22 = ((/* implicit */short) (~(((((/* implicit */_Bool) (short)-32765)) ? (var_1) : (((/* implicit */unsigned long long int) var_16))))));
            arr_5 [i_0 - 3] [i_1] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)255)) << (((((/* implicit */int) (unsigned char)255)) - (241)))))) ? (((/* implicit */unsigned long long int) -945673545)) : (var_9)))));
            arr_6 [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) min((max((((/* implicit */unsigned long long int) ((var_16) & (((/* implicit */int) (unsigned char)255))))), (var_9))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)255)))))));
        }
        var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) min((((/* implicit */signed char) (!(((/* implicit */_Bool) var_11))))), (min((((/* implicit */signed char) (_Bool)0)), ((signed char)127))))))));
    }
    /* vectorizable */
    for (short i_2 = 0; i_2 < 16; i_2 += 1) 
    {
        arr_9 [i_2] [i_2] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) -6521139045064656204LL))));
        arr_10 [6ULL] [6ULL] |= ((/* implicit */short) ((unsigned short) (((_Bool)0) ? (var_15) : (((/* implicit */unsigned long long int) var_16)))));
    }
    /* vectorizable */
    for (signed char i_3 = 0; i_3 < 11; i_3 += 4) 
    {
        var_24 = ((/* implicit */long long int) (+((~(((/* implicit */int) var_7))))));
        arr_13 [i_3] = ((/* implicit */unsigned char) ((int) var_3));
    }
}
