/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95331
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95331 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95331
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
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_9)), (var_6)))) ? (var_11) : (((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned int) (short)-19)))))));
    /* LoopSeq 4 */
    for (unsigned short i_0 = 2; i_0 < 19; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_1] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 116657978)) ? (((/* implicit */int) (short)-30767)) : (-116657978)));
                    arr_9 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */unsigned short) (!(((((/* implicit */_Bool) min(((short)-5693), (((/* implicit */short) var_9))))) && (((/* implicit */_Bool) ((0U) / (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0 - 2] [7] [i_0 - 2]))))))))));
                    var_18 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 11221438091420607681ULL)) ? (((((/* implicit */long long int) ((/* implicit */int) (short)20249))) ^ (6841374825035149858LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_1]))))) < (max((7785137871084233335LL), (((/* implicit */long long int) arr_5 [i_0 + 4]))))));
                    var_19 = ((/* implicit */int) max((var_19), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0 + 1])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_5 [i_0 - 1]))))) ? (((/* implicit */int) (!(((((/* implicit */_Bool) 116657978)) || (((/* implicit */_Bool) arr_5 [0LL]))))))) : ((~(((int) arr_2 [i_0] [i_1]))))))));
                    var_20 += ((/* implicit */signed char) var_14);
                }
            } 
        } 
        arr_10 [i_0] = var_11;
    }
    for (unsigned short i_3 = 2; i_3 < 9; i_3 += 2) /* same iter space */
    {
        arr_14 [i_3] = ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_3 - 1])) && (((/* implicit */_Bool) arr_1 [i_3 - 1] [i_3])))))));
        /* LoopSeq 4 */
        for (int i_4 = 0; i_4 < 10; i_4 += 3) 
        {
            arr_17 [i_3 - 1] [i_4] [i_4] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_4] [i_3] [i_3])) / (((/* implicit */int) var_5))))) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_5), (((/* implicit */short) arr_15 [i_4] [i_4])))))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)29387)))));
            var_21 = ((/* implicit */signed char) var_2);
        }
        for (short i_5 = 1; i_5 < 8; i_5 += 1) /* same iter space */
        {
            var_22 *= ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_4))))) ? ((((~(10349436258613335960ULL))) ^ (((/* implicit */unsigned long long int) ((arr_16 [i_3]) / (((/* implicit */int) var_9))))))) : (((/* implicit */unsigned long long int) max((((/* implicit */int) arr_7 [i_3] [i_3])), (((((/* implicit */int) var_8)) / (((/* implicit */int) var_0)))))))));
            arr_21 [i_5] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 116657989)) ? (-116658005) : (((/* implicit */int) (unsigned short)41162))))) ? (((/* implicit */unsigned long long int) arr_19 [(unsigned short)8] [i_3] [i_5])) : (max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) 947430875)) < (var_7)))), (max((8097307815096215673ULL), (arr_12 [i_3] [i_5]))))));
            /* LoopNest 2 */
            for (signed char i_6 = 0; i_6 < 10; i_6 += 1) 
            {
                for (unsigned short i_7 = 3; i_7 < 9; i_7 += 3) 
                {
                    {
                        var_23 -= arr_23 [i_3 + 1] [i_3 - 1] [i_3 - 1];
                        /* LoopSeq 1 */
                        for (unsigned short i_8 = 0; i_8 < 10; i_8 += 1) 
                        {
                            arr_30 [i_3] [i_3] [i_5] [(unsigned short)7] [i_3] = ((/* implicit */_Bool) (+(((((/* implicit */int) var_2)) / (((/* implicit */int) (unsigned short)63862))))));
                            arr_31 [i_5] [i_5] [i_6] [i_7 - 2] [i_6] = ((/* implicit */unsigned long long int) min((((/* implicit */int) arr_20 [i_3 - 1] [i_3 - 1] [i_7 + 1])), (((((/* implicit */_Bool) (signed char)16)) ? (((/* implicit */int) arr_20 [i_3 + 1] [i_8] [i_8])) : (((/* implicit */int) (_Bool)0))))));
                        }
                        var_24 = ((/* implicit */unsigned short) (((+((-(3673807795U))))) * (((((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_7 + 1]))) / (4294967295U)))));
                    }
                } 
            } 
        }
        for (short i_9 = 1; i_9 < 8; i_9 += 1) /* same iter space */
        {
            /* LoopSeq 1 */
            for (signed char i_10 = 2; i_10 < 7; i_10 += 3) 
            {
                var_25 = ((/* implicit */short) arr_13 [i_9 + 2] [i_3 + 1]);
                var_26 = ((/* implicit */int) arr_32 [i_9] [i_9]);
            }
            var_27 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((var_16) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_35 [i_9 + 2] [i_9] [i_3 - 1])))))) ? (max((((/* implicit */unsigned int) arr_35 [i_9 + 2] [i_9] [i_3 - 1])), (var_16))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_4)) ^ (((/* implicit */int) var_8)))))));
            var_28 = ((/* implicit */int) ((unsigned char) 8097307815096215655ULL));
        }
        for (short i_11 = 1; i_11 < 8; i_11 += 1) /* same iter space */
        {
            arr_38 [8] [8] = ((/* implicit */unsigned int) (~(((/* implicit */int) var_13))));
            arr_39 [i_3] [i_3] = ((/* implicit */_Bool) arr_18 [i_3 + 1]);
        }
        var_29 = ((/* implicit */unsigned int) ((min((var_8), (arr_7 [i_3] [i_3 + 1]))) && (((/* implicit */_Bool) min((arr_3 [i_3 + 1]), (((/* implicit */unsigned int) var_4)))))));
        /* LoopSeq 2 */
        for (unsigned int i_12 = 0; i_12 < 10; i_12 += 3) 
        {
            var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_0 [i_3 - 1] [i_3 + 1])), (var_12)))) ? ((~(((/* implicit */int) (unsigned char)139)))) : ((+(((/* implicit */int) var_13))))));
            arr_43 [i_3] [i_3] = ((/* implicit */long long int) min((((((/* implicit */_Bool) 600846145)) ? (arr_2 [i_3 - 1] [i_3 - 2]) : (arr_2 [i_3 - 1] [i_3 - 1]))), (((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_3 - 2] [(signed char)7] [i_3 + 1] [i_3 - 1] [i_3 + 1] [i_3 - 2] [i_3]))) : (arr_2 [i_3 - 2] [i_3 - 2])))));
            arr_44 [i_12] [i_3 + 1] [i_3 + 1] = ((/* implicit */long long int) ((((/* implicit */int) min((arr_25 [i_3 - 1]), (arr_25 [i_3 - 1])))) ^ (((/* implicit */int) arr_28 [7ULL] [i_12] [i_12] [i_3] [i_3]))));
        }
        for (unsigned long long int i_13 = 3; i_13 < 9; i_13 += 3) 
        {
            /* LoopSeq 2 */
            for (unsigned short i_14 = 0; i_14 < 10; i_14 += 4) 
            {
                arr_52 [i_3] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) ^ (arr_51 [i_3]))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-17665)))))) ? (((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned int) arr_48 [i_3 + 1] [i_13] [i_14]))))) : ((-(8097307815096215693ULL)))));
                arr_53 [i_3] [i_3] [i_3 - 2] = ((/* implicit */int) ((((/* implicit */_Bool) max(((+(((/* implicit */int) var_13)))), (((/* implicit */int) min((((/* implicit */short) arr_20 [i_14] [i_13] [i_3])), (var_14))))))) && (((/* implicit */_Bool) (+(min((((/* implicit */unsigned long long int) -606955022)), (7ULL))))))));
                /* LoopNest 2 */
                for (unsigned long long int i_15 = 1; i_15 < 7; i_15 += 4) 
                {
                    for (long long int i_16 = 0; i_16 < 10; i_16 += 2) 
                    {
                        {
                            arr_58 [i_15] [i_15] [i_15] = ((_Bool) arr_29 [i_3] [i_13] [i_13 + 1] [i_13] [i_15 + 3] [i_15 + 1] [i_13]);
                            var_31 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) 4294967284U))))) ^ (((/* implicit */int) (unsigned short)29362))))) && (((/* implicit */_Bool) min((((/* implicit */int) max((arr_5 [i_3]), (var_14)))), (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (unsigned short)40578)))))))));
                        }
                    } 
                } 
            }
            for (unsigned short i_17 = 0; i_17 < 10; i_17 += 3) 
            {
                var_32 -= ((/* implicit */short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4294967291U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (arr_2 [i_3 - 1] [i_3 - 2])))), ((+(var_11)))));
                /* LoopSeq 3 */
                for (long long int i_18 = 0; i_18 < 10; i_18 += 1) /* same iter space */
                {
                    var_33 = ((/* implicit */unsigned char) arr_34 [i_3 + 1]);
                    var_34 += ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_23 [i_3 - 2] [i_3 - 2] [i_13 + 1])) && (((/* implicit */_Bool) arr_23 [i_3 - 2] [i_13] [i_13 - 3]))))) / (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_23 [i_3 + 1] [i_3] [i_13 - 3])) : (((/* implicit */int) (unsigned short)48706))))));
                }
                for (long long int i_19 = 0; i_19 < 10; i_19 += 1) /* same iter space */
                {
                    var_35 = ((/* implicit */short) max((var_35), (((/* implicit */short) min((((18446744073709551604ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_13 - 1] [i_3]))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((/* implicit */int) (short)-30780)), (arr_64 [i_3] [i_3] [i_17] [i_17]))))))))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_20 = 2; i_20 < 7; i_20 += 4) 
                    {
                        arr_67 [i_20] [i_19] [i_17] [i_17] [i_13 - 3] [(unsigned short)1] [(unsigned short)1] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_11 [i_20 + 2] [i_3 + 1]))));
                        arr_68 [i_3] [4] [(_Bool)1] [i_17] [i_17] [i_20 + 2] [i_20 + 2] = ((/* implicit */unsigned short) (!(((((/* implicit */_Bool) arr_45 [i_20 + 3] [i_13 - 2] [i_3 + 1])) || (((/* implicit */_Bool) var_13))))));
                        arr_69 [i_17] [i_13] [i_17] [i_13] [i_20] = ((/* implicit */unsigned long long int) ((max((var_12), (((/* implicit */unsigned long long int) 373871564)))) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_56 [i_20 + 2] [i_20 + 3] [i_20 + 1] [i_17] [i_17] [i_13 - 1] [i_3 - 1])) < (((/* implicit */int) arr_56 [i_20 + 2] [i_20] [i_20 - 2] [i_13 - 1] [i_13 - 3] [i_13 - 3] [i_3 + 1]))))))));
                    }
                }
                for (long long int i_21 = 0; i_21 < 10; i_21 += 1) /* same iter space */
                {
                    arr_72 [i_3] [i_3] [i_17] [i_3] = ((/* implicit */long long int) (!(((((/* implicit */int) (unsigned short)48706)) < (((/* implicit */int) (short)28981))))));
                    var_36 = ((/* implicit */short) (!((!(((/* implicit */_Bool) min(((unsigned short)63713), (((/* implicit */unsigned short) arr_35 [i_3 - 2] [i_3 - 2] [i_3 - 2])))))))));
                }
            }
            arr_73 [i_3] [i_3] [i_13] = ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (18U) : (((/* implicit */unsigned int) arr_19 [i_13 - 1] [i_3 - 2] [i_3]))))) ^ (max((((/* implicit */long long int) arr_70 [i_13 - 2] [i_3 - 1])), (var_1)))));
        }
    }
    for (unsigned short i_22 = 2; i_22 < 9; i_22 += 2) /* same iter space */
    {
        arr_77 [i_22] = ((/* implicit */signed char) (!(((((/* implicit */_Bool) (short)-29444)) && (((/* implicit */_Bool) -753467414))))));
        var_37 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_4)), (arr_47 [i_22 - 2] [i_22 - 1])))) ? (((/* implicit */unsigned long long int) -9)) : (arr_51 [i_22 - 2])));
        var_38 = ((/* implicit */unsigned short) min(((-(arr_60 [i_22 - 2] [i_22]))), (((/* implicit */unsigned long long int) ((var_12) < (((/* implicit */unsigned long long int) arr_24 [i_22 - 2] [i_22 - 2] [i_22 - 2] [i_22])))))));
        var_39 = ((/* implicit */signed char) (-(((/* implicit */int) (short)18468))));
        arr_78 [i_22] [(signed char)7] = ((/* implicit */signed char) arr_40 [i_22 - 1] [i_22 + 1] [i_22 - 2]);
    }
    for (unsigned short i_23 = 2; i_23 < 9; i_23 += 2) /* same iter space */
    {
        arr_83 [i_23 - 2] = ((/* implicit */unsigned short) max((((/* implicit */int) ((1589270072U) < (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_23] [(_Bool)0] [i_23] [i_23] [i_23] [i_23 - 2] [i_23])))))), ((-(((/* implicit */int) (short)18468))))));
        var_40 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((arr_66 [i_23] [i_23] [i_23 - 1] [i_23] [i_23 - 2]) ^ (arr_66 [i_23] [i_23 + 1] [i_23 - 1] [i_23] [i_23 + 1]))))));
        var_41 = ((/* implicit */short) max((arr_13 [i_23 - 2] [i_23 - 1]), (max(((~(((/* implicit */int) arr_48 [i_23] [i_23] [i_23 - 2])))), ((-(((/* implicit */int) var_2))))))));
    }
    var_42 = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned short)1834)) && (((/* implicit */_Bool) -144645976)))) && (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_13)), (6339452096489381417ULL))))))), (var_11)));
    var_43 = ((/* implicit */unsigned short) var_12);
}
