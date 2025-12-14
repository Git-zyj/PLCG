/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68666
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68666 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68666
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
    var_15 = 3350465385U;
    var_16 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_14))))) <= (min((((/* implicit */unsigned int) (unsigned char)244)), (3350465385U))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 17; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_8 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((2732066258U) >> ((+(((/* implicit */int) (_Bool)1))))))) ? (((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (_Bool)1)))) : ((~(((/* implicit */int) (unsigned char)211)))))) : (((/* implicit */int) arr_2 [i_1]))));
                arr_9 [(signed char)6] [i_0] [i_1] = ((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) min((3437406873U), (((/* implicit */unsigned int) 947346790))))) ? (((/* implicit */int) (signed char)-110)) : (((/* implicit */int) arr_4 [4LL] [i_0])))));
                arr_10 [i_0] = (!(((/* implicit */_Bool) arr_4 [i_0] [i_0])));
            }
        } 
    } 
    var_17 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_5))) <= (((var_9) - (((/* implicit */long long int) ((/* implicit */int) var_7))))))))) ^ (((((((/* implicit */_Bool) 3564999270567001578LL)) ? (var_4) : (var_2))) + (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
}
