/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70198
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70198 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70198
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
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        arr_2 [(signed char)6] = ((/* implicit */unsigned char) ((((((((/* implicit */int) var_16)) | (((/* implicit */int) var_5)))) + (2147483647))) >> (((/* implicit */int) arr_0 [i_0] [i_0]))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    var_20 = ((((/* implicit */_Bool) var_10)) ? (arr_3 [i_0] [i_0] [(unsigned char)4]) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0]))));
                    var_21 = ((/* implicit */unsigned short) (((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
                    var_22 ^= ((/* implicit */unsigned short) ((signed char) arr_3 [i_1] [i_2] [i_2]));
                }
            } 
        } 
    }
    var_23 |= ((/* implicit */unsigned short) ((long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_10))))) ? (((long long int) var_1)) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_0))))))));
    var_24 &= ((/* implicit */_Bool) ((unsigned char) var_8));
    /* LoopNest 2 */
    for (short i_3 = 1; i_3 < 15; i_3 += 2) 
    {
        for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 4) 
        {
            {
                arr_12 [i_3] [i_3] [(unsigned char)14] = ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) >= (494903415U));
                /* LoopSeq 2 */
                /* vectorizable */
                for (long long int i_5 = 0; i_5 < 16; i_5 += 2) 
                {
                    var_25 |= ((/* implicit */short) ((var_9) / (((/* implicit */int) var_12))));
                    arr_15 [i_3 + 1] [i_3] [i_3 - 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_8 [i_3 - 1])) : (((/* implicit */int) ((unsigned short) var_5)))));
                    var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_11 [i_4] [i_3] [i_3 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (arr_11 [i_3] [i_3] [i_3 - 1])));
                    arr_16 [i_3] [i_4] [i_3] = ((/* implicit */unsigned char) ((unsigned short) var_18));
                }
                for (unsigned long long int i_6 = 0; i_6 < 16; i_6 += 3) 
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_7 = 4; i_7 < 15; i_7 += 4) 
                    {
                        var_27 = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_19 [i_7 - 1] [i_4] [i_4] [i_3] [(unsigned char)9])) ? (var_18) : (arr_19 [i_7 - 3] [i_4] [i_6] [i_7] [i_4]))) >> (((((arr_19 [i_7 - 1] [i_4] [i_6] [i_4] [i_3]) * (arr_19 [i_7 - 2] [i_7 - 2] [i_7 - 2] [i_7 - 2] [(_Bool)0]))) - (727650383U)))));
                        var_28 |= ((/* implicit */unsigned short) ((((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_19 [i_3] [i_6] [i_4] [i_3] [i_3])))) >= (((unsigned int) var_7)))) && (((/* implicit */_Bool) arr_18 [i_7] [(unsigned short)4] [i_7] [i_7]))));
                        var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_3])) ? (((/* implicit */int) var_2)) : (var_9))))) ? (((((/* implicit */_Bool) -22LL)) ? (((/* implicit */int) (unsigned short)3847)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((((/* implicit */int) arr_10 [i_3 - 1])) > (((/* implicit */int) var_0)))))));
                        var_30 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_4] [i_7 - 3] [10] [i_7])) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_15))))) ? (((((/* implicit */_Bool) 2120581895U)) ? (2305843009213661184LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (arr_13 [i_4] [i_4] [i_4])));
                    }
                    arr_21 [(unsigned short)12] [i_4] [12] |= ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) arr_20 [i_3 - 1] [i_3 - 1] [i_6] [i_4]))) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_3]))) : (((long long int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (arr_19 [i_3] [i_3 - 1] [i_3] [i_3] [i_3]))))));
                }
                arr_22 [i_4] [i_4] |= ((/* implicit */long long int) ((unsigned int) ((((((/* implicit */_Bool) var_9)) ? (arr_18 [i_4] [i_3] [i_3] [i_4]) : (((/* implicit */long long int) var_9)))) | (((/* implicit */long long int) ((/* implicit */int) var_6))))));
                /* LoopNest 2 */
                for (long long int i_8 = 0; i_8 < 16; i_8 += 2) 
                {
                    for (int i_9 = 0; i_9 < 16; i_9 += 3) 
                    {
                        {
                            var_31 *= ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) arr_13 [i_3 + 1] [i_3 - 1] [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_18 [i_8] [i_4] [8ULL] [i_4])))) : (((((/* implicit */_Bool) arr_20 [i_3] [i_3] [i_3] [i_4])) ? (var_18) : (((/* implicit */unsigned int) var_11)))))));
                            var_32 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_3] [i_3] [i_3] [i_9] [i_3 - 1])) ? (((arr_23 [i_4] [i_3]) ? (((/* implicit */int) arr_9 [i_3])) : (((/* implicit */int) arr_23 [5U] [i_3])))) : (((var_0) ? (((/* implicit */int) arr_9 [i_3])) : (((/* implicit */int) var_0))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_10 [i_3 + 1])))))));
                            arr_28 [i_3 - 1] [i_4] [i_3] [i_9] [i_9] = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)17303)) / (((/* implicit */int) (_Bool)1))))) / (((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (arr_20 [i_3] [i_3] [i_3] [i_3]))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_33 ^= ((/* implicit */unsigned short) ((((259198968) & (259198968))) == (((/* implicit */int) ((short) ((((/* implicit */int) (_Bool)1)) >> (((887428180U) - (887428155U)))))))));
}
