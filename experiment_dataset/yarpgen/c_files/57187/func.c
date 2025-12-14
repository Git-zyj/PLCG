/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57187
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57187 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57187
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
    var_15 |= ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((var_1) / (((/* implicit */int) (short)11409))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) -4988643103995182068LL)))) : (((unsigned long long int) (unsigned short)60432)))), (((/* implicit */unsigned long long int) max((((((/* implicit */unsigned int) ((/* implicit */int) var_9))) / (var_5))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)77)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_12))))))))));
    var_16 = ((/* implicit */signed char) (unsigned char)53);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 3; i_0 < 16; i_0 += 1) 
    {
        var_17 = ((/* implicit */int) (unsigned char)203);
        var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) (+(((/* implicit */int) var_9)))))));
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                for (unsigned long long int i_3 = 2; i_3 < 15; i_3 += 3) 
                {
                    {
                        arr_10 [i_3] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */signed char) var_12);
                        arr_11 [i_0] [i_1] [i_0] [i_0] [i_2] [i_3] = 14269814541517875978ULL;
                        var_19 |= ((/* implicit */signed char) (+(3222680888U)));
                        var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (short)-14445)))))));
                    }
                } 
            } 
        } 
    }
}
