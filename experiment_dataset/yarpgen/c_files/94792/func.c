/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94792
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94792 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94792
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
    for (long long int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            var_17 = ((/* implicit */_Bool) min((arr_4 [i_0] [i_1] [10]), (((/* implicit */short) ((unsigned char) var_4)))));
            var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(1959867256U)))) ? (((/* implicit */int) ((unsigned char) arr_1 [i_1] [i_0]))) : (-523181502))))));
            arr_5 [i_1] = ((/* implicit */_Bool) (~(((3597421442U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-101)))))));
            var_19 = ((/* implicit */long long int) (_Bool)0);
        }
        for (short i_2 = 2; i_2 < 23; i_2 += 2) 
        {
            arr_10 [i_0] [13LL] = ((/* implicit */_Bool) ((unsigned char) (signed char)-19));
            var_20 ^= ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)0))))) && ((_Bool)1))));
        }
        var_21 = ((/* implicit */long long int) max((max((((/* implicit */unsigned long long int) ((_Bool) var_15))), (min((arr_8 [i_0]), (((/* implicit */unsigned long long int) 2147483647)))))), (15139530248149229574ULL)));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_3 = 0; i_3 < 25; i_3 += 4) 
        {
            arr_13 [i_0] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((var_8) && (((/* implicit */_Bool) var_14))))) <= (((((/* implicit */_Bool) arr_11 [(signed char)17] [(signed char)17] [(signed char)17])) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (signed char)19))))));
            /* LoopNest 2 */
            for (short i_4 = 0; i_4 < 25; i_4 += 1) 
            {
                for (signed char i_5 = 0; i_5 < 25; i_5 += 3) 
                {
                    {
                        var_22 = ((_Bool) var_0);
                        var_23 = ((/* implicit */int) var_12);
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (unsigned long long int i_6 = 0; i_6 < 25; i_6 += 4) 
            {
                var_24 += ((/* implicit */signed char) ((((int) 6783054310470997591ULL)) >= (((var_8) ? (-281247844) : (((/* implicit */int) (_Bool)1))))));
                var_25 += ((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)60))));
                var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) arr_0 [i_0]))));
                arr_21 [i_0] [i_3] [(signed char)2] = ((/* implicit */short) (-(arr_15 [i_0] [i_0] [i_3] [i_0])));
            }
            for (unsigned long long int i_7 = 0; i_7 < 25; i_7 += 4) 
            {
                /* LoopSeq 3 */
                for (long long int i_8 = 0; i_8 < 25; i_8 += 1) 
                {
                    var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) ((((/* implicit */int) arr_16 [i_0] [i_3] [i_7] [i_8])) / ((~(((/* implicit */int) (_Bool)1)))))))));
                    var_28 = ((/* implicit */_Bool) min((var_28), (((/* implicit */_Bool) ((((/* implicit */unsigned int) 931984096)) + (var_15))))));
                    arr_27 [i_0] [20] [i_7] [i_0] = ((/* implicit */int) var_6);
                }
                for (int i_9 = 1; i_9 < 22; i_9 += 4) 
                {
                    var_29 = ((/* implicit */long long int) ((_Bool) arr_17 [i_9 + 2] [i_9 + 1] [i_9] [i_9 + 2] [i_9 + 1]));
                    arr_31 [i_9] [i_3] [i_7] [i_9] = (+(((/* implicit */int) (signed char)-19)));
                }
                for (unsigned long long int i_10 = 3; i_10 < 24; i_10 += 3) 
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_11 = 0; i_11 < 25; i_11 += 4) 
                    {
                        var_30 -= ((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)9033))));
                        arr_36 [(unsigned short)14] [i_11] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_17 [i_0] [i_3] [i_7] [i_10] [i_10 - 1])) + (((/* implicit */int) var_5))));
                    }
                    for (signed char i_12 = 0; i_12 < 25; i_12 += 2) 
                    {
                        var_31 = ((arr_25 [i_7] [i_7] [i_7] [i_7] [i_7] [i_10 + 1]) & (((/* implicit */int) (_Bool)1)));
                        var_32 ^= ((/* implicit */unsigned int) 825921869);
                    }
                    arr_40 [i_7] [i_7] [i_7] [i_3] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_32 [18LL] [i_10] [i_7] [13ULL] [17] [i_10 + 1])) ? (arr_0 [i_10 - 1]) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) 13078722437883939936ULL))))));
                    /* LoopSeq 4 */
                    for (unsigned int i_13 = 0; i_13 < 25; i_13 += 2) 
                    {
                        arr_44 [i_3] [i_10] [i_3] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_41 [16LL] [16LL] [16LL] [i_0] [i_3] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_3))) != (((/* implicit */unsigned long long int) arr_42 [i_10 - 1] [i_10 + 1] [i_10 - 1] [i_10 - 1] [i_13]))));
                        var_33 = ((/* implicit */_Bool) min((var_33), (((_Bool) ((short) var_4)))));
                        var_34 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_10 + 1] [i_10 + 1] [6] [i_10] [7LL]))));
                    }
                    for (unsigned int i_14 = 0; i_14 < 25; i_14 += 2) 
                    {
                        arr_48 [i_0] [i_7] = ((/* implicit */int) (_Bool)1);
                        var_35 = ((/* implicit */unsigned long long int) (_Bool)0);
                    }
                    for (int i_15 = 0; i_15 < 25; i_15 += 2) 
                    {
                        arr_51 [0ULL] [0ULL] = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */int) arr_4 [i_15] [i_0] [i_0])) >> (((var_9) + (2500195996153990602LL))))));
                        arr_52 [i_0] [(signed char)21] [i_0] [i_15] = (-(((/* implicit */int) (signed char)-95)));
                        var_36 = ((/* implicit */short) ((unsigned int) arr_7 [i_0] [i_0]));
                    }
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                    {
                        var_37 = ((/* implicit */unsigned int) max((var_37), (var_15)));
                        var_38 = ((/* implicit */unsigned long long int) min((var_38), (((/* implicit */unsigned long long int) arr_14 [i_3] [i_3]))));
                    }
                    var_39 = ((/* implicit */int) var_15);
                }
                var_40 = ((/* implicit */int) min((var_40), (((/* implicit */int) var_16))));
            }
        }
        for (unsigned long long int i_17 = 0; i_17 < 25; i_17 += 2) 
        {
            var_41 ^= ((/* implicit */short) var_12);
            /* LoopSeq 4 */
            for (int i_18 = 0; i_18 < 25; i_18 += 4) 
            {
                arr_62 [i_18] [i_17] [i_0] |= ((/* implicit */short) min((((/* implicit */unsigned long long int) max((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)181))) > (var_11)))), (((((/* implicit */int) var_16)) << (((arr_33 [i_17]) - (48814746)))))))), (((unsigned long long int) (_Bool)0))));
                var_42 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) max(((-(((/* implicit */int) var_1)))), ((-(((/* implicit */int) arr_55 [i_0] [i_17] [i_0] [(_Bool)1] [i_0] [23U] [(_Bool)1]))))))), (((((_Bool) (short)-23998)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_14 [i_0] [24LL]))))))));
                /* LoopNest 2 */
                for (unsigned short i_19 = 0; i_19 < 25; i_19 += 4) 
                {
                    for (short i_20 = 3; i_20 < 23; i_20 += 1) 
                    {
                        {
                            arr_67 [i_17] [11LL] [i_17] = (~(((unsigned int) arr_25 [i_20 + 2] [i_20] [i_20 + 2] [20LL] [(short)7] [i_20 + 2])));
                            var_43 = ((/* implicit */unsigned short) min((var_43), (((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */_Bool) arr_32 [i_17] [i_18] [7LL] [i_20 - 1] [i_20 + 1] [i_20])) ? (min((var_13), (5756401980772198462ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_20 + 2] [i_20 - 3] [i_20 + 2] [i_20 + 1] [(short)11] [i_19])))))))));
                            arr_68 [9] [i_17] [i_17] = ((/* implicit */short) var_16);
                        }
                    } 
                } 
            }
            for (int i_21 = 0; i_21 < 25; i_21 += 1) /* same iter space */
            {
                var_44 = var_13;
                arr_73 [i_21] [i_17] [i_17] [i_21] = (+(arr_53 [i_0] [(signed char)13] [i_21] [(signed char)13]));
                arr_74 [i_0] [i_0] [i_0] [i_0] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_56 [i_17] [i_17] [i_0] [i_0])) ? (((/* implicit */int) max(((short)-23998), (((/* implicit */short) ((((/* implicit */_Bool) arr_42 [i_0] [24LL] [i_21] [i_17] [i_17])) && (((/* implicit */_Bool) arr_58 [i_0])))))))) : (((/* implicit */int) (signed char)-63))));
                /* LoopNest 2 */
                for (unsigned int i_22 = 0; i_22 < 25; i_22 += 1) 
                {
                    for (unsigned int i_23 = 0; i_23 < 25; i_23 += 1) 
                    {
                        {
                            var_45 = ((/* implicit */unsigned long long int) var_8);
                            var_46 = ((/* implicit */signed char) min((var_46), (((/* implicit */signed char) min((((((/* implicit */_Bool) max((var_12), (((/* implicit */long long int) var_0))))) ? (((/* implicit */unsigned long long int) max((2595605574U), (((/* implicit */unsigned int) arr_46 [i_0] [i_0] [i_17] [i_21] [i_22] [(short)9]))))) : (((unsigned long long int) arr_57 [i_0])))), (((/* implicit */unsigned long long int) (!(((_Bool) -825921870))))))))));
                        }
                    } 
                } 
            }
            for (int i_24 = 0; i_24 < 25; i_24 += 1) /* same iter space */
            {
                var_47 = ((/* implicit */int) min((var_47), (((/* implicit */int) ((((/* implicit */_Bool) max(((+(((/* implicit */int) arr_70 [i_0] [(signed char)13] [i_0] [6U])))), (((/* implicit */int) arr_64 [(_Bool)1] [(_Bool)1] [i_17] [i_17] [i_17]))))) && (((/* implicit */_Bool) max((13168887599662522471ULL), (5368021635825611680ULL)))))))));
                var_48 = ((/* implicit */_Bool) min((var_48), ((!(((/* implicit */_Bool) (short)11813))))));
            }
            for (int i_25 = 0; i_25 < 25; i_25 += 1) /* same iter space */
            {
                var_49 = ((/* implicit */long long int) 825921869);
                arr_83 [(_Bool)1] [i_17] [i_25] = ((/* implicit */long long int) (+(2147483647)));
            }
            arr_84 [16ULL] [i_17] [i_17] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) max(((signed char)18), ((signed char)24)))), (min((5368021635825611680ULL), (arr_12 [(short)1] [i_17] [i_17])))))) ? (min((((/* implicit */unsigned long long int) ((5355206185158562306LL) >= (((/* implicit */long long int) ((/* implicit */int) var_16)))))), (((unsigned long long int) var_8)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) min((((/* implicit */long long int) 4294967295U)), (2711104129423232794LL))))))));
        }
    }
    for (short i_26 = 0; i_26 < 24; i_26 += 4) 
    {
        arr_87 [i_26] = ((/* implicit */short) ((((((/* implicit */long long int) ((/* implicit */int) max((arr_76 [4LL] [0] [i_26]), (arr_80 [i_26] [i_26]))))) % (var_9))) <= (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_46 [i_26] [i_26] [i_26] [i_26] [i_26] [(short)7]))))))));
        /* LoopNest 2 */
        for (signed char i_27 = 0; i_27 < 24; i_27 += 3) 
        {
            for (_Bool i_28 = 0; i_28 < 1; i_28 += 1) 
            {
                {
                    arr_92 [(unsigned short)14] [i_28] [(unsigned short)23] [i_26] = ((/* implicit */signed char) arr_91 [(signed char)5] [i_27]);
                    var_50 += ((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_1 [i_26] [i_28])) ? (arr_1 [i_27] [i_26]) : (-825921869)))));
                }
            } 
        } 
    }
    for (unsigned int i_29 = 0; i_29 < 17; i_29 += 2) 
    {
        var_51 = ((/* implicit */int) ((((/* implicit */_Bool) ((long long int) arr_85 [(short)15]))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (var_15)));
        var_52 = ((/* implicit */_Bool) max((9223372036854775807LL), (max((var_6), (arr_30 [i_29])))));
    }
    /* vectorizable */
    for (unsigned long long int i_30 = 3; i_30 < 12; i_30 += 3) 
    {
        var_53 = ((/* implicit */long long int) var_3);
        var_54 = ((/* implicit */signed char) min((var_54), (((/* implicit */signed char) ((((/* implicit */int) var_1)) >= (((/* implicit */int) arr_86 [(signed char)10])))))));
    }
    var_55 = ((/* implicit */short) max((((/* implicit */long long int) ((unsigned int) var_10))), (min((((/* implicit */long long int) var_16)), (var_6)))));
}
