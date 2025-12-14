/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95350
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95350 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95350
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
    for (unsigned long long int i_0 = 2; i_0 < 11; i_0 += 4) 
    {
        var_15 = ((/* implicit */unsigned long long int) ((unsigned int) (+(((/* implicit */int) arr_0 [i_0 - 1])))));
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 12; i_2 += 2) 
            {
                for (short i_3 = 1; i_3 < 12; i_3 += 3) 
                {
                    {
                        var_16 = ((/* implicit */unsigned int) max((((/* implicit */unsigned char) ((signed char) var_13))), (((unsigned char) (+(((/* implicit */int) var_12)))))));
                        var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */int) var_8)) <= (((/* implicit */int) arr_5 [i_0])))))))) + (max((18446744073709551603ULL), (((/* implicit */unsigned long long int) ((unsigned short) 18446744073709551615ULL))))))))));
                        var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) ((var_12) ? ((+(((/* implicit */int) var_12)))) : ((~((~(((/* implicit */int) var_14)))))))))));
                    }
                } 
            } 
        } 
        var_19 = ((/* implicit */unsigned long long int) var_1);
    }
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)153)) ? (((/* implicit */int) (unsigned char)167)) : (((/* implicit */int) (unsigned char)103))))) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_5), (var_10)))))));
    /* LoopSeq 2 */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        var_21 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) (+(((((/* implicit */int) (unsigned char)103)) << (((((/* implicit */int) var_8)) - (65)))))))), ((~(arr_9 [i_4])))));
        var_22 -= ((/* implicit */unsigned int) (+((+((+(((/* implicit */int) var_12))))))));
        arr_11 [i_4] = ((/* implicit */long long int) arr_10 [i_4]);
    }
    for (unsigned int i_5 = 0; i_5 < 12; i_5 += 4) 
    {
        var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) arr_10 [i_5]))));
        arr_16 [1U] [1U] = var_13;
        arr_17 [i_5] = ((/* implicit */short) var_5);
    }
}
