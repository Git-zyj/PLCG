/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76795
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76795 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76795
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
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 3) /* same iter space */
    {
        arr_3 [i_0] [(signed char)5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (arr_1 [i_0]) : (((9027111469920336851ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))));
        var_12 = ((/* implicit */int) (~(arr_1 [i_0])));
    }
    for (long long int i_1 = 0; i_1 < 20; i_1 += 3) /* same iter space */
    {
        var_13 = ((/* implicit */unsigned char) ((11670575468908859917ULL) & (18446744073709551601ULL)));
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_2 = 0; i_2 < 20; i_2 += 4) 
        {
            /* LoopNest 3 */
            for (signed char i_3 = 0; i_3 < 20; i_3 += 2) 
            {
                for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 1) 
                {
                    for (long long int i_5 = 1; i_5 < 17; i_5 += 2) 
                    {
                        {
                            var_14 &= ((((18446744073709551596ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))) ? (((/* implicit */unsigned long long int) (-(arr_12 [i_1] [i_2] [i_4] [i_4] [i_5] [(signed char)9])))) : (((((/* implicit */_Bool) arr_12 [i_1] [12ULL] [2ULL] [i_3] [i_4] [i_5])) ? (((/* implicit */unsigned long long int) arr_12 [i_1] [i_2] [i_3] [i_4] [i_4] [i_5])) : (11670575468908859917ULL))));
                            var_15 = arr_9 [i_4] [i_3] [i_2];
                            var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) ((11670575468908859918ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [19])))))))))));
                        }
                    } 
                } 
            } 
            var_17 = ((/* implicit */long long int) var_0);
            arr_15 [i_2] [i_1] &= ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */int) arr_4 [i_1])) / (((/* implicit */int) var_10))))) * ((+(-608241050390982693LL)))));
            var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (18446744073709551613ULL)))) ? (((((/* implicit */int) var_5)) * (((/* implicit */int) var_4)))) : ((+(((/* implicit */int) var_0)))))))));
        }
        /* LoopSeq 2 */
        for (unsigned long long int i_6 = 0; i_6 < 20; i_6 += 4) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (short i_7 = 1; i_7 < 19; i_7 += 3) 
            {
                var_19 = ((/* implicit */long long int) ((signed char) arr_12 [i_1] [5LL] [i_6] [5ULL] [i_7] [i_7]));
                var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)0)) && (((/* implicit */_Bool) (short)0))));
                var_21 = arr_4 [(unsigned char)11];
            }
            var_22 = ((/* implicit */int) (signed char)77);
            var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) min((6776168604800691699ULL), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 11790089954510893978ULL)) ? (3019841717U) : (3019841717U))) >> (((((/* implicit */int) arr_17 [i_6] [i_1] [i_1])) - (6795)))))))))));
        }
        for (signed char i_8 = 2; i_8 < 19; i_8 += 4) 
        {
            /* LoopSeq 4 */
            for (int i_9 = 0; i_9 < 20; i_9 += 4) 
            {
                /* LoopNest 2 */
                for (short i_10 = 0; i_10 < 20; i_10 += 3) 
                {
                    for (signed char i_11 = 0; i_11 < 20; i_11 += 4) 
                    {
                        {
                            var_24 = ((/* implicit */signed char) min((((((/* implicit */int) var_3)) - (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-1))) < (8796093022207LL)))))), (((/* implicit */int) arr_26 [i_8] [i_9] [i_10] [i_11]))));
                            var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) ((((/* implicit */_Bool) (short)32763)) ? (((((/* implicit */int) (signed char)-1)) * (((((/* implicit */int) arr_17 [(signed char)10] [(short)18] [i_11])) << (((((/* implicit */int) (signed char)-78)) + (94))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) 1275125583U))))))))));
                            arr_32 [i_1] [3ULL] [3ULL] [i_10] [3ULL] = ((/* implicit */_Bool) arr_8 [i_1] [i_9] [18LL]);
                        }
                    } 
                } 
                arr_33 [i_9] [i_8] [(short)4] [i_9] = arr_18 [i_9] [i_8] [i_1];
                arr_34 [4ULL] [(short)6] [i_9] [(short)6] = ((/* implicit */int) (short)24950);
                var_26 = ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) arr_22 [i_1] [i_8] [i_9])) + ((+(15ULL))))) - (((/* implicit */unsigned long long int) min((max((4021721337U), (arr_29 [11ULL] [i_1] [i_8 - 1] [i_8] [i_8] [i_1]))), (((/* implicit */unsigned int) arr_19 [i_8 - 2] [i_1])))))));
            }
            /* vectorizable */
            for (unsigned long long int i_12 = 0; i_12 < 20; i_12 += 1) 
            {
                /* LoopSeq 1 */
                for (unsigned short i_13 = 0; i_13 < 20; i_13 += 2) 
                {
                    var_27 = ((/* implicit */long long int) var_10);
                    var_28 = ((/* implicit */unsigned long long int) ((arr_7 [i_1] [i_1]) / (((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [13])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_18 [i_8] [i_12] [i_12])))))));
                    arr_40 [i_1] [i_8] [13U] [i_13] [(unsigned char)0] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)5637)) & (((/* implicit */int) arr_21 [i_8 - 2]))));
                }
                var_29 *= arr_35 [i_1] [i_8] [14U];
            }
            for (unsigned long long int i_14 = 2; i_14 < 19; i_14 += 2) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_15 = 2; i_15 < 19; i_15 += 4) 
                {
                    for (unsigned char i_16 = 0; i_16 < 20; i_16 += 1) 
                    {
                        {
                            arr_49 [i_14] [16LL] [i_16] [(signed char)18] [i_14 + 1] = ((/* implicit */unsigned long long int) var_5);
                            arr_50 [i_15] [i_16] [i_14] [6ULL] [i_15] &= ((/* implicit */short) arr_14 [i_1] [i_8] [i_14] [i_15] [i_16]);
                        }
                    } 
                } 
                arr_51 [(unsigned char)17] [i_8] [i_14] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) var_0)) * (((/* implicit */int) arr_35 [i_8] [i_8] [i_14])))) * (((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) (signed char)-96))))))));
            }
            /* vectorizable */
            for (unsigned long long int i_17 = 2; i_17 < 19; i_17 += 2) /* same iter space */
            {
                /* LoopNest 2 */
                for (signed char i_18 = 0; i_18 < 20; i_18 += 1) 
                {
                    for (short i_19 = 0; i_19 < 20; i_19 += 3) 
                    {
                        {
                            var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_26 [i_8 - 1] [i_8] [i_17 + 1] [i_18])) ? (-7805400589389835037LL) : (((/* implicit */long long int) ((/* implicit */int) arr_26 [i_8 + 1] [i_17] [i_17 - 2] [i_19])))));
                            var_31 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_52 [i_19] [i_8] [i_1]) ^ (((/* implicit */int) var_5))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)59883))) < (9858915010791373100ULL))))) : (((((/* implicit */_Bool) 2147483647)) ? (2533089389U) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))));
                        }
                    } 
                } 
                var_32 = ((/* implicit */signed char) (short)12834);
                /* LoopSeq 2 */
                for (short i_20 = 1; i_20 < 18; i_20 += 3) 
                {
                    arr_62 [i_1] [i_8] [i_17] [i_20] = ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned short)5653)) : (((/* implicit */int) arr_53 [(signed char)12])))));
                    var_33 &= ((/* implicit */short) ((int) var_4));
                    var_34 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)227)) || (((/* implicit */_Bool) 11753801810263104214ULL)))))));
                    arr_63 [i_1] [i_8] [i_17] [i_20] &= ((/* implicit */short) ((((/* implicit */int) arr_2 [i_17])) | ((-(((/* implicit */int) var_3))))));
                    var_35 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((long long int) 11670575468908859917ULL)))));
                }
                for (unsigned char i_21 = 0; i_21 < 20; i_21 += 3) 
                {
                    arr_67 [5U] [i_21] [(signed char)11] [i_17 + 1] [i_21] [8LL] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */int) (signed char)-1)) * (((/* implicit */int) var_8)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_60 [i_1] [(signed char)8] [14ULL] [i_17] [i_21] [i_21])))))));
                    arr_68 [i_21] [(short)18] [i_21] [i_8] [(short)18] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) -1LL)) ? (4294967287U) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))));
                }
            }
            var_36 = ((/* implicit */signed char) max((var_36), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_65 [i_8]))))) ? ((+(((/* implicit */int) arr_45 [(signed char)11])))) : ((-(((/* implicit */int) var_1))))))) ? (max((((/* implicit */long long int) min(((unsigned short)15760), (((/* implicit */unsigned short) var_5))))), (-254346713027527798LL))) : (((/* implicit */long long int) ((/* implicit */int) ((short) var_9)))))))));
            var_37 += ((/* implicit */long long int) var_6);
            var_38 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (+(((/* implicit */int) var_9))))) && (((/* implicit */_Bool) ((signed char) (signed char)0))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_11 [i_1] [i_8]))));
            var_39 *= ((/* implicit */unsigned char) (-(arr_38 [i_1] [i_8])));
        }
    }
    /* vectorizable */
    for (long long int i_22 = 0; i_22 < 20; i_22 += 3) /* same iter space */
    {
        arr_71 [i_22] = ((/* implicit */long long int) ((unsigned int) (short)9259));
        var_40 = ((/* implicit */signed char) ((((((/* implicit */int) (short)9553)) + (((/* implicit */int) arr_30 [i_22] [i_22] [i_22] [i_22] [(unsigned char)15])))) << (((/* implicit */int) ((-3112602447252350040LL) <= (((/* implicit */long long int) ((/* implicit */int) arr_30 [i_22] [(signed char)6] [i_22] [(short)9] [11ULL]))))))));
        arr_72 [i_22] [i_22] = ((/* implicit */unsigned long long int) ((unsigned int) (+(((/* implicit */int) var_3)))));
        var_41 += ((((/* implicit */int) (short)-32765)) * ((+(((/* implicit */int) var_3)))));
    }
    for (long long int i_23 = 0; i_23 < 20; i_23 += 3) /* same iter space */
    {
        var_42 = arr_59 [i_23] [3LL];
        var_43 = ((/* implicit */short) ((unsigned int) var_6));
    }
    var_44 = ((/* implicit */long long int) (short)-24954);
}
