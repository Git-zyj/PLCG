/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73895
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73895 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73895
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
    for (long long int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) ((min((min((arr_0 [i_0]), (arr_1 [i_0]))), (((((/* implicit */_Bool) var_2)) ? (arr_0 [i_0]) : (arr_0 [i_0]))))) / (min((max((arr_1 [i_0]), (arr_0 [i_0]))), (arr_1 [i_0])))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 13; i_3 += 4) 
                    {
                        /* LoopSeq 3 */
                        for (signed char i_4 = 1; i_4 < 11; i_4 += 4) 
                        {
                            var_11 = ((/* implicit */short) arr_10 [i_0] [i_0] [i_0]);
                            var_12 = ((/* implicit */unsigned char) 12U);
                        }
                        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) /* same iter space */
                        {
                            var_13 = ((/* implicit */signed char) 30U);
                            var_14 = ((/* implicit */unsigned short) arr_1 [i_0]);
                        }
                        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) /* same iter space */
                        {
                            arr_16 [i_6] [(unsigned short)3] [(signed char)5] [(unsigned short)3] [(_Bool)1] [4LL] [i_6] = ((/* implicit */unsigned long long int) ((33U) <= (arr_5 [i_6] [i_6 - 1] [i_6 - 1])));
                            arr_17 [i_6] [i_1] [i_6] [i_6] = ((/* implicit */unsigned long long int) var_0);
                            var_15 &= (!(((/* implicit */_Bool) arr_5 [i_6] [i_2] [i_0])));
                        }
                        arr_18 [0LL] [0LL] [0LL] [i_3] [i_3] [i_3] = ((/* implicit */unsigned short) arr_14 [10U] [i_3] [10U] [i_3] [i_3]);
                        var_16 = ((/* implicit */long long int) (-(arr_15 [i_0] [i_0] [i_3] [i_3] [i_0] [i_0])));
                        var_17 = ((/* implicit */_Bool) (~(arr_13 [i_0] [i_1] [i_2] [i_1] [i_3])));
                    }
                    for (unsigned char i_7 = 0; i_7 < 13; i_7 += 4) /* same iter space */
                    {
                        var_18 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) && (((/* implicit */_Bool) 4133218319U)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 4133218289U)) ? (arr_5 [i_0] [(unsigned short)11] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))) ? (max((arr_7 [i_0] [i_0]), (var_4))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))));
                        arr_22 [9LL] [(unsigned short)5] [9LL] [(unsigned char)0] [i_2] = ((/* implicit */_Bool) max((((min((-7812214785121964802LL), (((/* implicit */long long int) (_Bool)1)))) % (arr_8 [i_0]))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [i_0] [i_0] [12U] [i_0] [(_Bool)1])) ? (40126471U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)62))))))));
                        /* LoopSeq 4 */
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            arr_25 [i_0] [(signed char)2] [i_8] [i_7] [(signed char)2] = ((/* implicit */unsigned short) ((signed char) (_Bool)0));
                            var_19 = ((/* implicit */unsigned short) var_0);
                        }
                        for (long long int i_9 = 4; i_9 < 12; i_9 += 2) /* same iter space */
                        {
                            arr_28 [4] [4] [i_2] [i_7] [i_7] [i_9 - 3] = ((/* implicit */unsigned long long int) (((~(((/* implicit */int) arr_20 [i_9 - 3] [i_9 - 2] [i_9 - 3] [i_9 - 2])))) - (((/* implicit */int) (!(((/* implicit */_Bool) arr_20 [i_9 - 3] [i_9 - 2] [i_9 - 3] [i_9 - 1])))))));
                            var_20 = ((/* implicit */int) max((((((/* implicit */_Bool) (short)-11249)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) 0LL)))) : ((~(18446744073709551615ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_9 [i_9 + 1] [i_9] [i_9 - 2] [i_9 - 3] [i_9])) >> (((((((arr_1 [i_0]) + (9223372036854775807LL))) >> (((/* implicit */int) (_Bool)1)))) - (4146608184980159006LL))))))));
                            var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) ((long long int) var_7)))));
                        }
                        /* vectorizable */
                        for (long long int i_10 = 4; i_10 < 12; i_10 += 2) /* same iter space */
                        {
                            arr_32 [12LL] [i_0] [i_1] [(short)11] [i_2] [12LL] [i_10] = ((/* implicit */unsigned short) arr_4 [i_2] [i_2]);
                            var_22 = ((/* implicit */int) (unsigned char)197);
                        }
                        for (long long int i_11 = 4; i_11 < 12; i_11 += 2) /* same iter space */
                        {
                            var_23 = ((/* implicit */int) arr_9 [i_11 - 2] [i_2] [i_2] [i_1] [(unsigned char)3]);
                            arr_35 [i_0] [i_0] [6LL] [i_2] [i_7] [i_11] = ((/* implicit */short) max((arr_5 [i_0] [i_0] [i_0]), (((/* implicit */unsigned int) max((((/* implicit */int) ((arr_5 [i_0] [i_0] [9ULL]) < (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0])))))), (var_0))))));
                            var_24 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) min((arr_23 [(short)4] [i_7] [i_11] [i_11 - 4] [i_11 - 4]), (arr_23 [8ULL] [i_11] [i_11 - 1] [i_11 - 4] [i_11])))), (arr_26 [i_0] [3LL] [3LL] [i_0] [i_0])));
                            arr_36 [i_0] [i_1] [i_2] [i_2] [i_2] [i_11] = arr_1 [i_0];
                        }
                        arr_37 [i_0] [i_0] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (((((-(((/* implicit */int) var_7)))) + (2147483647))) << (((4254840834U) - (4254840834U))))))));
                    }
                    /* vectorizable */
                    for (unsigned char i_12 = 0; i_12 < 13; i_12 += 4) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (long long int i_13 = 0; i_13 < 13; i_13 += 3) 
                        {
                            var_25 = (~(5232697843235966924LL));
                            var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_6 [i_1] [i_1] [i_1])) : (((/* implicit */int) var_7))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned char)193)) : (((/* implicit */int) arr_33 [i_0] [i_1] [i_2] [i_12] [i_2]))))) : (-3649681138475164430LL)));
                            arr_43 [i_13] [i_12] [i_12] [i_1] [i_2] [i_1] [i_13] = ((/* implicit */unsigned int) (signed char)-108);
                        }
                        arr_44 [i_0] [i_0] [i_0] [(_Bool)1] = ((/* implicit */unsigned int) (unsigned char)62);
                        var_27 = ((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_0] [i_2] [i_2])) * (((((/* implicit */int) var_8)) / (((/* implicit */int) var_8))))));
                    }
                    /* vectorizable */
                    for (short i_14 = 0; i_14 < 13; i_14 += 4) 
                    {
                        var_28 *= ((/* implicit */_Bool) var_5);
                        arr_48 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) > (arr_14 [12ULL] [i_14] [i_1] [i_2] [i_14])));
                        var_29 &= ((/* implicit */unsigned long long int) ((22U) == (4254840801U)));
                    }
                    arr_49 [i_0] = ((/* implicit */short) var_2);
                }
            } 
        } 
    }
    /* LoopSeq 1 */
    for (unsigned char i_15 = 1; i_15 < 12; i_15 += 1) 
    {
        var_30 = ((/* implicit */signed char) ((long long int) ((((/* implicit */_Bool) ((unsigned long long int) arr_51 [i_15 + 3]))) ? ((~(((/* implicit */int) (short)32767)))) : (((/* implicit */int) arr_51 [i_15])))));
        var_31 = ((/* implicit */int) arr_52 [i_15]);
    }
    var_32 = ((/* implicit */int) ((((/* implicit */_Bool) max((var_6), (((/* implicit */unsigned long long int) (+(var_3))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_9))) > (((long long int) (unsigned char)65)))))) : (var_3)));
    var_33 = ((/* implicit */unsigned short) max((((/* implicit */long long int) 33U)), ((+(((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) var_5)) : (2500008442288362353LL)))))));
    /* LoopSeq 1 */
    for (int i_16 = 0; i_16 < 20; i_16 += 2) 
    {
        arr_56 [i_16] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) 17050615073290555157ULL)) ? (5811818806670529751LL) : (arr_54 [i_16]))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) arr_55 [i_16])))))));
        /* LoopSeq 2 */
        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) /* same iter space */
        {
            arr_60 [i_17] [i_17] = ((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) (~(arr_54 [i_17])))))))));
            arr_61 [i_17] [i_17] [15LL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) arr_59 [i_16] [i_17])) != (((/* implicit */int) var_1))))) >> (((((((/* implicit */_Bool) arr_55 [i_16])) ? (((/* implicit */int) arr_59 [i_16] [i_16])) : (((/* implicit */int) arr_59 [(unsigned short)9] [i_17])))) + (80)))))) : (((unsigned long long int) arr_58 [i_16] [i_17] [i_17]))));
            var_34 = ((/* implicit */int) var_10);
        }
        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) /* same iter space */
        {
            arr_66 [i_16] [i_16] = ((/* implicit */int) max((min((((((/* implicit */_Bool) arr_62 [i_16] [(short)12])) ? (var_4) : (((/* implicit */unsigned long long int) arr_63 [i_16] [i_16])))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) + (arr_57 [i_18])))))), (((/* implicit */unsigned long long int) arr_62 [i_16] [i_18]))));
            arr_67 [i_16] [i_16] [0LL] = ((/* implicit */unsigned int) (+(((/* implicit */int) (short)-32760))));
            arr_68 [i_16] [i_16] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(arr_62 [i_16] [i_16])))) ? ((~(arr_63 [i_18] [i_18]))) : (arr_62 [i_16] [i_18])));
        }
        var_35 = ((/* implicit */short) max((var_35), (((/* implicit */short) max((((/* implicit */long long int) min((max(((unsigned short)5841), (((/* implicit */unsigned short) (_Bool)1)))), (((/* implicit */unsigned short) (_Bool)1))))), (arr_58 [i_16] [i_16] [i_16]))))));
    }
}
