/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82663
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82663 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82663
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
    /* LoopSeq 4 */
    for (int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) ((((unsigned int) (-(((/* implicit */int) arr_0 [i_0] [i_0]))))) > (((/* implicit */unsigned int) (-((-(arr_1 [i_0] [i_0])))))))))));
        /* LoopSeq 1 */
        for (unsigned int i_1 = 3; i_1 < 21; i_1 += 3) 
        {
            /* LoopNest 3 */
            for (unsigned int i_2 = 1; i_2 < 23; i_2 += 2) 
            {
                for (short i_3 = 0; i_3 < 24; i_3 += 1) 
                {
                    for (unsigned char i_4 = 0; i_4 < 24; i_4 += 3) 
                    {
                        {
                            var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) max((((((/* implicit */int) (!(((/* implicit */_Bool) 1961716728U))))) - (((((((/* implicit */int) (signed char)-9)) + (2147483647))) >> (((1524327574U) - (1524327554U))))))), (((/* implicit */int) ((short) arr_5 [i_4] [i_3] [i_2] [i_1]))))))));
                            var_17 -= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) ((signed char) 8685317566172967615LL)))))) & (arr_10 [i_4] [0ULL] [0ULL] [i_0])));
                        }
                    } 
                } 
            } 
            var_18 = ((/* implicit */int) ((max((327427931U), (((/* implicit */unsigned int) -524678633)))) == (((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (short)27238))))))))));
        }
    }
    for (unsigned int i_5 = 0; i_5 < 22; i_5 += 3) 
    {
        var_19 = ((/* implicit */unsigned short) (~((~(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)34117))) <= (43030282U))))))));
        arr_16 [i_5] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(2972925990U)))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_11 [i_5] [i_5] [i_5] [9U] [i_5] [i_5]))))) : (((unsigned int) (unsigned short)27545))));
        arr_17 [i_5] = ((/* implicit */unsigned char) (_Bool)1);
        arr_18 [i_5] = ((/* implicit */short) 1197178156U);
    }
    /* vectorizable */
    for (unsigned long long int i_6 = 0; i_6 < 13; i_6 += 3) 
    {
        /* LoopSeq 2 */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            /* LoopSeq 3 */
            for (long long int i_8 = 0; i_8 < 13; i_8 += 1) 
            {
                var_20 = ((/* implicit */unsigned char) ((((/* implicit */int) ((short) arr_9 [i_6] [i_6] [i_8]))) & (((/* implicit */int) ((_Bool) arr_2 [i_6] [i_6])))));
                var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) ((short) ((2333250573U) * (3361474716U)))))));
                arr_26 [i_7] [i_7] [i_7] = ((/* implicit */signed char) (+(arr_12 [i_8])));
                var_22 ^= ((/* implicit */int) (short)-5654);
            }
            for (int i_9 = 1; i_9 < 12; i_9 += 2) 
            {
                var_23 = ((/* implicit */unsigned short) arr_10 [i_6] [i_7] [i_9] [i_7]);
                /* LoopSeq 1 */
                for (unsigned int i_10 = 0; i_10 < 13; i_10 += 4) 
                {
                    var_24 |= ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) 230556056903076060ULL))) ? (2770639732U) : (((/* implicit */unsigned int) (-(-460844295))))));
                    var_25 = (~(((/* implicit */int) ((short) 2009392156U))));
                    var_26 *= ((/* implicit */int) (!(((/* implicit */_Bool) (-(395873265083518911LL))))));
                }
            }
            for (int i_11 = 1; i_11 < 9; i_11 += 1) 
            {
                var_27 -= ((/* implicit */unsigned long long int) ((((unsigned int) 161013185U)) << (((/* implicit */int) arr_24 [i_11 + 3] [i_11 - 1] [i_11]))));
                /* LoopNest 2 */
                for (short i_12 = 1; i_12 < 12; i_12 += 3) 
                {
                    for (unsigned long long int i_13 = 1; i_13 < 10; i_13 += 4) 
                    {
                        {
                            var_28 ^= ((/* implicit */signed char) (~((~(-1087124247)))));
                            var_29 = ((/* implicit */unsigned int) min((var_29), (((/* implicit */unsigned int) ((short) ((arr_0 [i_6] [i_7]) ? (566671196874690909ULL) : (((/* implicit */unsigned long long int) arr_15 [(short)6]))))))));
                            var_30 *= arr_33 [i_6] [i_7] [6LL];
                            arr_38 [i_6] [i_7] [i_11 + 2] [i_12] [i_13] = (~(((/* implicit */int) arr_0 [i_6] [i_6])));
                            arr_39 [i_7] [i_7] [(signed char)3] [i_11] [i_12] [i_13] [i_13] = arr_29 [i_7] [i_7] [i_6];
                        }
                    } 
                } 
                arr_40 [i_7] [i_7] [i_7] [i_7] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_32 [i_7])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-17777))) : (17880072876834860707ULL))) < (arr_10 [i_11 + 3] [i_7] [i_11] [i_7])));
            }
            var_31 += ((/* implicit */unsigned int) ((((_Bool) (short)13238)) ? (((/* implicit */int) (short)-23292)) : ((+(((/* implicit */int) (signed char)18))))));
            arr_41 [i_7] = ((/* implicit */int) ((unsigned long long int) ((signed char) arr_3 [i_7])));
        }
        for (short i_14 = 2; i_14 < 12; i_14 += 2) 
        {
            arr_45 [i_6] [i_6] [i_6] = ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_14 - 2] [i_14 - 1] [i_14]))) >= (1465141900132639343ULL));
            var_32 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) -854601054))));
        }
        /* LoopSeq 3 */
        for (int i_15 = 0; i_15 < 13; i_15 += 2) 
        {
            var_33 = ((/* implicit */int) min((var_33), (((/* implicit */int) (~(566671196874690912ULL))))));
            var_34 = ((unsigned int) (unsigned char)89);
        }
        for (signed char i_16 = 3; i_16 < 11; i_16 += 2) 
        {
            /* LoopSeq 4 */
            for (unsigned long long int i_17 = 2; i_17 < 10; i_17 += 2) 
            {
                var_35 ^= ((/* implicit */unsigned int) ((short) (+(((/* implicit */int) (unsigned short)28771)))));
                arr_53 [i_16] = ((/* implicit */short) (-(((-3236557934628506318LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)46112)))))));
            }
            for (short i_18 = 0; i_18 < 13; i_18 += 3) /* same iter space */
            {
                /* LoopSeq 1 */
                for (int i_19 = 0; i_19 < 13; i_19 += 4) 
                {
                    var_36 = ((/* implicit */int) ((((/* implicit */_Bool) ((signed char) 3184864092U))) ? ((~(1855160835U))) : (((2219285022U) >> (((17031214907211817838ULL) - (17031214907211817825ULL)))))));
                    var_37 ^= ((/* implicit */short) (~(((((/* implicit */long long int) ((/* implicit */int) (unsigned char)234))) & (5665572872090771138LL)))));
                }
                var_38 = 2529549154U;
            }
            for (short i_20 = 0; i_20 < 13; i_20 += 3) /* same iter space */
            {
                arr_62 [i_16] [i_16] [i_16] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)53213))));
                arr_63 [i_6] [i_6] [i_16] [i_16] = ((/* implicit */signed char) -1419694789);
            }
            for (unsigned int i_21 = 0; i_21 < 13; i_21 += 2) 
            {
                arr_66 [i_21] [i_16] [i_16] [i_6] = arr_43 [i_16 - 2] [i_21] [i_21];
                arr_67 [i_6] [i_16] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)63116)) - (((/* implicit */int) arr_27 [i_6] [i_6] [i_6] [i_6]))))) || (((/* implicit */_Bool) 2952857027U))));
                var_39 ^= ((/* implicit */unsigned long long int) (signed char)-35);
            }
            var_40 += ((/* implicit */unsigned long long int) (-(((int) arr_29 [i_6] [(signed char)6] [i_16 - 1]))));
        }
        for (unsigned short i_22 = 0; i_22 < 13; i_22 += 1) 
        {
            /* LoopSeq 1 */
            for (short i_23 = 0; i_23 < 13; i_23 += 2) 
            {
                var_41 = ((/* implicit */unsigned long long int) ((signed char) (signed char)21));
                arr_74 [i_6] [i_6] [i_22] [i_6] = (~(arr_19 [i_23]));
            }
            var_42 += ((/* implicit */int) ((unsigned long long int) arr_28 [i_6] [0U] [i_6] [i_22]));
            var_43 = ((/* implicit */short) min((var_43), (((/* implicit */short) ((signed char) 388821419)))));
            var_44 = ((/* implicit */unsigned int) min((var_44), (((/* implicit */unsigned int) 1720543455))));
            var_45 ^= ((/* implicit */_Bool) (+(((2222965172U) * (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_6] [i_22])))))));
        }
    }
    for (unsigned int i_24 = 0; i_24 < 14; i_24 += 3) 
    {
        var_46 ^= ((/* implicit */unsigned short) (unsigned char)106);
        var_47 *= ((/* implicit */unsigned long long int) 3268438892U);
        var_48 ^= ((/* implicit */short) ((((unsigned int) arr_7 [i_24] [8] [i_24] [2U])) << (((4883063675587044380ULL) - (4883063675587044351ULL)))));
        var_49 ^= ((/* implicit */signed char) (~(((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)16849)) ? (4883063675587044380ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) <= (4659252126600127232ULL))))));
    }
    var_50 = ((/* implicit */short) 2710951790U);
    var_51 = ((/* implicit */unsigned int) (-(min((((/* implicit */int) (!(((/* implicit */_Bool) 1659210979U))))), (((((/* implicit */int) var_12)) & (((/* implicit */int) var_2))))))));
}
