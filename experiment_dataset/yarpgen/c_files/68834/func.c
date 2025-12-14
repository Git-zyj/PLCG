/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68834
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68834 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68834
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
    var_11 = ((/* implicit */_Bool) (unsigned char)22);
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */_Bool) (unsigned char)234);
        var_12 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)22)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)2044)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)234))) : (5210831401642364313ULL))))));
    }
    /* vectorizable */
    for (short i_1 = 1; i_1 < 21; i_1 += 4) 
    {
        /* LoopNest 3 */
        for (signed char i_2 = 3; i_2 < 21; i_2 += 3) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 1) 
            {
                for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 4) 
                {
                    {
                        arr_14 [i_1] [i_1] [i_1] [i_1 + 2] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned char)19)) : (((/* implicit */int) arr_5 [i_2] [i_1]))));
                        /* LoopSeq 1 */
                        for (unsigned int i_5 = 0; i_5 < 23; i_5 += 4) 
                        {
                            arr_17 [i_1] [i_1] [i_3] [i_3] [i_1] = ((/* implicit */unsigned int) (+(((/* implicit */int) var_1))));
                            arr_18 [i_1] = ((/* implicit */unsigned short) 9223372036854775807LL);
                        }
                        arr_19 [i_1] [i_1] [i_1] [i_1] [i_4] = ((/* implicit */short) (-9223372036854775807LL - 1LL));
                        /* LoopSeq 2 */
                        for (short i_6 = 0; i_6 < 23; i_6 += 4) 
                        {
                            var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) (+(9223372036854775807LL))))));
                            var_14 = (short)-8928;
                            arr_23 [i_1] [i_2] [i_2] [i_1] [i_3] [i_1] [i_6] = ((/* implicit */unsigned int) var_7);
                            arr_24 [i_1] [i_1] [i_3] [i_4] [i_1] [i_1] = ((/* implicit */short) 1676324813961050298LL);
                        }
                        for (unsigned char i_7 = 1; i_7 < 20; i_7 += 1) 
                        {
                            arr_27 [i_1] [i_1] [i_7] = ((/* implicit */short) (-(((((/* implicit */_Bool) var_10)) ? (3536965884U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)120)))))));
                            arr_28 [i_1] [i_3] [i_3] [i_7 - 1] = ((/* implicit */int) var_0);
                            var_15 = ((/* implicit */signed char) (+(3678656259U)));
                        }
                    }
                } 
            } 
        } 
        var_16 = ((/* implicit */long long int) arr_10 [i_1 + 1] [i_1]);
        arr_29 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_15 [i_1 + 2] [i_1] [i_1] [i_1] [i_1] [i_1])) ? (((/* implicit */int) arr_15 [i_1 + 2] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1])) : (((/* implicit */int) arr_15 [i_1 + 2] [i_1] [i_1] [i_1] [i_1] [i_1]))));
    }
    for (unsigned char i_8 = 2; i_8 < 17; i_8 += 3) 
    {
        arr_33 [i_8] = ((/* implicit */_Bool) max(((signed char)-107), ((signed char)-104)));
        arr_34 [i_8] [i_8] = ((/* implicit */unsigned long long int) arr_3 [i_8 - 1] [i_8 - 2]);
    }
    var_17 = ((/* implicit */unsigned char) var_9);
    var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) min((((/* implicit */unsigned char) ((((/* implicit */int) var_2)) != (((((/* implicit */_Bool) (unsigned short)43561)) ? (-1161625571) : (((/* implicit */int) var_0))))))), (((unsigned char) ((short) var_4))))))));
    var_19 = ((/* implicit */unsigned char) var_0);
}
