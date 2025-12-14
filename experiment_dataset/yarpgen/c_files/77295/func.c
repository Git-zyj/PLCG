/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77295
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77295 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77295
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
    for (long long int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        var_11 += ((/* implicit */_Bool) (-(((((/* implicit */_Bool) ((arr_0 [i_0]) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)2848)))))) ? (((/* implicit */int) min(((unsigned char)128), (((/* implicit */unsigned char) (_Bool)1))))) : (((/* implicit */int) min(((unsigned short)34053), (arr_2 [i_0]))))))));
        /* LoopSeq 3 */
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            arr_5 [(_Bool)1] = ((/* implicit */unsigned int) ((_Bool) (~(((arr_0 [i_0]) * (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-8))))))));
            arr_6 [i_1] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (-(min((arr_0 [5ULL]), (((/* implicit */unsigned int) (short)(-32767 - 1)))))))), ((-(arr_4 [i_0])))));
            /* LoopSeq 3 */
            /* vectorizable */
            for (short i_2 = 2; i_2 < 11; i_2 += 3) /* same iter space */
            {
                var_12 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1672797509262278311LL)) ? (((/* implicit */int) (unsigned short)34045)) : (2147483647)))) ^ (arr_3 [i_2 - 1] [i_1])));
                arr_9 [(unsigned short)5] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)34053)) && ((_Bool)1)));
                var_13 += ((/* implicit */unsigned short) (((((_Bool)1) ? (arr_3 [i_0] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))))) << (((((/* implicit */int) ((signed char) 3774289991U))) - (47)))));
                /* LoopSeq 2 */
                for (short i_3 = 2; i_3 < 10; i_3 += 1) 
                {
                    arr_13 [i_0] [(signed char)11] [i_2 + 1] [i_3] [i_2 + 1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((1619999909U) >> (((/* implicit */int) (_Bool)1))))) < (((((/* implicit */_Bool) (unsigned short)34025)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-86))) : (arr_3 [i_2 + 1] [i_3 - 1])))));
                    var_14 = ((/* implicit */unsigned long long int) ((4294967285U) & (((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_1] [i_2 - 1])) << (((((/* implicit */int) arr_1 [i_0] [i_1])) - (18118))))))));
                }
                for (unsigned char i_4 = 0; i_4 < 12; i_4 += 1) 
                {
                    arr_18 [i_4] [i_4] [0ULL] [i_4] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) (unsigned short)31482)) : (((/* implicit */int) (signed char)-119))))));
                    var_15 &= ((/* implicit */signed char) ((_Bool) arr_10 [i_2 - 1] [i_2 - 1] [i_2 + 1] [i_2 - 2]));
                    var_16 |= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_15 [7ULL])))))));
                    var_17 -= (unsigned short)34053;
                    var_18 = (~(arr_7 [i_2 + 1] [i_2 + 1] [i_2] [i_2]));
                }
            }
            /* vectorizable */
            for (short i_5 = 2; i_5 < 11; i_5 += 3) /* same iter space */
            {
                var_19 -= ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) 2382513198U)) && (((/* implicit */_Bool) arr_20 [i_0]))))) * ((~(((/* implicit */int) (signed char)110))))));
                var_20 = ((((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_1] [i_0]))))) ? (((/* implicit */unsigned long long int) (+(arr_21 [(signed char)1] [(_Bool)1])))) : (((0ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)116))))));
                /* LoopSeq 3 */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    arr_26 [i_0] [i_1] [9ULL] [i_6] = ((/* implicit */long long int) 2147483647);
                    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)110))) == (18446744073709551609ULL)));
                    var_22 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)251))));
                    arr_27 [i_0] [(signed char)10] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) arr_16 [5ULL] [i_1] [i_1] [3U] [i_1] [i_1])) <= ((+((-2147483647 - 1))))));
                    /* LoopSeq 1 */
                    for (unsigned short i_7 = 2; i_7 < 10; i_7 += 1) 
                    {
                        arr_31 [i_5 - 2] [i_1] &= ((/* implicit */long long int) ((((2147483647) & (((/* implicit */int) (unsigned short)0)))) == (-2147483647)));
                        var_23 &= ((/* implicit */unsigned int) (((-(arr_24 [(unsigned short)2] [i_1] [i_1]))) < (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-26308)))))));
                    }
                }
                for (unsigned long long int i_8 = 0; i_8 < 12; i_8 += 2) 
                {
                    var_24 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)13))))) != (((((/* implicit */_Bool) (signed char)-91)) ? (arr_3 [i_0] [i_8]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_5 + 1])))))));
                    var_25 += ((/* implicit */unsigned char) ((((((((/* implicit */int) arr_22 [i_0] [i_1] [(signed char)3])) | (((/* implicit */int) (short)-32741)))) + (2147483647))) >> ((((+(arr_24 [i_0] [i_0] [i_5 - 1]))) - (10669753551181612961ULL)))));
                }
                for (unsigned short i_9 = 0; i_9 < 12; i_9 += 3) 
                {
                    arr_39 [i_0] [i_0] [i_1] [0ULL] [8LL] [i_0] &= ((/* implicit */long long int) (unsigned char)252);
                    var_26 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_33 [i_5 - 2] [i_5 - 1] [i_5] [i_5 - 1])) ? (((/* implicit */int) arr_16 [i_5 - 1] [i_5 + 1] [i_5] [i_5 + 1] [i_5 + 1] [i_5 - 1])) : (((/* implicit */int) arr_16 [i_5 + 1] [i_5 - 2] [i_5] [i_5 - 2] [i_5] [i_5 - 1]))));
                    /* LoopSeq 1 */
                    for (unsigned int i_10 = 3; i_10 < 11; i_10 += 3) 
                    {
                        var_27 *= ((/* implicit */long long int) arr_10 [i_0] [i_1] [0ULL] [i_9]);
                        var_28 |= ((/* implicit */int) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) ^ (arr_35 [i_9])))));
                        var_29 = ((/* implicit */signed char) ((_Bool) arr_17 [i_1] [(signed char)8] [i_1] [i_1]));
                        arr_42 [i_0] [i_1] [6] [i_5] [i_9] [i_1] [i_10] &= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_2 [i_5])) ? (2235295508061333968ULL) : (((/* implicit */unsigned long long int) arr_0 [i_1])))) + (((/* implicit */unsigned long long int) arr_0 [i_5]))));
                        var_30 = ((/* implicit */_Bool) max((var_30), (((/* implicit */_Bool) ((((/* implicit */long long int) arr_33 [i_5 - 1] [i_10 - 3] [i_10 - 3] [i_10 - 1])) ^ (arr_14 [i_10] [i_10 - 1] [i_10] [i_10] [i_10] [i_10]))))));
                    }
                }
            }
            for (unsigned char i_11 = 0; i_11 < 12; i_11 += 4) 
            {
                var_31 = ((/* implicit */_Bool) max((var_31), (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)32757))))), (min((min((((/* implicit */unsigned long long int) (signed char)-111)), (3861317767373453636ULL))), (((/* implicit */unsigned long long int) min((arr_28 [i_11] [i_11] [i_11]), (((/* implicit */unsigned short) arr_43 [i_0] [i_1] [i_11]))))))))))));
                var_32 *= ((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))));
                arr_45 [i_0] [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)237)), ((unsigned short)18594))))) / (min((((/* implicit */long long int) (unsigned char)2)), (arr_34 [i_11]))))))));
                /* LoopSeq 2 */
                for (signed char i_12 = 2; i_12 < 11; i_12 += 4) 
                {
                    var_33 = (+(19LL));
                    /* LoopSeq 3 */
                    for (int i_13 = 0; i_13 < 12; i_13 += 4) /* same iter space */
                    {
                        var_34 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) (unsigned short)7158)) : (((/* implicit */int) (short)32743)))), (((/* implicit */int) (short)-28550))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!((_Bool)1))))) : ((~((-(arr_35 [i_0])))))));
                        var_35 = ((/* implicit */unsigned long long int) max((var_35), (((((unsigned long long int) max((arr_20 [i_0]), (((/* implicit */unsigned short) (short)-18653))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) max((arr_51 [i_11] [i_11] [i_11] [i_11]), (((/* implicit */unsigned long long int) -1280020368))))) && (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_0 [i_13])), (18446744073709551596ULL))))))))))));
                        var_36 ^= (!(((/* implicit */_Bool) 18446744073709551610ULL)));
                        arr_52 [i_0] [i_1] [i_11] [i_11] [i_12] [i_12] [i_13] = ((/* implicit */signed char) 4294967269U);
                    }
                    /* vectorizable */
                    for (int i_14 = 0; i_14 < 12; i_14 += 4) /* same iter space */
                    {
                        arr_57 [i_1] = ((/* implicit */unsigned short) ((int) (short)5338));
                        var_37 = ((/* implicit */_Bool) min((var_37), (((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)191)))))));
                    }
                    /* vectorizable */
                    for (int i_15 = 0; i_15 < 12; i_15 += 4) /* same iter space */
                    {
                        var_38 = ((/* implicit */unsigned long long int) (-(((unsigned int) (_Bool)0))));
                        var_39 &= ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_0]))) * (3194071681926804864ULL))));
                    }
                    var_40 *= ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) arr_21 [i_0] [i_1])), (((((((/* implicit */_Bool) (signed char)-83)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_38 [i_0] [i_0] [i_1] [i_11] [i_11] [i_12]))) : (arr_55 [(unsigned short)0] [i_0] [i_11] [(unsigned char)2] [5]))) >> (((15835584718246087319ULL) - (15835584718246087317ULL)))))));
                }
                for (unsigned char i_16 = 0; i_16 < 12; i_16 += 2) 
                {
                    var_41 |= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((/* implicit */int) (!(((/* implicit */_Bool) (short)4188))))), (arr_47 [i_0] [i_0] [i_0] [i_0] [2]))))));
                    /* LoopSeq 3 */
                    for (unsigned short i_17 = 0; i_17 < 12; i_17 += 3) /* same iter space */
                    {
                        var_42 = ((/* implicit */_Bool) ((((/* implicit */int) arr_23 [i_11] [i_11] [(unsigned char)3] [i_16])) + (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_29 [i_0] [i_0] [(short)9] [i_0] [i_0])) ? (((/* implicit */long long int) arr_47 [i_0] [i_0] [i_11] [i_16] [i_17])) : (7331047716312182318LL)))) < (((((/* implicit */_Bool) arr_30 [i_16] [(signed char)7] [i_11] [i_16] [i_17] [i_11] [i_11])) ? (((/* implicit */unsigned long long int) arr_11 [(unsigned short)10] [i_16])) : (12364988420716243984ULL))))))));
                        var_43 = ((/* implicit */short) min((var_43), (((/* implicit */short) max((min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_19 [i_17] [i_17] [i_17] [0LL])) ? (((/* implicit */int) arr_41 [i_11] [i_17] [i_11] [i_11] [i_11])) : (((/* implicit */int) arr_1 [i_0] [(unsigned short)3]))))), (min((((/* implicit */long long int) (signed char)110)), (19LL))))), (((/* implicit */long long int) (!((((_Bool)1) && (arr_50 [i_0] [(unsigned short)2] [11ULL] [i_16] [i_17])))))))))));
                    }
                    for (unsigned short i_18 = 0; i_18 < 12; i_18 += 3) /* same iter space */
                    {
                        var_44 = ((/* implicit */unsigned short) max((var_44), (((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) + (6477429120228079150LL))))));
                        var_45 *= ((/* implicit */long long int) min((((/* implicit */unsigned int) (_Bool)1)), (0U)));
                        arr_69 [i_0] [(unsigned char)10] [i_11] [i_16] [i_18] = ((/* implicit */unsigned long long int) ((max((((long long int) 11479440153385891737ULL)), (min((-20LL), (((/* implicit */long long int) (short)-32759)))))) <= (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_46 [i_0] [i_1] [(unsigned short)2] [i_1])) ? (arr_47 [i_0] [i_1] [i_11] [i_16] [i_18]) : (-2006288947))))))));
                        var_46 |= ((/* implicit */signed char) max(((unsigned char)179), (((/* implicit */unsigned char) (signed char)-6))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_19 = 0; i_19 < 12; i_19 += 4) 
                    {
                        var_47 = (~(((((/* implicit */int) (unsigned char)252)) ^ (((/* implicit */int) (short)-15308)))));
                        arr_72 [i_1] [i_1] [0] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_30 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_30 [i_0] [i_0] [(_Bool)1] [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_0] [i_1]))));
                        arr_73 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (-(0U)));
                        var_48 = ((/* implicit */unsigned long long int) min((var_48), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) arr_3 [i_0] [i_16]))) ? (((/* implicit */int) arr_66 [i_0] [i_1] [(signed char)2] [i_16] [i_19])) : (((arr_11 [i_0] [i_19]) ^ (((/* implicit */int) arr_71 [i_0] [i_1] [i_11])))))))));
                        arr_74 [i_0] = ((/* implicit */signed char) ((_Bool) ((-20LL) - (-8064812039709321560LL))));
                    }
                }
                var_49 *= ((/* implicit */_Bool) min((max((max((11ULL), (((/* implicit */unsigned long long int) (_Bool)1)))), (((/* implicit */unsigned long long int) (short)(-32767 - 1))))), ((~(max((18446744073709551603ULL), (((/* implicit */unsigned long long int) (unsigned short)4080))))))));
            }
        }
        for (unsigned int i_20 = 1; i_20 < 9; i_20 += 1) 
        {
            var_50 = min(((~(max((((/* implicit */unsigned long long int) arr_14 [i_0] [i_0] [i_0] [(unsigned short)0] [i_0] [i_0])), (10667092920759877287ULL))))), (((/* implicit */unsigned long long int) arr_47 [i_20] [1ULL] [i_20 + 2] [i_0] [i_0])));
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned long long int i_21 = 0; i_21 < 12; i_21 += 1) 
            {
                arr_79 [i_0] [1U] [i_20] = ((/* implicit */int) 4302251043325421217ULL);
                var_51 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) 315347355U)) ? (((/* implicit */int) (unsigned short)16)) : (((/* implicit */int) (unsigned char)3))))));
                var_52 = ((/* implicit */signed char) min((var_52), (((/* implicit */signed char) (~((+(((/* implicit */int) (_Bool)1)))))))));
                arr_80 [i_0] [i_20] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-111)))))));
            }
            var_53 = ((/* implicit */unsigned long long int) max((var_53), (min((((((/* implicit */_Bool) ((unsigned int) 1444175143))) ? ((+(arr_55 [i_0] [i_0] [i_0] [i_20] [i_20]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-113))))), (max((((((/* implicit */_Bool) arr_24 [i_0] [i_0] [i_0])) ? (14585426306336097979ULL) : (arr_7 [i_20 + 1] [i_20 + 1] [i_0] [i_0]))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)(-32767 - 1))))))))))));
        }
        for (unsigned long long int i_22 = 1; i_22 < 8; i_22 += 3) 
        {
            arr_84 [i_22] [i_22] = min(((~((~(3861317767373453627ULL))))), (((/* implicit */unsigned long long int) (~((+(-5715303603903768299LL)))))));
            arr_85 [i_0] |= ((/* implicit */unsigned short) arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
            /* LoopSeq 1 */
            for (unsigned int i_23 = 0; i_23 < 12; i_23 += 4) 
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_24 = 0; i_24 < 12; i_24 += 4) 
                {
                    arr_91 [i_23] [i_0] [6LL] [8ULL] [2ULL] [8LL] |= ((/* implicit */long long int) max((max((6967303920323659867ULL), (((/* implicit */unsigned long long int) (unsigned short)48334)))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((arr_16 [i_24] [i_23] [i_22 + 2] [i_22] [i_0] [i_0]) ? (((/* implicit */int) (short)-9611)) : (((/* implicit */int) (unsigned short)42454))))) + (arr_34 [i_22 + 4]))))));
                    var_54 &= ((/* implicit */long long int) (((+(((/* implicit */int) (short)-1129)))) / (((/* implicit */int) ((signed char) max((((/* implicit */int) (unsigned short)7707)), (arr_48 [i_0] [i_22] [i_23] [i_24])))))));
                }
                var_55 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) 14585426306336097988ULL)) ? (arr_83 [i_23] [(unsigned char)7] [i_22]) : (((/* implicit */unsigned long long int) -3282156191897843291LL))))) && (((/* implicit */_Bool) min((6967303920323659867ULL), (((/* implicit */unsigned long long int) arr_17 [(short)3] [i_0] [i_22] [i_23]))))))), (((((/* implicit */_Bool) 11ULL)) && (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (short)-7017)), (11479440153385891727ULL))))))));
                /* LoopSeq 2 */
                for (unsigned char i_25 = 0; i_25 < 12; i_25 += 4) 
                {
                    var_56 = ((/* implicit */unsigned int) max((var_56), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)122)) ? (11479440153385891748ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)36813)))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-31))) % (1436843807011109885ULL))) : (max((((14585426306336097988ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_89 [i_0] [i_0] [i_0] [i_0] [i_0]))))), (((/* implicit */unsigned long long int) arr_53 [i_22] [i_22 + 2] [i_22 - 1] [i_22 - 1] [i_22 + 4])))))))));
                    /* LoopSeq 2 */
                    for (unsigned char i_26 = 0; i_26 < 12; i_26 += 4) 
                    {
                        var_57 = ((((/* implicit */_Bool) ((((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)40660)))) - (min((arr_47 [i_0] [i_22 + 2] [i_23] [i_25] [10]), (((/* implicit */int) arr_17 [i_0] [i_22 + 4] [i_23] [i_25]))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) (_Bool)1)))) : (((2260840544U) - (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))));
                        var_58 = ((/* implicit */int) ((((/* implicit */_Bool) min((arr_2 [i_23]), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)23081)) && (((/* implicit */_Bool) (unsigned short)65516)))))))) ? (((unsigned int) ((((/* implicit */int) arr_95 [i_0] [i_22 + 1] [i_23] [i_22])) != (((/* implicit */int) (unsigned short)23068))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) ((arr_92 [i_22]) | (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))))))))));
                        var_59 = ((/* implicit */signed char) 14585426306336097980ULL);
                    }
                    for (int i_27 = 0; i_27 < 12; i_27 += 4) 
                    {
                        var_60 = ((/* implicit */unsigned short) min((var_60), (((/* implicit */unsigned short) (~((((+((-2147483647 - 1)))) + (((/* implicit */int) ((_Bool) arr_77 [i_0]))))))))));
                        arr_102 [i_23] [i_22] [(short)5] [i_0] [i_27] [i_25] = (i_22 % 2 == 0) ? (((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) (unsigned short)32768)) ? (((/* implicit */int) (short)-32749)) : (((/* implicit */int) (unsigned short)32767)))), (((((/* implicit */_Bool) arr_96 [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_67 [5U] [i_23] [7U])) : (((/* implicit */int) arr_61 [i_0] [i_0]))))))), ((((~(6967303920323659867ULL))) >> (((((((/* implicit */_Bool) (unsigned char)4)) ? (((/* implicit */int) arr_90 [i_0] [i_22])) : (((/* implicit */int) (short)-32745)))) + (173)))))))) : (((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) (unsigned short)32768)) ? (((/* implicit */int) (short)-32749)) : (((/* implicit */int) (unsigned short)32767)))), (((((/* implicit */_Bool) arr_96 [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_67 [5U] [i_23] [7U])) : (((/* implicit */int) arr_61 [i_0] [i_0]))))))), ((((~(6967303920323659867ULL))) >> (((((((((/* implicit */_Bool) (unsigned char)4)) ? (((/* implicit */int) arr_90 [i_0] [i_22])) : (((/* implicit */int) (short)-32745)))) + (173))) - (90))))))));
                        arr_103 [i_0] [i_22] [i_23] [i_22] [i_27] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) (unsigned char)95)) : (((/* implicit */int) (unsigned short)0))));
                        var_61 &= ((/* implicit */short) ((((((((/* implicit */_Bool) (short)-20221)) ? (arr_62 [i_22] [i_25] [i_22] [i_22]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-15))))) >= (((/* implicit */unsigned int) ((/* implicit */int) ((11918268607270983364ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32744))))))))) ? (max((((/* implicit */unsigned long long int) ((signed char) arr_68 [i_0] [i_0] [7] [i_22 - 1] [i_0] [i_25] [i_27]))), (min((3861317767373453637ULL), (((/* implicit */unsigned long long int) (unsigned short)65516)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_0] [6] [i_23] [i_25] [i_22] [i_22])))));
                        arr_104 [i_27] [i_22] [i_23] [i_22] [i_0] = ((/* implicit */long long int) arr_87 [i_27] [i_27] [i_27] [i_27]);
                    }
                    var_62 *= ((((/* implicit */unsigned int) ((/* implicit */int) min(((short)-32745), ((short)1416))))) == (min((((/* implicit */unsigned int) (short)32733)), (max((((/* implicit */unsigned int) (signed char)123)), (0U))))));
                    var_63 = ((/* implicit */unsigned long long int) ((16775544070154438016ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)1048)))));
                }
                for (unsigned int i_28 = 0; i_28 < 12; i_28 += 4) 
                {
                    var_64 = ((/* implicit */unsigned short) max((var_64), (((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) min(((+(((/* implicit */int) (signed char)16)))), (((/* implicit */int) max(((signed char)82), ((signed char)(-127 - 1)))))))), ((-(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_64 [i_22 + 1] [i_22] [i_23] [i_22] [i_0]))) * (arr_59 [i_0] [i_22] [i_22] [i_23] [i_23] [i_28] [10]))))))))));
                    var_65 &= ((/* implicit */short) arr_100 [i_28] [i_22] [i_0]);
                    arr_107 [i_22] [(signed char)3] = ((/* implicit */int) max(((-(0ULL))), (((/* implicit */unsigned long long int) (signed char)-48))));
                    arr_108 [i_0] [i_0] [i_0] [i_23] [i_22] [i_28] = min(((unsigned short)0), (((/* implicit */unsigned short) ((signed char) (short)6450))));
                }
            }
        }
        var_66 = ((/* implicit */unsigned char) max(((~(((/* implicit */int) ((((/* implicit */unsigned long long int) arr_11 [i_0] [i_0])) != (18ULL)))))), (((arr_44 [(unsigned char)0]) << (((/* implicit */int) (_Bool)1))))));
        var_67 = min((((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) (unsigned short)65535)) ? (arr_25 [i_0] [i_0] [i_0] [10U]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65512))))), (((/* implicit */long long int) (-(-5))))))), (((((/* implicit */_Bool) min((14585426306336097978ULL), (((/* implicit */unsigned long long int) (unsigned short)20568))))) ? (14585426306336097978ULL) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)107))))))));
    }
    var_68 = ((/* implicit */int) ((((/* implicit */_Bool) max((((var_6) | (var_9))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-108)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned short)32783)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (min((((/* implicit */unsigned long long int) (+(-921371750)))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) | (var_6)))))));
    var_69 = ((/* implicit */_Bool) min((var_69), (((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) ((98304) >> (((var_6) - (17230067580095588318ULL))))))) >> (((13681455977709124980ULL) - (13681455977709124953ULL))))))));
}
