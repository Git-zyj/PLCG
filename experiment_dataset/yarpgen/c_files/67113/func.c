/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67113
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67113 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67113
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
    for (signed char i_0 = 2; i_0 < 22; i_0 += 2) 
    {
        arr_3 [(unsigned char)0] = ((/* implicit */unsigned long long int) var_12);
        var_14 = min((((short) var_0)), (((/* implicit */short) (signed char)-1)));
    }
    var_15 *= ((/* implicit */unsigned long long int) var_10);
    /* LoopSeq 4 */
    for (short i_1 = 0; i_1 < 12; i_1 += 2) 
    {
        arr_8 [6U] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) 2750020670U)) ? (((/* implicit */unsigned long long int) (+((+(((/* implicit */int) var_12))))))) : ((-(((((/* implicit */unsigned long long int) var_10)) * (arr_7 [i_1] [(signed char)3])))))));
        var_16 = ((/* implicit */_Bool) ((signed char) ((short) ((((/* implicit */_Bool) arr_1 [i_1])) ? (7966713022625652147ULL) : (((/* implicit */unsigned long long int) 1707976506U))))));
    }
    for (unsigned long long int i_2 = 2; i_2 < 14; i_2 += 2) 
    {
        var_17 *= ((/* implicit */unsigned short) (+(((unsigned int) 9U))));
        var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) min((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (var_8) : (var_8)))) : (arr_11 [i_2 - 1] [i_2 - 1])))), (((((/* implicit */_Bool) arr_11 [i_2 - 2] [i_2 - 2])) ? (((((/* implicit */_Bool) -2616530299476811871LL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-126))) : (-2616530299476811854LL))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_1 [i_2 - 1])))))))))));
        arr_12 [i_2 + 1] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) arr_11 [i_2] [i_2])) - (((unsigned long long int) (~(var_8))))));
        arr_13 [i_2 + 2] [i_2 + 2] = max(((((+(((/* implicit */int) (short)-32764)))) + (((/* implicit */int) var_1)))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 12616379512635196742ULL)) ? (1517488835053785317ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)37512)))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) ((signed char) (unsigned short)4064))))));
    }
    for (unsigned int i_3 = 0; i_3 < 21; i_3 += 2) 
    {
        /* LoopNest 3 */
        for (short i_4 = 0; i_4 < 21; i_4 += 2) 
        {
            for (unsigned long long int i_5 = 0; i_5 < 21; i_5 += 2) 
            {
                for (unsigned short i_6 = 0; i_6 < 21; i_6 += 3) 
                {
                    {
                        arr_28 [i_3] [i_4] [i_5] [(signed char)4] [i_5] = ((/* implicit */unsigned long long int) ((unsigned short) max((((long long int) arr_23 [i_3] [i_3] [i_3] [i_3])), (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) / (-2616530299476811858LL))))));
                        var_19 -= ((/* implicit */unsigned long long int) arr_22 [i_4] [i_5] [i_5]);
                        arr_29 [i_3] [i_3] [i_3] [(short)14] = ((/* implicit */long long int) (unsigned char)230);
                        var_20 = ((/* implicit */unsigned int) ((((/* implicit */long long int) (((!(((/* implicit */_Bool) var_3)))) ? (((/* implicit */int) arr_27 [i_5])) : (((var_9) ? (((/* implicit */int) arr_19 [i_3])) : (((/* implicit */int) var_2))))))) > (max((2616530299476811870LL), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_18 [i_3])) ? (((/* implicit */int) (signed char)118)) : (((/* implicit */int) arr_2 [i_6])))))))));
                    }
                } 
            } 
        } 
        var_21 = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_25 [i_3] [i_3])) ? (((/* implicit */int) (unsigned short)49914)) : (((/* implicit */int) arr_2 [i_3])))), (((/* implicit */int) min((((/* implicit */unsigned short) var_9)), (var_0))))));
    }
    /* vectorizable */
    for (signed char i_7 = 0; i_7 < 15; i_7 += 4) 
    {
        arr_33 [(signed char)7] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_14 [i_7])) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) arr_22 [i_7] [i_7] [(signed char)0]))))));
        var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)32758)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)15631)) ? (((/* implicit */int) (unsigned short)10543)) : (((/* implicit */int) (short)-10679)))))));
        var_23 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (short)32767)))) >= ((~(arr_26 [6ULL])))));
        var_24 = ((/* implicit */signed char) (~(2339979821U)));
        var_25 = ((/* implicit */signed char) (short)10699);
    }
}
