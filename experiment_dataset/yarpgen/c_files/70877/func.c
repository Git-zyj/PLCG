/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70877
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70877 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70877
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
    for (long long int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        var_19 = ((/* implicit */unsigned long long int) ((arr_1 [i_0] [i_0]) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))));
        arr_2 [i_0] = ((/* implicit */_Bool) ((arr_0 [i_0]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [(unsigned short)4] [i_0]))) : (((unsigned int) arr_0 [i_0]))));
        /* LoopSeq 2 */
        for (unsigned char i_1 = 1; i_1 < 16; i_1 += 1) /* same iter space */
        {
            var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) 3513049650U))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) : (((((/* implicit */_Bool) 7996774607745903996ULL)) ? (781917647U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-27)))))));
            var_21 = ((/* implicit */signed char) ((int) var_11));
            arr_7 [i_0] = ((/* implicit */unsigned short) arr_1 [i_0] [i_0]);
        }
        for (unsigned char i_2 = 1; i_2 < 16; i_2 += 1) /* same iter space */
        {
            /* LoopSeq 2 */
            for (int i_3 = 0; i_3 < 18; i_3 += 1) 
            {
                arr_13 [i_0] [i_2] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 7996774607745904007ULL)) ? (6399342597406387878ULL) : (((/* implicit */unsigned long long int) 781917636U)))))));
                var_22 = ((/* implicit */unsigned long long int) (unsigned char)95);
                arr_14 [i_0] = arr_5 [2U] [i_2 - 1] [i_0];
            }
            for (unsigned int i_4 = 2; i_4 < 17; i_4 += 2) 
            {
                /* LoopSeq 2 */
                for (unsigned short i_5 = 1; i_5 < 17; i_5 += 1) 
                {
                    var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_4] [i_4 - 1] [i_4])) ? (arr_5 [i_4] [i_4 + 1] [i_4]) : (arr_5 [i_4] [i_4 - 1] [i_4]))))));
                    arr_21 [i_0] [i_2] [(short)14] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)42058)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : ((+(2238713705U)))));
                }
                for (short i_6 = 1; i_6 < 16; i_6 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_7 = 0; i_7 < 18; i_7 += 4) 
                    {
                        arr_27 [12LL] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_8 [i_0]) ? (arr_16 [i_4 - 1] [i_4 - 1] [i_4 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_0] [i_2 - 1] [0ULL])))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_0] [7ULL] [i_0]))) : (((((/* implicit */_Bool) var_1)) ? (-2203992121713133474LL) : (var_7)))));
                        arr_28 [i_0] [i_2] = ((/* implicit */unsigned int) arr_0 [i_0]);
                        var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) ((((((/* implicit */_Bool) 1568450133016621001LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-32756))) : (781917650U))) % (3513049659U))))));
                    }
                    /* LoopSeq 1 */
                    for (int i_8 = 1; i_8 < 14; i_8 += 1) 
                    {
                        var_25 = ((/* implicit */int) (!(((/* implicit */_Bool) 5243010199017873063ULL))));
                        var_26 = ((/* implicit */unsigned char) arr_23 [i_4 + 1] [i_6] [i_4] [i_4 + 1] [i_2] [i_0]);
                        var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) ((((/* implicit */int) var_11)) * (((/* implicit */int) arr_25 [i_4] [i_6 - 1] [i_4 - 2] [i_2 + 1] [i_2] [i_4])))))));
                        arr_32 [i_0] [i_0] [i_2] [2U] [i_6 + 1] [i_0] [i_8] = ((/* implicit */short) (-(var_1)));
                    }
                }
                /* LoopNest 2 */
                for (short i_9 = 0; i_9 < 18; i_9 += 1) 
                {
                    for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
                    {
                        {
                            arr_39 [i_10] [i_0] [(signed char)9] [i_4] [i_4] [i_0] [i_0] = ((/* implicit */long long int) arr_11 [i_10] [i_0] [i_0] [i_0]);
                            var_28 = ((/* implicit */int) (+(1U)));
                            var_29 = ((/* implicit */short) arr_31 [i_4 + 1] [i_2 - 1] [i_0] [i_10 - 1]);
                        }
                    } 
                } 
            }
            var_30 = ((/* implicit */long long int) max((var_30), (((/* implicit */long long int) arr_25 [i_0] [(unsigned char)10] [i_0] [i_0] [(_Bool)1] [(unsigned short)14]))));
        }
        /* LoopSeq 3 */
        for (unsigned int i_11 = 0; i_11 < 18; i_11 += 2) /* same iter space */
        {
            /* LoopSeq 2 */
            for (unsigned long long int i_12 = 1; i_12 < 15; i_12 += 1) /* same iter space */
            {
                var_31 = ((/* implicit */long long int) min((var_31), (((/* implicit */long long int) ((((arr_3 [(unsigned short)13]) < (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_18)))))) : (781917631U))))));
                var_32 = ((/* implicit */short) max((var_32), (((/* implicit */short) arr_9 [i_0] [i_0] [i_0]))));
                var_33 ^= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_12 [i_0] [i_11] [i_12]))));
                arr_44 [i_0] [i_0] [i_11] [i_12] = 2147483639;
            }
            for (unsigned long long int i_13 = 1; i_13 < 15; i_13 += 1) /* same iter space */
            {
                var_34 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned char)123)) || (((/* implicit */_Bool) 781917656U)))) ? (((((/* implicit */_Bool) 1U)) ? (((/* implicit */unsigned long long int) 3638166892U)) : (13880176235336017174ULL))) : (((((/* implicit */unsigned long long int) -700554142)) * (7343186233399950439ULL)))));
                var_35 = ((/* implicit */unsigned short) max((var_35), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(var_16)))) ? (arr_31 [i_0] [2] [i_11] [2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)50)) || (((/* implicit */_Bool) -3005189802986718968LL)))))))))));
            }
            /* LoopNest 3 */
            for (short i_14 = 0; i_14 < 18; i_14 += 1) 
            {
                for (int i_15 = 4; i_15 < 16; i_15 += 1) 
                {
                    for (unsigned long long int i_16 = 0; i_16 < 18; i_16 += 4) 
                    {
                        {
                            arr_55 [i_0] [16] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-25162)) ? (((/* implicit */int) (signed char)117)) : (((/* implicit */int) (unsigned short)70))));
                            arr_56 [i_0] [i_0] [i_11] [i_14] [i_0] [i_16] [i_0] = arr_6 [i_0] [i_0] [i_15];
                            var_36 = ((/* implicit */short) ((arr_31 [i_0] [i_11] [i_0] [i_15 - 2]) != (((/* implicit */unsigned long long int) arr_24 [i_0] [i_0] [10U] [i_0] [i_16]))));
                        }
                    } 
                } 
            } 
            /* LoopNest 3 */
            for (unsigned int i_17 = 0; i_17 < 18; i_17 += 1) 
            {
                for (unsigned short i_18 = 1; i_18 < 16; i_18 += 2) 
                {
                    for (unsigned int i_19 = 0; i_19 < 18; i_19 += 1) 
                    {
                        {
                            var_37 = ((/* implicit */short) max((var_37), (((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)24)) ? (2883084152U) : (1411883143U))))));
                            var_38 = ((/* implicit */signed char) arr_36 [i_0] [i_18 + 2] [i_17] [i_18 + 2] [(unsigned short)5]);
                            var_39 = ((/* implicit */long long int) max((var_39), (((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned char)129)))))));
                        }
                    } 
                } 
            } 
            arr_65 [i_0] = ((/* implicit */int) ((unsigned long long int) 0U));
        }
        for (unsigned int i_20 = 0; i_20 < 18; i_20 += 2) /* same iter space */
        {
            /* LoopNest 2 */
            for (short i_21 = 0; i_21 < 18; i_21 += 4) 
            {
                for (long long int i_22 = 0; i_22 < 18; i_22 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_23 = 2; i_23 < 17; i_23 += 1) 
                        {
                            var_40 = ((/* implicit */unsigned short) ((10861200055908160292ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (short)12524)))));
                            var_41 = ((/* implicit */short) ((int) -1738851966));
                        }
                        arr_75 [i_0] [i_0] [i_20] [i_0] [i_21] [i_22] = ((/* implicit */unsigned int) var_13);
                        var_42 = ((/* implicit */unsigned char) (-(-454913436)));
                    }
                } 
            } 
            var_43 = ((/* implicit */unsigned long long int) ((unsigned short) arr_24 [i_0] [11] [i_0] [i_0] [(_Bool)1]));
        }
        for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
        {
            arr_79 [i_0] = ((/* implicit */_Bool) 7585544017801391334ULL);
            var_44 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(arr_24 [7ULL] [i_24] [i_24] [i_0] [i_24])))) ? (var_2) : (arr_77 [i_0] [i_24])));
        }
    }
    for (int i_25 = 0; i_25 < 20; i_25 += 1) 
    {
        var_45 = ((/* implicit */int) min((var_45), (((/* implicit */int) (!(((/* implicit */_Bool) (+(((3843377875U) << (((34357641216ULL) - (34357641202ULL)))))))))))));
        var_46 = ((/* implicit */int) max((((/* implicit */unsigned int) min((arr_81 [i_25]), (arr_81 [14ULL])))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_80 [i_25])) ? (arr_80 [i_25]) : (arr_80 [i_25])))) ? (((/* implicit */unsigned int) arr_81 [i_25])) : (min((arr_80 [i_25]), (((/* implicit */unsigned int) arr_81 [i_25]))))))));
        var_47 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) (short)-12452)) ? (((/* implicit */unsigned int) 1539676800)) : (3638166874U))), (((/* implicit */unsigned int) ((unsigned short) -1738851978)))));
    }
    var_48 = ((/* implicit */long long int) var_14);
    var_49 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (~(var_4)))) ? (((/* implicit */int) var_18)) : ((~(((/* implicit */int) var_18))))))) : ((~(var_8)))));
}
