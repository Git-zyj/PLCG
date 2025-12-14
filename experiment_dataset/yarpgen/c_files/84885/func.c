/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84885
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84885 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84885
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
    for (long long int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 21; i_1 += 3) 
        {
            {
                arr_6 [i_0] [i_0] [i_1] = ((/* implicit */_Bool) ((unsigned long long int) (unsigned char)128));
                var_18 = ((/* implicit */unsigned char) 2248518133U);
                var_19 ^= (-(min((((/* implicit */long long int) (~(var_10)))), (min((arr_3 [2LL]), (((/* implicit */long long int) arr_1 [i_0] [i_1])))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned int i_2 = 0; i_2 < 22; i_2 += 3) 
                {
                    var_20 = ((/* implicit */unsigned long long int) var_16);
                    /* LoopSeq 3 */
                    for (signed char i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        arr_14 [i_3] [i_0] [i_0] [i_0] [i_3] [i_2] = ((/* implicit */long long int) ((unsigned short) arr_13 [i_1 - 1] [i_1 - 1] [i_1] [i_1] [i_1 - 2] [i_1 - 2]));
                        arr_15 [i_0] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)116))) | (arr_10 [i_0] [i_0] [i_0] [i_0]))) & ((-(2046449154U)))));
                    }
                    for (unsigned int i_4 = 0; i_4 < 22; i_4 += 3) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned long long int i_5 = 3; i_5 < 21; i_5 += 1) /* same iter space */
                        {
                            arr_22 [i_0] [i_1] [i_2] [i_0] [i_5] = ((/* implicit */unsigned long long int) 28U);
                            arr_23 [i_0] [i_0] [i_1 - 2] [i_1] [i_2] [i_0] [i_0] = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) : (2248518147U))));
                            var_21 = ((/* implicit */_Bool) var_3);
                            var_22 = ((/* implicit */unsigned int) (+(((arr_8 [i_2] [i_2] [i_5]) | (((/* implicit */unsigned long long int) var_10))))));
                        }
                        for (unsigned long long int i_6 = 3; i_6 < 21; i_6 += 1) /* same iter space */
                        {
                            var_23 = ((/* implicit */unsigned short) ((short) arr_21 [i_0] [i_1 - 2] [i_6 + 1] [i_6] [i_6]));
                            var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) ((arr_0 [i_1 - 1] [i_6 - 3]) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_20 [i_4] [i_1] [i_2] [(short)4] [(unsigned char)10] [i_4])) || (((/* implicit */_Bool) (short)-18087))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_15)) && (((/* implicit */_Bool) arr_9 [(unsigned short)12] [8U] [i_6]))))))))));
                            var_25 -= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_17 [i_6 + 1] [0U] [i_1]))));
                            arr_26 [i_0] [i_0] [i_0] [i_0] [i_6 - 2] [i_6] = (!((!(((/* implicit */_Bool) var_13)))));
                        }
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            var_26 = ((/* implicit */_Bool) ((long long int) arr_8 [i_1 - 1] [i_1 - 2] [i_1 - 2]));
                            var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) ((((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)107))))) * (arr_24 [i_0] [i_0] [i_1] [i_2] [i_4] [i_7]))))));
                            var_28 ^= ((/* implicit */long long int) (((!(((/* implicit */_Bool) 65535LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_30 [0ULL] [i_1 - 2] [i_1] [i_2] [i_4] [0ULL])))))) : (arr_11 [i_1 - 2] [i_2])));
                        }
                        /* LoopSeq 2 */
                        for (short i_8 = 0; i_8 < 22; i_8 += 1) 
                        {
                            var_29 = ((/* implicit */short) (~(0)));
                            arr_33 [i_0] [i_1] [i_0] [i_2] [i_2] [i_0] [i_0] = ((/* implicit */_Bool) ((arr_11 [i_1] [i_4]) * (((/* implicit */unsigned int) -26))));
                        }
                        for (signed char i_9 = 0; i_9 < 22; i_9 += 3) 
                        {
                            var_30 *= ((/* implicit */short) (+(arr_3 [20])));
                            var_31 = ((/* implicit */long long int) ((((/* implicit */unsigned int) (~(-1)))) <= (var_17)));
                        }
                        arr_36 [i_4] [(_Bool)1] [(_Bool)1] [i_0] &= ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_4))))) ? (arr_10 [i_0] [i_2] [i_2] [i_2]) : (((/* implicit */unsigned int) ((int) var_2)))));
                        arr_37 [i_0] [i_0] [i_1] [i_2] [i_4] = ((/* implicit */long long int) ((signed char) arr_9 [i_1 - 1] [i_0] [i_1 - 2]));
                    }
                    for (unsigned short i_10 = 1; i_10 < 20; i_10 += 3) 
                    {
                        var_32 = ((/* implicit */short) (+(var_7)));
                        var_33 -= ((/* implicit */unsigned char) ((((/* implicit */int) arr_12 [i_1] [i_1 - 1] [i_1 + 1] [2U])) < (((/* implicit */int) var_1))));
                        var_34 = ((/* implicit */long long int) var_15);
                    }
                }
            }
        } 
    } 
    /* LoopSeq 4 */
    /* vectorizable */
    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
    {
        arr_43 [i_11] [i_11] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) arr_42 [i_11])) : (4677128003328969421ULL)));
        var_35 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 6291456U)) ? (((/* implicit */int) (short)-18087)) : (arr_42 [(signed char)10])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_42 [i_11])) ? (((/* implicit */int) (unsigned char)142)) : (arr_42 [i_11]))))));
    }
    for (signed char i_12 = 0; i_12 < 22; i_12 += 1) 
    {
        arr_47 [i_12] [i_12] = ((((/* implicit */_Bool) (~(min((var_7), (((/* implicit */unsigned long long int) arr_2 [i_12]))))))) ? (((((/* implicit */_Bool) (~(-2)))) ? (arr_39 [i_12] [i_12]) : ((~(((/* implicit */int) var_14)))))) : (((/* implicit */int) arr_46 [i_12])));
        var_36 = ((/* implicit */long long int) (~(((/* implicit */int) (signed char)-60))));
    }
    for (short i_13 = 3; i_13 < 9; i_13 += 1) /* same iter space */
    {
        var_37 = ((/* implicit */unsigned char) var_9);
        var_38 = ((/* implicit */unsigned char) (+(((long long int) (-(((/* implicit */int) var_0)))))));
        /* LoopSeq 3 */
        for (signed char i_14 = 0; i_14 < 13; i_14 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned char i_15 = 2; i_15 < 12; i_15 += 3) 
            {
                for (unsigned int i_16 = 0; i_16 < 13; i_16 += 1) 
                {
                    {
                        var_39 = ((/* implicit */signed char) min((var_39), (((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)-108)))))));
                        /* LoopSeq 1 */
                        for (unsigned int i_17 = 0; i_17 < 13; i_17 += 3) 
                        {
                            arr_63 [i_17] [(unsigned short)11] [i_17] [i_13] [(unsigned short)11] = ((/* implicit */short) (~(((/* implicit */int) arr_46 [i_13]))));
                            var_40 ^= ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_6))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_11))))) : (4294967295U)));
                        }
                        var_41 &= ((/* implicit */short) max((((min((((/* implicit */unsigned int) 1356256026)), (2046449162U))) < (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)110))))))), (var_14)));
                        var_42 = ((/* implicit */unsigned long long int) (+((-(((/* implicit */int) arr_40 [i_13 + 2]))))));
                    }
                } 
            } 
            var_43 = ((/* implicit */unsigned char) (signed char)-108);
        }
        for (signed char i_18 = 0; i_18 < 13; i_18 += 1) /* same iter space */
        {
            var_44 |= ((((/* implicit */_Bool) arr_56 [i_18] [i_13])) ? (min((var_7), (arr_60 [i_13] [i_13 + 3] [i_13 - 1] [i_13 - 3] [i_13 + 3]))) : (((/* implicit */unsigned long long int) arr_29 [i_13] [i_13 - 2] [i_13 - 2] [i_18] [(signed char)15] [i_13])));
            var_45 = ((/* implicit */long long int) (_Bool)1);
            var_46 &= ((/* implicit */unsigned char) -65542LL);
            var_47 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)156))) & (8436400326473382166ULL)));
        }
        /* vectorizable */
        for (signed char i_19 = 0; i_19 < 13; i_19 += 1) /* same iter space */
        {
            arr_69 [i_13] [i_13] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_0))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_13] [i_13]))) : (2138824404U)))) : ((-(9113012827822069161ULL)))));
            /* LoopSeq 1 */
            for (signed char i_20 = 0; i_20 < 13; i_20 += 3) 
            {
                var_48 = ((/* implicit */long long int) arr_4 [i_13]);
                var_49 = ((/* implicit */short) (-((-(var_16)))));
                /* LoopNest 2 */
                for (unsigned char i_21 = 2; i_21 < 12; i_21 += 3) 
                {
                    for (int i_22 = 0; i_22 < 13; i_22 += 3) 
                    {
                        {
                            var_50 -= ((/* implicit */_Bool) ((unsigned long long int) arr_45 [18LL] [i_13 - 2]));
                            var_51 ^= ((/* implicit */unsigned int) 4187001914403869874ULL);
                            arr_80 [i_13] = (~(((/* implicit */int) ((signed char) arr_74 [(unsigned char)10] [i_19] [i_20] [i_13] [i_22]))));
                        }
                    } 
                } 
            }
            var_52 = ((((/* implicit */_Bool) arr_1 [i_13] [i_13 - 1])) ? (((4187001914403869874ULL) >> (((((/* implicit */int) (short)20651)) - (20615))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_79 [i_13 + 2] [i_13 + 2]))));
        }
    }
    /* vectorizable */
    for (short i_23 = 3; i_23 < 9; i_23 += 1) /* same iter space */
    {
        var_53 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_30 [i_23] [i_23] [i_23] [i_23 + 2] [i_23 + 4] [i_23])) & (((/* implicit */int) var_6)))))));
        arr_83 [i_23] [i_23] = ((/* implicit */unsigned char) arr_75 [i_23] [i_23] [i_23] [i_23]);
    }
}
