/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6340
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6340 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6340
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
    for (unsigned char i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        var_15 = ((/* implicit */unsigned char) arr_1 [i_0 + 1]);
        arr_3 [i_0 - 1] = ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) - (var_5))))) >= ((~((-(((/* implicit */int) var_13))))))));
        var_16 = ((/* implicit */int) ((((((((/* implicit */int) (unsigned char)24)) / (((/* implicit */int) (short)29206)))) * ((~(((/* implicit */int) var_11)))))) != (((/* implicit */int) (_Bool)1))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 12; i_1 += 1) 
    {
        var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (arr_0 [i_1])))) ? (((-1038609769385866477LL) - (((/* implicit */long long int) ((/* implicit */int) var_14))))) : (((/* implicit */long long int) (-(((/* implicit */int) (short)32766)))))));
        /* LoopNest 3 */
        for (unsigned long long int i_2 = 1; i_2 < 11; i_2 += 4) 
        {
            for (unsigned int i_3 = 1; i_3 < 9; i_3 += 1) 
            {
                for (int i_4 = 0; i_4 < 12; i_4 += 3) 
                {
                    {
                        var_18 = ((/* implicit */signed char) (+(((/* implicit */int) (unsigned char)253))));
                        var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_13))) < (arr_0 [i_2]))))) * (((((/* implicit */_Bool) 1923145191377042345LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-29206))) : (9976849541615659580ULL))))))));
                        /* LoopSeq 2 */
                        for (unsigned short i_5 = 0; i_5 < 12; i_5 += 2) 
                        {
                            var_20 -= ((/* implicit */short) arr_8 [i_5] [i_5]);
                            arr_17 [i_1] [10ULL] [i_1] [i_1] [6ULL] = ((/* implicit */short) (+((+(((/* implicit */int) var_11))))));
                        }
                        for (short i_6 = 2; i_6 < 11; i_6 += 2) 
                        {
                            var_21 = ((/* implicit */signed char) (!(((/* implicit */_Bool) 523133059038289578ULL))));
                            var_22 = (+((~(((/* implicit */int) var_11)))));
                        }
                    }
                } 
            } 
        } 
        var_23 = ((/* implicit */short) ((((/* implicit */_Bool) (short)29213)) || (((/* implicit */_Bool) 523133059038289583ULL))));
    }
    var_24 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)79))) >= (1929143380156776361ULL))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)16383)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_12))))))))) : ((+(((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (var_5)))))));
    var_25 *= (((+(((var_4) ^ (3100723711U))))) >= (((/* implicit */unsigned int) ((/* implicit */int) var_1))));
    var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) ((((/* implicit */_Bool) ((11595930340464985489ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)175)))))) ? ((((!(((/* implicit */_Bool) var_8)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) var_2)))))) : ((+(var_5))))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-2297))))))));
    var_27 &= ((/* implicit */unsigned char) (~(((((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) >> ((((+(6850813733244566143ULL))) - (6850813733244566138ULL)))))));
}
