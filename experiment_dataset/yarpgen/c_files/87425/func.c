/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87425
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87425 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87425
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
    for (short i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_1 = 3; i_1 < 9; i_1 += 2) 
        {
            var_15 = ((/* implicit */_Bool) 641730757);
            /* LoopNest 2 */
            for (unsigned char i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                for (long long int i_3 = 0; i_3 < 11; i_3 += 1) 
                {
                    {
                        arr_11 [i_0] [i_2] [9] [i_0] = ((/* implicit */_Bool) var_2);
                        arr_12 [i_0] = ((((((/* implicit */int) (unsigned short)42976)) - (((/* implicit */int) (unsigned short)2)))) != (((/* implicit */int) arr_5 [i_1 + 2])));
                        /* LoopSeq 1 */
                        for (int i_4 = 0; i_4 < 11; i_4 += 3) 
                        {
                            arr_17 [i_0] [(unsigned short)6] [i_0] [i_3] [(short)3] [i_4] = ((/* implicit */long long int) (!(((/* implicit */_Bool) 2120479744))));
                            arr_18 [i_1] [i_1 - 2] [i_2] [i_3] [8LL] [i_1] [i_2] |= ((/* implicit */short) ((((_Bool) var_13)) ? (((/* implicit */unsigned long long int) (-(var_11)))) : (((((/* implicit */unsigned long long int) var_11)) % (18446744073709551615ULL)))));
                            arr_19 [i_2] [i_0] [i_2] = ((/* implicit */unsigned int) (~(((/* implicit */int) var_4))));
                        }
                    }
                } 
            } 
            arr_20 [i_0] [i_1] = ((/* implicit */signed char) (~(arr_4 [i_0] [i_1 - 1])));
            arr_21 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 620365973U)) ? (arr_13 [i_0] [i_1 - 1] [i_0]) : (((((/* implicit */int) arr_3 [i_0] [i_1 + 2])) | (-563921082)))));
        }
        for (unsigned int i_5 = 0; i_5 < 11; i_5 += 4) 
        {
            var_16 = ((/* implicit */int) min((var_16), ((~(((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)22560)) || (((/* implicit */_Bool) var_13)))))))));
            var_17 &= ((/* implicit */unsigned short) (~(var_11)));
            var_18 = ((/* implicit */unsigned short) (+((+(((/* implicit */int) (unsigned short)22560))))));
        }
        var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) 620365973U))));
        arr_26 [(_Bool)0] |= ((((/* implicit */_Bool) ((((/* implicit */int) var_7)) | (((/* implicit */int) (short)-11747))))) ? (((/* implicit */int) ((_Bool) 9ULL))) : ((~(((/* implicit */int) var_9)))));
    }
    /* vectorizable */
    for (long long int i_6 = 0; i_6 < 12; i_6 += 1) 
    {
        arr_30 [11U] [i_6] = ((/* implicit */unsigned short) (unsigned char)244);
        var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) var_5)) : (((((/* implicit */_Bool) 268435448U)) ? (((/* implicit */int) (unsigned short)14825)) : (((/* implicit */int) (unsigned short)65532))))));
        arr_31 [i_6] = ((/* implicit */short) var_3);
        arr_32 [i_6] [i_6] = ((/* implicit */signed char) ((-4605491989425865307LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)62266)))));
    }
    var_21 = ((/* implicit */_Bool) (+(((/* implicit */int) var_5))));
    var_22 += ((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_9)), (((((/* implicit */long long int) -2147483624)) - ((+((-9223372036854775807LL - 1LL))))))));
}
