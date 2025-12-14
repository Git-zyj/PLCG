/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94333
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94333 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94333
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
    var_14 = ((/* implicit */unsigned int) var_7);
    var_15 &= ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_11)) && (var_5))) ? ((~(((/* implicit */int) var_12)))) : ((-(((/* implicit */int) var_11))))))) ? ((-(((((/* implicit */int) var_9)) * (((/* implicit */int) var_7)))))) : (((/* implicit */int) var_7))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 3; i_0 < 17; i_0 += 4) /* same iter space */
    {
        var_16 = ((/* implicit */short) (-(arr_0 [i_0])));
        var_17 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) min((arr_2 [i_0]), (((/* implicit */unsigned short) ((arr_0 [i_0]) < (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))))))))), ((~(((((/* implicit */_Bool) arr_1 [i_0 - 2] [i_0])) ? (((/* implicit */unsigned long long int) 1934864198U)) : (arr_1 [i_0] [(_Bool)1])))))));
        var_18 = ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */int) arr_2 [i_0 - 1])) | (((/* implicit */int) arr_2 [i_0 - 1])))));
    }
    for (unsigned int i_1 = 3; i_1 < 17; i_1 += 4) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned char) (~(((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_2 [i_1])))) % (((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */long long int) arr_5 [i_1])) : (arr_0 [i_1])))))));
        var_20 = ((/* implicit */unsigned short) (~((-(((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_2 [i_1]))))))));
        arr_6 [(short)4] |= arr_3 [(short)14];
        var_21 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (-((-(((/* implicit */int) var_13))))))) == (arr_1 [i_1] [i_1])));
    }
    for (int i_2 = 3; i_2 < 20; i_2 += 3) 
    {
        var_22 = ((/* implicit */unsigned int) ((short) (-(min((arr_8 [i_2]), (arr_8 [i_2]))))));
        var_23 = ((/* implicit */short) (~(var_3)));
        /* LoopSeq 4 */
        for (unsigned char i_3 = 0; i_3 < 21; i_3 += 1) /* same iter space */
        {
            var_24 = ((/* implicit */unsigned short) (+(((/* implicit */int) min((((/* implicit */short) (!(((/* implicit */_Bool) arr_7 [i_2]))))), (arr_10 [i_2 - 1]))))));
            var_25 = ((/* implicit */unsigned short) arr_11 [i_2] [i_3]);
            var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_2])) ? (((/* implicit */int) arr_11 [i_2 - 2] [(unsigned char)15])) : (((/* implicit */int) arr_10 [i_2]))));
            /* LoopSeq 2 */
            for (short i_4 = 0; i_4 < 21; i_4 += 1) 
            {
                var_27 = ((/* implicit */unsigned int) min((var_27), (min((((/* implicit */unsigned int) ((short) (~(((/* implicit */int) (short)0)))))), (max((((/* implicit */unsigned int) ((short) arr_14 [13] [13] [i_3] [i_4]))), (((((/* implicit */unsigned int) ((/* implicit */int) arr_15 [6] [i_3] [(_Bool)1]))) % (var_10)))))))));
                var_28 = ((/* implicit */int) min((var_28), (((/* implicit */int) (short)(-32767 - 1)))));
            }
            for (unsigned int i_5 = 0; i_5 < 21; i_5 += 4) 
            {
                /* LoopSeq 3 */
                for (unsigned int i_6 = 0; i_6 < 21; i_6 += 4) 
                {
                    var_29 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2084090602)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (var_3)))) && (((/* implicit */_Bool) ((1934864198U) - (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_3] [i_5] [i_3] [i_2])))))))))));
                    var_30 = ((/* implicit */_Bool) (+(((var_2) ? (min((arr_21 [i_3] [i_6]), (((/* implicit */long long int) arr_17 [i_2] [i_5] [(unsigned char)13])))) : (((/* implicit */long long int) (~(arr_16 [i_3] [i_3] [i_3] [i_3]))))))));
                }
                for (long long int i_7 = 0; i_7 < 21; i_7 += 4) 
                {
                    var_31 = ((/* implicit */unsigned int) arr_19 [i_2] [i_2] [i_2] [i_2]);
                    /* LoopSeq 2 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        var_32 -= ((/* implicit */unsigned short) arr_22 [i_7]);
                        var_33 = ((/* implicit */unsigned char) max((var_33), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_23 [14] [7] [7] [i_7] [i_7] [i_7]))))) && (((/* implicit */_Bool) min((arr_19 [i_2] [(_Bool)1] [i_5] [i_8]), (arr_19 [i_7] [i_3] [i_5] [i_7])))))))));
                        arr_27 [i_2] [i_2] [i_5] [i_2] [i_8] = ((/* implicit */_Bool) max((((((/* implicit */unsigned int) ((/* implicit */int) min((arr_12 [i_5] [i_7] [6U]), (arr_11 [i_3] [i_3]))))) + ((-(arr_16 [i_2] [i_2] [19U] [i_2]))))), (((/* implicit */unsigned int) max(((-(((/* implicit */int) (_Bool)1)))), (((((/* implicit */int) arr_19 [(unsigned char)12] [16] [i_2] [i_2])) * (((/* implicit */int) arr_12 [i_2] [i_3] [i_2])))))))));
                    }
                    for (unsigned short i_9 = 0; i_9 < 21; i_9 += 1) 
                    {
                        var_34 |= ((/* implicit */_Bool) (-(((((/* implicit */_Bool) min((arr_21 [i_3] [i_9]), (((/* implicit */long long int) arr_13 [i_2] [17ULL] [i_7]))))) ? (((/* implicit */int) arr_20 [i_2 - 2] [i_2 - 2] [i_2 - 2] [i_2 - 1])) : (((/* implicit */int) max((arr_19 [(unsigned short)8] [(unsigned short)8] [i_7] [i_9]), ((short)-1))))))));
                        var_35 = ((/* implicit */unsigned short) max((var_35), (((/* implicit */unsigned short) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_2 - 1] [i_3] [i_5] [(unsigned char)14] [i_9] [i_5])) ? (((/* implicit */int) arr_17 [i_2 - 1] [i_7] [i_9])) : (((/* implicit */int) arr_26 [i_7] [i_7] [i_5] [i_3] [i_2]))))))) ? (((((arr_22 [i_5]) || (arr_17 [i_5] [i_7] [i_9]))) ? (((/* implicit */int) ((arr_11 [i_2] [i_9]) || (arr_29 [i_2] [i_2] [i_2])))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))))) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_9])) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)0)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_2] [i_2] [i_2] [i_2 + 1])) ? (((/* implicit */int) arr_29 [i_3] [i_5] [i_7])) : (((/* implicit */int) arr_10 [i_2])))))))))))));
                        arr_30 [i_2] [i_2] [i_2] [i_2] [(unsigned short)2] = ((/* implicit */unsigned short) min(((-(((arr_12 [i_2] [i_2] [i_5]) ? (arr_28 [i_2] [i_3] [i_2] [i_9]) : (((/* implicit */long long int) arr_14 [i_2] [i_2] [i_2] [4LL])))))), (((/* implicit */long long int) arr_22 [i_2]))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned int i_10 = 0; i_10 < 21; i_10 += 1) 
                    {
                        var_36 = ((/* implicit */short) max((var_36), (((/* implicit */short) (-((+(((/* implicit */int) arr_29 [16ULL] [16ULL] [i_2 + 1])))))))));
                        var_37 = ((/* implicit */unsigned int) min(((-(((/* implicit */int) ((((/* implicit */int) var_13)) == (((/* implicit */int) (unsigned char)69))))))), (((/* implicit */int) arr_22 [i_2]))));
                        var_38 = ((/* implicit */short) min((var_38), (((/* implicit */short) (((-(max((((/* implicit */unsigned int) arr_29 [i_3] [i_3] [i_10])), (arr_18 [i_5] [i_3] [(short)2] [i_7]))))) % (((/* implicit */unsigned int) (+(((/* implicit */int) min((arr_32 [(short)20] [i_3] [i_7] [i_3] [i_3]), (arr_10 [i_10]))))))))))));
                    }
                    var_39 = ((/* implicit */_Bool) max((var_39), (((/* implicit */_Bool) ((max((arr_29 [i_7] [i_2 - 1] [i_5]), (arr_22 [i_7]))) ? (((((/* implicit */int) arr_29 [i_2] [i_2 - 1] [i_5])) + (((/* implicit */int) arr_22 [i_5])))) : (((/* implicit */int) max((arr_22 [i_7]), (arr_22 [i_5])))))))));
                    var_40 = ((/* implicit */unsigned short) min((var_40), (((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_6))))) && (arr_29 [i_2 - 1] [i_3] [i_2 - 3])))))));
                }
                /* vectorizable */
                for (short i_11 = 3; i_11 < 20; i_11 += 3) 
                {
                    var_41 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_17 [i_2] [i_3] [i_2]) ? (((/* implicit */int) arr_12 [i_2 + 1] [i_3] [i_5])) : (((/* implicit */int) arr_20 [i_2] [i_3] [i_5] [(_Bool)1]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_3])) && (((/* implicit */_Bool) var_8))))) : (((/* implicit */int) arr_31 [i_2] [i_2 + 1] [i_11 - 1] [i_2] [(unsigned char)17]))));
                    arr_35 [i_11] [i_5] [i_5] [i_2] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_13 [i_2 - 3] [i_2] [i_2 + 1])) ? ((+(((/* implicit */int) arr_12 [i_5] [i_3] [17U])))) : ((-(((/* implicit */int) (_Bool)1))))));
                    arr_36 [i_3] [i_2] [i_5] [i_3] = ((/* implicit */unsigned long long int) (~(arr_13 [i_11 - 3] [i_2 - 3] [16ULL])));
                }
                arr_37 [i_2] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) (+(arr_25 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3]))))) ? (((/* implicit */unsigned int) ((int) (-(((/* implicit */int) arr_11 [i_2] [i_3])))))) : (max((2360103097U), (((/* implicit */unsigned int) arr_10 [i_2 - 3]))))));
            }
        }
        for (unsigned char i_12 = 0; i_12 < 21; i_12 += 1) /* same iter space */
        {
            var_42 = ((/* implicit */unsigned char) min((((((2360103097U) < (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)172))))) ? (arr_14 [i_2] [i_2 - 2] [i_2 - 1] [i_2 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_6)))))), (((/* implicit */unsigned int) arr_19 [i_2] [i_2 - 1] [i_2] [i_2]))));
            var_43 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_28 [i_2] [i_12] [i_12] [i_12])) ? (((/* implicit */int) arr_38 [(short)6] [(short)6] [i_12])) : (arr_7 [i_2])))))) ? (min(((-(((/* implicit */int) arr_15 [i_2] [i_12] [i_2])))), (((/* implicit */int) ((((/* implicit */_Bool) arr_38 [i_2] [i_2] [i_2])) && (((/* implicit */_Bool) arr_14 [i_2] [i_2] [i_2] [i_12]))))))) : (((/* implicit */int) arr_15 [i_2] [i_2] [i_12]))));
            var_44 = ((/* implicit */unsigned short) ((short) ((((/* implicit */int) arr_9 [i_2 + 1])) % (((/* implicit */int) arr_9 [i_2 + 1])))));
            arr_40 [16LL] |= arr_14 [i_2] [i_12] [i_12] [i_12];
            var_45 |= ((((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_2 - 3]))))) == ((-(((/* implicit */int) arr_9 [i_2 - 1])))));
        }
        for (unsigned short i_13 = 2; i_13 < 18; i_13 += 4) /* same iter space */
        {
            var_46 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_2] [i_2 - 1] [i_2] [i_13 - 1])) ? (((/* implicit */unsigned int) (+(((/* implicit */int) arr_19 [i_2] [i_2] [i_2 - 1] [i_13]))))) : (arr_18 [i_2] [i_2 + 1] [i_2 - 1] [i_13 + 1])));
            var_47 = ((/* implicit */unsigned short) arr_22 [i_2]);
        }
        for (unsigned short i_14 = 2; i_14 < 18; i_14 += 4) /* same iter space */
        {
            var_48 -= ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_25 [i_2] [i_14 + 3] [i_14 + 3] [i_2] [i_2 - 1] [i_2])) && (((/* implicit */_Bool) arr_31 [i_14 - 2] [i_14 + 2] [(_Bool)1] [i_2 - 3] [i_2])))))));
            var_49 = ((/* implicit */long long int) ((unsigned short) max((((/* implicit */long long int) ((arr_15 [i_2] [i_14] [i_14]) && (((/* implicit */_Bool) arr_7 [i_2]))))), (arr_21 [i_2 - 3] [i_14]))));
            arr_47 [(_Bool)1] [i_2] [i_14 - 2] = ((/* implicit */unsigned short) (-((+(arr_16 [i_14] [i_14 + 3] [i_2] [i_2])))));
            /* LoopSeq 1 */
            for (unsigned int i_15 = 0; i_15 < 21; i_15 += 3) 
            {
                var_50 -= ((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) (unsigned char)255)) ? ((~(arr_8 [i_14]))) : (((/* implicit */unsigned int) (+(((/* implicit */int) arr_22 [i_14]))))))));
                var_51 = ((/* implicit */_Bool) max((var_51), (((/* implicit */_Bool) (-9223372036854775807LL - 1LL)))));
                var_52 = ((/* implicit */long long int) ((_Bool) ((((/* implicit */int) arr_50 [i_14 + 2] [i_2 - 1])) % (((/* implicit */int) arr_50 [i_14 + 2] [i_2 - 2])))));
                var_53 |= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_23 [i_2] [i_2] [i_2 - 2] [i_2] [i_2] [i_2 - 2])) ? (((/* implicit */int) arr_23 [i_2] [i_2] [i_2 - 2] [i_2] [i_2 - 1] [i_2 - 1])) : (((/* implicit */int) arr_23 [i_2] [i_2] [i_2 + 1] [i_2] [i_2] [i_2 + 1])))) << ((((~(((/* implicit */int) arr_23 [i_2] [i_2 - 3] [i_2 + 1] [(unsigned char)12] [i_2] [i_2 - 2])))) + (6369)))));
            }
            var_54 = ((/* implicit */_Bool) ((int) ((arr_15 [i_2] [i_2 - 3] [i_14 - 2]) ? ((+(var_3))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_2] [i_2 - 2] [i_2 - 3] [5U])) ? (arr_13 [i_2] [4] [(short)19]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)22316)))))))));
        }
        var_55 = ((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((arr_29 [i_2 + 1] [i_2 - 2] [i_2 - 2]) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_17 [i_2 - 3] [i_2] [i_2]))))) <= (((unsigned long long int) arr_41 [i_2] [i_2] [i_2 - 3])))))));
    }
}
