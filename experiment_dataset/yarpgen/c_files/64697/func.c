/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64697
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64697 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64697
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
    var_10 = (((~(((((/* implicit */unsigned long long int) var_4)) | (var_6))))) >> (((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_4) : (((/* implicit */int) (unsigned char)19))))) ? (var_4) : (max((var_7), (var_5))))) - (142265594))));
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 13; i_0 += 3) /* same iter space */
    {
        var_11 = -1843860433;
        arr_2 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -16)) ? (var_4) : (1095369691)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) -1545696259)) ? (((/* implicit */int) ((unsigned short) arr_1 [i_0] [i_0]))) : ((~(((/* implicit */int) (unsigned char)207)))))))));
    }
    for (int i_1 = 0; i_1 < 13; i_1 += 3) /* same iter space */
    {
        arr_6 [i_1] = ((/* implicit */unsigned char) arr_5 [i_1]);
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned short i_2 = 0; i_2 < 13; i_2 += 4) /* same iter space */
        {
            arr_9 [5ULL] [i_2] [i_1] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)48))));
            /* LoopNest 2 */
            for (unsigned long long int i_3 = 1; i_3 < 9; i_3 += 4) 
            {
                for (unsigned char i_4 = 1; i_4 < 12; i_4 += 4) 
                {
                    {
                        var_12 = ((/* implicit */unsigned short) max((var_12), (((/* implicit */unsigned short) ((int) var_9)))));
                        var_13 *= ((/* implicit */unsigned char) ((unsigned long long int) arr_7 [i_3 + 1] [i_2] [i_2]));
                    }
                } 
            } 
            arr_15 [i_1] [i_1] = ((/* implicit */unsigned char) ((arr_14 [i_1] [i_2] [i_1]) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)226)))));
            arr_16 [i_1] = ((((/* implicit */int) (unsigned char)207)) << (((var_5) - (70017406))));
            var_14 = ((/* implicit */unsigned char) arr_0 [i_1] [i_2]);
        }
        for (unsigned short i_5 = 0; i_5 < 13; i_5 += 4) /* same iter space */
        {
            var_15 = ((/* implicit */unsigned char) ((int) min((((/* implicit */long long int) var_9)), (arr_5 [i_1]))));
            arr_20 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) 2147483647))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)70)))))) : (max((((/* implicit */unsigned long long int) (unsigned char)10)), (9142449270172191386ULL)))));
            /* LoopSeq 1 */
            for (unsigned long long int i_6 = 0; i_6 < 13; i_6 += 3) 
            {
                var_16 *= ((/* implicit */_Bool) arr_12 [i_1] [i_5]);
                var_17 *= ((/* implicit */unsigned char) (((+(((12846981855171529807ULL) << (((/* implicit */int) (_Bool)1)))))) - (((/* implicit */unsigned long long int) var_4))));
            }
            arr_24 [i_1] [i_1] = ((/* implicit */_Bool) -1505252854);
        }
        /* LoopSeq 2 */
        for (unsigned char i_7 = 0; i_7 < 13; i_7 += 1) 
        {
            var_18 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_5 [i_7]), (((/* implicit */long long int) var_9))))) ? (((/* implicit */int) (unsigned char)185)) : (arr_12 [i_1] [i_7])));
            arr_27 [i_1] = max((((/* implicit */unsigned long long int) (unsigned char)199)), (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)61)) ? (2113929216) : (((/* implicit */int) (_Bool)1))))), (arr_8 [i_1]))));
        }
        for (long long int i_8 = 0; i_8 < 13; i_8 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_9 = 0; i_9 < 13; i_9 += 3) 
            {
                for (unsigned short i_10 = 0; i_10 < 13; i_10 += 2) 
                {
                    {
                        var_19 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_2)) >> (((((/* implicit */int) arr_4 [i_10] [i_10])) - (15671)))))) ? (((/* implicit */int) var_9)) : (arr_33 [i_1] [i_8] [i_10])));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_11 = 0; i_11 < 13; i_11 += 2) 
                        {
                            arr_40 [i_11] [i_11] [i_10] [i_1] [i_8] [i_8] [i_1] = ((/* implicit */unsigned char) min(((-(var_8))), ((~(((/* implicit */int) ((var_6) == (((/* implicit */unsigned long long int) arr_29 [i_1])))))))));
                            arr_41 [i_1] [i_8] [i_8] [i_9] [i_1] [i_10] [i_11] = ((/* implicit */_Bool) (unsigned char)107);
                        }
                        arr_42 [i_10] [i_10] [i_8] [i_8] [i_10] [i_1] |= ((/* implicit */unsigned long long int) var_8);
                        var_20 *= ((/* implicit */unsigned char) min((5599762218538021788ULL), (((/* implicit */unsigned long long int) max((1956683582), (((/* implicit */int) arr_21 [i_1] [i_8] [i_9] [i_10])))))));
                        arr_43 [i_10] [i_1] [i_10] [6] = ((/* implicit */unsigned char) max((min((((/* implicit */unsigned long long int) arr_28 [i_9])), ((+(1071644672ULL))))), (((/* implicit */unsigned long long int) var_7))));
                    }
                } 
            } 
            arr_44 [i_1] [i_1] [i_8] = ((((/* implicit */int) ((((int) (unsigned char)32)) != ((+(((/* implicit */int) (unsigned char)72))))))) + (((/* implicit */int) arr_39 [i_8] [i_8] [i_8] [i_1] [i_1] [i_1])));
        }
        arr_45 [i_1] = ((/* implicit */int) (unsigned char)245);
    }
    /* vectorizable */
    for (int i_12 = 0; i_12 < 13; i_12 += 3) /* same iter space */
    {
        /* LoopSeq 4 */
        for (int i_13 = 0; i_13 < 13; i_13 += 3) /* same iter space */
        {
            var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) var_4))));
            arr_50 [(unsigned char)2] [i_13] &= ((/* implicit */unsigned short) (~(var_0)));
            arr_51 [i_12] [i_13] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((arr_13 [i_12] [i_12] [i_13] [i_13] [i_12]) || (((/* implicit */_Bool) var_0)))))));
        }
        for (int i_14 = 0; i_14 < 13; i_14 += 3) /* same iter space */
        {
            var_22 = ((/* implicit */unsigned long long int) max((var_22), (((arr_34 [i_12] [i_12]) & (arr_8 [(unsigned char)4])))));
            arr_54 [i_14] [i_14] [i_14] = ((/* implicit */unsigned long long int) (unsigned char)22);
        }
        for (int i_15 = 0; i_15 < 13; i_15 += 3) 
        {
            arr_57 [i_15] = ((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)0))));
            var_23 = (~(((/* implicit */int) ((4221713) != (-215707501)))));
        }
        for (unsigned char i_16 = 2; i_16 < 12; i_16 += 4) 
        {
            var_24 = ((/* implicit */int) (~(var_3)));
            /* LoopSeq 4 */
            for (unsigned long long int i_17 = 0; i_17 < 13; i_17 += 1) /* same iter space */
            {
                arr_62 [i_17] [i_12] [i_17] = ((/* implicit */unsigned char) ((int) arr_13 [i_12] [i_16] [i_17] [i_12] [i_17]));
                var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_52 [i_16] [i_16])) ? (((/* implicit */int) (unsigned char)109)) : (((/* implicit */int) arr_39 [i_12] [i_12] [i_12] [i_16] [i_16] [i_17]))))) ? (6435909482120152906LL) : (((/* implicit */long long int) ((/* implicit */int) arr_32 [i_16 - 1] [i_16 + 1] [i_16]))))))));
            }
            for (unsigned long long int i_18 = 0; i_18 < 13; i_18 += 1) /* same iter space */
            {
                arr_65 [i_16] [i_16] [i_16 - 2] |= (~(arr_12 [i_16 + 1] [i_16 - 1]));
                arr_66 [i_12] [i_12] [(unsigned char)10] [i_18] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_55 [i_16 - 2] [i_18])) ? (((/* implicit */int) arr_60 [i_16 + 1] [i_12] [i_18])) : (((/* implicit */int) (unsigned char)83))));
            }
            for (unsigned long long int i_19 = 0; i_19 < 13; i_19 += 1) /* same iter space */
            {
                arr_70 [i_12] [i_12] [i_12] [i_19] = ((/* implicit */unsigned char) ((unsigned long long int) arr_22 [i_12] [i_19]));
                var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_64 [i_12] [i_12] [i_12])) ? (((/* implicit */int) ((((/* implicit */int) var_2)) != (((/* implicit */int) (unsigned char)13))))) : (arr_22 [i_16 + 1] [i_16 - 2])));
                /* LoopSeq 2 */
                for (unsigned long long int i_20 = 0; i_20 < 13; i_20 += 3) /* same iter space */
                {
                    arr_74 [i_16] [i_19] [i_12] [i_12] [i_19] [i_12] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_16 - 1] [i_16 - 2])) ? ((~(((/* implicit */int) (unsigned char)24)))) : (((/* implicit */int) arr_67 [i_19]))));
                    var_27 = ((/* implicit */unsigned long long int) ((unsigned short) (~(var_8))));
                    var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)62)))))));
                    arr_75 [i_12] [i_12] [i_19] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(var_8)))) || (((/* implicit */_Bool) arr_37 [i_19] [i_16 - 1] [i_19] [i_19] [i_16] [i_16 - 2]))));
                    var_29 = ((/* implicit */unsigned char) arr_14 [i_19] [i_16 - 1] [i_19]);
                }
                for (unsigned long long int i_21 = 0; i_21 < 13; i_21 += 3) /* same iter space */
                {
                    arr_80 [i_12] [i_19] [i_16] [i_19] [i_21] = ((/* implicit */unsigned long long int) arr_10 [i_16 - 2] [i_19]);
                    var_30 = ((/* implicit */_Bool) max((var_30), (((/* implicit */_Bool) 8176ULL))));
                    var_31 *= ((/* implicit */unsigned char) var_1);
                    var_32 = ((/* implicit */unsigned long long int) max((var_32), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_73 [i_19] [i_16 - 2] [i_21])) ? (arr_73 [i_12] [i_16 - 1] [i_21]) : (arr_73 [i_12] [i_16] [i_19]))))));
                    arr_81 [i_19] [i_16 - 1] [i_16] [i_16] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((var_1) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)110))))))));
                }
                /* LoopSeq 1 */
                for (int i_22 = 2; i_22 < 11; i_22 += 3) 
                {
                    arr_84 [i_19] [i_16 - 1] [i_16 - 1] [i_16] [i_16 - 2] = arr_49 [i_19];
                    var_33 *= ((/* implicit */unsigned char) ((_Bool) (unsigned char)130));
                }
                arr_85 [i_12] [i_12] [i_16] [i_19] = ((/* implicit */long long int) (_Bool)1);
            }
            for (unsigned long long int i_23 = 0; i_23 < 13; i_23 += 1) /* same iter space */
            {
                var_34 = ((/* implicit */int) var_0);
                var_35 = ((/* implicit */int) min((var_35), (((/* implicit */int) (unsigned char)16))));
                arr_89 [i_12] [i_12] [i_12] [i_12] = ((/* implicit */int) ((((unsigned long long int) arr_37 [i_12] [i_12] [i_12] [i_16] [i_23] [i_23])) | (((/* implicit */unsigned long long int) ((int) var_4)))));
            }
        }
        arr_90 [i_12] [i_12] &= ((/* implicit */unsigned long long int) (unsigned char)109);
        arr_91 [i_12] [i_12] = ((((/* implicit */_Bool) arr_64 [i_12] [i_12] [i_12])) ? (arr_64 [i_12] [i_12] [i_12]) : (arr_86 [i_12] [i_12] [i_12] [i_12]));
    }
    var_36 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? (var_0) : (((/* implicit */unsigned long long int) var_4))));
    var_37 = ((/* implicit */unsigned short) -618548273);
}
