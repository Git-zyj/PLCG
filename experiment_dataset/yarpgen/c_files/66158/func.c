/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66158
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66158 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66158
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
    for (int i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    var_20 -= ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)21)) ? (836079300) : (((/* implicit */int) (_Bool)1))))) ? (((var_10) ? (3090460777446644282LL) : (((/* implicit */long long int) arr_6 [(unsigned char)0] [i_1])))) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))), (((unsigned long long int) var_1))));
                    var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) (~(((/* implicit */int) arr_5 [i_1] [i_2])))))));
                    arr_7 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_0 [i_0 - 1]) ? ((+(((/* implicit */int) arr_5 [i_0] [i_0])))) : ((~(((/* implicit */int) arr_2 [i_0] [i_1]))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_2 [i_0 - 1] [i_0 + 1])) : (((/* implicit */int) arr_4 [i_0])))))));
                    var_22 = ((/* implicit */unsigned long long int) (~(min((var_7), (((/* implicit */int) arr_0 [i_0 + 1]))))));
                }
            } 
        } 
        var_23 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_0] [i_0 + 1])) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_2 [i_0] [(unsigned short)0]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0 + 1] [i_0 + 1]))) : (max((((/* implicit */unsigned int) arr_3 [i_0] [i_0 - 1] [i_0])), (arr_6 [(unsigned char)4] [i_0 - 1]))))) : (((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_1 [4])) ? (((/* implicit */int) var_18)) : (((/* implicit */int) arr_2 [i_0] [(unsigned short)10])))))))));
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) (-((-(arr_6 [6U] [6U]))))))));
        arr_11 [i_3] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */signed char) arr_8 [i_3])), (var_12)))) ? ((-(var_11))) : (((arr_8 [i_3]) ? (arr_6 [i_3] [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_3] [i_3])))))));
        var_25 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) -836079318)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0))))));
    }
    for (unsigned short i_4 = 0; i_4 < 23; i_4 += 1) 
    {
        var_26 += ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((signed char) (~(((/* implicit */int) arr_14 [i_4] [i_4]))))))));
        var_27 = ((/* implicit */short) (+(((((/* implicit */_Bool) (~(((/* implicit */int) arr_13 [i_4] [i_4]))))) ? (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */signed char) var_0)), (arr_13 [16LL] [i_4])))))))));
        /* LoopNest 2 */
        for (unsigned int i_5 = 0; i_5 < 23; i_5 += 1) 
        {
            for (int i_6 = 0; i_6 < 23; i_6 += 2) 
            {
                {
                    arr_20 [i_5] = ((/* implicit */unsigned char) arr_12 [i_4] [i_5]);
                    arr_21 [i_4] [i_4] [i_4] [i_6] = ((/* implicit */unsigned char) arr_17 [(unsigned short)21] [(_Bool)1]);
                    /* LoopSeq 2 */
                    for (unsigned char i_7 = 0; i_7 < 23; i_7 += 2) /* same iter space */
                    {
                        var_28 += ((/* implicit */unsigned short) var_7);
                        var_29 = ((/* implicit */unsigned long long int) max((var_29), ((-(max((((/* implicit */unsigned long long int) (_Bool)0)), (18446744073709551615ULL)))))));
                        /* LoopSeq 1 */
                        for (unsigned char i_8 = 0; i_8 < 23; i_8 += 2) 
                        {
                            var_30 += ((/* implicit */int) ((((((((/* implicit */_Bool) arr_18 [i_5] [10U] [i_5] [(unsigned short)19])) ? (arr_25 [i_4] [i_5] [(unsigned short)22] [i_6] [i_7] [i_8]) : (arr_12 [i_4] [(short)20]))) | (((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)0))))))) >= (((/* implicit */unsigned int) (-(((/* implicit */int) var_3)))))));
                            var_31 = ((/* implicit */unsigned int) min((min((((/* implicit */unsigned long long int) arr_23 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4])), (max((var_14), (((/* implicit */unsigned long long int) var_13)))))), (((/* implicit */unsigned long long int) var_13))));
                            var_32 = ((/* implicit */int) min((var_32), (((/* implicit */int) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_11))))), (max(((~(var_6))), (((/* implicit */unsigned int) max((arr_17 [i_4] [i_8]), (arr_14 [i_5] [i_7])))))))))));
                            var_33 = ((/* implicit */unsigned long long int) max((var_33), (((/* implicit */unsigned long long int) ((836079311) & (((/* implicit */int) (signed char)55)))))));
                        }
                        var_34 |= ((/* implicit */unsigned short) var_13);
                        var_35 -= ((var_8) % ((-(((/* implicit */int) var_13)))));
                    }
                    for (unsigned char i_9 = 0; i_9 < 23; i_9 += 2) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (signed char i_10 = 0; i_10 < 23; i_10 += 2) 
                        {
                            arr_35 [i_4] [i_4] [i_6] [(unsigned char)16] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min(((~(((/* implicit */int) arr_15 [i_5])))), (((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) arr_16 [i_4] [i_4])) : (((/* implicit */int) var_2))))))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) arr_14 [i_4] [5LL]))))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) var_7)) : (arr_31 [i_6] [i_10]))) : (((/* implicit */unsigned long long int) ((2474612662U) - (((/* implicit */unsigned int) -836079325))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(var_7))))))))));
                            arr_36 [i_4] [i_4] [i_4] [i_5] [i_4] = ((/* implicit */long long int) max((((/* implicit */unsigned int) (+(-836079296)))), (((unsigned int) arr_27 [i_9] [i_6]))));
                        }
                        var_36 *= ((((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (-836079331)))) <= (((((/* implicit */_Bool) 17499927977027071286ULL)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)38673))))));
                        var_37 = ((/* implicit */unsigned int) max((var_37), (((/* implicit */unsigned int) min((((((/* implicit */int) var_18)) % (836079309))), (836079320))))));
                        var_38 += ((/* implicit */_Bool) arr_33 [i_9] [i_9] [i_6] [(_Bool)1] [i_4] [i_4]);
                        var_39 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) ((var_4) + (((/* implicit */int) arr_32 [i_4] [i_9])))))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_27 [i_6] [i_9])) - (arr_33 [8] [i_4] [i_5] [i_6] [i_6] [i_9])))) || (((/* implicit */_Bool) (unsigned short)19399))))) : (min((((/* implicit */int) var_16)), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_22 [i_6] [i_6] [i_6] [i_6])) : (((/* implicit */int) arr_34 [i_4] [i_4] [18] [18] [i_4]))))))));
                    }
                }
            } 
        } 
        var_40 = ((/* implicit */signed char) arr_12 [i_4] [i_4]);
        arr_37 [i_4] [i_4] &= ((/* implicit */_Bool) ((unsigned char) var_18));
    }
    var_41 = ((/* implicit */signed char) (~(((/* implicit */int) var_3))));
    var_42 = ((/* implicit */unsigned char) var_5);
    var_43 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-1840)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 9223372036854775786LL)) ? (((/* implicit */int) (_Bool)1)) : (max((836079330), (-62281396)))))) : (max((var_11), (((/* implicit */unsigned int) var_16))))));
    var_44 &= var_5;
}
