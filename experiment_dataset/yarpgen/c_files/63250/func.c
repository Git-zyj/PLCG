/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63250
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63250 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63250
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
    var_16 = ((/* implicit */signed char) max((((/* implicit */unsigned int) ((((/* implicit */int) var_14)) < (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (unsigned char)59))))))), (((((/* implicit */_Bool) max((var_13), (var_8)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned char)59)) : (((/* implicit */int) (unsigned char)59))))) : (((((/* implicit */_Bool) (unsigned short)45128)) ? (385592129U) : (((/* implicit */unsigned int) var_9))))))));
    var_17 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)39145))) : (3663249370U)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 1141946123U)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) var_12))))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_6))) | (797859027U))))), (var_4)));
    var_18 = ((/* implicit */int) min((min((5167265257815009382ULL), (((/* implicit */unsigned long long int) (signed char)-53)))), (((/* implicit */unsigned long long int) var_10))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-122))) >= (var_7)));
        var_19 = ((/* implicit */int) 7688414235322207432ULL);
        arr_4 [i_0] = ((/* implicit */_Bool) 3091366542U);
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    arr_11 [i_0] [8] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_5)) : (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (short)-28554)) : (((/* implicit */int) var_5))))));
                    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))));
                    var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) var_5))));
                }
            } 
        } 
    }
}
