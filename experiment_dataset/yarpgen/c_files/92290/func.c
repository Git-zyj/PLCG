/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92290
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92290 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92290
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
    var_13 = ((/* implicit */unsigned short) (((-((~(((/* implicit */int) var_11)))))) >> (((min((var_8), (((/* implicit */unsigned int) var_12)))) - (87U)))));
    /* LoopSeq 3 */
    for (signed char i_0 = 3; i_0 < 21; i_0 += 4) /* same iter space */
    {
        var_14 = ((/* implicit */unsigned char) ((var_11) ? (((/* implicit */int) ((unsigned char) arr_2 [i_0] [i_0 + 1]))) : (((/* implicit */int) arr_2 [i_0] [i_0 - 2]))));
        var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) min((((/* implicit */unsigned char) arr_2 [i_0] [i_0 + 1])), (max(((unsigned char)0), ((unsigned char)240))))))));
    }
    for (signed char i_1 = 3; i_1 < 21; i_1 += 4) /* same iter space */
    {
        var_16 = ((/* implicit */unsigned short) min((((unsigned long long int) var_10)), (((/* implicit */unsigned long long int) arr_3 [i_1]))));
        var_17 = ((/* implicit */unsigned short) arr_4 [i_1] [i_1]);
        arr_6 [i_1] = ((/* implicit */short) ((_Bool) ((((/* implicit */int) ((signed char) (unsigned char)238))) % (((((/* implicit */int) (unsigned char)177)) * (((/* implicit */int) (unsigned char)125)))))));
    }
    /* vectorizable */
    for (signed char i_2 = 3; i_2 < 21; i_2 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (signed char i_3 = 0; i_3 < 22; i_3 += 4) 
        {
            /* LoopSeq 2 */
            for (unsigned char i_4 = 0; i_4 < 22; i_4 += 2) 
            {
                var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_8 [i_2] [i_3])) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) arr_8 [i_3] [i_4]))))))));
                arr_14 [i_4] [i_4] [i_2] [i_2] = ((/* implicit */unsigned short) arr_0 [i_3] [i_4]);
                /* LoopSeq 3 */
                for (short i_5 = 0; i_5 < 22; i_5 += 4) 
                {
                    var_19 |= ((/* implicit */unsigned short) ((((/* implicit */int) var_7)) | (((/* implicit */int) arr_12 [i_2 - 2]))));
                    var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) (-(((/* implicit */int) (signed char)46)))))));
                    /* LoopSeq 2 */
                    for (unsigned short i_6 = 1; i_6 < 21; i_6 += 2) 
                    {
                        var_21 = var_7;
                        var_22 = ((/* implicit */unsigned char) var_5);
                    }
                    for (signed char i_7 = 0; i_7 < 22; i_7 += 2) 
                    {
                        var_23 = ((((/* implicit */int) (signed char)-65)) <= (((/* implicit */int) arr_10 [i_5] [i_5])));
                        var_24 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_11)))))));
                        var_25 = ((/* implicit */_Bool) var_12);
                        var_26 = ((/* implicit */int) ((((/* implicit */_Bool) arr_19 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2 - 3] [i_2 - 2])) ? (arr_19 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2 - 2] [i_2 + 1]) : (arr_19 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2 - 1] [i_2 - 1])));
                    }
                }
                for (signed char i_8 = 0; i_8 < 22; i_8 += 4) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_9 = 0; i_9 < 22; i_9 += 2) 
                    {
                        arr_28 [i_9] [i_9] [i_9] [i_9] [(signed char)10] [i_9] [i_9] = ((/* implicit */unsigned short) ((var_11) || (((/* implicit */_Bool) arr_12 [i_2 - 2]))));
                        arr_29 [i_2] [i_4] = ((/* implicit */int) ((_Bool) arr_3 [i_8]));
                        var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_21 [i_2] [i_3] [i_2] [i_8] [i_8])) : (((/* implicit */int) arr_3 [i_2 + 1]))));
                        var_28 = ((/* implicit */signed char) arr_19 [i_2] [i_3] [i_2] [i_4] [i_8] [i_9] [i_9]);
                    }
                    var_29 = ((/* implicit */unsigned char) (short)17909);
                    /* LoopSeq 3 */
                    for (unsigned short i_10 = 1; i_10 < 20; i_10 += 4) /* same iter space */
                    {
                        var_30 = ((/* implicit */unsigned char) max((var_30), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 2022311109)) ? (((/* implicit */int) arr_24 [i_8])) : (((/* implicit */int) arr_24 [i_4])))))));
                        arr_33 [i_2] [i_3] [i_4] [i_4] [i_4] [i_8] [i_10 + 2] = ((/* implicit */unsigned char) (+(571902735U)));
                        var_31 ^= ((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_9 [i_3])) ? (var_6) : (var_5)))));
                        var_32 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-26)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) ((unsigned char) (unsigned char)131)))));
                    }
                    for (unsigned short i_11 = 1; i_11 < 20; i_11 += 4) /* same iter space */
                    {
                        arr_38 [i_2] [i_2] [(_Bool)1] [i_4] [i_8] [i_11] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_31 [i_2 - 2] [i_11 + 2])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned char)146))));
                        var_33 = ((/* implicit */signed char) (_Bool)1);
                        var_34 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_10))));
                    }
                    for (unsigned short i_12 = 1; i_12 < 20; i_12 += 4) /* same iter space */
                    {
                        var_35 *= ((/* implicit */_Bool) ((unsigned short) (+(((/* implicit */int) arr_23 [i_3] [i_4] [i_8] [i_12])))));
                        arr_41 [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_26 [i_2 - 1] [i_8])) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))));
                    }
                    arr_42 [i_3] = ((/* implicit */unsigned long long int) var_0);
                }
                for (signed char i_13 = 3; i_13 < 18; i_13 += 3) 
                {
                    var_36 = ((/* implicit */signed char) ((arr_2 [i_13 + 3] [i_13]) ? (arr_43 [i_2 - 3] [i_2 - 3] [i_13 - 1] [7ULL]) : (((/* implicit */int) var_0))));
                    var_37 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) (unsigned short)12)) ? (((/* implicit */int) (short)-17910)) : (((/* implicit */int) (signed char)-56))))));
                    /* LoopSeq 2 */
                    for (unsigned char i_14 = 3; i_14 < 20; i_14 += 2) 
                    {
                        var_38 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)66))) : (var_8)));
                        arr_47 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) (unsigned char)80))) ? (((arr_43 [i_3] [i_4] [i_13] [i_14]) / (((/* implicit */int) (short)20499)))) : (((/* implicit */int) var_1))));
                        var_39 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_4 [i_13 - 3] [i_3]))));
                    }
                    for (signed char i_15 = 0; i_15 < 22; i_15 += 2) 
                    {
                        var_40 = arr_30 [i_2] [i_2] [(signed char)7];
                        var_41 = ((/* implicit */unsigned long long int) (signed char)-101);
                        var_42 = ((/* implicit */unsigned short) ((arr_0 [(unsigned short)0] [i_3]) * (arr_0 [i_13 + 2] [i_15])));
                    }
                    var_43 = ((/* implicit */_Bool) min((var_43), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
                }
            }
            for (short i_16 = 0; i_16 < 22; i_16 += 3) 
            {
                var_44 += ((/* implicit */unsigned char) ((((/* implicit */int) var_9)) < (((((/* implicit */_Bool) -787831468)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_12))))));
                arr_53 [i_2] [i_16] [i_16] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_2 - 2]))) | (var_2)));
            }
            var_45 = ((/* implicit */short) ((var_4) ? (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)88))) | (3392838883U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)42792)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_12)))))));
            /* LoopSeq 2 */
            for (_Bool i_17 = 0; i_17 < 0; i_17 += 1) 
            {
                /* LoopSeq 1 */
                for (unsigned int i_18 = 0; i_18 < 22; i_18 += 2) 
                {
                    var_46 += ((/* implicit */unsigned char) (_Bool)1);
                    var_47 += ((/* implicit */signed char) var_4);
                    /* LoopSeq 2 */
                    for (short i_19 = 3; i_19 < 21; i_19 += 2) 
                    {
                        var_48 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_21 [i_17] [i_17 + 1] [i_17] [i_17] [i_19 - 3])) - (((/* implicit */int) arr_21 [i_17] [i_17 + 1] [i_17 + 1] [i_17] [i_19 - 1]))));
                        var_49 = ((/* implicit */signed char) ((((/* implicit */int) arr_44 [i_18] [i_18])) <= (((((/* implicit */int) (short)25549)) % (((/* implicit */int) var_1))))));
                    }
                    for (unsigned short i_20 = 1; i_20 < 19; i_20 += 4) 
                    {
                        var_50 = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)-107)) * (((/* implicit */int) (_Bool)1))));
                        var_51 = ((/* implicit */_Bool) ((short) arr_23 [i_2] [i_17] [i_18] [i_20 + 3]));
                    }
                }
                var_52 = ((/* implicit */_Bool) max((var_52), (((/* implicit */_Bool) (+(3392838883U))))));
                /* LoopSeq 2 */
                for (unsigned long long int i_21 = 0; i_21 < 22; i_21 += 2) 
                {
                    var_53 = ((/* implicit */short) var_4);
                    /* LoopSeq 4 */
                    for (unsigned char i_22 = 1; i_22 < 19; i_22 += 2) 
                    {
                        var_54 = ((/* implicit */short) arr_23 [i_2] [i_2] [i_17] [i_21]);
                        var_55 = ((/* implicit */_Bool) min((var_55), (((((var_6) < (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)9))))) || (((/* implicit */_Bool) arr_44 [i_3] [i_17]))))));
                    }
                    for (signed char i_23 = 0; i_23 < 22; i_23 += 2) 
                    {
                        arr_73 [i_2] [i_3] [i_17] = ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */int) var_4)) == (((/* implicit */int) arr_49 [i_2] [i_3] [i_17] [i_21] [i_23])))))));
                        var_56 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_56 [i_23] [i_21] [i_17 + 1] [i_2 - 3]))));
                    }
                    for (signed char i_24 = 3; i_24 < 20; i_24 += 2) 
                    {
                        var_57 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [i_2] [i_21])))))) ? (((/* implicit */int) (signed char)66)) : (((/* implicit */int) (signed char)-40))));
                        var_58 = ((/* implicit */signed char) ((((/* implicit */int) arr_12 [i_24 - 2])) == (((/* implicit */int) arr_66 [i_24 + 1] [14] [i_17] [i_21] [i_17 + 1]))));
                        var_59 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_65 [i_2] [i_2] [i_24])) ? (((((/* implicit */_Bool) 1335724776)) ? (((/* implicit */int) arr_67 [(unsigned short)17] [i_2] [i_2])) : (((/* implicit */int) arr_39 [i_2] [i_3] [i_2] [i_21] [i_24])))) : (((/* implicit */int) var_9))));
                        var_60 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_58 [i_2] [i_17])) ? (((/* implicit */int) ((unsigned short) arr_62 [i_24] [i_21] [i_17] [i_3] [i_2 - 2]))) : (arr_72 [i_3] [i_17] [i_17 + 1] [i_21] [i_24] [i_24 + 2])));
                    }
                    for (unsigned long long int i_25 = 0; i_25 < 22; i_25 += 4) 
                    {
                        var_61 = ((/* implicit */unsigned short) var_5);
                        var_62 = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)-56)) + (((/* implicit */int) (_Bool)1))));
                        var_63 = ((/* implicit */unsigned long long int) ((arr_56 [i_21] [i_17 + 1] [i_2 - 2] [i_17 + 1]) ? (((/* implicit */int) arr_56 [i_2] [i_17 + 1] [i_2 - 2] [i_21])) : (((/* implicit */int) arr_56 [i_2] [i_17 + 1] [i_2 + 1] [i_21]))));
                    }
                    var_64 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_17 [i_2] [i_2 - 3] [i_2] [i_2] [i_2] [i_2])) ? (((int) var_9)) : (-1863951547)));
                }
                for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
                {
                    var_65 = ((_Bool) var_8);
                    arr_84 [i_2] [i_2] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_37 [i_2] [i_3] [i_3] [i_17] [i_26] [i_26]))));
                }
            }
            for (unsigned short i_27 = 0; i_27 < 22; i_27 += 3) 
            {
                /* LoopSeq 2 */
                for (unsigned short i_28 = 3; i_28 < 20; i_28 += 2) 
                {
                    var_66 = ((/* implicit */signed char) min((var_66), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_82 [i_28])) / (((/* implicit */int) var_10))))) ? ((-(((/* implicit */int) (unsigned short)65524)))) : (((((/* implicit */int) var_10)) / (((/* implicit */int) var_1)))))))));
                    var_67 = ((/* implicit */int) ((((/* implicit */_Bool) arr_25 [i_2] [i_2 - 1])) ? (((((/* implicit */_Bool) (signed char)45)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_5))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_54 [i_27] [i_27] [i_27])))))));
                    var_68 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)6)) ? (((/* implicit */int) (signed char)55)) : (((/* implicit */int) (signed char)-67))))) ? (((/* implicit */int) arr_39 [i_2] [i_3] [i_27] [i_27] [i_28])) : (((/* implicit */int) var_4))));
                }
                for (unsigned short i_29 = 4; i_29 < 21; i_29 += 3) 
                {
                    var_69 = var_10;
                    var_70 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (signed char)-2)) ? (((/* implicit */int) (short)-13687)) : (((/* implicit */int) var_9)))) * ((-(((/* implicit */int) var_10))))));
                    arr_92 [(unsigned char)11] [i_3] [i_27] [i_29] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_2) * (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (signed char)71)))) : (((((/* implicit */int) arr_37 [i_2] [i_27] [i_27] [i_29] [i_27] [i_29])) >> (((((/* implicit */int) (signed char)-111)) + (129)))))));
                }
                var_71 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_63 [i_2 - 3] [i_2 - 1] [i_2 - 2] [i_2 - 2] [i_2 - 3])) ? (((/* implicit */int) arr_63 [i_2 - 3] [i_2 - 1] [i_2 - 1] [i_2 - 2] [i_2 - 2])) : (((/* implicit */int) var_1))));
                /* LoopSeq 1 */
                for (signed char i_30 = 0; i_30 < 22; i_30 += 3) 
                {
                    var_72 = ((/* implicit */unsigned char) (_Bool)1);
                    var_73 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_4)))))));
                }
                arr_97 [i_2] [i_27] [(unsigned short)14] [i_3] = ((/* implicit */int) arr_19 [i_2] [i_2] [i_2 - 1] [i_2] [i_2] [i_2] [i_2]);
            }
        }
        var_74 = ((/* implicit */unsigned short) ((unsigned long long int) arr_49 [i_2 - 3] [i_2 - 3] [i_2 - 3] [i_2 - 2] [i_2]));
        /* LoopSeq 2 */
        for (_Bool i_31 = 0; i_31 < 1; i_31 += 1) 
        {
            var_75 = ((/* implicit */unsigned int) min((var_75), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_82 [i_2])))))));
            var_76 = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_77 [i_2 - 2] [i_2 - 2] [i_2 - 2] [i_31] [i_31])) ^ (((/* implicit */int) var_1)))) ^ (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_96 [i_31] [i_31] [i_2] [i_2] [i_2] [i_2])) : (((/* implicit */int) arr_93 [i_31] [i_31] [i_31] [i_31] [i_31]))))));
            arr_100 [i_2] [i_31] = ((((/* implicit */int) arr_79 [i_2] [i_2 - 2] [i_2] [i_2 - 1] [i_2 - 1] [i_2 + 1] [i_2])) >= (((/* implicit */int) (_Bool)1)));
            arr_101 [i_2] [i_31] = ((/* implicit */unsigned char) ((arr_43 [i_2 - 1] [i_2] [i_31] [i_2]) ^ (((var_11) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_3))))));
        }
        for (unsigned short i_32 = 0; i_32 < 22; i_32 += 2) 
        {
            var_77 = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) (unsigned char)66)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))));
            arr_104 [i_2] [(signed char)12] [i_2 - 3] = ((unsigned short) arr_21 [i_32] [i_32] [i_32] [i_32] [i_32]);
        }
    }
}
