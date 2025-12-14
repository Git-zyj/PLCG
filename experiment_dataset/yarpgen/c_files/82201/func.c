/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82201
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82201 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82201
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)-10509))))) ? (((/* implicit */int) arr_0 [i_0 - 1] [i_0])) : (((/* implicit */int) arr_1 [i_0]))));
        /* LoopSeq 2 */
        for (unsigned int i_1 = 2; i_1 < 12; i_1 += 3) /* same iter space */
        {
            arr_6 [i_0] [i_1] [i_0] = ((/* implicit */int) arr_0 [i_0 - 1] [i_0]);
            /* LoopSeq 4 */
            for (long long int i_2 = 3; i_2 < 12; i_2 += 3) 
            {
                var_11 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (signed char)110)) || (((/* implicit */_Bool) (signed char)124)))) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-125)))));
                /* LoopSeq 3 */
                for (int i_3 = 0; i_3 < 13; i_3 += 1) 
                {
                    var_12 = ((/* implicit */_Bool) arr_4 [i_1 - 1] [i_1 - 2]);
                    var_13 = ((/* implicit */long long int) arr_8 [i_0 - 1] [(unsigned char)4]);
                    arr_12 [(signed char)11] [i_0] [i_0] = ((/* implicit */_Bool) 12913149178995874925ULL);
                    var_14 = ((/* implicit */signed char) (~(((/* implicit */int) (signed char)-47))));
                }
                for (signed char i_4 = 0; i_4 < 13; i_4 += 4) 
                {
                    arr_15 [i_0] [i_1] [i_2 + 1] [i_0] = (((-(((/* implicit */int) var_9)))) * (((/* implicit */int) ((1073501862U) >= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)57536)))))));
                    /* LoopSeq 1 */
                    for (signed char i_5 = 1; i_5 < 9; i_5 += 3) 
                    {
                        var_15 = ((/* implicit */unsigned long long int) ((18446744073709551615ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1 - 2] [i_0 - 1])))));
                        var_16 |= ((/* implicit */unsigned int) ((arr_0 [i_4] [i_4]) && (arr_0 [i_0 + 1] [i_4])));
                    }
                }
                for (unsigned int i_6 = 2; i_6 < 11; i_6 += 3) 
                {
                    var_17 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) 7ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (18446744073709551612ULL)))));
                    /* LoopSeq 1 */
                    for (signed char i_7 = 1; i_7 < 10; i_7 += 2) 
                    {
                        arr_22 [i_0 - 1] [i_1] [i_1] [i_0] [i_2] [i_6 - 1] [i_0] = ((/* implicit */unsigned int) ((arr_8 [i_2] [i_0]) ^ (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)(-127 - 1))) + (var_2))))));
                        var_18 = ((/* implicit */int) ((unsigned int) (unsigned char)244));
                    }
                }
                var_19 |= ((((((/* implicit */_Bool) (unsigned short)10196)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-9))) : (4ULL))) == (((/* implicit */unsigned long long int) arr_18 [i_0 - 1] [i_0 - 1] [i_0] [i_1 - 1] [i_2 - 1] [i_2])));
                var_20 = ((/* implicit */signed char) (~(-9003763397598837065LL)));
            }
            for (unsigned int i_8 = 0; i_8 < 13; i_8 += 2) 
            {
                arr_25 [i_8] [i_1] [i_8] [i_8] |= ((/* implicit */unsigned int) ((2147483647) & (((/* implicit */int) (short)1))));
                arr_26 [(_Bool)1] [i_0] [i_8] = ((/* implicit */signed char) (unsigned char)32);
            }
            for (long long int i_9 = 0; i_9 < 13; i_9 += 3) 
            {
                var_21 = ((/* implicit */signed char) 18446744073709551609ULL);
                /* LoopSeq 1 */
                for (unsigned int i_10 = 1; i_10 < 11; i_10 += 1) 
                {
                    var_22 = ((/* implicit */signed char) ((((/* implicit */int) arr_10 [i_10] [i_0] [i_9] [i_1] [i_0] [i_0 + 1])) - (((/* implicit */int) arr_10 [i_10] [i_0] [i_9] [i_10] [i_9] [i_0]))));
                    var_23 = ((/* implicit */signed char) ((unsigned char) (_Bool)0));
                    var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) -550293867)) && (((/* implicit */_Bool) arr_19 [i_0 - 1] [i_0] [i_0] [i_0 - 1] [i_1 - 1] [i_10]))));
                }
            }
            for (unsigned long long int i_11 = 1; i_11 < 10; i_11 += 4) 
            {
                var_25 = ((/* implicit */int) ((var_1) || (((/* implicit */_Bool) 30ULL))));
                /* LoopSeq 1 */
                for (signed char i_12 = 0; i_12 < 13; i_12 += 2) 
                {
                    arr_37 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) arr_17 [i_0 + 1])) * (((/* implicit */int) arr_17 [i_0 + 1]))));
                    /* LoopSeq 4 */
                    for (unsigned long long int i_13 = 3; i_13 < 11; i_13 += 3) 
                    {
                        arr_40 [i_0] [i_1] [i_11] [i_0] [i_13] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_16 [i_13 - 3] [i_11 + 3] [i_1 + 1] [i_0 - 1])) && (((/* implicit */_Bool) 12913149178995874937ULL))));
                        var_26 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_13 - 2] [i_12] [i_13] [i_13 - 2] [i_13 + 2] [i_13 + 1])) ? (((int) var_9)) : ((+(550293854)))));
                    }
                    for (signed char i_14 = 1; i_14 < 12; i_14 += 1) 
                    {
                        arr_44 [i_0] [(_Bool)1] [i_12] [(signed char)11] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_2))));
                        var_27 = 1129167736;
                        var_28 = ((/* implicit */unsigned char) ((((((/* implicit */int) var_3)) << (((((/* implicit */int) var_0)) + (41))))) >= ((-(((/* implicit */int) arr_11 [i_0] [i_0]))))));
                    }
                    for (int i_15 = 0; i_15 < 13; i_15 += 4) 
                    {
                        var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_28 [i_0] [i_11 + 1] [i_0])) ? (((((/* implicit */int) var_9)) | (((/* implicit */int) (unsigned char)5)))) : (((/* implicit */int) var_0))));
                        var_30 |= ((/* implicit */int) (unsigned char)87);
                        var_31 &= ((/* implicit */unsigned long long int) -581145068552618416LL);
                        var_32 = ((/* implicit */unsigned short) ((int) (-(15ULL))));
                    }
                    for (signed char i_16 = 1; i_16 < 10; i_16 += 3) 
                    {
                        arr_51 [i_0] = ((((/* implicit */_Bool) -1230054695)) ? (550293854) : (((/* implicit */int) arr_29 [i_0] [i_16 - 1] [i_0] [i_12])));
                        var_33 = ((/* implicit */unsigned long long int) (~(var_8)));
                    }
                    /* LoopSeq 1 */
                    for (signed char i_17 = 4; i_17 < 11; i_17 += 1) 
                    {
                        var_34 = ((/* implicit */unsigned char) -581145068552618402LL);
                        var_35 = ((/* implicit */unsigned char) 550293867);
                        arr_56 [i_0] [i_0] [(_Bool)1] [i_11] [(signed char)3] [i_17] = (-(((/* implicit */int) arr_9 [i_1 - 2] [i_0] [i_11 + 2])));
                        var_36 = ((/* implicit */unsigned int) min((var_36), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-118))) : (12913149178995874925ULL))) : (((/* implicit */unsigned long long int) (~(-521100486)))))))));
                    }
                }
                var_37 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 3117547827U)) ? (((/* implicit */int) arr_34 [i_11] [i_1 - 2] [i_0])) : (((/* implicit */int) arr_45 [i_0] [i_0] [i_0] [i_1 + 1] [i_1] [i_1 - 1]))));
            }
        }
        for (unsigned int i_18 = 2; i_18 < 12; i_18 += 3) /* same iter space */
        {
            var_38 *= ((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((1449557222) ^ (((/* implicit */int) (unsigned char)252))))) : (-9003763397598837076LL)));
            /* LoopSeq 1 */
            for (unsigned long long int i_19 = 0; i_19 < 13; i_19 += 3) 
            {
                var_39 = ((/* implicit */signed char) ((((/* implicit */_Bool) 2147483647)) ? (arr_14 [i_19] [i_18 - 1] [i_19] [i_18] [8]) : (0U)));
                /* LoopSeq 1 */
                for (signed char i_20 = 0; i_20 < 13; i_20 += 1) 
                {
                    /* LoopSeq 2 */
                    for (signed char i_21 = 0; i_21 < 13; i_21 += 1) 
                    {
                        arr_65 [i_0] [i_20] [i_19] [i_18] [i_0] = ((/* implicit */unsigned char) ((unsigned int) 13086693429157943425ULL));
                        var_40 = ((/* implicit */unsigned char) arr_32 [i_0]);
                        arr_66 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) arr_49 [i_0 - 1] [7U] [i_18 + 1] [i_20] [i_20] [i_0 - 1] [i_0 - 1])) ? (-9003763397598837070LL) : (((/* implicit */long long int) 1129167738))));
                        arr_67 [4ULL] [4ULL] &= ((/* implicit */signed char) ((((/* implicit */_Bool) 3117547809U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_52 [i_0 + 1] [(unsigned char)6] [i_18] [0U] [i_18] [i_18] [12]))));
                        arr_68 [i_0] [i_20] [i_19] [i_18] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)-125)) | (131008)));
                    }
                    for (long long int i_22 = 0; i_22 < 13; i_22 += 2) 
                    {
                        var_41 = ((/* implicit */short) max((var_41), (((/* implicit */short) ((((/* implicit */_Bool) arr_55 [i_0 - 1] [i_18 + 1] [i_18 - 1] [i_19] [i_22])) ? (arr_35 [i_0] [i_0] [10LL] [i_22]) : (((/* implicit */int) arr_19 [i_19] [i_18] [3LL] [i_20] [i_0 + 1] [i_20])))))));
                        arr_72 [i_0] [i_18] [i_19] [i_0] [(_Bool)1] [10] = ((/* implicit */signed char) -4051551222309510703LL);
                    }
                    /* LoopSeq 1 */
                    for (signed char i_23 = 1; i_23 < 12; i_23 += 4) 
                    {
                        var_42 = ((((/* implicit */int) ((unsigned char) 1177419456U))) * (((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) (signed char)(-127 - 1)))))));
                        var_43 = ((/* implicit */signed char) min((var_43), (((/* implicit */signed char) (+(arr_61 [12LL] [i_20] [i_18 - 2] [12LL]))))));
                    }
                }
            }
        }
        arr_75 [i_0] = ((/* implicit */short) ((((1015000386) << (((arr_16 [i_0 + 1] [i_0] [i_0] [i_0 - 1]) - (4174536961U))))) & (((/* implicit */int) var_9))));
        var_44 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)60)) != (((/* implicit */int) arr_54 [i_0] [i_0] [i_0 + 1] [i_0 - 1] [i_0] [i_0 - 1]))));
        /* LoopSeq 2 */
        for (unsigned short i_24 = 1; i_24 < 11; i_24 += 3) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_25 = 0; i_25 < 13; i_25 += 3) 
            {
                var_45 = ((/* implicit */signed char) ((int) ((((/* implicit */_Bool) (signed char)-32)) ? (1484706704U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)49))))));
                arr_83 [i_0] [i_24 - 1] = ((/* implicit */_Bool) 14680834971479531265ULL);
                /* LoopSeq 1 */
                for (long long int i_26 = 0; i_26 < 13; i_26 += 4) 
                {
                    var_46 *= ((/* implicit */int) var_1);
                    arr_87 [i_0] [i_0] [i_0 + 1] [i_26] = ((/* implicit */unsigned char) (~(arr_33 [i_0] [i_0])));
                }
                arr_88 [i_0] [i_24 + 1] [i_25] [i_25] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 8235384880513032553LL)) ? (((/* implicit */long long int) arr_35 [i_0 + 1] [i_24] [i_24 + 2] [i_0])) : (8235384880513032553LL)));
            }
            var_47 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_82 [i_0 - 1] [i_24 + 1])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (signed char)32))));
        }
        for (unsigned short i_27 = 1; i_27 < 11; i_27 += 3) /* same iter space */
        {
            var_48 = ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [(unsigned char)9] [i_0] [i_27] [i_27] [i_27] [i_27])))))));
            var_49 = ((/* implicit */signed char) (-(((/* implicit */int) (short)3016))));
        }
    }
    for (unsigned short i_28 = 0; i_28 < 17; i_28 += 3) 
    {
        var_50 -= ((/* implicit */int) max((((unsigned short) arr_93 [12U])), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) 0LL)))))));
        var_51 = ((/* implicit */unsigned int) max((var_51), (((/* implicit */unsigned int) ((max((arr_96 [(_Bool)0]), (((/* implicit */long long int) var_5)))) + (((var_1) ? (arr_96 [8]) : (arr_96 [(short)6]))))))));
    }
    /* LoopSeq 2 */
    for (unsigned long long int i_29 = 0; i_29 < 15; i_29 += 2) 
    {
        arr_99 [i_29] [i_29] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_6) + (((/* implicit */unsigned long long int) (-(2771885389U))))))) ? (min((arr_95 [i_29] [i_29]), (((/* implicit */unsigned int) arr_94 [i_29])))) : (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)99)))))));
        var_52 |= ((/* implicit */unsigned int) ((unsigned char) (-((~(14963206286472723777ULL))))));
    }
    /* vectorizable */
    for (int i_30 = 4; i_30 < 20; i_30 += 3) 
    {
        arr_104 [i_30] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_101 [i_30 + 2] [i_30 - 2]))) + (arr_100 [i_30 + 2])));
        arr_105 [(signed char)13] = ((/* implicit */unsigned char) -9003763397598837067LL);
        var_53 = ((/* implicit */signed char) (_Bool)1);
    }
}
