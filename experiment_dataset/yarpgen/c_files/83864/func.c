/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83864
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83864 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83864
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
    /* LoopNest 3 */
    for (signed char i_0 = 4; i_0 < 13; i_0 += 2) 
    {
        for (short i_1 = 4; i_1 < 15; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    var_17 = ((/* implicit */unsigned int) (~(((/* implicit */int) min((((/* implicit */short) var_7)), (var_9))))));
                    var_18 *= ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)20))))) & (((/* implicit */int) ((unsigned char) arr_0 [i_1] [6LL])))));
                    arr_6 [i_1] [(_Bool)1] [i_0] [i_1] = ((/* implicit */unsigned short) max((arr_1 [i_0 + 2]), (((/* implicit */unsigned int) ((arr_1 [i_0 - 2]) <= (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))));
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (int i_3 = 4; i_3 < 13; i_3 += 3) 
                    {
                        arr_10 [i_1] [13LL] [i_2] [(_Bool)1] [(signed char)4] = ((/* implicit */short) ((((/* implicit */_Bool) arr_8 [i_1] [i_3 + 3] [i_1 - 2] [i_3])) && (((/* implicit */_Bool) arr_8 [i_1] [i_3 - 3] [i_1 - 1] [i_3]))));
                        var_19 ^= ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)43886))));
                        arr_11 [(short)2] [(short)2] [i_1] [(short)7] [i_2] = ((/* implicit */_Bool) var_6);
                    }
                    for (long long int i_4 = 3; i_4 < 13; i_4 += 3) 
                    {
                        arr_14 [i_1] [i_2] [i_1] = ((/* implicit */unsigned char) 9826456061653521441ULL);
                        arr_15 [14ULL] [i_1] [(unsigned short)6] [i_2] [i_2] [(unsigned char)3] = ((/* implicit */int) (!(((/* implicit */_Bool) min((arr_0 [i_4] [6U]), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) -7703647935501910410LL))))))))));
                    }
                    for (unsigned char i_5 = 2; i_5 < 15; i_5 += 2) 
                    {
                        var_20 = ((/* implicit */signed char) max((var_20), (((signed char) (+(((/* implicit */int) ((unsigned short) arr_9 [i_5] [(unsigned char)10] [11LL]))))))));
                        arr_19 [2LL] [i_1] [(short)10] [i_1] [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) var_8))));
                    }
                    /* vectorizable */
                    for (long long int i_6 = 0; i_6 < 16; i_6 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned long long int i_7 = 1; i_7 < 15; i_7 += 2) /* same iter space */
                        {
                            var_21 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_23 [i_1] [i_1 - 3] [8LL] [i_2] [i_1]))));
                            arr_25 [i_1] [6ULL] [i_6] [i_2] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_0] [(short)9] [i_1])))))) | (var_14)));
                            var_22 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_20 [(short)6] [10U] [i_7 + 1] [4ULL] [i_7])) ? (((/* implicit */int) arr_20 [(unsigned char)15] [14] [i_7 + 1] [i_6] [i_7])) : (1775063176)));
                        }
                        for (unsigned long long int i_8 = 1; i_8 < 15; i_8 += 2) /* same iter space */
                        {
                            var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)0))))) ? ((~(((/* implicit */int) (signed char)-124)))) : (((/* implicit */int) ((((/* implicit */_Bool) -7095863195912421340LL)) && (((/* implicit */_Bool) arr_29 [i_1])))))));
                            arr_30 [i_0] [i_1] [i_2] [10] [i_6] [(unsigned char)6] [i_1] = ((/* implicit */unsigned char) ((signed char) arr_24 [i_8 - 1] [i_0 + 1]));
                            arr_31 [i_8] [i_8] [(unsigned char)6] [(signed char)13] [i_8] [i_1] = ((/* implicit */int) ((((/* implicit */int) arr_12 [i_0] [i_1])) <= (((/* implicit */int) (unsigned short)43886))));
                        }
                        arr_32 [i_0] [i_0] [i_0] [i_1] [5] [(signed char)7] = ((/* implicit */unsigned int) -1587000473228368238LL);
                        arr_33 [i_0] [3LL] [i_1] [(unsigned short)5] [i_1] [2LL] = ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_2] [8U])) || (((/* implicit */_Bool) (short)21410)))))));
                        var_24 = ((/* implicit */int) (~(574208952489738240LL)));
                    }
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) 0)) || ((!(((/* implicit */_Bool) var_8)))))));
    /* LoopNest 2 */
    for (short i_9 = 1; i_9 < 20; i_9 += 2) 
    {
        for (long long int i_10 = 0; i_10 < 21; i_10 += 3) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (long long int i_11 = 0; i_11 < 21; i_11 += 3) /* same iter space */
                {
                    var_26 -= ((/* implicit */short) arr_35 [(short)13]);
                    var_27 -= ((/* implicit */unsigned char) (-(((/* implicit */int) arr_36 [i_9]))));
                }
                for (long long int i_12 = 0; i_12 < 21; i_12 += 3) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (int i_13 = 0; i_13 < 21; i_13 += 2) 
                    {
                        arr_48 [i_9] [i_10] [i_12] [(short)8] = ((/* implicit */signed char) (_Bool)1);
                        var_28 = ((/* implicit */unsigned short) (!(((arr_41 [i_9 - 1] [i_13]) <= (arr_41 [i_9 - 1] [i_13])))));
                        arr_49 [(signed char)8] [(short)11] [(short)14] [(unsigned char)4] [5] [17U] = ((/* implicit */unsigned int) 117440512);
                        var_29 = ((/* implicit */unsigned short) max((var_29), (((/* implicit */unsigned short) ((unsigned char) (+(((((/* implicit */_Bool) (signed char)123)) ? (((/* implicit */int) (unsigned char)61)) : (((/* implicit */int) (unsigned char)207))))))))));
                        arr_50 [i_9] [i_10] [(_Bool)1] [i_13] = ((/* implicit */unsigned char) (((+(arr_46 [8ULL] [i_9 - 1] [i_9] [(unsigned short)10]))) | (((/* implicit */long long int) ((/* implicit */int) arr_44 [i_9] [(unsigned char)6] [i_12] [(signed char)1])))));
                    }
                    arr_51 [i_9] [7U] [i_12] [(_Bool)1] = ((/* implicit */short) max((max((var_4), (((/* implicit */long long int) (unsigned short)42444)))), ((+(arr_39 [i_9 + 1] [i_9 - 1])))));
                    /* LoopNest 2 */
                    for (short i_14 = 0; i_14 < 21; i_14 += 3) 
                    {
                        for (short i_15 = 1; i_15 < 17; i_15 += 2) 
                        {
                            {
                                arr_56 [i_9] = ((/* implicit */signed char) ((_Bool) var_10));
                                arr_57 [(short)18] [(unsigned char)17] [(short)8] = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)42440)) ^ (((/* implicit */int) (unsigned short)4809))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_16 = 4; i_16 < 20; i_16 += 3) 
                    {
                        for (unsigned char i_17 = 0; i_17 < 21; i_17 += 3) 
                        {
                            {
                                arr_63 [i_9] [i_10] = max((((/* implicit */short) (!(((/* implicit */_Bool) arr_37 [i_9 + 1] [i_16 - 2]))))), (arr_47 [i_9] [i_10] [i_12] [i_16] [i_17]));
                                arr_64 [i_9] [(short)10] [(short)2] = ((/* implicit */unsigned short) arr_34 [i_9] [(unsigned short)8]);
                                var_30 = ((/* implicit */unsigned short) (!(((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) arr_55 [i_16 - 4] [i_17] [i_17] [i_17] [(signed char)5]))))));
                                arr_65 [(unsigned char)6] [i_10] [i_12] [(unsigned short)4] [i_17] = ((/* implicit */int) max((min((arr_40 [i_9 - 1] [18LL]), (var_4))), (((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) arr_52 [(short)13] [i_10] [(signed char)12] [17LL] [(unsigned char)16])) ? (((/* implicit */int) (unsigned char)219)) : (((/* implicit */int) var_13))))))));
                            }
                        } 
                    } 
                }
                /* LoopNest 2 */
                for (unsigned int i_18 = 0; i_18 < 21; i_18 += 3) 
                {
                    for (unsigned char i_19 = 0; i_19 < 21; i_19 += 2) 
                    {
                        {
                            var_31 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1475993844U)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (signed char)-112))))) ? (((/* implicit */int) var_16)) : (((/* implicit */int) ((((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)32767))) : (var_11))) < (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_39 [i_19] [(short)15])) < (arr_35 [(signed char)11]))))))))));
                            arr_72 [(unsigned short)12] [14] [i_18] [4LL] [(_Bool)1] = ((/* implicit */_Bool) max((arr_45 [11U]), (((/* implicit */short) ((signed char) arr_44 [(unsigned char)0] [0LL] [i_9 + 1] [i_19])))));
                            var_32 = ((/* implicit */unsigned short) min((var_32), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (short)-32763)) || (((/* implicit */_Bool) arr_69 [i_9 - 1] [i_9 - 1] [i_9 + 1])))))) : (((((/* implicit */_Bool) arr_66 [i_9 - 1] [i_9 + 1] [i_9 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (arr_66 [i_9 - 1] [i_9 - 1] [i_9 - 1]))))))));
                            var_33 = ((/* implicit */short) min((var_6), (((/* implicit */unsigned short) ((signed char) arr_71 [i_9 - 1] [i_9 - 1] [i_9 + 1])))));
                            arr_73 [i_9] [14U] [i_9] = ((/* implicit */signed char) ((max((((((/* implicit */_Bool) (unsigned short)37279)) ? (((/* implicit */int) arr_53 [(signed char)9] [11U] [(_Bool)1] [i_10] [7U] [10])) : (((/* implicit */int) (short)32763)))), (((/* implicit */int) (short)24351)))) <= (((/* implicit */int) (unsigned char)235))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_34 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (short)-32761))));
}
