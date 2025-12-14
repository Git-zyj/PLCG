/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66594
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66594 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66594
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 4) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                for (unsigned short i_3 = 4; i_3 < 22; i_3 += 2) 
                {
                    {
                        var_17 |= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (((_Bool)1) ? (-380756056) : (1432555424))))));
                        arr_10 [i_0] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_4))))) ? (((/* implicit */int) ((_Bool) 1432555424))) : (((((/* implicit */_Bool) arr_8 [i_1] [i_1] [i_1] [i_3])) ? (((/* implicit */int) (unsigned char)220)) : (((/* implicit */int) var_5))))));
                    }
                } 
            } 
        } 
        arr_11 [i_0] [i_0] = ((/* implicit */unsigned short) var_9);
        var_18 = ((/* implicit */int) (unsigned char)209);
        arr_12 [(unsigned short)14] = ((/* implicit */long long int) ((short) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned char)209)))));
    }
    for (signed char i_4 = 0; i_4 < 24; i_4 += 4) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) arr_14 [i_4] [i_4]))));
        arr_17 [i_4] = ((/* implicit */unsigned long long int) (+(((498270628) / (var_16)))));
        arr_18 [i_4] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) -380756054)) * (((unsigned long long int) arr_13 [i_4] [i_4]))));
        var_20 = ((/* implicit */unsigned int) (short)-5043);
    }
    var_21 = ((/* implicit */signed char) min((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) max((var_10), (((/* implicit */unsigned int) (unsigned char)209))))) : (var_15))), (((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_3))))) ^ (min((var_15), (((/* implicit */unsigned long long int) var_11))))))));
}
