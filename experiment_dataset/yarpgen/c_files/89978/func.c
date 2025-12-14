/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89978
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89978 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89978
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
    var_12 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) ((((/* implicit */int) var_6)) >> (((11757503361249688452ULL) - (11757503361249688423ULL)))))))) >= (((unsigned long long int) ((((/* implicit */int) var_1)) > (((/* implicit */int) var_0)))))));
    var_13 = ((/* implicit */unsigned short) (((+(((/* implicit */int) (signed char)104)))) * (((((/* implicit */_Bool) ((((/* implicit */_Bool) 24853000592862288ULL)) ? (11757503361249688472ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))) ? (((/* implicit */int) (!(var_9)))) : ((~(((/* implicit */int) var_1))))))));
    var_14 = ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (!(((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) var_7))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 1; i_2 < 18; i_2 += 2) 
            {
                {
                    arr_10 [i_2] [i_2] [i_2] [i_0] = ((_Bool) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) != (11757503361249688452ULL)))) < (((/* implicit */int) ((short) var_11)))));
                    var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (6689240712459863163ULL))) & (24853000592862288ULL)))) ? (((/* implicit */int) arr_5 [i_2 + 1])) : (((/* implicit */int) var_8))));
                    var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (short)32767)) != (((/* implicit */int) var_9)))))) ^ (((unsigned int) (signed char)7))))) ? (((/* implicit */int) var_6)) : (((((/* implicit */int) var_3)) ^ (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_5 [i_2])) : (789424288))))))))));
                }
            } 
        } 
    } 
}
