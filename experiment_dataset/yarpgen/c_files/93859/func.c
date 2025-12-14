/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93859
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93859 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93859
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
    var_16 = ((/* implicit */unsigned short) max((319097140587817467ULL), (319097140587817467ULL)));
    /* LoopNest 2 */
    for (unsigned short i_0 = 4; i_0 < 18; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                arr_5 [i_1] = ((/* implicit */unsigned long long int) ((_Bool) var_6));
                /* LoopSeq 1 */
                for (unsigned char i_2 = 2; i_2 < 18; i_2 += 2) 
                {
                    var_17 = ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) ((319097140587817467ULL) * (18127646933121734149ULL)))))) / (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_12)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_2 + 2] [i_2 - 1] [i_2 - 1] [i_1]))) : (3476396996U))));
                    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) arr_0 [i_0 - 4]))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (((((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned short)38521)), (var_7)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)213)) && (((/* implicit */_Bool) var_15)))))) : (((var_2) >> (((var_2) - (1262559436U)))))))));
                    var_19 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((6192871376110236908LL) + (((/* implicit */long long int) 2147483647))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) arr_1 [i_2])) : (var_15)))) : (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)26))) : (var_14)))))));
                }
            }
        } 
    } 
}
