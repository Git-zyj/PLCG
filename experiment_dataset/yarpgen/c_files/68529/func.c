/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68529
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68529 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68529
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
    /* vectorizable */
    for (signed char i_0 = 1; i_0 < 12; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (unsigned char)19)) : (((/* implicit */int) (unsigned short)65528))));
        var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) (signed char)75))))) ? (var_10) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) arr_2 [i_0 + 1])) - (16226))))))));
    }
    var_19 = ((unsigned int) -3062779388397650669LL);
    /* LoopSeq 4 */
    for (unsigned short i_1 = 0; i_1 < 19; i_1 += 2) 
    {
        var_20 += min((1638851302), (((/* implicit */int) (unsigned char)94)));
        /* LoopSeq 2 */
        for (unsigned long long int i_2 = 2; i_2 < 17; i_2 += 2) 
        {
            var_21 = ((/* implicit */int) ((((/* implicit */_Bool) (short)-20440)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (((min((arr_5 [i_1]), (((/* implicit */unsigned long long int) arr_10 [i_1])))) - (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_8 [i_2]), (((/* implicit */unsigned short) (short)-1513))))))))));
            /* LoopSeq 1 */
            for (unsigned short i_3 = 0; i_3 < 19; i_3 += 1) 
            {
                var_22 = ((/* implicit */unsigned int) min(((+(arr_12 [i_2] [i_2 + 1] [i_2]))), (((/* implicit */unsigned long long int) (-(1687043436U))))));
                var_23 = ((/* implicit */signed char) (((+(min((((/* implicit */unsigned long long int) arr_4 [i_1])), (arr_12 [i_1] [i_1] [i_1]))))) > (arr_12 [i_2 - 1] [i_2] [i_2])));
                arr_13 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(arr_4 [i_2 + 1])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) arr_8 [i_2 - 2])) : ((~(var_14)))))) : (((((/* implicit */_Bool) min((var_14), (((/* implicit */int) (signed char)-71))))) ? (((/* implicit */unsigned long long int) 2143229890U)) : (10547600281690240008ULL)))));
            }
            /* LoopSeq 1 */
            for (unsigned short i_4 = 1; i_4 < 18; i_4 += 4) 
            {
                var_24 = arr_5 [i_1];
                var_25 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)20440)) ? (((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) arr_9 [i_4 + 1] [i_4 - 1])) : (((/* implicit */int) arr_16 [i_1])))) : (((/* implicit */int) max((((/* implicit */short) arr_6 [i_2])), ((short)-1513))))))) ? (((/* implicit */int) ((((/* implicit */int) max(((unsigned char)157), ((unsigned char)6)))) != (arr_15 [(unsigned short)2] [i_2])))) : ((-(((/* implicit */int) ((((/* implicit */int) var_5)) >= (((/* implicit */int) var_2)))))))));
                arr_17 [i_4] [i_1] [i_2] [i_1] = ((/* implicit */unsigned short) var_5);
                arr_18 [i_1] [i_2] [i_4] [i_2 + 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_2 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_4 + 1]))) : (arr_4 [i_2 + 2])))) || (((/* implicit */_Bool) max((((/* implicit */unsigned char) var_13)), (arr_6 [i_2 + 1]))))));
                var_26 = ((/* implicit */signed char) arr_4 [i_1]);
            }
        }
        /* vectorizable */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            var_27 &= ((/* implicit */unsigned int) (((!((_Bool)1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_5 [i_1]) != (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)26))))))) : (arr_22 [i_1] [i_1] [i_1])));
            arr_23 [i_1] [i_1] [i_1] = ((/* implicit */long long int) ((arr_4 [i_1]) & (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_1])))));
        }
    }
    /* vectorizable */
    for (unsigned int i_6 = 2; i_6 < 10; i_6 += 2) 
    {
        var_28 *= ((((/* implicit */_Bool) (+(1687043446U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_6 + 1]))) : (arr_12 [i_6] [i_6] [i_6]));
        /* LoopSeq 1 */
        for (unsigned char i_7 = 1; i_7 < 12; i_7 += 3) 
        {
            /* LoopSeq 2 */
            for (int i_8 = 0; i_8 < 13; i_8 += 3) 
            {
                arr_30 [i_6 + 1] [i_8] [i_6] = ((/* implicit */unsigned char) arr_16 [i_6 + 1]);
                arr_31 [i_6] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3324701386093213142LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)0))) : (12919465031306083283ULL)))) ? ((-(var_12))) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_7 + 1] [i_7 - 1])))));
                /* LoopSeq 1 */
                for (long long int i_9 = 0; i_9 < 13; i_9 += 2) 
                {
                    var_29 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_21 [i_6])) ? (arr_14 [i_6] [(_Bool)1] [i_7] [i_6]) : (1354387285U)));
                    /* LoopSeq 1 */
                    for (unsigned int i_10 = 1; i_10 < 11; i_10 += 4) 
                    {
                        var_30 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)0)) || (((/* implicit */_Bool) arr_12 [i_7] [i_7] [i_7 + 1]))));
                        arr_36 [i_6] [i_7 - 1] [i_8] [i_6] [i_7 - 1] [0ULL] [i_8] = ((/* implicit */unsigned long long int) ((_Bool) -482045086));
                        var_31 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_20 [i_6 + 1] [i_6 - 1])) ? (((/* implicit */int) arr_34 [i_6] [i_6] [i_6 + 2] [i_6] [i_6] [i_6 - 1] [i_6])) : (((/* implicit */int) var_2))));
                        var_32 = ((/* implicit */unsigned long long int) arr_7 [i_6] [i_7 - 1]);
                        arr_37 [i_6] [i_9] [i_8] [i_7 - 1] [i_6] = ((/* implicit */_Bool) ((((((/* implicit */int) arr_20 [i_6 + 3] [i_7 - 1])) + (2147483647))) >> (((((/* implicit */int) arr_20 [i_6 - 1] [i_7 - 1])) + (9635)))));
                    }
                }
            }
            for (unsigned short i_11 = 2; i_11 < 12; i_11 += 4) 
            {
                var_33 = ((/* implicit */unsigned char) ((var_4) - (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) ^ (var_8))))));
                var_34 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_5 [i_11 - 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)246))) : (arr_5 [i_11 - 2])));
            }
            arr_41 [i_6] [12] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 13926734908040819126ULL)) ? (-785864992) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) var_1)) : (((arr_38 [i_6 - 1] [i_7]) ? (((/* implicit */int) arr_11 [i_6 + 1])) : (((/* implicit */int) (unsigned short)19283)))));
            arr_42 [i_6] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_10)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_6 - 1])))));
            arr_43 [i_6] [i_7] [i_7 - 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_6] [i_7])) ? (arr_35 [(_Bool)0] [i_7] [i_7 - 1] [i_7] [i_7]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_7])))))) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_16 [14U]))))) : (arr_24 [i_6 + 1] [i_7 + 1])));
            var_35 ^= ((/* implicit */unsigned short) (~(((/* implicit */int) arr_1 [i_6 - 1] [i_7]))));
        }
        /* LoopSeq 3 */
        for (unsigned char i_12 = 0; i_12 < 13; i_12 += 4) /* same iter space */
        {
            /* LoopSeq 2 */
            for (signed char i_13 = 1; i_13 < 11; i_13 += 4) /* same iter space */
            {
                /* LoopSeq 1 */
                for (signed char i_14 = 0; i_14 < 13; i_14 += 2) 
                {
                    arr_53 [i_12] = (((~(((/* implicit */int) arr_27 [i_6] [i_6])))) >= (((/* implicit */int) arr_21 [i_6])));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_15 = 0; i_15 < 13; i_15 += 1) 
                    {
                        arr_58 [i_6] [i_13 + 1] [i_14] [(_Bool)1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_49 [i_6 - 2])) || (((/* implicit */_Bool) (unsigned short)23687))));
                        var_36 = ((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_6 - 2] [i_6 - 1])) && (((/* implicit */_Bool) (-(((/* implicit */int) arr_38 [i_6] [i_6])))))));
                        var_37 = ((/* implicit */unsigned int) ((arr_52 [i_6] [i_6] [i_6] [i_6 - 2]) ^ (785865022)));
                    }
                    for (unsigned int i_16 = 2; i_16 < 11; i_16 += 2) 
                    {
                        var_38 = ((/* implicit */long long int) (unsigned short)28497);
                        arr_62 [i_6] = (((+(((/* implicit */int) var_6)))) & (arr_47 [i_13 + 1] [i_6 - 2] [i_6 + 3] [i_6 + 3]));
                        var_39 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_50 [i_6] [(unsigned char)7] [i_6])) ? (((/* implicit */int) var_7)) : (var_14)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_12])))))) : (((((/* implicit */_Bool) (unsigned short)41844)) ? (5811225728445175831LL) : (((/* implicit */long long int) arr_28 [4] [i_12] [i_12] [i_12]))))));
                    }
                }
                arr_63 [i_13] = ((/* implicit */long long int) ((((/* implicit */int) var_7)) >= (((/* implicit */int) arr_1 [i_13] [i_13 - 1]))));
            }
            for (signed char i_17 = 1; i_17 < 11; i_17 += 4) /* same iter space */
            {
                var_40 = ((/* implicit */signed char) (((!(var_6))) ? ((-(((/* implicit */int) arr_8 [i_12])))) : (((/* implicit */int) var_3))));
                var_41 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_20 [i_17 + 2] [i_6 + 3])) ? (((/* implicit */int) arr_20 [i_6 + 3] [i_17 + 2])) : (((/* implicit */int) arr_27 [i_6 - 1] [i_6 + 1]))));
                arr_66 [i_6 + 1] [i_12] [i_12] [i_17] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-1))));
                var_42 = ((((/* implicit */_Bool) arr_47 [i_6] [i_6 + 1] [i_6 - 1] [i_6 - 1])) ? (arr_47 [i_6] [i_6 + 1] [i_6 - 2] [i_6 - 1]) : (arr_47 [i_6] [i_6 + 1] [i_6 - 1] [i_6 + 2]));
            }
            var_43 = ((arr_25 [i_6 - 1]) / (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_12]))));
        }
        for (unsigned char i_18 = 0; i_18 < 13; i_18 += 4) /* same iter space */
        {
            var_44 = ((/* implicit */unsigned short) (~(var_8)));
            arr_69 [i_6] [i_6] = ((/* implicit */signed char) ((unsigned short) var_11));
        }
        for (unsigned long long int i_19 = 0; i_19 < 13; i_19 += 4) 
        {
            arr_72 [i_6] [i_6 - 2] = ((/* implicit */unsigned short) ((arr_4 [i_6 + 3]) + (((/* implicit */unsigned int) ((/* implicit */int) arr_34 [i_6 + 2] [i_6 - 2] [i_6] [i_6] [i_6 - 2] [i_6] [i_6])))));
            arr_73 [i_6] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)127)) + (((/* implicit */int) (_Bool)1))));
        }
        arr_74 [i_6] = ((/* implicit */_Bool) arr_61 [i_6 + 1] [i_6] [i_6] [(short)6] [i_6]);
        /* LoopSeq 1 */
        for (unsigned char i_20 = 2; i_20 < 12; i_20 += 3) 
        {
            var_45 = ((/* implicit */short) ((((/* implicit */_Bool) arr_54 [i_6 + 2] [i_20 - 1] [i_20] [i_20 + 1] [i_20] [i_20] [i_20 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (589580980U)));
            arr_78 [i_6] [i_6] [i_20] = ((/* implicit */_Bool) ((arr_27 [i_6] [i_6]) ? ((+(((/* implicit */int) arr_51 [i_6] [i_6] [i_6])))) : (((/* implicit */int) (signed char)63))));
            var_46 = ((/* implicit */_Bool) arr_6 [i_6]);
            /* LoopSeq 1 */
            for (signed char i_21 = 3; i_21 < 11; i_21 += 4) 
            {
                /* LoopSeq 1 */
                for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                {
                    arr_84 [i_20] [i_20] [i_20] [10ULL] [(_Bool)1] [i_20] = ((/* implicit */unsigned short) arr_64 [i_6] [i_21 - 2]);
                    var_47 = ((/* implicit */short) var_11);
                    var_48 = ((/* implicit */int) 2940580011U);
                    /* LoopSeq 1 */
                    for (signed char i_23 = 1; i_23 < 12; i_23 += 2) 
                    {
                        var_49 |= ((/* implicit */long long int) ((861650986) / (((/* implicit */int) arr_40 [i_6 + 1] [i_6 + 1]))));
                        arr_87 [i_6 + 1] [i_6 + 1] [i_6 + 1] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_39 [i_20 + 1])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_39 [i_20 - 1]))));
                        arr_88 [i_6 + 1] [i_6 + 1] [i_6 + 1] &= arr_61 [i_21 - 1] [i_21] [i_21] [i_21] [i_21 + 2];
                        var_50 = ((/* implicit */int) min((var_50), (((/* implicit */int) var_2))));
                    }
                }
                /* LoopSeq 1 */
                for (unsigned char i_24 = 0; i_24 < 13; i_24 += 2) 
                {
                    var_51 = ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)15)) - (((/* implicit */int) arr_16 [i_24]))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) ((arr_14 [i_6] [i_6] [13] [13]) < (1354387285U)))));
                    /* LoopSeq 1 */
                    for (int i_25 = 0; i_25 < 13; i_25 += 1) 
                    {
                        var_52 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) -785864992)) ? (2558049165U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)46253)))));
                        var_53 = ((/* implicit */signed char) min((var_53), (((/* implicit */signed char) (-(((/* implicit */int) arr_19 [i_20 - 1])))))));
                        arr_94 [i_6] [i_6] [i_20] [i_21] [i_24] [i_24] [i_25] = ((/* implicit */signed char) (-(((/* implicit */int) arr_38 [i_21 + 1] [10ULL]))));
                        var_54 = ((/* implicit */short) var_3);
                        arr_95 [i_24] [i_24] [i_6] [i_6] [i_6] = ((/* implicit */unsigned short) (~((~(((/* implicit */int) (_Bool)1))))));
                    }
                }
                var_55 = ((/* implicit */unsigned long long int) (_Bool)1);
                var_56 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(var_12)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_49 [i_6 + 2]))) : (-5758398090606462768LL)));
            }
            /* LoopSeq 1 */
            for (int i_26 = 0; i_26 < 13; i_26 += 4) 
            {
                var_57 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 785865000)) ? (((/* implicit */int) ((arr_97 [i_6] [i_6] [i_26] [i_20]) < (((/* implicit */unsigned long long int) var_8))))) : (((/* implicit */int) arr_56 [i_6] [i_6] [i_20 + 1] [i_6] [i_26]))));
                var_58 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_25 [i_20 - 2])) ? (((arr_27 [i_6] [i_6]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_26]))) : (arr_5 [14U]))) : (arr_57 [i_6 + 2])));
                arr_98 [i_6] [i_6] [i_20 - 2] = ((/* implicit */long long int) var_1);
            }
        }
    }
    for (long long int i_27 = 0; i_27 < 13; i_27 += 3) 
    {
        var_59 ^= ((/* implicit */unsigned short) arr_83 [i_27] [i_27] [i_27] [i_27] [i_27]);
        var_60 += ((/* implicit */unsigned long long int) ((_Bool) (-(arr_33 [i_27] [(_Bool)1] [i_27] [i_27] [i_27] [i_27]))));
        var_61 = ((/* implicit */signed char) min((var_61), (((/* implicit */signed char) min((((/* implicit */unsigned char) arr_81 [i_27] [i_27] [i_27] [(short)12])), (min(((unsigned char)63), (((/* implicit */unsigned char) (signed char)20)))))))));
        var_62 = ((/* implicit */int) min((var_62), (max((((/* implicit */int) ((((/* implicit */int) arr_93 [i_27] [i_27] [i_27] [i_27] [i_27])) >= (((/* implicit */int) arr_93 [(_Bool)1] [6] [(_Bool)1] [i_27] [i_27]))))), (((4122881) | (((/* implicit */int) arr_83 [i_27] [i_27] [i_27] [i_27] [i_27]))))))));
    }
    /* vectorizable */
    for (signed char i_28 = 2; i_28 < 17; i_28 += 3) 
    {
        var_63 = ((/* implicit */unsigned char) -32);
        var_64 ^= ((/* implicit */short) (_Bool)1);
    }
}
