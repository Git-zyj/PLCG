/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97403
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97403 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97403
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
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        var_16 ^= ((/* implicit */unsigned long long int) var_2);
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    var_17 *= ((/* implicit */unsigned long long int) ((max(((_Bool)1), ((_Bool)1))) ? (((/* implicit */int) arr_3 [i_1] [i_2])) : (((/* implicit */int) ((_Bool) 408484362U)))));
                    arr_10 [i_0] = ((/* implicit */unsigned char) min((min((((/* implicit */unsigned long long int) max((arr_1 [14U] [i_0]), (((/* implicit */unsigned char) arr_0 [i_0] [i_1]))))), (max((arr_7 [i_0]), (((/* implicit */unsigned long long int) arr_5 [i_0] [i_1] [i_2])))))), (((/* implicit */unsigned long long int) max((((unsigned int) arr_4 [i_2] [i_1] [i_0])), (((/* implicit */unsigned int) max(((_Bool)1), ((_Bool)1)))))))));
                    var_18 *= ((/* implicit */unsigned int) arr_1 [i_0] [i_1]);
                }
            } 
        } 
        arr_11 [i_0] [i_0] = ((/* implicit */int) ((short) var_5));
    }
    var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) var_7)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))) ? (var_15) : (var_15)));
    var_20 *= var_5;
    var_21 *= ((/* implicit */unsigned int) var_11);
    var_22 ^= ((/* implicit */_Bool) max((408484378U), (((/* implicit */unsigned int) (signed char)-95))));
}
