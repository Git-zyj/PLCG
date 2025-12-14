/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9660
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9660 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9660
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
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        var_19 *= ((/* implicit */short) (-(((/* implicit */int) ((short) arr_0 [(unsigned char)0] [(unsigned char)0])))));
        /* LoopNest 2 */
        for (signed char i_1 = 1; i_1 < 23; i_1 += 2) 
        {
            for (unsigned int i_2 = 1; i_2 < 24; i_2 += 2) 
            {
                {
                    var_20 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)22625)) || (((/* implicit */_Bool) arr_6 [i_0] [i_1 - 1] [i_1 - 1] [i_0]))));
                    var_21 = ((/* implicit */short) (unsigned short)4);
                    var_22 = ((/* implicit */unsigned int) var_7);
                    var_23 = ((/* implicit */int) ((short) arr_7 [i_1] [i_1 - 1] [i_2 - 1] [i_2 + 1]));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        for (long long int i_4 = 2; i_4 < 24; i_4 += 2) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned int) arr_3 [i_2] [i_3] [i_4]);
                                var_25 ^= ((/* implicit */unsigned short) 9223372036854775795LL);
                                var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) arr_9 [i_1 + 1] [i_1] [i_2 + 1] [i_3] [i_4 - 2]))));
                                var_27 += ((/* implicit */int) (!(arr_12 [i_4 + 1] [i_4 + 1] [1U] [i_4] [i_4 + 1] [1U])));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (unsigned int i_5 = 0; i_5 < 23; i_5 += 1) 
    {
        var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_8) & (arr_9 [i_5] [i_5] [i_5] [i_5] [i_5])))) ? (((/* implicit */int) ((short) (unsigned char)107))) : (((/* implicit */int) (short)(-32767 - 1)))))) ? (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_5] [(short)12] [i_5]))) * (0U)))) ? (max((((/* implicit */long long int) arr_1 [i_5])), (arr_9 [i_5] [i_5] [i_5] [i_5] [i_5]))) : (((/* implicit */long long int) (+(var_16)))))) : (((/* implicit */long long int) arr_2 [i_5]))));
        /* LoopNest 2 */
        for (unsigned short i_6 = 0; i_6 < 23; i_6 += 3) 
        {
            for (unsigned int i_7 = 0; i_7 < 23; i_7 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_8 = 0; i_8 < 23; i_8 += 3) 
                    {
                        for (short i_9 = 1; i_9 < 20; i_9 += 2) 
                        {
                            {
                                var_29 = ((/* implicit */_Bool) arr_19 [i_5] [i_6] [i_7]);
                                var_30 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_14))));
                                var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) min((arr_24 [i_8] [i_9 + 3] [i_9 + 3] [(signed char)3] [i_9 + 3]), (arr_24 [i_9] [i_9 - 1] [i_9] [i_9] [i_9 + 1])))) / (((((/* implicit */_Bool) arr_24 [i_5] [i_9 + 1] [(unsigned char)6] [i_9 + 2] [i_9 + 3])) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_12)))))));
                                var_32 = ((/* implicit */unsigned short) ((max((460681539U), (((/* implicit */unsigned int) 1023)))) * (((unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned char)37)) : (((/* implicit */int) (unsigned char)246)))))));
                                var_33 = ((/* implicit */signed char) max((var_33), (((/* implicit */signed char) ((((arr_18 [i_9] [i_9] [i_9 + 3] [i_9 + 3]) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))) | (((/* implicit */unsigned long long int) (((~(((/* implicit */int) (unsigned char)107)))) | (((/* implicit */int) (_Bool)1))))))))));
                            }
                        } 
                    } 
                    var_34 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((min((372831046908553548LL), (((/* implicit */long long int) 460681557U)))), (((/* implicit */long long int) (+(((/* implicit */int) arr_20 [i_5] [i_6] [i_7] [i_7])))))))) || ((!(((((/* implicit */_Bool) arr_1 [i_5])) && (((/* implicit */_Bool) 36028797018963967LL))))))));
                    var_35 = (unsigned char)149;
                    var_36 = ((/* implicit */unsigned short) ((((arr_15 [i_5]) - (3861590799U))) | (((/* implicit */unsigned int) ((/* implicit */int) var_11)))));
                }
            } 
        } 
        var_37 |= ((/* implicit */int) var_15);
        /* LoopSeq 1 */
        for (short i_10 = 0; i_10 < 23; i_10 += 2) 
        {
            var_38 = ((/* implicit */unsigned int) min((var_38), (((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_27 [i_5] [i_10])) ? (((/* implicit */unsigned long long int) ((arr_22 [(short)5] [(short)5] [(short)5] [(short)5] [i_10] [i_10]) + (((/* implicit */long long int) arr_14 [i_5]))))) : (((8796093022207ULL) << (((/* implicit */int) (unsigned short)1)))))))))));
            var_39 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_9)), (arr_6 [i_5] [i_5] [i_10] [i_10])))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)100))) : (max((((/* implicit */long long int) arr_8 [i_5] [i_10] [i_5])), (var_18))))) < (max((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)25261))) | (460681541U)))), ((~(var_18)))))));
            var_40 = ((/* implicit */int) (-(((arr_12 [i_10] [i_10] [i_10] [i_5] [i_5] [i_5]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_5] [i_10] [i_10] [i_10] [i_10] [i_10]))) : (460681558U)))));
            /* LoopNest 2 */
            for (long long int i_11 = 0; i_11 < 23; i_11 += 1) 
            {
                for (short i_12 = 0; i_12 < 23; i_12 += 3) 
                {
                    {
                        var_41 = var_3;
                        /* LoopSeq 1 */
                        for (short i_13 = 0; i_13 < 23; i_13 += 2) 
                        {
                            var_42 = ((/* implicit */int) min((var_42), (((/* implicit */int) ((((/* implicit */_Bool) arr_24 [i_5] [i_10] [i_11] [i_12] [i_13])) ? (max((arr_3 [i_5] [i_5] [i_5]), (((/* implicit */long long int) ((((/* implicit */int) arr_33 [i_10])) <= (arr_23 [i_12] [i_11] [i_10] [i_5])))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((3861590796U) << (((((/* implicit */int) (short)511)) - (492)))))) ? (((unsigned int) 433376499U)) : (((/* implicit */unsigned int) arr_19 [i_5] [i_10] [i_11]))))))))));
                            var_43 &= ((/* implicit */unsigned long long int) 4294967295U);
                            var_44 -= ((/* implicit */short) max((arr_15 [i_5]), (var_3)));
                            var_45 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned short)7)), (1978224085U)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)7)) || (((/* implicit */_Bool) var_16)))))) : (max((9223372036854775802LL), (((/* implicit */long long int) arr_12 [i_5] [i_10] [i_11] [i_10] [i_13] [i_5]))))))));
                        }
                        var_46 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((arr_19 [i_5] [i_10] [i_12]) >= (arr_19 [i_5] [i_10] [i_12]))))));
                        /* LoopSeq 1 */
                        for (unsigned int i_14 = 1; i_14 < 22; i_14 += 1) 
                        {
                            var_47 = ((/* implicit */unsigned int) min((var_47), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((unsigned long long int) 3834285738U)), (((/* implicit */unsigned long long int) arr_20 [i_5] [i_5] [i_11] [i_14]))))))))));
                            var_48 = min((((/* implicit */unsigned int) ((((((int) arr_6 [i_12] [i_5] [i_10] [(unsigned char)19])) + (2147483647))) >> (((/* implicit */int) ((((/* implicit */long long int) 433376490U)) >= (arr_22 [i_5] [i_10] [i_10] [i_11] [i_12] [i_14 - 1]))))))), (((unsigned int) (+(arr_18 [i_5] [i_5] [i_5] [i_5])))));
                            var_49 = ((/* implicit */unsigned short) ((((max((arr_22 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11]), (((/* implicit */long long int) 1441794299)))) != (((/* implicit */long long int) arr_1 [i_14 - 1])))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (((unsigned int) var_15)))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)52431)))));
                        }
                    }
                } 
            } 
        }
    }
    for (signed char i_15 = 0; i_15 < 18; i_15 += 2) 
    {
        var_50 = ((/* implicit */short) (!((!(((/* implicit */_Bool) var_9))))));
        var_51 &= ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)38596)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)19627))));
    }
    var_52 = ((/* implicit */unsigned int) max((var_52), (((/* implicit */unsigned int) var_2))));
    var_53 -= ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) (+(((((/* implicit */int) (unsigned char)252)) >> (((((/* implicit */int) (unsigned short)26931)) - (26908)))))))) : ((~(3861590799U))));
}
