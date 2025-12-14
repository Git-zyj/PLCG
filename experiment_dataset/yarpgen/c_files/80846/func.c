/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80846
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80846 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80846
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
    for (signed char i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (unsigned int i_2 = 1; i_2 < 11; i_2 += 1) 
            {
                for (unsigned char i_3 = 2; i_3 < 10; i_3 += 1) 
                {
                    {
                        var_10 = ((/* implicit */long long int) ((max((((/* implicit */unsigned long long int) ((unsigned short) var_5))), (((var_7) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_1]))))))) % (var_9)));
                        /* LoopSeq 2 */
                        for (signed char i_4 = 0; i_4 < 13; i_4 += 4) 
                        {
                            var_11 = ((/* implicit */_Bool) max((min((min((((/* implicit */unsigned int) arr_10 [i_2 + 2] [i_3 + 3] [i_3 + 3])), (arr_7 [i_0] [i_0] [i_2]))), (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)23616))))))), (((/* implicit */unsigned int) ((max((var_2), (((/* implicit */int) (unsigned short)6)))) >> (((((/* implicit */int) min((arr_6 [i_2]), (((/* implicit */short) (signed char)-20))))) + (14506))))))));
                            var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) ((unsigned short) ((((/* implicit */int) min((arr_11 [i_0] [i_0] [(short)7] [(short)7] [i_4] [i_0]), (((/* implicit */signed char) arr_13 [i_4] [i_4] [(signed char)10] [i_4] [i_0]))))) & (((/* implicit */int) min((arr_12 [i_0] [i_0] [i_2] [i_3 - 2]), (arr_12 [i_4] [i_3] [i_2] [i_0]))))))))));
                        }
                        for (unsigned char i_5 = 3; i_5 < 10; i_5 += 4) 
                        {
                            arr_17 [0U] [i_1] [0U] [i_3] [i_2] [i_5] = ((/* implicit */_Bool) max((((/* implicit */long long int) (-(max((var_5), (((/* implicit */unsigned int) arr_13 [i_1] [i_2] [i_1] [i_2] [i_0]))))))), (var_8)));
                            arr_18 [i_0] [i_1] [i_0] [i_3] [i_2] = ((/* implicit */unsigned char) max(((unsigned short)37926), (((/* implicit */unsigned short) arr_10 [i_0] [i_2] [i_2]))));
                        }
                        arr_19 [i_2] [i_2] [i_2] [i_3] = ((/* implicit */unsigned long long int) arr_8 [i_0] [i_0] [i_0] [i_3]);
                        var_13 = ((/* implicit */signed char) var_3);
                    }
                } 
            } 
        } 
        arr_20 [8] [i_0] = ((/* implicit */signed char) ((var_7) * (((/* implicit */unsigned long long int) ((/* implicit */int) min((max((arr_10 [i_0] [i_0] [i_0]), (((/* implicit */short) (_Bool)0)))), (((/* implicit */short) (!(((/* implicit */_Bool) var_1)))))))))));
        arr_21 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (-293455461286100794LL) : (((long long int) var_5))));
    }
    for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
    {
        arr_24 [i_6] = ((/* implicit */short) var_6);
        /* LoopSeq 1 */
        for (int i_7 = 2; i_7 < 23; i_7 += 4) 
        {
            var_14 = ((/* implicit */short) ((((/* implicit */_Bool) arr_23 [i_6] [13ULL])) ? (3005348616U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-10675)))));
            var_15 &= ((/* implicit */short) arr_25 [i_6] [i_6] [i_7]);
            arr_27 [i_6] [i_7] [(unsigned char)14] = ((/* implicit */short) ((((/* implicit */_Bool) max((arr_26 [i_6 + 1] [i_7]), (((/* implicit */int) arr_22 [i_6] [i_7 + 2]))))) ? ((-(arr_26 [i_6 + 1] [i_6 + 1]))) : (((/* implicit */int) max((arr_22 [i_6 + 1] [i_7 + 2]), (arr_22 [i_6 + 1] [i_7 + 1]))))));
            /* LoopSeq 2 */
            for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
            {
                /* LoopNest 2 */
                for (signed char i_9 = 0; i_9 < 25; i_9 += 4) 
                {
                    for (unsigned short i_10 = 0; i_10 < 25; i_10 += 1) 
                    {
                        {
                            arr_36 [i_6 + 1] [i_7 + 1] [i_8] [i_6] = ((/* implicit */short) ((min((((/* implicit */unsigned long long int) arr_31 [i_6] [i_6] [i_8] [i_9])), (((((/* implicit */_Bool) var_3)) ? (arr_25 [i_6] [i_8 - 1] [i_6]) : (((/* implicit */unsigned long long int) arr_35 [i_6 + 1] [i_7] [i_8] [i_9] [i_9])))))) >> (min((3113977230U), (((/* implicit */unsigned int) (_Bool)1))))));
                            arr_37 [i_7] [i_6] [i_7 + 1] [i_7 - 2] [i_7 - 2] [i_7 + 1] = ((/* implicit */short) (unsigned short)19119);
                            var_16 = ((/* implicit */_Bool) ((((/* implicit */int) ((signed char) arr_22 [i_6 + 1] [i_8 - 1]))) ^ (((((/* implicit */int) arr_22 [i_6 + 1] [i_8 - 1])) + (((/* implicit */int) arr_22 [i_6 + 1] [i_8 - 1]))))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (signed char i_11 = 1; i_11 < 24; i_11 += 1) 
                {
                    var_17 = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)19140))));
                    arr_41 [i_6] [i_7 - 1] [(unsigned short)12] = ((/* implicit */unsigned short) max((((/* implicit */long long int) arr_26 [i_6 + 1] [i_8])), (((long long int) var_8))));
                    arr_42 [i_6 + 1] [i_6 + 1] [i_6] [i_6 + 1] [i_6 + 1] = ((/* implicit */signed char) (~(((/* implicit */int) (signed char)-124))));
                }
            }
            for (short i_12 = 3; i_12 < 23; i_12 += 4) 
            {
                var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) var_8))));
                arr_45 [i_6] [i_6] [i_6] = ((/* implicit */_Bool) ((unsigned long long int) (((-(((/* implicit */int) (signed char)-117)))) + (((/* implicit */int) max((((/* implicit */unsigned short) arr_29 [i_6] [(unsigned short)24])), ((unsigned short)27646)))))));
            }
        }
    }
    for (long long int i_13 = 0; i_13 < 23; i_13 += 4) 
    {
        arr_48 [i_13] [i_13] = ((/* implicit */short) max((min((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)60))) - (arr_25 [22LL] [22LL] [i_13]))), (((/* implicit */unsigned long long int) max((arr_28 [i_13] [i_13]), (((/* implicit */unsigned int) arr_47 [i_13] [i_13]))))))), (((/* implicit */unsigned long long int) max((var_2), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)46422))))))))));
        arr_49 [14U] = ((/* implicit */int) min((((/* implicit */long long int) ((_Bool) 12957988475333281331ULL))), (((long long int) arr_35 [i_13] [i_13] [i_13] [i_13] [(signed char)10]))));
        var_19 = ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) - (-1019933738)));
        /* LoopNest 2 */
        for (int i_14 = 2; i_14 < 19; i_14 += 1) 
        {
            for (unsigned short i_15 = 0; i_15 < 23; i_15 += 4) 
            {
                {
                    var_20 = ((/* implicit */short) ((((/* implicit */int) ((unsigned short) max((((/* implicit */long long int) (short)11)), (var_8))))) / (var_2)));
                    var_21 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)37897))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (((((/* implicit */_Bool) arr_54 [i_13] [i_14 + 2] [i_15])) ? (arr_43 [i_15] [i_15] [i_13] [i_13]) : (arr_53 [i_13] [i_13] [i_14])))))));
                    var_22 = ((/* implicit */unsigned short) (unsigned char)18);
                    var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) min((max((((/* implicit */unsigned int) arr_31 [i_15] [12U] [i_15] [i_15])), ((~(4230382721U))))), (((/* implicit */unsigned int) arr_51 [i_13])))))));
                }
            } 
        } 
        arr_55 [i_13] [i_13] = ((/* implicit */unsigned long long int) var_0);
    }
    /* LoopNest 2 */
    for (unsigned long long int i_16 = 0; i_16 < 13; i_16 += 1) 
    {
        for (signed char i_17 = 0; i_17 < 13; i_17 += 1) 
        {
            {
                var_24 = ((/* implicit */_Bool) ((max((((/* implicit */unsigned int) var_3)), (((((/* implicit */_Bool) (unsigned short)0)) ? (var_5) : (6U))))) >> (((min((7578609449002523570ULL), (((/* implicit */unsigned long long int) min((1019933749), (((/* implicit */int) (unsigned short)5520))))))) - (5496ULL)))));
                arr_63 [i_16] [i_16] [i_17] = ((/* implicit */unsigned long long int) 293455461286100797LL);
                /* LoopNest 2 */
                for (unsigned int i_18 = 2; i_18 < 11; i_18 += 1) 
                {
                    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                    {
                        {
                            arr_68 [i_18] [i_16] [i_17] [i_16] [i_16] = ((/* implicit */unsigned int) min((min((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)70))) + (var_7))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)37913)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (2752454787U)))))), (((/* implicit */unsigned long long int) (!(((((/* implicit */unsigned long long int) 0U)) <= (var_7))))))));
                            arr_69 [i_19] [i_16] [i_16] [i_17] [i_16] [i_16] = ((/* implicit */short) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_58 [i_18 + 2])) ? (((/* implicit */int) arr_58 [i_18 + 2])) : (((/* implicit */int) arr_58 [i_18 + 1])))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_25 = ((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)21)) ? ((+(2480737920840465120ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) var_2)) : (var_8)))))) >> (((min((((/* implicit */unsigned long long int) min((var_0), (((/* implicit */int) var_3))))), (((var_7) + (var_9))))) - (41021ULL)))));
}
