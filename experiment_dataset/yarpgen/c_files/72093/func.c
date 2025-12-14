/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72093
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72093 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72093
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
    var_15 = ((/* implicit */unsigned int) (+(((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) - (var_5)))) & (((((/* implicit */_Bool) var_10)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)50)))))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 1; i_0 < 22; i_0 += 3) 
    {
        var_16 = (unsigned char)178;
        var_17 += (unsigned char)114;
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 21; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 22; i_2 += 4) 
            {
                {
                    var_18 |= ((/* implicit */signed char) max(((unsigned char)205), (((/* implicit */unsigned char) (_Bool)1))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */_Bool) arr_4 [i_4 - 1] [i_1 - 2] [i_2 - 2]);
                                arr_14 [i_0] [22U] [i_2] [i_3] [i_2] &= ((/* implicit */unsigned long long int) ((4294967295U) ^ (((/* implicit */unsigned int) -559264657))));
                                var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) arr_12 [i_0] [i_0] [i_2] [i_2] [i_2] [i_4]))));
                                var_21 *= min((((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)114))))), (min((((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) -9223372036854775784LL)) : (2586639196644397369ULL))), (((/* implicit */unsigned long long int) var_14)))));
                            }
                        } 
                    } 
                    var_22 -= ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)2)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)99)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-42))) : (max((((/* implicit */long long int) (_Bool)0)), (-9223372036854775766LL)))))) : (min((((arr_12 [i_1] [i_2] [i_1] [i_1] [i_0] [i_0]) ? (((/* implicit */unsigned long long int) var_14)) : (arr_10 [i_0 - 1] [7LL] [i_1 + 3] [i_1 - 2] [i_2] [i_1 - 2]))), (((((/* implicit */_Bool) var_13)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))));
                    /* LoopSeq 3 */
                    for (unsigned int i_5 = 3; i_5 < 22; i_5 += 4) 
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (int i_6 = 2; i_6 < 20; i_6 += 3) 
                        {
                            var_23 = ((/* implicit */unsigned int) (_Bool)1);
                            var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) arr_1 [i_2]))));
                            var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)141)) ? (((/* implicit */unsigned long long int) -559264639)) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) var_13)) : (var_3))))))));
                            var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-19510)) ? (1032192U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)207)))));
                        }
                        for (signed char i_7 = 4; i_7 < 22; i_7 += 4) 
                        {
                            arr_24 [i_1] = ((/* implicit */signed char) var_8);
                            var_27 = ((/* implicit */_Bool) ((int) ((arr_3 [i_1] [i_1]) ? (((/* implicit */unsigned long long int) var_12)) : (max((arr_15 [i_0] [i_1] [i_2] [(_Bool)1]), (((/* implicit */unsigned long long int) var_12)))))));
                        }
                        var_28 = ((/* implicit */int) max((((arr_23 [i_0] [22U] [i_2] [i_5] [4]) < (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))), (((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (unsigned char)93)) : (var_6)))) == ((+(var_5)))))));
                        var_29 |= ((/* implicit */long long int) var_8);
                    }
                    /* vectorizable */
                    for (unsigned long long int i_8 = 0; i_8 < 24; i_8 += 1) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
                        {
                            var_30 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */unsigned long long int) (-(-1585393813)))) : (arr_26 [i_2 - 2] [i_9 + 1])));
                            arr_32 [i_0] [i_0] [i_2] [i_8] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (60800753) : (((/* implicit */int) var_8))))) ? (((((/* implicit */_Bool) (short)9955)) ? (var_0) : (var_0))) : (((/* implicit */int) var_1))));
                            arr_33 [i_1] [i_1] [i_1] [i_9] = ((/* implicit */int) (+((+(127U)))));
                            var_31 = ((/* implicit */unsigned long long int) 1585393812);
                        }
                        /* LoopSeq 2 */
                        for (unsigned long long int i_10 = 0; i_10 < 24; i_10 += 4) 
                        {
                            var_32 = arr_30 [i_8] [i_8] [i_2] [i_0] [i_0];
                            arr_36 [i_0] [i_1] [(short)7] = (+(4293935104U));
                            var_33 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_3 [i_1] [i_8]) ? (arr_29 [i_0] [i_1]) : (((/* implicit */unsigned int) var_0))))) ? (((((/* implicit */_Bool) var_11)) ? (14069376778609528515ULL) : (var_2))) : (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) arr_8 [i_0])) : (((/* implicit */int) (_Bool)1)))))));
                            var_34 = ((/* implicit */int) max((var_34), (((/* implicit */int) var_14))));
                        }
                        for (int i_11 = 0; i_11 < 24; i_11 += 3) 
                        {
                            var_35 = ((/* implicit */_Bool) arr_29 [i_8] [i_11]);
                            arr_39 [i_0] [10] [i_2 + 1] [i_1] [i_8] [i_8] [i_11] = ((4294967275U) > (((/* implicit */unsigned int) arr_5 [i_1 + 1])));
                            var_36 &= ((/* implicit */int) ((((/* implicit */unsigned long long int) var_7)) * (arr_27 [i_2] [i_2] [i_2 - 1] [i_2])));
                            var_37 = ((/* implicit */unsigned int) max((var_37), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)50)) ? (((/* implicit */int) (unsigned char)114)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (((((/* implicit */_Bool) var_5)) ? (-3435414144502051751LL) : (((/* implicit */long long int) ((/* implicit */int) var_10))))))))));
                        }
                    }
                    /* vectorizable */
                    for (unsigned long long int i_12 = 0; i_12 < 24; i_12 += 1) /* same iter space */
                    {
                        arr_42 [20ULL] [(unsigned char)8] [i_1] [i_1] [20] [(short)0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(arr_21 [9ULL] [(_Bool)1] [i_1] [i_1] [i_2] [i_12] [(_Bool)1])))) ? ((((_Bool)0) ? (((/* implicit */int) (short)-6629)) : (((/* implicit */int) arr_3 [i_1] [i_1])))) : ((-(((/* implicit */int) var_4))))));
                        var_38 = ((/* implicit */int) min((var_38), (arr_20 [i_1] [i_2])));
                        var_39 &= ((/* implicit */short) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) arr_35 [i_2])) : (((/* implicit */int) (_Bool)1))));
                        arr_43 [i_0] [i_0] [i_0] [i_2] [i_2] [i_12] |= ((/* implicit */int) ((var_4) ? (arr_26 [i_1 + 3] [i_2 + 2]) : (((/* implicit */unsigned long long int) arr_4 [i_2] [i_1] [i_0 - 1]))));
                    }
                }
            } 
        } 
    }
    for (unsigned long long int i_13 = 1; i_13 < 14; i_13 += 3) 
    {
        var_40 = ((/* implicit */signed char) min((var_40), (((/* implicit */signed char) ((((min((arr_40 [i_13]), (((/* implicit */unsigned long long int) arr_45 [i_13])))) == (var_3))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)107)) ? (4293935104U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (max((((/* implicit */long long int) 2073696417)), (var_14))) : (((/* implicit */long long int) (((_Bool)0) ? (((/* implicit */int) var_10)) : (var_6))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) -466283681)) ? (((/* implicit */int) (signed char)-108)) : (((/* implicit */int) (signed char)-113))))) ? ((((_Bool)1) ? (((/* implicit */unsigned long long int) (-2147483647 - 1))) : (var_3))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -2073696403)) ? (var_6) : (((/* implicit */int) (short)-6644))))))))))));
        arr_46 [i_13] = ((/* implicit */short) max((((((((/* implicit */_Bool) arr_0 [8] [22ULL])) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_13] [i_13]))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)50))))), (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */long long int) var_12)) : (((((/* implicit */_Bool) -1357794389)) ? (arr_21 [i_13] [i_13] [18] [18] [i_13] [(_Bool)1] [(_Bool)1]) : (((/* implicit */long long int) -2134480447)))))))));
        var_41 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)191)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)228))) : (min((((/* implicit */unsigned int) -1857153289)), (2457143012U)))));
        arr_47 [i_13] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((1174908053220987430LL), (((/* implicit */long long int) var_9))))) ? (((((/* implicit */_Bool) 2147483627)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)116))) : (var_2))) : (((((/* implicit */_Bool) arr_20 [i_13] [(_Bool)1])) ? (((/* implicit */unsigned long long int) -466283681)) : (var_3)))))) ? (((unsigned long long int) ((((/* implicit */_Bool) (short)1)) ? (2047) : (((/* implicit */int) (unsigned char)239))))) : (min((((/* implicit */unsigned long long int) arr_17 [i_13 + 1] [i_13 + 1] [i_13 + 1] [i_13] [i_13])), (262143ULL)))));
    }
    /* LoopNest 2 */
    for (signed char i_14 = 1; i_14 < 21; i_14 += 1) 
    {
        for (signed char i_15 = 1; i_15 < 19; i_15 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (int i_16 = 3; i_16 < 20; i_16 += 3) 
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (int i_17 = 3; i_17 < 19; i_17 += 1) /* same iter space */
                    {
                        var_42 = ((/* implicit */unsigned int) min((var_42), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) var_5)) : (arr_31 [i_17] [(signed char)4] [14ULL] [i_15] [i_14])))) ? (((/* implicit */int) ((signed char) arr_22 [i_14] [i_14] [i_16] [i_17] [i_16 - 2]))) : (((/* implicit */int) arr_30 [i_14 + 1] [i_14] [4ULL] [i_14] [i_14])))))));
                        var_43 = ((/* implicit */int) var_2);
                        /* LoopSeq 3 */
                        for (unsigned long long int i_18 = 0; i_18 < 22; i_18 += 4) 
                        {
                            arr_61 [i_14] [i_14] [i_14] [i_17] [i_18] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (2147483647) : (536870912)))) ? (((/* implicit */int) ((var_0) < (var_6)))) : (((int) 0U))));
                            arr_62 [(unsigned char)8] [(unsigned char)8] [i_14] [i_17] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (arr_26 [i_15] [i_17]) : (((/* implicit */unsigned long long int) arr_11 [i_14] [i_14] [3] [i_16] [i_17] [(signed char)22]))))) ? (((((/* implicit */int) (unsigned char)212)) ^ (((/* implicit */int) (unsigned char)34)))) : (var_0)));
                            arr_63 [i_14] [i_15] [i_15] [i_17] [i_17] = ((/* implicit */int) ((((/* implicit */_Bool) 1623594862433047943ULL)) ? (arr_17 [i_15] [18] [i_15 - 1] [i_15] [i_15]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_14] [i_15])))));
                        }
                        for (unsigned long long int i_19 = 1; i_19 < 18; i_19 += 1) 
                        {
                            arr_66 [i_14] [i_14] [i_14] [i_17] [i_14] = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) == (arr_57 [i_14] [i_15] [(signed char)14] [i_14] [i_17 - 2] [i_19 - 1])));
                            arr_67 [i_14] [i_14] = ((/* implicit */unsigned char) arr_20 [i_14 + 1] [i_14 + 1]);
                        }
                        for (signed char i_20 = 3; i_20 < 20; i_20 += 4) 
                        {
                            arr_70 [i_14] [i_15] = ((/* implicit */long long int) ((((/* implicit */_Bool) -19255814)) ? (((/* implicit */int) (short)6631)) : (1756164958)));
                            arr_71 [i_14] [(signed char)2] [i_16] [i_17] [i_16] [i_15] |= ((/* implicit */signed char) ((var_2) << (((((/* implicit */int) (unsigned char)154)) - (100)))));
                        }
                    }
                    for (int i_21 = 3; i_21 < 19; i_21 += 1) /* same iter space */
                    {
                        var_44 ^= ((/* implicit */_Bool) arr_31 [i_14] [i_15 - 1] [(unsigned char)22] [i_21 + 2] [(signed char)4]);
                        var_45 = ((/* implicit */int) max((var_45), (((/* implicit */int) ((signed char) min((((/* implicit */unsigned long long int) (unsigned char)0)), (var_3)))))));
                        arr_75 [i_14] [i_15] [i_16 + 1] [16] |= ((/* implicit */unsigned char) ((unsigned long long int) arr_68 [i_21]));
                        var_46 -= ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_41 [i_14] [i_14] [i_16] [i_16] [i_21]))) | (-1LL)));
                    }
                    for (unsigned char i_22 = 1; i_22 < 21; i_22 += 4) 
                    {
                        var_47 *= ((/* implicit */unsigned int) min((((int) max((((/* implicit */int) (unsigned char)0)), (-911260200)))), (((/* implicit */int) (short)6647))));
                        arr_78 [i_14] [i_15] [i_16] [i_16] [i_14] = ((/* implicit */int) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) -1320337267)) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)185)))))) ? ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (arr_21 [i_14] [i_15] [i_16] [i_14] [i_15] [(signed char)3] [i_14]))) : (((/* implicit */long long int) ((/* implicit */int) max(((_Bool)1), ((_Bool)1)))))))));
                    }
                    var_48 = ((/* implicit */int) min((var_48), (-466283681)));
                    var_49 ^= ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) max((var_0), (((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) 112667022)))))))), (((((/* implicit */_Bool) arr_37 [i_15] [i_15 - 1] [i_16] [i_16 + 1] [i_16 + 1])) ? (((/* implicit */unsigned long long int) arr_37 [i_14] [i_16] [i_16] [i_16 - 2] [i_16])) : (var_2)))));
                    var_50 -= ((/* implicit */unsigned int) (((+(arr_10 [i_14] [i_14] [i_14] [i_14] [i_14] [i_14]))) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -2089601443)) ? (((/* implicit */long long int) var_11)) : (-3060393139502978564LL))))));
                }
                var_51 |= arr_53 [i_14] [i_14] [i_15 + 3] [i_14];
            }
        } 
    } 
}
