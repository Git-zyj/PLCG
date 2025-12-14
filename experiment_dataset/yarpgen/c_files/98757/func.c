/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98757
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98757 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98757
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
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) <= (((/* implicit */int) var_11)))))))) ? (((/* implicit */int) ((_Bool) ((unsigned int) 5175611995697907648LL)))) : (((/* implicit */int) ((short) ((5175611995697907648LL) + (((/* implicit */long long int) 3684696016U))))))));
        var_19 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((long long int) arr_1 [i_0]))) ? (((/* implicit */int) ((_Bool) arr_0 [i_0]))) : (((/* implicit */int) ((signed char) arr_0 [i_0]))))) >> (((min((((/* implicit */unsigned long long int) max(((short)29663), ((short)29663)))), (((((/* implicit */_Bool) 1132863639)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))))))) - (29641ULL)))));
        arr_3 [i_0] = ((/* implicit */unsigned char) (~(((/* implicit */int) min((arr_0 [i_0]), (arr_0 [i_0]))))));
        /* LoopSeq 4 */
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((783895665) == (((/* implicit */int) (short)-32750)))))));
            /* LoopNest 2 */
            for (unsigned long long int i_2 = 1; i_2 < 16; i_2 += 1) 
            {
                for (unsigned int i_3 = 2; i_3 < 14; i_3 += 3) 
                {
                    {
                        arr_12 [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (min((arr_11 [i_0] [i_3]), (((/* implicit */long long int) var_18)))) : (((/* implicit */long long int) ((/* implicit */int) ((short) var_1))))))) ? ((-(((unsigned long long int) arr_7 [i_2 + 1] [i_2] [i_2])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_2 + 1])) ? (((/* implicit */int) arr_1 [i_2 + 1])) : (((/* implicit */int) arr_1 [i_2 - 1])))))));
                        arr_13 [i_0] [i_0] [i_2] [i_2] [i_0] = ((/* implicit */signed char) arr_9 [i_0] [i_0]);
                    }
                } 
            } 
            arr_14 [i_0] [i_1] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -5175611995697907642LL)) ? (2057318151) : (((/* implicit */int) arr_1 [i_0]))))) : (min((((/* implicit */unsigned long long int) var_12)), (arr_10 [i_0]))))), (((/* implicit */unsigned long long int) (~(((((/* implicit */int) (signed char)32)) << (((((/* implicit */int) (short)-32762)) + (32784))))))))));
            arr_15 [i_0] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) arr_4 [i_0] [i_0] [i_1])) : (((int) arr_1 [i_1])))) & (min((((arr_0 [i_0]) ? (((/* implicit */int) arr_8 [i_1] [i_1] [i_1])) : (((/* implicit */int) var_17)))), (((/* implicit */int) (!(arr_9 [i_0] [i_0]))))))));
            /* LoopSeq 1 */
            for (signed char i_4 = 0; i_4 < 17; i_4 += 1) 
            {
                /* LoopNest 2 */
                for (short i_5 = 0; i_5 < 17; i_5 += 1) 
                {
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        {
                            arr_25 [i_0] [i_1] [i_1] [i_5] [i_6] = ((unsigned long long int) -5175611995697907645LL);
                            var_21 = ((/* implicit */short) ((signed char) arr_24 [i_0] [i_0] [i_4] [i_5] [i_0]));
                            var_22 += ((/* implicit */signed char) ((var_16) && (((/* implicit */_Bool) ((unsigned long long int) (+(((/* implicit */int) arr_22 [i_1] [i_4] [i_5]))))))));
                        }
                    } 
                } 
                var_23 = ((/* implicit */unsigned char) ((unsigned int) ((_Bool) arr_0 [i_0])));
            }
        }
        for (unsigned short i_7 = 0; i_7 < 17; i_7 += 1) 
        {
            arr_29 [i_0] [i_0] [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) 58720256U)) ? (((/* implicit */unsigned int) (-(((/* implicit */int) ((unsigned char) var_17)))))) : (((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) 3684696016U)))) % (((((/* implicit */_Bool) arr_24 [i_0] [i_0] [i_7] [i_7] [i_7])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_0]))) : (arr_19 [i_0] [i_0])))))));
            arr_30 [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_26 [i_0])) - (((/* implicit */int) arr_26 [i_0])))) - (((/* implicit */int) max((arr_26 [i_0]), (arr_26 [i_0]))))));
            arr_31 [i_0] = ((/* implicit */signed char) arr_7 [i_0] [i_0] [i_7]);
            arr_32 [i_0] [i_7] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned char) ((((/* implicit */int) (signed char)45)) != (((/* implicit */int) (short)511))))))));
            /* LoopNest 2 */
            for (unsigned int i_8 = 4; i_8 < 15; i_8 += 3) 
            {
                for (unsigned char i_9 = 3; i_9 < 16; i_9 += 3) 
                {
                    {
                        var_24 = ((/* implicit */unsigned short) (short)-1);
                        arr_39 [i_0] [i_7] [i_8 + 1] [i_9 - 3] = ((/* implicit */signed char) arr_5 [i_0]);
                        arr_40 [i_8] [i_8] [i_0] [i_8] = ((/* implicit */_Bool) max(((~(((/* implicit */int) arr_36 [i_8 - 4] [i_8 - 2] [i_9] [i_9 - 1] [i_9 - 3] [i_9 - 2])))), (((/* implicit */int) ((unsigned char) ((var_1) ? (((/* implicit */int) arr_4 [i_0] [i_7] [i_8 - 1])) : (((/* implicit */int) arr_6 [i_0] [i_7] [i_0]))))))));
                        var_25 += arr_27 [i_0] [i_0] [i_0];
                        arr_41 [i_0] [i_7] [i_8] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_35 [i_0] [i_7] [i_8] [i_9])) ? (max((min((arr_20 [i_0] [i_7]), (((/* implicit */long long int) (short)23988)))), (((/* implicit */long long int) (~(((/* implicit */int) arr_23 [i_0] [i_0] [i_7] [i_8 - 4] [i_9]))))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) == (arr_37 [i_0] [i_7] [i_7] [i_8] [i_9] [i_9 + 1])))) < (((/* implicit */int) (short)63))))))));
                    }
                } 
            } 
        }
        for (short i_10 = 0; i_10 < 17; i_10 += 1) /* same iter space */
        {
            var_26 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (short)-29663)) < ((~(((/* implicit */int) (signed char)45)))))) ? (67108864) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (short)1096)))) < (17069935714638775539ULL))))));
            arr_44 [i_0] [i_0] = ((/* implicit */int) ((unsigned int) ((unsigned short) ((signed char) var_7))));
            /* LoopNest 3 */
            for (unsigned char i_11 = 1; i_11 < 16; i_11 += 3) 
            {
                for (unsigned int i_12 = 0; i_12 < 17; i_12 += 1) 
                {
                    for (long long int i_13 = 0; i_13 < 17; i_13 += 3) 
                    {
                        {
                            var_27 = ((/* implicit */unsigned char) ((unsigned long long int) arr_9 [i_11] [i_0]));
                            arr_53 [i_0] [i_10] [i_11] [i_12] [i_13] [i_13] [i_0] = ((/* implicit */short) ((arr_9 [i_0] [i_0]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) max((var_3), (((/* implicit */unsigned long long int) arr_0 [i_0]))))))) : (max((arr_10 [i_11 - 1]), (arr_10 [i_11 + 1])))));
                            var_28 = ((/* implicit */short) min((var_28), (((short) ((((-2057318152) + (2147483647))) << (((/* implicit */int) ((_Bool) var_15))))))));
                            var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((unsigned int) var_10)), (((/* implicit */unsigned int) min((arr_51 [i_0] [i_0] [i_11 + 1]), (((/* implicit */int) arr_45 [i_0] [i_10] [i_12] [i_12])))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) min((var_10), (((/* implicit */signed char) (_Bool)1)))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_11 + 1])))))));
                            arr_54 [i_0] [i_10] [i_11] [i_0] [i_13] [i_10] [i_13] = ((/* implicit */short) ((((((/* implicit */_Bool) ((short) (unsigned char)2))) ? ((~(var_7))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) var_2)))))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((((var_9) % (((/* implicit */long long int) ((/* implicit */int) var_15))))) > (((/* implicit */long long int) ((/* implicit */int) ((short) (signed char)32))))))))));
                        }
                    } 
                } 
            } 
            var_30 += ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_18 [i_0])))) & (((unsigned int) arr_18 [i_0]))));
        }
        for (short i_14 = 0; i_14 < 17; i_14 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned char i_15 = 2; i_15 < 16; i_15 += 3) 
            {
                for (short i_16 = 0; i_16 < 17; i_16 += 3) 
                {
                    {
                        var_31 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */long long int) (short)8)), (-1LL)))) ? (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_15)) ? (610271279U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_16]))))), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)63))) > (1073741792U))))))) : (17108449662061622836ULL)));
                        var_32 -= ((/* implicit */int) ((long long int) arr_48 [i_16] [i_15] [i_14] [i_0] [i_0]));
                        var_33 *= ((/* implicit */unsigned int) max((((/* implicit */int) ((short) arr_58 [i_15 - 1] [i_14] [(signed char)14]))), (max((arr_24 [i_0] [(signed char)4] [i_14] [i_15 - 2] [i_16]), (arr_24 [i_0] [(short)10] [i_15] [i_15 + 1] [i_16])))));
                    }
                } 
            } 
            /* LoopNest 3 */
            for (unsigned int i_17 = 3; i_17 < 16; i_17 += 3) 
            {
                for (unsigned long long int i_18 = 0; i_18 < 17; i_18 += 1) 
                {
                    for (unsigned int i_19 = 1; i_19 < 16; i_19 += 1) 
                    {
                        {
                            arr_71 [i_0] [i_14] [i_17] [i_0] [i_0] = ((/* implicit */int) ((arr_66 [i_17 + 1] [i_18]) ^ (((/* implicit */unsigned int) ((/* implicit */int) min((arr_65 [i_17 - 2] [i_17] [i_17 - 1] [i_17 - 1]), (((/* implicit */short) arr_69 [i_17] [i_17 - 1] [i_17 - 2] [i_17 + 1] [i_17]))))))));
                            var_34 &= ((/* implicit */unsigned int) ((_Bool) ((long long int) arr_23 [i_19] [i_19 - 1] [i_19 - 1] [i_19 + 1] [i_18])));
                            arr_72 [i_0] [i_19] [i_19] [i_18] [i_17] [i_14] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (arr_42 [i_0] [i_14])))))) : ((+(((unsigned int) var_11))))));
                            var_35 = ((((/* implicit */_Bool) ((short) arr_0 [i_19 - 1]))) ? (((((/* implicit */_Bool) var_9)) ? ((-(((/* implicit */int) (short)32742)))) : (((/* implicit */int) min((arr_16 [i_14] [i_17 - 2] [i_14]), (var_12)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_14] [i_17] [i_0])) ? (((/* implicit */unsigned long long int) var_4)) : (var_0)))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_33 [i_0])))));
                            var_36 = ((/* implicit */int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned int) ((((/* implicit */int) (!((_Bool)0)))) % (((/* implicit */int) (_Bool)1))))) : (max((((unsigned int) 207162477)), (((/* implicit */unsigned int) (unsigned char)207))))));
                        }
                    } 
                } 
            } 
            var_37 = ((/* implicit */unsigned long long int) max((var_37), (min((((/* implicit */unsigned long long int) ((short) ((var_7) - (((/* implicit */unsigned long long int) 1248638081)))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_22 [i_0] [i_0] [i_14])) != (((/* implicit */int) var_13)))))) - (arr_63 [i_0] [i_0] [i_0] [i_0])))))));
            var_38 = ((/* implicit */unsigned long long int) min((var_38), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) ((((/* implicit */int) arr_23 [i_0] [i_14] [i_0] [i_0] [i_0])) != (((/* implicit */int) arr_26 [i_14]))))), (arr_4 [i_0] [i_14] [i_14])))) ? (((/* implicit */int) (short)-63)) : (((/* implicit */int) var_12)))))));
            arr_73 [i_0] [i_14] [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 2636860559U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)123)))) > (((/* implicit */int) ((_Bool) ((unsigned long long int) arr_20 [i_0] [i_14]))))));
        }
    }
    var_39 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 2350980960U)) ? (2057318157) : (((/* implicit */int) ((((/* implicit */_Bool) (signed char)71)) || (((/* implicit */_Bool) (unsigned short)40293)))))));
}
