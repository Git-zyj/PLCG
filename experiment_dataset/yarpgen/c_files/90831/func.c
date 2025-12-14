/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90831
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90831 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90831
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 16; i_1 += 4) 
        {
            {
                var_17 |= ((/* implicit */unsigned char) var_1);
                var_18 = ((/* implicit */unsigned long long int) (-((~(((arr_2 [i_1] [i_1]) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_6))))))));
                arr_5 [i_0] [i_1] |= ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_7)), (min((((/* implicit */unsigned int) arr_2 [13U] [i_1 - 1])), (arr_4 [i_1 - 1] [i_1] [(signed char)6])))));
            }
        } 
    } 
    var_19 |= ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_9)) | (((/* implicit */int) var_7))))) ? ((+(((/* implicit */int) var_1)))) : (((/* implicit */int) var_14))))) + (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (((((/* implicit */_Bool) var_0)) ? (var_8) : (var_12)))))));
    var_20 &= ((/* implicit */unsigned char) (+(((unsigned int) var_10))));
}
