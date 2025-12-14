/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89597
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89597 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89597
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
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                var_11 -= 2304451292U;
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned char i_2 = 0; i_2 < 14; i_2 += 2) /* same iter space */
                {
                    /* LoopSeq 3 */
                    for (long long int i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned short i_4 = 2; i_4 < 13; i_4 += 4) 
                        {
                            var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) ((int) var_4)))));
                            var_13 = ((/* implicit */int) (unsigned short)4952);
                            var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_0])))))));
                        }
                        for (unsigned long long int i_5 = 0; i_5 < 14; i_5 += 4) 
                        {
                            var_15 &= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_12 [i_2] [i_1] [i_2] [i_3] [i_5])) ? ((+(((/* implicit */int) (signed char)-70)))) : (((/* implicit */int) var_3))));
                            var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) (short)-12934)) && (((/* implicit */_Bool) (unsigned char)255)))) ? (arr_1 [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 414874841U)))))))))));
                            var_17 *= ((/* implicit */short) (-(((((/* implicit */_Bool) var_6)) ? (arr_3 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-16788)))))));
                            var_18 *= ((/* implicit */signed char) ((((/* implicit */int) (short)-16788)) ^ (((/* implicit */int) var_7))));
                            var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) ((var_5) + (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)69)) + (((/* implicit */int) arr_4 [i_2] [i_1] [i_1] [i_1]))))))))));
                        }
                        for (unsigned long long int i_6 = 0; i_6 < 14; i_6 += 2) 
                        {
                            arr_18 [i_0] = ((/* implicit */long long int) arr_15 [i_0] [i_1] [i_2] [i_0] [i_6] [7LL] [i_1]);
                            arr_19 [i_0] [i_0] [0] = ((/* implicit */short) (signed char)32);
                        }
                        var_20 = ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */_Bool) (unsigned char)173)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-32))) : (14976806354942686680ULL))));
                        var_21 = ((/* implicit */int) min((var_21), (((((/* implicit */_Bool) arr_9 [i_3] [i_3] [i_3])) ? (((/* implicit */int) arr_9 [i_0] [i_0] [i_0])) : (((/* implicit */int) var_0))))));
                    }
                    for (int i_7 = 0; i_7 < 14; i_7 += 2) 
                    {
                        var_22 = ((/* implicit */unsigned long long int) var_2);
                        var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) var_2))));
                    }
                    for (unsigned short i_8 = 0; i_8 < 14; i_8 += 1) 
                    {
                        arr_24 [i_8] [(unsigned char)8] [i_0] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_8]))));
                        var_24 = ((/* implicit */signed char) ((unsigned char) (unsigned short)1023));
                        var_25 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 796781065)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-6183))) : (var_5))))));
                        var_26 = ((/* implicit */short) arr_3 [i_0] [i_0]);
                    }
                    var_27 = ((/* implicit */short) (~(arr_21 [i_0] [i_1] [8ULL] [i_2])));
                    /* LoopSeq 1 */
                    for (long long int i_9 = 0; i_9 < 14; i_9 += 1) 
                    {
                        var_28 ^= ((/* implicit */int) arr_21 [i_2] [i_2] [i_2] [i_2]);
                        var_29 = ((/* implicit */unsigned int) max((var_29), (((/* implicit */unsigned int) ((((((/* implicit */long long int) ((/* implicit */int) var_0))) * (var_8))) / (((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)127))))))))));
                        /* LoopSeq 1 */
                        for (int i_10 = 0; i_10 < 14; i_10 += 1) 
                        {
                            arr_30 [i_0] [i_1] [i_1] [8] [8] [i_9] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_29 [(short)10] [10ULL] [(short)10] [i_9] [i_9] [i_9] [i_9]))))) ? (((((/* implicit */_Bool) arr_12 [i_0] [i_9] [i_2] [i_0] [i_0])) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-32)))));
                            var_30 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_20 [i_0] [(unsigned short)10] [(short)1] [i_9]))) / (var_4)));
                            arr_31 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 2517080646U)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_3))));
                            var_31 |= ((/* implicit */unsigned char) ((((/* implicit */int) arr_28 [i_0] [i_0] [i_0] [i_1] [i_1])) & (((/* implicit */int) arr_28 [i_0] [i_0] [i_0] [i_2] [i_0]))));
                        }
                        var_32 = ((/* implicit */_Bool) max((var_32), (((/* implicit */_Bool) 14542663486070529922ULL))));
                    }
                    var_33 = ((/* implicit */long long int) min((var_33), (((/* implicit */long long int) ((((/* implicit */_Bool) (short)15872)) ? (((/* implicit */int) (signed char)-72)) : (((/* implicit */int) (unsigned short)32767)))))));
                    arr_32 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_23 [i_0] [i_0] [i_0] [i_0])) ? (arr_23 [i_2] [i_1] [(short)1] [(unsigned char)9]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1)))));
                }
                for (unsigned char i_11 = 0; i_11 < 14; i_11 += 2) /* same iter space */
                {
                    var_34 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) arr_17 [i_0] [i_0]))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned char)136)) : (((/* implicit */int) (signed char)53))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) -3502746356495359528LL)) ? (((/* implicit */int) (unsigned short)35603)) : (((/* implicit */int) var_2))))) : (arr_2 [i_0] [i_0]))) : (((((((/* implicit */_Bool) var_0)) ? (arr_13 [(_Bool)1] [(_Bool)1] [i_11]) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))) >> (((arr_6 [i_11] [i_1] [i_1] [12]) - (3837253018U)))))));
                    var_35 = ((/* implicit */unsigned int) min((var_35), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) (short)-16788))) ? (arr_21 [i_0] [i_1] [i_1] [i_11]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))))));
                }
                for (int i_12 = 0; i_12 < 14; i_12 += 4) 
                {
                    arr_38 [i_12] [i_0] [i_12] = ((/* implicit */unsigned char) ((signed char) max((arr_16 [i_0] [i_0]), (((/* implicit */unsigned char) var_7)))));
                    /* LoopSeq 2 */
                    for (unsigned short i_13 = 2; i_13 < 11; i_13 += 2) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (long long int i_14 = 3; i_14 < 11; i_14 += 4) 
                        {
                            var_36 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) + (((((/* implicit */unsigned long long int) arr_25 [i_0] [7ULL] [i_12] [(unsigned short)10] [i_0])) + (var_1)))));
                            var_37 = ((/* implicit */unsigned long long int) max((var_37), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_7)))))));
                        }
                        var_38 = ((/* implicit */unsigned int) max((var_38), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) 725773099030438396ULL)))))));
                    }
                    for (unsigned short i_15 = 0; i_15 < 14; i_15 += 2) 
                    {
                        var_39 = ((/* implicit */unsigned long long int) min((var_39), (((/* implicit */unsigned long long int) var_5))));
                        var_40 = ((/* implicit */unsigned char) var_7);
                        var_41 = ((int) var_9);
                    }
                    /* LoopSeq 3 */
                    for (unsigned char i_16 = 0; i_16 < 14; i_16 += 2) 
                    {
                        var_42 ^= ((/* implicit */short) arr_3 [i_16] [i_1]);
                        var_43 += ((/* implicit */long long int) min((((((var_1) / (arr_17 [i_16] [i_12]))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)24733)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)29935))) : (536870911U)))))), (max((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)65524)) / (((/* implicit */int) (signed char)74))))), (min((arr_23 [i_0] [i_1] [i_12] [i_16]), (((/* implicit */unsigned long long int) var_8))))))));
                        var_44 = ((/* implicit */unsigned short) arr_45 [i_0] [i_16] [i_12] [(_Bool)1]);
                    }
                    for (signed char i_17 = 0; i_17 < 14; i_17 += 2) 
                    {
                        var_45 = ((/* implicit */long long int) max((((/* implicit */int) (short)32617)), ((~(((/* implicit */int) (signed char)-112))))));
                        var_46 *= ((/* implicit */unsigned int) (+(max((((((/* implicit */int) var_9)) - (((/* implicit */int) (signed char)110)))), (((/* implicit */int) ((short) (unsigned short)36608)))))));
                        /* LoopSeq 1 */
                        for (unsigned short i_18 = 0; i_18 < 14; i_18 += 4) 
                        {
                            var_47 &= ((/* implicit */int) ((10640249683091378584ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))));
                            var_48 *= ((/* implicit */unsigned char) (unsigned short)7838);
                        }
                    }
                    for (int i_19 = 3; i_19 < 13; i_19 += 3) 
                    {
                        arr_57 [i_0] [i_0] [i_12] [i_0] [i_0] &= ((/* implicit */unsigned short) (-(((((((/* implicit */_Bool) 3916080074445082673ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [13LL] [13LL] [13LL] [i_19] [i_12]))) : (33554431U))) - (((((/* implicit */_Bool) (signed char)-109)) ? (414874844U) : (arr_3 [i_1] [i_0])))))));
                        arr_58 [i_0] [i_19] [i_19] [i_19] = ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */int) arr_14 [i_19 + 1] [i_19] [i_19] [i_0] [i_19] [i_19] [i_19 - 1])) & (((/* implicit */int) (unsigned char)88))))) ^ ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_19 + 1] [(_Bool)1] [(_Bool)1] [i_0] [(signed char)0] [i_19] [i_19 - 3]))) : (var_4)))));
                        arr_59 [i_0] [i_1] [i_0] |= ((/* implicit */signed char) arr_29 [i_0] [i_0] [i_0] [i_12] [i_12] [(unsigned short)3] [i_19]);
                    }
                }
            }
        } 
    } 
    var_49 = ((/* implicit */short) ((((/* implicit */int) var_0)) * (((/* implicit */int) (unsigned char)25))));
    var_50 ^= ((/* implicit */short) max((((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_5)), (var_4)))), (((((/* implicit */_Bool) var_8)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) + (17720970974679113216ULL))) : (((/* implicit */unsigned long long int) ((1193939944U) - (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))))));
}
