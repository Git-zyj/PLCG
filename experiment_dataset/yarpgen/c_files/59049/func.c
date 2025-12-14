/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59049
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59049 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59049
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
    var_17 = ((/* implicit */unsigned char) max((var_0), (((/* implicit */unsigned int) var_1))));
    var_18 -= min((((/* implicit */long long int) ((((((/* implicit */_Bool) 4012562314U)) ? (var_2) : (0))) & (((/* implicit */int) max(((unsigned short)65525), ((unsigned short)10))))))), (((((/* implicit */long long int) (+(0)))) & (var_8))));
    var_19 &= ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_5)) ? (-640658605) : (var_13)))))) ? ((+((-(4016793225U))))) : (var_0)));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_20 ^= ((/* implicit */unsigned int) max((((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) + (0U)))) ? ((-(var_8))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)18))))), (((/* implicit */long long int) max((arr_1 [i_0]), (((/* implicit */int) min((((/* implicit */signed char) arr_0 [i_0] [i_0])), ((signed char)-20)))))))));
        var_21 = ((/* implicit */int) min((((((/* implicit */_Bool) ((unsigned int) (short)12288))) ? (((((/* implicit */_Bool) var_9)) ? (var_9) : (var_0))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0]))))), (((/* implicit */unsigned int) ((arr_1 [i_0]) / (arr_1 [i_0]))))));
        var_22 = ((/* implicit */int) min((((((/* implicit */_Bool) arr_1 [i_0])) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))), (((/* implicit */unsigned int) max((arr_1 [i_0]), (((/* implicit */int) (unsigned short)65515)))))));
        var_23 ^= ((/* implicit */signed char) -1789397384576340064LL);
    }
    for (short i_1 = 0; i_1 < 15; i_1 += 4) 
    {
        var_24 = ((/* implicit */short) (+(((/* implicit */int) min((arr_3 [i_1]), (arr_3 [i_1]))))));
        /* LoopNest 2 */
        for (unsigned int i_2 = 1; i_2 < 13; i_2 += 4) 
        {
            for (unsigned char i_3 = 2; i_3 < 13; i_3 += 4) 
            {
                {
                    var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) var_3)), (285268059)))) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (var_11)))) ? (((/* implicit */long long int) ((unsigned int) 1073709056LL))) : (max((((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)65519))))), (((((/* implicit */_Bool) arr_5 [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (var_16))))))))));
                    arr_13 [(short)2] = ((/* implicit */long long int) arr_7 [(unsigned short)5] [(unsigned short)5] [i_3]);
                    arr_14 [i_1] [i_1] [(unsigned char)1] [i_3] = ((/* implicit */signed char) (+(((/* implicit */int) (signed char)-19))));
                }
            } 
        } 
    }
    for (signed char i_4 = 1; i_4 < 16; i_4 += 4) 
    {
        var_26 = ((/* implicit */int) (+(((((((/* implicit */_Bool) arr_15 [i_4 + 1])) ? (3039537487U) : (var_4))) >> (((max((arr_15 [i_4]), (arr_15 [i_4]))) + (294325290810965895LL)))))));
        var_27 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_4) : (((/* implicit */unsigned int) 1895504217))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)65520)) != (((/* implicit */int) (unsigned char)236)))))) : ((+(7214505419533429242LL)))))) ? (min((((/* implicit */long long int) ((unsigned int) var_3))), ((+(var_11))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_4]))))))));
        var_28 = ((/* implicit */long long int) (+(max(((+(((/* implicit */int) (signed char)15)))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned short)3266)) : (((/* implicit */int) arr_16 [i_4]))))))));
        var_29 = ((/* implicit */long long int) (unsigned char)240);
        var_30 ^= ((/* implicit */int) ((short) ((((/* implicit */_Bool) (-(8115687315654671015LL)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned char)111)) : (((/* implicit */int) arr_16 [6LL]))))) : (max((((/* implicit */long long int) arr_16 [(short)4])), (arr_15 [i_4 - 1]))))));
    }
}
