/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97723
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97723 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97723
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
    var_20 = ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_16))) >= (((((/* implicit */_Bool) var_14)) ? (-2228040895901054742LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        arr_2 [10LL] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) var_12))));
        var_21 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)50)) ? (var_15) : (var_11)));
        var_22 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_13)) ? ((~(((/* implicit */int) (unsigned short)32871)))) : (((/* implicit */int) ((((/* implicit */int) (signed char)116)) == (((/* implicit */int) var_16)))))));
    }
    for (signed char i_1 = 2; i_1 < 21; i_1 += 1) 
    {
        var_23 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((var_17), (var_17))))) < (max((((((/* implicit */_Bool) (unsigned short)32880)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_18))))), (((/* implicit */unsigned long long int) var_11))))));
        var_24 = ((/* implicit */_Bool) (((!(((((/* implicit */_Bool) (short)20971)) && (((/* implicit */_Bool) var_15)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_17)) << (((var_1) - (4005487748U))))))))) : ((-(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)3)))))))));
    }
    for (unsigned short i_2 = 0; i_2 < 11; i_2 += 1) 
    {
        var_25 = ((/* implicit */int) ((((/* implicit */unsigned long long int) (-(2228040895901054739LL)))) >= (max((var_12), (((/* implicit */unsigned long long int) (signed char)50))))));
        /* LoopNest 2 */
        for (long long int i_3 = 0; i_3 < 11; i_3 += 1) 
        {
            for (long long int i_4 = 0; i_4 < 11; i_4 += 1) 
            {
                {
                    arr_14 [i_2] [i_2] [6ULL] |= var_2;
                    /* LoopSeq 1 */
                    for (unsigned int i_5 = 0; i_5 < 11; i_5 += 4) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned char i_6 = 0; i_6 < 11; i_6 += 1) 
                        {
                            var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) ? (var_15) : (((/* implicit */long long int) ((/* implicit */int) var_3)))));
                            var_27 = ((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-65)))))));
                            arr_22 [i_2] [i_4] [i_2] [i_4] [(signed char)6] [(signed char)6] [i_2] = ((/* implicit */int) var_1);
                        }
                        var_28 = ((/* implicit */_Bool) (signed char)69);
                        /* LoopSeq 1 */
                        for (unsigned long long int i_7 = 0; i_7 < 11; i_7 += 2) 
                        {
                            arr_25 [i_4] [1U] [7U] [(signed char)4] [i_7] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((var_8) >= (((/* implicit */unsigned long long int) var_1)))))) / ((((!((_Bool)1))) ? (-2228040895901054733LL) : (((/* implicit */long long int) 4294967282U))))));
                            arr_26 [i_4] [i_4] [10ULL] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? (max((min((var_4), (((/* implicit */unsigned int) var_2)))), (((/* implicit */unsigned int) max((var_6), (((/* implicit */int) (short)-18964))))))) : (((/* implicit */unsigned int) (~(((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) var_4))))))))));
                        }
                        var_29 = ((var_13) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_19))));
                        var_30 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-43)) ? (((-2228040895901054755LL) + (((/* implicit */long long int) ((/* implicit */int) var_19))))) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */signed char) var_16)), (var_9)))))));
                    }
                    var_31 *= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (unsigned short)10370)) ? (((/* implicit */unsigned long long int) var_4)) : (var_8))) | (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 1328781919U))))))));
                    arr_27 [i_4] [i_4] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) min(((unsigned short)32662), (((/* implicit */unsigned short) (short)18957)))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_17))) : (((var_15) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_18))))))))));
                }
            } 
        } 
        var_32 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(var_7))))));
    }
    for (unsigned int i_8 = 0; i_8 < 25; i_8 += 4) 
    {
        var_33 = var_17;
        var_34 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-16384)) ? (((/* implicit */int) (unsigned short)2047)) : (((/* implicit */int) (short)18963))))) * ((+(((233030483U) / (3310717256U)))))));
        /* LoopNest 2 */
        for (unsigned char i_9 = 0; i_9 < 25; i_9 += 4) 
        {
            for (unsigned long long int i_10 = 0; i_10 < 25; i_10 += 4) 
            {
                {
                    arr_36 [i_8] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3352775186U)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) (unsigned short)20628))))) ? ((-((+(((/* implicit */int) var_18)))))) : (((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) max((942192110U), (4294967269U)))))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (short i_11 = 0; i_11 < 25; i_11 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (short i_12 = 2; i_12 < 23; i_12 += 1) 
                        {
                            var_35 ^= ((/* implicit */signed char) (short)16383);
                            arr_41 [0LL] [i_11] [i_10] [i_9] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) 3908628904U)) >= (var_8)));
                            var_36 *= ((/* implicit */short) (+((+(((/* implicit */int) var_2))))));
                        }
                        for (short i_13 = 0; i_13 < 25; i_13 += 1) 
                        {
                            arr_44 [i_13] [i_13] [i_13] [i_10] [i_8] = ((/* implicit */_Bool) (~(((/* implicit */int) (short)-23750))));
                            arr_45 [1ULL] [i_13] [(signed char)1] [i_13] [i_8] = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)223)) & (((/* implicit */int) var_17))));
                        }
                        var_37 = ((/* implicit */unsigned int) ((((((/* implicit */int) var_14)) > (((/* implicit */int) (unsigned char)209)))) ? (-504602820056624874LL) : (((/* implicit */long long int) ((/* implicit */int) (short)15363)))));
                        /* LoopSeq 3 */
                        for (unsigned long long int i_14 = 0; i_14 < 25; i_14 += 1) 
                        {
                            var_38 = ((/* implicit */unsigned char) ((var_16) ? (((/* implicit */int) (signed char)-8)) : (((/* implicit */int) var_14))));
                            arr_48 [i_8] [i_8] [i_14] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)49)))));
                        }
                        for (unsigned int i_15 = 0; i_15 < 25; i_15 += 1) 
                        {
                            var_39 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (unsigned char)217)) : (((/* implicit */int) var_19))));
                            arr_52 [i_9] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))));
                            var_40 = ((/* implicit */unsigned char) (~(((/* implicit */int) (signed char)-8))));
                            var_41 |= ((/* implicit */unsigned int) (+(((/* implicit */int) (short)-16384))));
                        }
                        for (signed char i_16 = 0; i_16 < 25; i_16 += 4) 
                        {
                            var_42 = ((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) 4294967295U)))))));
                            var_43 |= ((((/* implicit */_Bool) 251658240U)) || (((/* implicit */_Bool) ((((/* implicit */int) var_19)) * (((/* implicit */int) var_16))))));
                            var_44 ^= ((/* implicit */unsigned char) var_11);
                        }
                    }
                    for (_Bool i_17 = 1; i_17 < 1; i_17 += 1) 
                    {
                        var_45 ^= (-(min((max((((/* implicit */unsigned int) var_9)), (2070863501U))), (((/* implicit */unsigned int) ((-682481740) != (((/* implicit */int) (unsigned char)250))))))));
                        var_46 = ((/* implicit */signed char) (((((~(var_8))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (signed char)-94))))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((max((((/* implicit */long long int) (short)15358)), (var_15))) > (((/* implicit */long long int) ((/* implicit */int) var_18)))))))));
                    }
                    var_47 = ((/* implicit */long long int) ((4225397051U) | (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)32880)) << (((((((/* implicit */int) (short)-32288)) + (32314))) - (13))))))));
                    var_48 = ((/* implicit */signed char) max((min((((/* implicit */long long int) (unsigned short)32883)), (var_11))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_16)))))));
                }
            } 
        } 
    }
    var_49 = ((/* implicit */signed char) var_15);
}
