/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96326
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96326 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96326
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
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 1) /* same iter space */
    {
        var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) (+((+(arr_2 [(signed char)16]))))))));
        var_14 += ((/* implicit */short) max((((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) -814848822)) ? (((/* implicit */int) arr_0 [(short)18])) : (((/* implicit */int) var_1)))))), (min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_1 [i_0]))))), (arr_1 [22])))));
    }
    for (unsigned short i_1 = 0; i_1 < 23; i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] = ((/* implicit */unsigned short) ((long long int) ((int) arr_5 [i_1])));
        var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? ((((!(((/* implicit */_Bool) var_4)))) ? (((/* implicit */int) arr_5 [i_1])) : (814848838))) : (((/* implicit */int) ((((/* implicit */int) max((var_8), (((/* implicit */unsigned char) arr_5 [i_1]))))) != (((/* implicit */int) arr_0 [4U]))))))))));
    }
    for (signed char i_2 = 0; i_2 < 17; i_2 += 3) 
    {
        arr_12 [i_2] = ((/* implicit */short) arr_9 [i_2]);
        arr_13 [i_2] = ((/* implicit */unsigned char) arr_8 [i_2]);
        /* LoopSeq 2 */
        for (signed char i_3 = 0; i_3 < 17; i_3 += 4) /* same iter space */
        {
            var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) var_3))));
            var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_14 [(signed char)10]))))), (var_7)))) ? (((/* implicit */long long int) var_4)) : ((~(((((/* implicit */_Bool) arr_15 [i_2] [11])) ? (arr_8 [i_3]) : (var_5)))))));
        }
        /* vectorizable */
        for (signed char i_4 = 0; i_4 < 17; i_4 += 4) /* same iter space */
        {
            /* LoopSeq 3 */
            for (long long int i_5 = 0; i_5 < 17; i_5 += 3) /* same iter space */
            {
                arr_22 [i_2] [i_5] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_20 [i_5])) ? (arr_18 [5]) : (arr_18 [i_5])));
                arr_23 [i_5] [i_4] [i_5] = ((/* implicit */signed char) ((var_9) ? ((-(var_5))) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_5])))));
                var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) ((signed char) arr_6 [i_2])))));
            }
            for (long long int i_6 = 0; i_6 < 17; i_6 += 3) /* same iter space */
            {
                /* LoopSeq 3 */
                for (unsigned char i_7 = 0; i_7 < 17; i_7 += 4) 
                {
                    arr_29 [i_4] [i_4] [i_6] [i_7] [i_4] = ((/* implicit */signed char) ((unsigned short) arr_9 [i_7]));
                    arr_30 [i_2] [i_4] [10ULL] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) (_Bool)1))) ? (((/* implicit */int) var_3)) : (var_12)));
                    var_19 = ((/* implicit */int) (signed char)-118);
                }
                for (unsigned short i_8 = 0; i_8 < 17; i_8 += 2) 
                {
                    var_20 = ((/* implicit */unsigned int) ((_Bool) arr_17 [7LL] [(signed char)3]));
                    arr_34 [i_2] [4] [i_6] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((-916764465) + (2147483647))) >> (((((/* implicit */int) arr_32 [i_2] [i_8] [i_6] [i_4] [i_2] [i_2])) - (17807)))))) ? (((/* implicit */int) arr_21 [12] [12])) : (((/* implicit */int) arr_19 [i_8] [i_4]))));
                    arr_35 [i_2] [(unsigned short)14] [i_6] [i_8] = ((/* implicit */long long int) (-(((/* implicit */int) arr_31 [i_2] [i_2] [i_8] [(signed char)11]))));
                }
                for (unsigned char i_9 = 0; i_9 < 17; i_9 += 1) 
                {
                    arr_38 [14] [i_4] [i_4] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((int) var_2)))));
                    var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 2U)) ? (((805306368) % (916764464))) : (((/* implicit */int) (unsigned char)15))));
                    var_22 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_4 [i_9])) == (((/* implicit */int) arr_4 [i_6]))));
                    /* LoopSeq 3 */
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) arr_10 [i_4]))));
                        arr_43 [i_9] [i_9] = ((/* implicit */unsigned short) (-(((((/* implicit */int) arr_4 [i_4])) % (((/* implicit */int) arr_0 [i_4]))))));
                        arr_44 [(unsigned char)14] [i_4] &= ((/* implicit */short) var_9);
                        var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_4 [i_2])) : (((/* implicit */int) ((unsigned char) 814848848))))))));
                        var_25 |= ((/* implicit */int) ((short) (+(arr_18 [i_4]))));
                    }
                    for (unsigned int i_11 = 0; i_11 < 17; i_11 += 2) 
                    {
                        var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) ((unsigned int) arr_26 [i_6])))));
                        var_27 = ((/* implicit */unsigned short) arr_5 [i_11]);
                        arr_47 [i_2] [i_4] [i_4] [i_9] [i_11] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1188631231U)) ? (var_0) : (((/* implicit */long long int) 916764467))))) ? ((~(var_4))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_11 [i_2] [i_2])) << (((((/* implicit */int) arr_42 [(_Bool)1])) - (47038))))))));
                    }
                    for (int i_12 = 0; i_12 < 17; i_12 += 1) 
                    {
                        var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_39 [i_9] [i_4] [i_9] [i_9] [i_12])))))));
                        arr_51 [i_12] [i_9] [i_12] [i_6] [i_4] [i_4] [i_12] = ((/* implicit */unsigned long long int) arr_11 [i_2] [i_4]);
                        arr_52 [i_2] [i_12] [i_2] [i_2] [i_2] [(unsigned char)10] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_16 [i_2] [i_4] [i_12])) : (((/* implicit */int) arr_26 [i_2]))));
                    }
                    arr_53 [i_9] |= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_10 [i_2]))));
                }
                arr_54 [i_2] [i_2] |= ((/* implicit */long long int) (!(((/* implicit */_Bool) var_2))));
            }
            for (long long int i_13 = 0; i_13 < 17; i_13 += 3) /* same iter space */
            {
                var_29 = ((/* implicit */short) arr_4 [i_13]);
                var_30 |= ((/* implicit */short) (!((!(((/* implicit */_Bool) arr_26 [i_2]))))));
                /* LoopSeq 3 */
                for (int i_14 = 0; i_14 < 17; i_14 += 4) 
                {
                    arr_61 [i_2] [(signed char)4] [(signed char)4] [0U] [i_14] [i_14] &= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_10 [i_14]))));
                    var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_40 [i_2] [(_Bool)1] [i_2] [i_2] [i_2] [i_2] [9ULL])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_2] [i_2]))) : (((((/* implicit */_Bool) (unsigned char)110)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_32 [i_2] [5ULL] [i_13] [i_13] [i_2] [i_13]))) : (arr_2 [i_13])))));
                    arr_62 [i_2] [i_13] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_25 [i_2] [i_13])) ? (((unsigned int) var_12)) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_41 [9U] [i_4] [i_4] [i_4] [i_13] [i_14] [i_14])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_21 [i_4] [i_2])))))));
                }
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                {
                    var_32 ^= ((/* implicit */int) ((((/* implicit */_Bool) (+(arr_57 [i_2] [i_4] [i_15])))) ? (arr_15 [i_4] [i_4]) : (var_4)));
                    var_33 = ((/* implicit */int) min((var_33), ((((!(((/* implicit */_Bool) (signed char)-87)))) ? (((/* implicit */int) arr_21 [12U] [16])) : (((/* implicit */int) arr_28 [i_2] [i_4] [i_4] [i_13] [i_15] [i_4]))))));
                }
                for (int i_16 = 0; i_16 < 17; i_16 += 1) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_17 = 0; i_17 < 17; i_17 += 3) 
                    {
                        var_34 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_39 [(signed char)0] [i_4] [(unsigned char)15] [1LL] [i_17]))));
                        var_35 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_37 [3U] [i_16] [i_2] [i_4] [i_2])) ? (((/* implicit */int) (unsigned char)96)) : (arr_66 [i_2] [(short)12] [i_4] [i_13] [(short)12] [i_17])))) ? (arr_68 [i_16] [i_13] [i_4] [i_2]) : (((((/* implicit */_Bool) var_5)) ? (var_11) : (-1073741824)))));
                    }
                    /* LoopSeq 4 */
                    for (int i_18 = 0; i_18 < 17; i_18 += 3) /* same iter space */
                    {
                        var_36 += (!(((/* implicit */_Bool) var_5)));
                        var_37 = ((/* implicit */int) max((var_37), (((/* implicit */int) arr_1 [i_18]))));
                    }
                    for (int i_19 = 0; i_19 < 17; i_19 += 3) /* same iter space */
                    {
                        arr_76 [i_2] [(unsigned char)15] [i_13] [i_13] [(unsigned char)16] [i_2] [(unsigned short)12] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_41 [i_2] [i_2] [i_2] [i_2] [i_16] [i_4] [i_2])) || (((((/* implicit */_Bool) arr_41 [i_2] [i_2] [i_2] [5U] [5U] [(signed char)3] [i_2])) && (arr_28 [(_Bool)1] [i_4] [i_13] [i_16] [i_4] [i_16])))));
                        var_38 = ((/* implicit */unsigned short) max((var_38), (((/* implicit */unsigned short) ((((/* implicit */int) arr_70 [i_2] [i_4] [(unsigned char)0] [i_16] [i_19])) + (((/* implicit */int) (!(((/* implicit */_Bool) arr_49 [i_19] [i_4] [i_4] [i_2]))))))))));
                    }
                    for (unsigned long long int i_20 = 0; i_20 < 17; i_20 += 2) 
                    {
                        var_39 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(var_4)))) ? (((/* implicit */int) arr_25 [i_2] [i_20])) : (((/* implicit */int) ((signed char) (_Bool)1)))));
                        arr_80 [i_2] [i_2] [i_2] [i_2] [i_2] [i_13] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_41 [i_13] [i_2] [i_13] [i_13] [i_13] [(short)0] [i_2])) ? (((/* implicit */int) arr_41 [2U] [i_16] [i_13] [i_13] [i_4] [i_4] [i_2])) : (((/* implicit */int) arr_41 [i_20] [i_16] [i_16] [i_13] [i_4] [i_2] [i_2]))));
                        arr_81 [i_2] [i_4] [i_13] [i_16] [i_4] [i_4] [i_13] = ((/* implicit */unsigned int) var_6);
                    }
                    for (signed char i_21 = 0; i_21 < 17; i_21 += 4) 
                    {
                        var_40 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) 16383)) - (var_4)))) ? (((/* implicit */int) arr_67 [i_4] [i_16] [(unsigned char)7])) : (((/* implicit */int) arr_17 [i_13] [i_21]))));
                        var_41 = ((/* implicit */unsigned long long int) min((var_41), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_65 [i_2] [i_21] [i_13] [i_21])) ? (((/* implicit */int) arr_65 [i_4] [(unsigned char)10] [15] [15])) : (((/* implicit */int) arr_65 [i_4] [i_4] [i_4] [i_16])))))));
                        var_42 |= ((/* implicit */short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_5 [i_2]))));
                    }
                    var_43 = ((/* implicit */short) max((var_43), (((/* implicit */short) ((int) var_4)))));
                }
                var_44 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_14 [i_4]))));
            }
            var_45 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_14 [i_2])) ? (((/* implicit */int) arr_14 [i_2])) : (((/* implicit */int) arr_14 [i_4]))));
        }
        var_46 = ((/* implicit */int) (unsigned short)3968);
    }
    /* LoopSeq 2 */
    for (signed char i_22 = 0; i_22 < 13; i_22 += 2) 
    {
        var_47 &= ((/* implicit */short) ((unsigned short) (signed char)1));
        var_48 = ((/* implicit */signed char) (unsigned short)12288);
        var_49 ^= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_85 [i_22])) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_5)))) ? (((((/* implicit */_Bool) (-2147483647 - 1))) ? (arr_18 [(unsigned short)6]) : (var_11))) : (((/* implicit */int) (!(((/* implicit */_Bool) 1188631234U))))))) < (((/* implicit */int) ((((arr_63 [i_22] [i_22]) - (((/* implicit */unsigned int) ((/* implicit */int) (signed char)115))))) >= (((/* implicit */unsigned int) (+(arr_18 [i_22])))))))));
    }
    for (unsigned short i_23 = 0; i_23 < 20; i_23 += 1) 
    {
        arr_89 [i_23] &= ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_88 [i_23])) ? (arr_2 [8]) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))))) <= (((((/* implicit */_Bool) arr_3 [i_23] [i_23])) ? (max((var_11), (((/* implicit */int) arr_5 [i_23])))) : (((/* implicit */int) min((var_8), (var_7))))))));
        var_50 = ((/* implicit */signed char) min((var_50), (((/* implicit */signed char) arr_1 [i_23]))));
    }
}
