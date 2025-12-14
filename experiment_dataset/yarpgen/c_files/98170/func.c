/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98170
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98170 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98170
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
    /* vectorizable */
    for (long long int i_0 = 2; i_0 < 23; i_0 += 2) 
    {
        arr_3 [i_0] [i_0] = (-(((/* implicit */int) (unsigned short)65535)));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    var_17 = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (unsigned short)32640))));
                    var_18 *= ((/* implicit */unsigned char) ((((((/* implicit */int) var_14)) + (((/* implicit */int) var_0)))) * (((/* implicit */int) var_7))));
                    arr_9 [i_0] [i_1] [(unsigned short)18] = ((/* implicit */unsigned short) ((_Bool) arr_6 [i_0] [i_0] [i_0 - 2]));
                    arr_10 [i_0] [i_1] [i_2] [i_2] = var_8;
                }
            } 
        } 
        var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) var_4)) >> (((((/* implicit */int) var_10)) + (54)))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) ((var_11) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))));
    }
    var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)88)))))));
    var_21 += ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */int) var_0)), (((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (unsigned char)167))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) ((signed char) (unsigned char)97))) == (((/* implicit */int) var_15)))))) : (((((/* implicit */_Bool) min((var_5), (((/* implicit */int) var_1))))) ? (((unsigned int) var_7)) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) var_8))))))))));
    var_22 -= ((/* implicit */signed char) min((((/* implicit */unsigned long long int) min((((/* implicit */int) var_6)), (var_5)))), (var_11)));
    var_23 += ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)168)) ? (((/* implicit */int) (unsigned char)168)) : (((/* implicit */int) (_Bool)1))));
}
