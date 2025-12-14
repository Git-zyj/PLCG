/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69157
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69157 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69157
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
    for (signed char i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (signed char i_2 = 0; i_2 < 22; i_2 += 4) 
                {
                    var_17 = ((/* implicit */int) var_9);
                    arr_10 [i_0] [21] [i_2] = ((/* implicit */unsigned char) var_7);
                    var_18 = ((/* implicit */signed char) var_10);
                    arr_11 [i_0] [(unsigned short)7] [i_2] = ((/* implicit */int) (unsigned char)255);
                }
                arr_12 [(unsigned char)10] &= ((/* implicit */unsigned long long int) arr_0 [(short)8] [14ULL]);
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) min((var_7), (((/* implicit */int) min((((/* implicit */short) ((_Bool) var_0))), (var_10)))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_3 = 1; i_3 < 21; i_3 += 4) 
    {
        var_20 = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */int) var_13)) + (-1995755959))));
        var_21 += ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)29))) : (-24LL))) >= (((/* implicit */long long int) ((/* implicit */int) (short)18385)))));
        arr_15 [i_3] &= arr_13 [i_3 + 2];
    }
    for (long long int i_4 = 2; i_4 < 10; i_4 += 2) 
    {
        /* LoopSeq 3 */
        for (short i_5 = 1; i_5 < 11; i_5 += 3) /* same iter space */
        {
            /* LoopSeq 3 */
            for (unsigned char i_6 = 4; i_6 < 9; i_6 += 4) 
            {
                var_22 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_14)), (max((min((((/* implicit */unsigned long long int) arr_7 [i_4] [i_4] [7U])), (15982724929392418991ULL))), (((/* implicit */unsigned long long int) ((unsigned int) 10046974079755835319ULL)))))));
                arr_27 [0U] [8U] [(_Bool)1] = ((/* implicit */unsigned int) max((((/* implicit */int) (!(((/* implicit */_Bool) 1896635630))))), (((((/* implicit */int) arr_23 [i_4] [i_4 - 2] [7U])) | (((/* implicit */int) arr_23 [i_6] [i_4 - 1] [2LL]))))));
            }
            for (short i_7 = 0; i_7 < 12; i_7 += 2) 
            {
                var_23 -= (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) 13ULL)) ? (((/* implicit */int) (signed char)21)) : (((/* implicit */int) (short)19109))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned short)49353), (((/* implicit */unsigned short) (short)19102)))))) : (170210074U))));
                var_24 = max((var_8), (min((((/* implicit */unsigned long long int) var_11)), (((((/* implicit */_Bool) arr_2 [i_5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_7]))) : (15781441922504177044ULL))))));
                var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_5 [i_5 - 1] [i_5] [i_5])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (_Bool)0)))))))));
                /* LoopSeq 3 */
                for (unsigned int i_8 = 2; i_8 < 10; i_8 += 2) 
                {
                    var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_8 - 1]))) : (var_9)))) ? (((/* implicit */int) min((((/* implicit */short) var_13)), (arr_1 [i_7])))) : (((((/* implicit */_Bool) arr_1 [i_4 + 1])) ? (((/* implicit */int) arr_1 [8])) : (((/* implicit */int) arr_1 [(signed char)8]))))));
                    var_27 = ((/* implicit */short) (~(arr_26 [i_5])));
                    arr_34 [i_8] |= ((((/* implicit */int) var_2)) != ((+(((/* implicit */int) ((signed char) var_5))))));
                    var_28 = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) (signed char)75))))));
                }
                for (long long int i_9 = 0; i_9 < 12; i_9 += 2) 
                {
                    var_29 -= ((/* implicit */signed char) ((long long int) arr_2 [i_4]));
                    arr_38 [i_4] [8] [i_7] [(short)2] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) min((((/* implicit */long long int) var_13)), (35115652612096LL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) 13ULL)) ? (2535201833U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_4]))))) <= (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))) : (((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)90)) * (((/* implicit */int) (_Bool)1))))) * (3046782463113288735ULL)))));
                    /* LoopSeq 4 */
                    for (unsigned char i_10 = 2; i_10 < 10; i_10 += 3) 
                    {
                        var_30 = ((/* implicit */unsigned int) (~(((((/* implicit */unsigned long long int) var_6)) & (arr_13 [i_4 - 1])))));
                        arr_42 [i_10] [i_7] [(short)7] [(short)9] [i_7] [i_7] = ((/* implicit */short) (unsigned char)20);
                    }
                    for (short i_11 = 0; i_11 < 12; i_11 += 4) 
                    {
                        arr_46 [i_4] [i_5] &= ((/* implicit */long long int) max((((/* implicit */unsigned int) ((((/* implicit */int) min((var_14), (((/* implicit */unsigned short) (unsigned char)1))))) / (arr_0 [i_4 + 2] [i_7])))), ((-(1296398297U)))));
                        var_31 = ((/* implicit */signed char) ((((((/* implicit */int) (unsigned short)44575)) >= (((/* implicit */int) var_13)))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_25 [i_7])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)43309))) : (-5218602152316738776LL)))))));
                        arr_47 [(short)3] [i_5] [i_7] [i_9] [i_11] = ((/* implicit */unsigned short) max(((((_Bool)1) ? (-15LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)136))))), (((/* implicit */long long int) arr_44 [4LL] [(unsigned char)0] [i_4]))));
                        arr_48 [i_4] [(short)7] = ((/* implicit */int) (signed char)75);
                        var_32 = ((/* implicit */unsigned char) var_10);
                    }
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) /* same iter space */
                    {
                        var_33 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)24))))), (((((/* implicit */_Bool) arr_25 [i_4 + 1])) ? (arr_25 [i_4 - 1]) : (((/* implicit */unsigned long long int) var_7))))));
                        var_34 = ((/* implicit */_Bool) min((var_34), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((11505767032482810786ULL) & (10513812586534845795ULL)))) ? (((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (signed char)59)) : (((/* implicit */int) var_2)))) : (((/* implicit */int) ((short) 1265010525U)))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) == (arr_5 [i_4] [i_7] [i_9]))))) / (((var_3) * (((/* implicit */unsigned int) ((/* implicit */int) arr_37 [i_12] [i_7] [i_5] [9LL]))))))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_14)) / (((/* implicit */int) arr_31 [(unsigned char)9] [(short)1]))))))))));
                    }
                    /* vectorizable */
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) /* same iter space */
                    {
                        var_35 = ((/* implicit */int) max((var_35), (((/* implicit */int) ((((/* implicit */unsigned long long int) 3203514021U)) > (((1240876990595536762ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (short)27428))))))))));
                        var_36 = ((/* implicit */unsigned char) (unsigned short)52851);
                        var_37 *= ((/* implicit */unsigned int) ((signed char) ((((/* implicit */int) var_14)) >= (((/* implicit */int) var_10)))));
                    }
                    var_38 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-27409)) ? (((/* implicit */unsigned int) ((arr_20 [i_4 + 1] [(unsigned char)2]) / (((/* implicit */int) var_15))))) : (((((/* implicit */_Bool) var_13)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
                    arr_54 [i_4] [i_4] [i_4] = ((/* implicit */short) ((min((((/* implicit */int) (signed char)59)), (max((var_7), (arr_0 [i_7] [i_9]))))) / (((/* implicit */int) (signed char)59))));
                }
                /* vectorizable */
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_15 = 0; i_15 < 12; i_15 += 3) 
                    {
                        var_39 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) var_10)) & (((/* implicit */int) (signed char)93))))) ? (12123641951817868028ULL) : (((/* implicit */unsigned long long int) var_0))));
                        arr_59 [i_15] [i_14] [i_14] [0ULL] = ((/* implicit */signed char) (unsigned char)0);
                        var_40 = ((/* implicit */unsigned int) ((arr_29 [i_4] [i_5 - 1] [i_4 + 1] [i_4]) / (((/* implicit */long long int) var_6))));
                    }
                    arr_60 [i_4] [(unsigned char)11] [i_7] [i_14] [i_14] [i_14] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [i_4 + 2]))));
                }
            }
            for (short i_16 = 2; i_16 < 9; i_16 += 2) 
            {
                var_41 *= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_30 [i_4 - 2] [i_4])) || (((/* implicit */_Bool) arr_36 [i_16 - 1] [i_16 + 1] [i_16 + 2] [i_16 + 2])))) ? (min((5747830470509001644ULL), (11505767032482810786ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) arr_41 [i_16 - 2] [i_16] [i_16] [i_16] [i_16] [10]))))))));
                var_42 = ((/* implicit */unsigned char) min((var_42), (((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_50 [i_4 + 2] [i_4 + 1])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_4)))))))));
                arr_63 [i_4] [i_4] [i_5] [i_16] = ((/* implicit */long long int) ((max((min((((/* implicit */unsigned long long int) var_4)), (12698913603200549986ULL))), (((/* implicit */unsigned long long int) min((arr_33 [i_4]), (((/* implicit */unsigned int) (_Bool)1))))))) * (arr_13 [(short)10])));
                /* LoopSeq 1 */
                for (short i_17 = 0; i_17 < 12; i_17 += 4) 
                {
                    var_43 ^= ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (short)4001)), (((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)18))))) ? (357842721210677416ULL) : (((/* implicit */unsigned long long int) arr_58 [i_4] [i_17] [i_4] [i_5] [i_16] [i_17]))))));
                    var_44 = ((/* implicit */signed char) min((var_44), (((/* implicit */signed char) ((unsigned int) ((-7151108563795667486LL) % (((/* implicit */long long int) ((/* implicit */int) (short)126)))))))));
                    var_45 = var_11;
                    arr_66 [8ULL] = ((/* implicit */unsigned int) min((((/* implicit */long long int) min((((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)4))))), (3912219092U)))), (((((/* implicit */_Bool) arr_22 [i_17] [i_16] [i_4])) ? (arr_26 [i_4 - 1]) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_13)), (arr_35 [i_16] [(signed char)3] [i_4])))))))));
                }
            }
            /* LoopNest 2 */
            for (long long int i_18 = 0; i_18 < 12; i_18 += 1) 
            {
                for (unsigned short i_19 = 2; i_19 < 8; i_19 += 2) 
                {
                    {
                        arr_73 [4LL] [(_Bool)1] [i_19] &= ((/* implicit */unsigned char) (unsigned short)18);
                        var_46 += min((((/* implicit */unsigned long long int) ((((/* implicit */int) min(((unsigned short)3571), ((unsigned short)18229)))) >> (((((((/* implicit */int) (unsigned short)61965)) & (((/* implicit */int) var_5)))) - (61935)))))), (((((/* implicit */_Bool) 2198956146688LL)) ? (var_8) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) 1817694729)) | ((-9223372036854775807LL - 1LL))))))));
                        var_47 += min((arr_69 [i_4 - 1] [i_5 + 1] [i_19 + 4] [i_19 + 1]), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-127)) ? (((/* implicit */long long int) ((/* implicit */int) arr_70 [i_4]))) : (2198956146688LL)))) && (((/* implicit */_Bool) var_1))))));
                        arr_74 [i_4] [i_4] [i_4] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_61 [i_5 + 1] [i_19 + 1])), (-2111470515983692983LL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_4] [14ULL] [i_4]))))) : (((((/* implicit */_Bool) ((int) arr_64 [i_19]))) ? (((/* implicit */int) (short)512)) : (((/* implicit */int) (unsigned char)68))))));
                        arr_75 [5U] [i_5] [i_5] [i_18] [i_18] [i_19] = ((/* implicit */int) min((max((arr_52 [i_4 + 1] [i_4] [(signed char)9] [(signed char)10]), (((/* implicit */unsigned long long int) var_9)))), (((/* implicit */unsigned long long int) ((((arr_68 [(short)6]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [(unsigned char)5] [i_18] [i_5]))) : (arr_13 [i_4]))) == (((/* implicit */unsigned long long int) ((var_0) / (((/* implicit */int) var_12))))))))));
                    }
                } 
            } 
        }
        for (short i_20 = 1; i_20 < 11; i_20 += 3) /* same iter space */
        {
            var_48 += (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [17ULL] [14U] [i_20])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_4]))) : (3912219092U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (_Bool)1)))) : (max((((/* implicit */unsigned int) var_12)), (0U))))));
            arr_80 [i_4] = ((var_1) >> (((((/* implicit */int) (unsigned char)176)) - (172))));
        }
        for (unsigned int i_21 = 1; i_21 < 9; i_21 += 4) 
        {
            var_49 = ((/* implicit */signed char) (unsigned short)28033);
            arr_85 [i_4] [3U] |= ((/* implicit */signed char) ((var_8) * (((/* implicit */unsigned long long int) 805306368U))));
            var_50 = ((/* implicit */short) min((max((((/* implicit */int) (short)-520)), (arr_20 [i_4 + 2] [i_4 - 1]))), ((+(arr_20 [i_4 + 1] [i_4 + 2])))));
            var_51 = ((/* implicit */short) ((((((/* implicit */_Bool) (-(var_1)))) ? (8790642131059709007ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_12))))))) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_35 [i_4 + 2] [i_21] [i_21 + 1])) ? (((((/* implicit */_Bool) (short)507)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_12)))) : (((/* implicit */int) (_Bool)1)))))));
            arr_86 [i_4] [i_21] [i_21] = ((/* implicit */long long int) (short)(-32767 - 1));
        }
        /* LoopNest 3 */
        for (long long int i_22 = 0; i_22 < 12; i_22 += 2) 
        {
            for (unsigned long long int i_23 = 1; i_23 < 9; i_23 += 3) 
            {
                for (long long int i_24 = 1; i_24 < 9; i_24 += 2) 
                {
                    {
                        var_52 = ((/* implicit */short) ((unsigned short) min((((/* implicit */unsigned int) min((1817694729), (2087935010)))), (((4294967295U) * (((/* implicit */unsigned int) ((/* implicit */int) var_13))))))));
                        var_53 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (short)27269)) ^ ((-(((/* implicit */int) var_15))))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) arr_93 [i_4] [i_22] [i_23] [i_24])) - (var_7)))) ? (((((/* implicit */_Bool) var_15)) ? (2198956146688LL) : (((/* implicit */long long int) ((/* implicit */int) (short)27262))))) : (((/* implicit */long long int) (-(((/* implicit */int) arr_19 [i_22]))))))) : (((/* implicit */long long int) ((((3282473148U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (short)-508))))) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))))))));
                        arr_95 [i_24] [i_22] [i_23] [i_23] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned char)4)) : (((/* implicit */int) arr_19 [i_4]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)4)) >= (((/* implicit */int) arr_43 [i_22] [i_24])))))) : (4294967295U)))));
                    }
                } 
            } 
        } 
    }
    var_54 = ((((/* implicit */_Bool) (unsigned char)102)) ? (((/* implicit */long long int) ((((var_3) % (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)12))))) | (((/* implicit */unsigned int) var_0))))) : ((~(((var_9) | (var_9))))));
    var_55 = ((/* implicit */signed char) max((var_55), (((/* implicit */signed char) var_1))));
}
