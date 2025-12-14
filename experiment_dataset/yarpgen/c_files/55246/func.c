/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55246
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55246 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55246
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
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)8210)) >= ((-(((/* implicit */int) ((unsigned short) arr_0 [i_0] [i_0])))))));
        var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) ((((/* implicit */_Bool) (short)4474)) ? (3179715451606943165ULL) : (9223372036854775808ULL))))));
    }
    for (unsigned long long int i_1 = 2; i_1 < 13; i_1 += 4) 
    {
        var_14 = ((/* implicit */_Bool) var_0);
        var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) ((((/* implicit */_Bool) 21ULL)) ? (((268173312U) ^ (((/* implicit */unsigned int) min((2147483647), (((/* implicit */int) arr_2 [i_1]))))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)159))))))));
        /* LoopNest 3 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (unsigned char i_3 = 3; i_3 < 13; i_3 += 3) 
            {
                for (short i_4 = 3; i_4 < 12; i_4 += 4) 
                {
                    {
                        arr_13 [i_4] [i_1] [i_2] [i_4] = ((/* implicit */unsigned short) (((((-(4294967295U))) >= ((~(0U))))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned char)240)) : (((/* implicit */int) (short)-29322)))) : ((+(((/* implicit */int) var_0))))));
                        arr_14 [i_4] [i_2] [(unsigned char)13] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (((/* implicit */int) arr_9 [(signed char)2])) : (((/* implicit */int) arr_2 [i_3]))));
                    }
                } 
            } 
        } 
    }
    for (short i_5 = 0; i_5 < 14; i_5 += 1) 
    {
        arr_17 [i_5] [i_5] = ((/* implicit */_Bool) (unsigned short)15240);
        arr_18 [i_5] = ((/* implicit */unsigned long long int) ((short) arr_16 [i_5]));
    }
    var_16 = var_0;
    var_17 = ((/* implicit */int) (~(var_9)));
    var_18 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)11)) | (((/* implicit */int) (short)-13347))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_5))))) : (var_8)))));
    var_19 = ((/* implicit */unsigned char) var_11);
}
