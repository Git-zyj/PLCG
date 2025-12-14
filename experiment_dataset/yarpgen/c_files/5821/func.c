/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5821
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5821 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5821
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
    for (signed char i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_1 = 2; i_1 < 24; i_1 += 2) 
        {
            arr_4 [i_1] [i_0] [i_1] &= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_1 - 1] [i_1 - 1])) ? (((/* implicit */long long int) var_12)) : (8825033817873083725LL)));
            arr_5 [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(var_16))))));
        }
        arr_6 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)255)) ? (((((arr_3 [i_0] [i_0]) >= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)49413))))) ? ((-(arr_3 [i_0] [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [(unsigned short)12] [i_0] [(unsigned short)12])) && (((/* implicit */_Bool) var_3)))))))) : (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)241)))))));
    }
    var_17 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((8380416U) != (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-79))))))))) % (((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_7)), (var_12)))) ? (max((((/* implicit */unsigned int) var_11)), (0U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_14))) != (2570578610U)))))))));
}
