/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82434
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82434 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82434
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
    var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_14)))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */unsigned char) min((((unsigned long long int) ((var_10) ? (9967031759333473275ULL) : (((/* implicit */unsigned long long int) -130629861498874065LL))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) arr_7 [i_2] [i_2] [i_2])) : (((((/* implicit */_Bool) 130629861498874065LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_2]))) : (-130629861498874066LL))))))));
                    arr_11 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)9)) ? (-1597356588019827659LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))), (((((/* implicit */_Bool) ((arr_2 [i_0]) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1] [i_2]))) > (3950197281U))))) : (((((/* implicit */_Bool) -8488560536447223031LL)) ? (arr_2 [i_2]) : (((/* implicit */unsigned long long int) 1588348542U))))))));
                    arr_12 [i_2] [i_2] [i_1] [i_0] = ((/* implicit */unsigned long long int) max((((long long int) arr_3 [i_0])), (((/* implicit */long long int) arr_10 [i_2] [18ULL]))));
                    var_19 *= ((/* implicit */unsigned int) min((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2318018346U)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) : (arr_6 [i_0])))) ? ((-(((/* implicit */int) var_5)))) : (((/* implicit */int) arr_4 [i_1] [i_2]))))), (((arr_5 [i_0] [i_2]) ? (((/* implicit */long long int) ((((/* implicit */_Bool) -8859641790709260297LL)) ? (arr_9 [i_0] [i_2] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_1])))))) : (arr_8 [i_1])))));
                }
            } 
        } 
    } 
    var_20 = min((((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) 8904907034282447898LL)) ? (-8428911542178138716LL) : (-3271110874305496858LL))), (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (unsigned char)1)))))))), (var_14));
}
