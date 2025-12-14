/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58137
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58137 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58137
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
    for (short i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        arr_2 [i_0] [19ULL] = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_1 [i_0] [i_0])) * (((/* implicit */int) arr_1 [i_0] [i_0])))) <= (arr_0 [17U])));
        var_12 += ((/* implicit */signed char) ((((/* implicit */int) arr_1 [i_0] [(unsigned short)16])) <= (((/* implicit */int) var_1))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (short i_1 = 1; i_1 < 19; i_1 += 3) 
        {
            var_13 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_1])) ? (arr_3 [i_0] [i_0]) : (((/* implicit */long long int) arr_0 [i_0]))))) ^ (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) var_9)) : (var_7)))));
            arr_6 [i_1] [i_1] [i_1] = (-(((/* implicit */int) var_4)));
            arr_7 [10LL] [i_1] &= ((/* implicit */signed char) (+(((/* implicit */int) (short)-1893))));
        }
        for (int i_2 = 0; i_2 < 22; i_2 += 3) 
        {
            arr_11 [i_0] = max((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_8))) > (((((/* implicit */_Bool) arr_8 [i_2] [i_2])) ? (arr_5 [16ULL] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [(_Bool)1])))))))), ((+(((/* implicit */int) arr_1 [i_0] [i_0])))));
            /* LoopNest 2 */
            for (signed char i_3 = 0; i_3 < 22; i_3 += 1) 
            {
                for (long long int i_4 = 1; i_4 < 21; i_4 += 2) 
                {
                    {
                        arr_18 [i_0] [i_0] [i_0] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) (-(var_6)))) ? (max((((/* implicit */int) min((((/* implicit */unsigned short) arr_4 [(short)12])), (var_0)))), (((((/* implicit */int) arr_15 [i_3] [21])) & (arr_8 [2U] [(short)0]))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [(signed char)14] [(signed char)14])) ? (((/* implicit */int) var_2)) : (arr_8 [i_0] [i_0])))) ? (((/* implicit */int) var_8)) : (arr_10 [i_0] [6ULL])))));
                        /* LoopSeq 2 */
                        for (unsigned short i_5 = 3; i_5 < 18; i_5 += 2) 
                        {
                            var_14 = ((/* implicit */short) ((((/* implicit */_Bool) max((arr_20 [i_5 + 1] [i_5] [i_5 - 1] [i_5 + 2] [i_5]), (((/* implicit */unsigned short) arr_16 [i_4 + 1] [i_4 + 1] [i_4 + 1] [i_5 + 2] [i_5 - 3] [i_5 + 1]))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))));
                            arr_23 [i_0] [i_0] [i_0] [i_4] [i_0] &= ((/* implicit */int) arr_15 [i_5] [i_5 - 2]);
                            arr_24 [i_5] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_22 [i_0] [i_0] [i_3] [i_4] [i_5] [i_4] [i_0])) ? (arr_12 [i_0] [i_0] [i_0] [i_0]) : (min((((((/* implicit */_Bool) 4294967295U)) ? (12097170471022791057ULL) : (((/* implicit */unsigned long long int) 323956047798144981LL)))), (5788868218760308999ULL)))));
                            var_15 += ((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */int) arr_13 [i_5 + 4] [i_4 - 1] [i_3] [i_4])) == (((/* implicit */int) arr_20 [i_5 + 4] [i_4 - 1] [i_3] [i_4 - 1] [i_5]))))), (((((/* implicit */_Bool) arr_20 [i_5 + 4] [i_4 - 1] [i_0] [i_4] [i_5])) ? (((/* implicit */int) arr_13 [i_5 + 4] [i_4 - 1] [i_3] [(unsigned short)10])) : (((/* implicit */int) arr_13 [i_5 + 4] [i_4 - 1] [11LL] [i_0]))))));
                            var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) arr_9 [(unsigned char)7] [(_Bool)1]))));
                        }
                        /* vectorizable */
                        for (long long int i_6 = 0; i_6 < 22; i_6 += 2) 
                        {
                            arr_27 [(unsigned char)10] [(unsigned char)10] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */signed char) arr_21 [17ULL] [17ULL] [i_3] [i_4] [i_4 + 1]);
                            arr_28 [i_0] [i_2] [i_3] [(unsigned short)5] [14U] [i_2] = ((/* implicit */unsigned int) (+(-264883976)));
                            var_17 ^= ((/* implicit */unsigned char) var_5);
                        }
                        var_18 += ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (+(var_10)))) ? ((~(((/* implicit */int) arr_26 [i_4] [i_2] [i_3] [i_4] [i_4] [i_4])))) : ((-(arr_8 [18U] [i_2]))))) - (((/* implicit */int) min((arr_16 [i_0] [12U] [i_2] [i_0] [i_3] [i_4 + 1]), (arr_16 [i_0] [i_2] [i_0] [i_2] [i_0] [i_4 + 1]))))));
                        arr_29 [i_0] [(unsigned short)1] [i_4] [i_4 - 1] [i_4] = ((/* implicit */_Bool) (+((-(((((/* implicit */_Bool) var_0)) ? (arr_10 [i_0] [i_0]) : (((/* implicit */int) arr_9 [i_0] [i_0]))))))));
                    }
                } 
            } 
            arr_30 [5LL] [i_2] = arr_20 [i_0] [i_0] [i_0] [i_2] [(signed char)18];
        }
        /* vectorizable */
        for (signed char i_7 = 0; i_7 < 22; i_7 += 1) 
        {
            arr_33 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((arr_10 [i_0] [i_7]) < (arr_10 [i_0] [i_7])));
            /* LoopSeq 2 */
            for (unsigned char i_8 = 3; i_8 < 20; i_8 += 1) 
            {
                /* LoopSeq 1 */
                for (int i_9 = 0; i_9 < 22; i_9 += 3) 
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_10 = 0; i_10 < 22; i_10 += 3) 
                    {
                        arr_43 [i_8] [i_7] [i_8] [(unsigned short)9] [i_0] [(signed char)20] [i_10] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_13 [i_8 - 3] [i_8 - 3] [i_8 - 3] [i_8 - 3])) ? (((/* implicit */int) arr_37 [i_8 - 3] [(short)21] [i_8] [(short)21] [i_9])) : (((/* implicit */int) arr_37 [i_8 - 3] [i_0] [i_8] [i_8 - 3] [21ULL]))));
                        arr_44 [i_8] [i_7] [i_8] [i_7] [i_8] = (((+(arr_19 [(short)7] [(short)7] [i_9] [i_9] [i_9] [i_9] [(unsigned char)20]))) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_8] [i_8])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_0))))));
                        arr_45 [i_10] [i_7] [i_7] [i_8] [i_10] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_20 [(unsigned short)2] [i_7] [(unsigned short)2] [i_7] [(unsigned short)1])) : (((/* implicit */int) arr_21 [i_0] [16] [i_0] [i_0] [i_0]))))) ? (arr_14 [i_8 + 1] [i_8 - 2]) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_21 [i_0] [i_7] [i_7] [i_7] [i_10])) > (((/* implicit */int) arr_31 [i_0] [i_9] [i_7]))))))));
                        arr_46 [(unsigned short)0] [(unsigned short)0] [12LL] [i_8] [12LL] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((140737488093184ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))) ? (arr_19 [i_0] [i_8 + 2] [i_8] [i_8 + 2] [i_8] [8] [i_8]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_36 [i_7] [i_8] [i_8 - 1] [i_8 + 1])))));
                    }
                    var_19 += ((/* implicit */_Bool) ((arr_19 [i_0] [i_0] [i_0] [i_0] [10U] [10U] [i_9]) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_22 [(signed char)11] [i_7] [i_8 - 3] [(short)3] [i_7] [i_7] [(signed char)11])) ? (arr_39 [i_0] [i_7] [i_7] [i_7] [i_0]) : (((/* implicit */unsigned int) arr_0 [i_0])))))));
                }
                var_20 = ((/* implicit */short) ((12657875854949242616ULL) - (((/* implicit */unsigned long long int) 0U))));
                /* LoopSeq 2 */
                for (signed char i_11 = 2; i_11 < 21; i_11 += 1) 
                {
                    arr_49 [i_0] [i_0] [i_8] [(unsigned short)17] [i_8] = ((/* implicit */_Bool) ((((/* implicit */int) arr_47 [i_0] [i_11 - 2] [i_8 + 2] [i_8] [i_0] [i_8])) - (((/* implicit */int) arr_47 [i_7] [i_11 + 1] [i_8 + 2] [i_8] [i_0] [i_11]))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_12 = 1; i_12 < 20; i_12 += 2) /* same iter space */
                    {
                        var_21 = ((/* implicit */short) ((((/* implicit */_Bool) 3923052290U)) ? (140737488093184ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                        arr_54 [i_0] [i_8] [i_8] [i_11] [i_0] = ((/* implicit */_Bool) (-((+(((/* implicit */int) var_2))))));
                    }
                    for (unsigned long long int i_13 = 1; i_13 < 20; i_13 += 2) /* same iter space */
                    {
                        arr_57 [i_8] [i_11 + 1] [i_11] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_13 [i_8 + 1] [i_11 + 1] [7U] [i_13 - 1])) + (2147483647))) << (((((((/* implicit */int) arr_13 [i_8 - 2] [i_11 - 1] [i_0] [i_13 + 1])) + (139))) - (20)))));
                        var_22 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_26 [i_8 + 2] [i_13 + 2] [i_7] [i_11 - 2] [i_13] [i_8])) + (((((/* implicit */int) var_2)) / (((/* implicit */int) var_1))))));
                        arr_58 [12LL] [12LL] [i_8] [i_11] [i_13] [i_8] = ((((/* implicit */_Bool) (+(((/* implicit */int) arr_25 [15] [15] [i_8] [i_11] [i_11]))))) ? (((((/* implicit */int) arr_16 [i_0] [(short)15] [i_8] [i_8] [i_11] [i_13 + 2])) << (((var_7) - (3708623835692572919ULL))))) : (((((/* implicit */int) arr_16 [16U] [i_7] [(signed char)12] [(signed char)18] [i_11] [16U])) << (((((/* implicit */int) arr_38 [i_0] [8] [i_8] [8] [i_8])) - (551))))));
                        arr_59 [i_0] [i_0] [i_0] [i_8] [i_11] [i_0] [i_8] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_6))));
                    }
                    arr_60 [i_11] [11ULL] [i_11] [i_7] [i_0] [i_8] = ((((((/* implicit */unsigned int) ((/* implicit */int) var_2))) ^ (var_10))) << (((arr_3 [i_0] [6ULL]) - (5608150181337999720LL))));
                    arr_61 [i_0] [i_8] = ((/* implicit */unsigned int) arr_13 [i_0] [i_0] [i_8] [i_8]);
                }
                for (unsigned short i_14 = 0; i_14 < 22; i_14 += 1) 
                {
                    arr_66 [i_8] [i_7] [i_8] [i_14] [i_8] [10LL] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_13 [(unsigned short)20] [i_8 + 1] [i_8] [i_8 + 1])))) ? (((((/* implicit */long long int) arr_8 [i_0] [i_0])) | (arr_55 [2U] [2U]))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_21 [i_0] [i_7] [i_0] [i_0] [i_0]))))))));
                    var_23 = ((((/* implicit */_Bool) var_9)) ? (arr_22 [i_0] [i_8 + 1] [i_8] [i_14] [i_8] [i_14] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_48 [i_0] [i_8 + 1] [i_8 + 1] [i_14] [0]))));
                    var_24 *= ((/* implicit */int) (!(((/* implicit */_Bool) var_11))));
                }
            }
            for (unsigned long long int i_15 = 0; i_15 < 22; i_15 += 3) 
            {
                var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_0] [i_15] [i_15] [17LL]))) | (var_11)))) ? (((((/* implicit */_Bool) arr_21 [i_0] [5LL] [i_7] [i_15] [(short)20])) ? (((/* implicit */int) arr_65 [8ULL] [i_0] [(signed char)0] [(signed char)0])) : (((/* implicit */int) var_0)))) : (((/* implicit */int) arr_48 [i_0] [i_0] [i_7] [i_7] [i_15]))));
                var_26 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_47 [i_0] [i_7] [i_15] [6ULL] [6ULL] [i_15])) / (((/* implicit */int) arr_47 [i_7] [i_7] [i_15] [18U] [i_7] [i_7]))));
                /* LoopNest 2 */
                for (int i_16 = 2; i_16 < 21; i_16 += 3) 
                {
                    for (long long int i_17 = 1; i_17 < 19; i_17 += 3) 
                    {
                        {
                            arr_77 [i_17] [i_16] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_72 [i_0] [i_0] [i_16] [18ULL] [i_16] [12U])) ? (arr_14 [i_0] [15LL]) : (((/* implicit */long long int) ((/* implicit */int) arr_48 [i_0] [i_7] [i_15] [(unsigned short)15] [8])))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_65 [i_17] [i_17] [i_17] [i_16])) ? (((/* implicit */int) arr_25 [i_0] [i_0] [i_15] [i_16 - 1] [i_16 - 1])) : (arr_67 [i_0] [i_0] [i_0]))))));
                            var_27 = ((/* implicit */int) min((var_27), ((+(((/* implicit */int) arr_26 [i_16 - 2] [(_Bool)1] [i_17 + 1] [i_17 - 1] [i_17] [i_17]))))));
                            var_28 = ((/* implicit */long long int) max((var_28), (((/* implicit */long long int) var_1))));
                            arr_78 [(short)21] [(short)21] [(short)21] [(unsigned char)11] [i_17] [i_17] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_37 [i_16] [i_16] [i_17] [i_17 + 2] [i_17 - 1]))) | (((((/* implicit */long long int) ((/* implicit */int) arr_1 [(signed char)18] [i_7]))) - (arr_5 [i_17] [i_7])))));
                            arr_79 [i_0] [i_17] [i_0] [i_15] = ((/* implicit */_Bool) var_11);
                        }
                    } 
                } 
                arr_80 [i_0] = ((/* implicit */unsigned short) var_9);
                arr_81 [i_15] [i_7] [i_15] [i_15] = ((((/* implicit */_Bool) arr_26 [i_0] [i_0] [(_Bool)1] [(_Bool)1] [i_15] [i_15])) ? (((/* implicit */int) arr_26 [i_15] [3ULL] [i_0] [i_0] [3ULL] [i_15])) : (((/* implicit */int) arr_26 [(short)4] [(short)4] [i_7] [i_7] [i_15] [i_15])));
            }
            var_29 = ((/* implicit */unsigned int) ((arr_71 [i_0] [i_0] [i_0] [i_0] [i_0]) - (arr_71 [i_0] [i_0] [i_0] [i_0] [4])));
        }
        var_30 += ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_32 [i_0] [(unsigned char)1] [i_0])))))));
    }
    var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_4))))) ? (var_9) : (((/* implicit */long long int) (~(((/* implicit */int) ((var_9) == (((/* implicit */long long int) ((/* implicit */int) var_0)))))))))));
}
