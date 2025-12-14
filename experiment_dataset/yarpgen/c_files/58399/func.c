/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58399
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58399 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58399
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
    for (short i_0 = 1; i_0 < 24; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 4; i_2 < 23; i_2 += 1) 
                {
                    for (unsigned int i_3 = 3; i_3 < 23; i_3 += 1) 
                    {
                        {
                            var_10 = ((/* implicit */unsigned short) max((arr_5 [i_0 - 1] [i_2 - 2] [i_3 + 1]), (((/* implicit */unsigned int) ((_Bool) 18446744073709551615ULL)))));
                            arr_12 [(unsigned short)8] [13] [i_3] [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) arr_1 [i_0 - 1] [i_2 - 4]))) && (((/* implicit */_Bool) (-((+(var_9))))))));
                            arr_13 [i_0] [i_0] [i_3] [i_2] [i_2 - 4] [i_3 - 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(1129683752U)))) ? (3165283544U) : (max((((/* implicit */unsigned int) var_6)), ((-(3968U)))))));
                            var_11 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0 - 1] [i_1] [i_3 - 3] [17])) ? (arr_6 [i_0 - 1] [i_0] [i_3 - 3] [i_3 + 2]) : (arr_6 [i_0 - 1] [i_0 - 1] [i_3 - 3] [i_3])))) ? (((((-501537644) != (arr_6 [i_0] [i_1] [(unsigned char)3] [i_3]))) ? (((/* implicit */unsigned long long int) ((unsigned int) var_9))) : (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [(unsigned short)7]))))))) : (((/* implicit */unsigned long long int) var_9))));
                            arr_14 [i_0] [i_3] [i_3] = ((/* implicit */int) (-(((((/* implicit */_Bool) arr_4 [i_3])) ? ((~(-8894050272384415172LL))) : (-4572517115051250463LL)))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned long long int i_4 = 1; i_4 < 23; i_4 += 3) 
                {
                    for (long long int i_5 = 0; i_5 < 25; i_5 += 1) 
                    {
                        for (int i_6 = 0; i_6 < 25; i_6 += 1) 
                        {
                            {
                                var_12 -= ((/* implicit */int) arr_2 [i_0]);
                                var_13 = ((/* implicit */int) max((((/* implicit */unsigned int) arr_2 [i_4 - 1])), (max((max((arr_8 [i_0] [(unsigned short)3] [(unsigned short)19] [i_5]), (4294963327U))), (((/* implicit */unsigned int) min((((/* implicit */unsigned short) arr_2 [18LL])), (arr_20 [i_0] [(unsigned char)9] [i_4] [i_5] [i_0] [i_4] [i_6]))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_7 = 1; i_7 < 24; i_7 += 1) 
                {
                    for (unsigned short i_8 = 0; i_8 < 25; i_8 += 2) 
                    {
                        {
                            var_14 = ((/* implicit */short) (-(arr_1 [i_0 - 1] [i_7 + 1])));
                            var_15 = ((/* implicit */int) max((var_15), (((((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) -894761165588161533LL)))))))) ? (((/* implicit */int) var_7)) : (((((/* implicit */int) arr_3 [i_0 + 1])) + (-501537644)))))));
                            /* LoopSeq 3 */
                            for (int i_9 = 0; i_9 < 25; i_9 += 1) 
                            {
                                var_16 *= ((/* implicit */unsigned char) ((4294963297U) == (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) == (min((14710710264086836788ULL), (((/* implicit */unsigned long long int) arr_26 [i_0 - 1] [i_8]))))))))));
                                var_17 = arr_22 [i_8] [i_7] [i_8];
                            }
                            for (signed char i_10 = 1; i_10 < 23; i_10 += 3) 
                            {
                                var_18 = ((/* implicit */long long int) (~((+(((/* implicit */int) arr_11 [i_0] [i_7] [i_8] [i_10 - 1]))))));
                                var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) arr_25 [0]))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(arr_24 [12ULL] [i_8] [i_0])))) ? (arr_16 [i_0] [i_0] [i_8]) : (((/* implicit */long long int) ((/* implicit */int) max(((unsigned char)158), (((/* implicit */unsigned char) (signed char)32))))))))) : (((unsigned long long int) arr_11 [i_1] [i_8] [i_7] [i_1]))));
                                arr_33 [i_7] [i_1] [i_7 - 1] [i_8] [i_10] = ((-501537644) / (2047));
                                arr_34 [i_7] = ((/* implicit */unsigned short) ((short) ((501537637) / (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_0 [i_10] [i_1])) : (-501537644))))));
                            }
                            for (int i_11 = 3; i_11 < 24; i_11 += 3) 
                            {
                                arr_37 [i_0] [i_0] [i_7] [i_7] [24U] [17ULL] [i_11] = ((/* implicit */int) (~(3165283543U)));
                                var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) arr_9 [i_0 + 1] [i_1] [i_11] [i_1]))) && (((/* implicit */_Bool) min((arr_7 [i_0 + 1] [i_11 - 2] [i_7] [i_8]), (((/* implicit */long long int) 249304423U)))))));
                                var_21 = ((/* implicit */short) min((((/* implicit */int) arr_0 [i_0] [i_1])), (((((/* implicit */int) ((short) (short)29788))) + (((((/* implicit */_Bool) -8890512754146570738LL)) ? (-432770600) : (((/* implicit */int) arr_10 [i_0] [(unsigned char)19] [(unsigned char)19] [i_11 + 1]))))))));
                            }
                            var_22 = ((/* implicit */int) max((((/* implicit */long long int) 3681676633U)), (((long long int) var_2))));
                        }
                    } 
                } 
                var_23 ^= ((/* implicit */unsigned short) ((signed char) min((((/* implicit */unsigned long long int) 1129683752U)), (max((((/* implicit */unsigned long long int) arr_35 [12] [(unsigned short)14] [i_1] [i_1])), (var_8))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_12 = 2; i_12 < 16; i_12 += 3) 
    {
        for (short i_13 = 1; i_13 < 14; i_13 += 3) 
        {
            {
                var_24 = ((/* implicit */unsigned short) ((min((((/* implicit */long long int) var_6)), (((((/* implicit */_Bool) arr_3 [i_12])) ? (var_9) : (arr_4 [i_13]))))) == (min((((/* implicit */long long int) arr_39 [i_12])), (arr_1 [i_12] [i_13])))));
                /* LoopNest 2 */
                for (short i_14 = 0; i_14 < 18; i_14 += 3) 
                {
                    for (unsigned int i_15 = 0; i_15 < 18; i_15 += 2) 
                    {
                        {
                            var_25 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_6 [i_12 + 2] [i_12] [i_13 + 3] [i_12 + 2])), (var_5)))) || (((/* implicit */_Bool) ((unsigned short) arr_41 [i_15])))));
                            /* LoopSeq 2 */
                            for (unsigned short i_16 = 0; i_16 < 18; i_16 += 4) 
                            {
                                var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_1))))) ? (arr_1 [i_12 + 2] [i_13 - 1]) : (((/* implicit */long long int) 469762048))))) ? (((/* implicit */int) ((unsigned short) max((((/* implicit */long long int) (unsigned char)3)), (var_9))))) : (((((/* implicit */_Bool) arr_41 [i_15])) ? (arr_41 [i_15]) : (arr_41 [i_16]))))))));
                                arr_53 [i_12] [0U] [i_12] [i_16] = ((/* implicit */unsigned short) ((short) max((10764436559383320045ULL), (((/* implicit */unsigned long long int) arr_31 [i_13 + 2])))));
                                arr_54 [i_12 + 2] [i_12] [i_14] = ((/* implicit */short) 3968U);
                            }
                            for (int i_17 = 0; i_17 < 18; i_17 += 2) 
                            {
                                var_27 = ((/* implicit */short) ((long long int) -1550671801));
                                var_28 = ((/* implicit */long long int) 2146226970U);
                                var_29 ^= ((/* implicit */unsigned int) arr_23 [i_12] [i_14] [i_17]);
                            }
                            var_30 *= ((/* implicit */unsigned int) ((unsigned long long int) ((unsigned short) arr_19 [i_13 + 4] [i_15] [i_15] [i_12 - 1])));
                            /* LoopSeq 4 */
                            for (signed char i_18 = 0; i_18 < 18; i_18 += 3) 
                            {
                                var_31 = ((/* implicit */int) min((var_31), (((/* implicit */int) min((arr_1 [i_12 - 1] [i_12 + 1]), ((-(arr_1 [i_12 - 2] [i_12 + 2]))))))));
                                var_32 = ((/* implicit */unsigned short) max((var_32), (((/* implicit */unsigned short) 3445792676413673417LL))));
                                var_33 = max((((unsigned int) var_9)), (((/* implicit */unsigned int) max((((((/* implicit */_Bool) var_5)) ? (1457693534) : (((/* implicit */int) var_1)))), (((((/* implicit */_Bool) 261888)) ? (((/* implicit */int) arr_23 [i_12] [i_18] [i_15])) : (((/* implicit */int) var_7))))))));
                            }
                            /* vectorizable */
                            for (signed char i_19 = 2; i_19 < 15; i_19 += 1) /* same iter space */
                            {
                                var_34 -= ((/* implicit */unsigned int) ((unsigned long long int) arr_25 [i_13 + 4]));
                                var_35 = ((/* implicit */int) ((72057594037911552ULL) + (((/* implicit */unsigned long long int) arr_18 [i_13 + 2] [i_13 - 1] [i_13] [i_13 + 4] [i_12] [i_13 - 1]))));
                                var_36 = ((/* implicit */unsigned short) (+(((/* implicit */int) (short)0))));
                            }
                            for (signed char i_20 = 2; i_20 < 15; i_20 += 1) /* same iter space */
                            {
                                var_37 = ((/* implicit */int) var_1);
                                var_38 = ((/* implicit */short) var_8);
                                var_39 += ((/* implicit */long long int) 1457693534);
                                var_40 = ((/* implicit */unsigned short) min((var_40), (((/* implicit */unsigned short) -512))));
                            }
                            for (signed char i_21 = 2; i_21 < 15; i_21 += 1) /* same iter space */
                            {
                                var_41 = ((/* implicit */short) var_6);
                                var_42 = ((/* implicit */_Bool) ((min((((/* implicit */unsigned int) ((((/* implicit */_Bool) 1426654886)) ? (((/* implicit */int) arr_31 [i_14])) : (((/* implicit */int) (unsigned char)90))))), ((-(3969U))))) << (((/* implicit */int) ((((/* implicit */int) ((unsigned short) var_5))) > (((((/* implicit */_Bool) arr_64 [i_12] [i_12] [i_12] [i_14] [i_15] [13U] [i_21 + 2])) ? (var_2) : (((/* implicit */int) (short)-6103)))))))));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    var_43 = ((/* implicit */unsigned short) var_5);
    var_44 = ((/* implicit */signed char) max((var_44), (((/* implicit */signed char) var_5))));
}
