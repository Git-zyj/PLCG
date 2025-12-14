/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98169
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98169 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98169
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
    var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) max((((/* implicit */long long int) max((((((/* implicit */int) var_13)) + (((/* implicit */int) var_13)))), (((/* implicit */int) var_13))))), (max((((/* implicit */long long int) ((4294967292U) >> (((/* implicit */int) (_Bool)1))))), ((+(8866635270338459414LL))))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 2; i_0 < 22; i_0 += 4) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned short) (+(arr_1 [i_0 + 1] [i_0 + 1])));
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    var_20 = ((/* implicit */int) ((4294967292U) / (arr_1 [i_0 + 1] [i_0 - 2])));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 3; i_4 < 21; i_4 += 3) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) var_12))));
                                var_22 = ((/* implicit */_Bool) ((signed char) (short)-32186));
                            }
                        } 
                    } 
                    var_23 = arr_11 [i_0 - 1] [i_0 + 1] [i_0 - 1] [i_0 - 1] [i_0 - 1];
                }
            } 
        } 
        var_24 = arr_2 [i_0] [i_0];
        arr_15 [i_0] = ((/* implicit */unsigned char) (!(arr_13 [i_0])));
    }
    for (unsigned long long int i_5 = 2; i_5 < 22; i_5 += 4) /* same iter space */
    {
        arr_18 [i_5] [i_5] = ((((((/* implicit */_Bool) arr_16 [i_5 - 1])) ? (arr_2 [i_5 - 1] [i_5 + 1]) : (((/* implicit */unsigned long long int) arr_0 [i_5 - 1])))) >> (((var_11) - (1605850627446815999ULL))));
        arr_19 [i_5] = ((/* implicit */int) arr_6 [i_5] [i_5 - 1] [i_5 - 1] [i_5 - 1]);
    }
    /* vectorizable */
    for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
    {
        var_25 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_21 [i_6 - 1] [i_6 - 1]))));
        /* LoopSeq 1 */
        for (long long int i_7 = 0; i_7 < 25; i_7 += 1) 
        {
            arr_27 [i_7] [i_7] [i_7] = ((/* implicit */_Bool) ((unsigned long long int) (~(((/* implicit */int) arr_22 [i_6 - 1])))));
            /* LoopNest 2 */
            for (long long int i_8 = 0; i_8 < 25; i_8 += 1) 
            {
                for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
                {
                    {
                        var_26 = ((/* implicit */_Bool) var_6);
                        var_27 = ((/* implicit */short) ((long long int) arr_33 [2ULL] [i_7] [i_9 + 1] [i_6 - 1]));
                        var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)13090)) ? (((/* implicit */int) (signed char)32)) : (((/* implicit */int) (unsigned char)141))));
                    }
                } 
            } 
        }
    }
    /* LoopSeq 3 */
    for (unsigned char i_10 = 0; i_10 < 11; i_10 += 3) 
    {
        var_29 = ((/* implicit */int) arr_32 [i_10] [i_10] [i_10]);
        arr_38 [i_10] = ((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) -1508193369)) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) arr_30 [i_10] [5])) : (arr_2 [i_10] [i_10]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_10])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_31 [i_10] [i_10] [i_10] [i_10]))))))));
        /* LoopSeq 3 */
        for (int i_11 = 0; i_11 < 11; i_11 += 1) /* same iter space */
        {
            var_30 = ((/* implicit */int) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (arr_16 [i_10]) : ((-9223372036854775807LL - 1LL)))))))), (max((((/* implicit */unsigned short) ((3153418179145320720LL) > (((/* implicit */long long int) var_12))))), (arr_7 [i_10] [i_10] [i_11] [i_11])))));
            var_31 = ((/* implicit */short) max((max((arr_9 [i_10]), (arr_9 [i_11]))), (((/* implicit */unsigned short) ((short) arr_9 [i_11])))));
        }
        for (int i_12 = 0; i_12 < 11; i_12 += 1) /* same iter space */
        {
            var_32 |= ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_13))));
            arr_44 [i_10] [i_10] [i_10] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) -321043292)) ? (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_12] [i_10]))) : (2372438162104121144LL))) - (((((/* implicit */_Bool) arr_21 [i_10] [i_12])) ? (arr_33 [(unsigned short)8] [i_10] [i_12] [i_12]) : (-8971725470449749629LL)))));
            var_33 = ((/* implicit */_Bool) min((var_33), (((/* implicit */_Bool) (short)-32564))));
        }
        for (int i_13 = 2; i_13 < 7; i_13 += 3) 
        {
            var_34 = ((/* implicit */short) min((var_34), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-44)) + (((/* implicit */int) (unsigned short)56573))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_41 [i_10]))))) : ((~(((/* implicit */int) (short)5265)))))))));
            var_35 = ((/* implicit */unsigned int) min((var_35), (((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_25 [16LL] [14ULL] [i_13 - 2]))))), (4957880384441602329ULL))))));
        }
        /* LoopNest 2 */
        for (unsigned short i_14 = 0; i_14 < 11; i_14 += 2) 
        {
            for (unsigned int i_15 = 1; i_15 < 9; i_15 += 3) 
            {
                {
                    var_36 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_10])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) min(((unsigned short)56169), ((unsigned short)65505)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_49 [i_10])) && (((/* implicit */_Bool) (unsigned char)116)))))) : (((((/* implicit */_Bool) 7238765324629513395LL)) ? (arr_30 [14U] [i_15 + 2]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)9366))))))))));
                    arr_51 [i_10] [i_14] = arr_47 [i_15 + 2] [i_15 + 2];
                    /* LoopSeq 1 */
                    for (unsigned int i_16 = 0; i_16 < 11; i_16 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_17 = 0; i_17 < 11; i_17 += 3) 
                        {
                            var_37 = ((/* implicit */unsigned int) var_0);
                            var_38 = ((/* implicit */unsigned long long int) ((unsigned int) ((unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_49 [i_10]))) | (var_15)))));
                            arr_56 [i_10] [i_10] [i_15] [i_16] [i_10] [i_15] = ((/* implicit */unsigned short) ((unsigned int) (~(arr_8 [i_15 + 2] [(_Bool)1] [i_15 + 2] [i_15 - 1]))));
                            var_39 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_16] [i_15] [i_10])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) arr_52 [6ULL])) : (((/* implicit */int) arr_42 [i_10] [i_14] [i_10]))))) ? (((/* implicit */int) (unsigned char)251)) : (((((/* implicit */_Bool) arr_3 [i_16])) ? (((/* implicit */int) arr_14 [13U] [13U] [16] [i_10])) : (((/* implicit */int) arr_10 [i_17] [i_15] [8ULL] [8ULL]))))))) : (((((((/* implicit */int) (unsigned short)61012)) > (((/* implicit */int) (unsigned char)116)))) ? (arr_29 [i_10]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32752)))))));
                        }
                        arr_57 [i_16] [i_15 + 2] [i_10] [i_14] [i_10] = ((/* implicit */int) ((unsigned int) arr_29 [i_10]));
                        var_40 = ((/* implicit */short) ((max((((-7655283207212611396LL) >= (arr_36 [i_10]))), ((!(arr_46 [i_10] [i_14] [i_15]))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-5266))))) : (max((((((/* implicit */_Bool) (unsigned short)992)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_10]))) : (arr_2 [i_10] [i_14]))), (max((arr_45 [i_10]), (((/* implicit */unsigned long long int) var_13))))))));
                    }
                    var_41 |= ((/* implicit */short) ((int) ((((/* implicit */_Bool) (signed char)108)) ? (((/* implicit */long long int) max((214887324), (((/* implicit */int) arr_20 [i_14]))))) : (arr_33 [i_10] [i_10] [i_15 + 2] [i_10]))));
                    var_42 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) (signed char)-60)), ((short)-5266))))) ^ (((((/* implicit */_Bool) -4788298379594289425LL)) ? (5U) : (3319981396U)))));
                }
            } 
        } 
        arr_58 [6LL] [(unsigned char)4] |= ((/* implicit */short) var_0);
    }
    /* vectorizable */
    for (long long int i_18 = 0; i_18 < 14; i_18 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_19 = 0; i_19 < 14; i_19 += 1) 
        {
            arr_64 [i_18] [i_18] = ((/* implicit */unsigned long long int) ((((long long int) var_11)) >= (arr_8 [0U] [(unsigned short)0] [(unsigned short)0] [(unsigned short)0])));
            arr_65 [i_18] [i_18] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_32 [i_18] [i_18] [i_18])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)68))) : (arr_3 [i_18]))) / (((/* implicit */unsigned int) (((-2147483647 - 1)) | (((/* implicit */int) (short)24)))))));
        }
        var_43 = ((/* implicit */int) arr_60 [i_18]);
    }
    /* vectorizable */
    for (unsigned int i_20 = 0; i_20 < 14; i_20 += 4) 
    {
        var_44 = ((/* implicit */unsigned short) max((var_44), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_29 [i_20])) ? (((/* implicit */int) arr_6 [i_20] [i_20] [i_20] [0ULL])) : (((/* implicit */int) arr_14 [i_20] [i_20] [i_20] [(unsigned short)20])))))));
        arr_70 [(unsigned short)1] = ((/* implicit */signed char) ((arr_30 [i_20] [i_20]) | (arr_30 [i_20] [i_20])));
    }
}
