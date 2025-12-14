/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6535
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6535 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6535
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
    for (unsigned char i_0 = 1; i_0 < 13; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        {
                            var_10 += ((/* implicit */short) ((unsigned int) ((unsigned short) (_Bool)0)));
                            arr_10 [i_0] [i_1] [6] [i_0] = ((/* implicit */unsigned long long int) ((unsigned int) (-(((/* implicit */int) arr_6 [i_0] [i_0] [i_3] [(unsigned short)3])))));
                        }
                    } 
                } 
                var_11 = ((/* implicit */unsigned char) max((var_11), (((/* implicit */unsigned char) max((min((((/* implicit */unsigned int) var_7)), (0U))), (((/* implicit */unsigned int) ((arr_3 [i_1]) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) arr_3 [i_1]))))))))));
                arr_11 [i_0] = ((/* implicit */unsigned char) min((((((/* implicit */int) arr_0 [i_0 + 1] [i_0 + 1])) ^ (((/* implicit */int) arr_0 [i_0 - 1] [i_1])))), (((/* implicit */int) ((unsigned char) arr_0 [i_0 + 1] [i_0 + 1])))));
            }
        } 
    } 
    var_12 = ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))));
    var_13 += ((/* implicit */int) var_9);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_4 = 1; i_4 < 8; i_4 += 4) 
    {
        arr_14 [i_4 + 3] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_6 [i_4] [14] [i_4] [i_4]))));
        arr_15 [i_4] [i_4] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_4 [6LL] [i_4])) ? (-1563984082) : (((/* implicit */int) (unsigned char)0))))));
        arr_16 [(unsigned char)5] = ((/* implicit */int) ((((((/* implicit */int) (unsigned char)15)) == (((/* implicit */int) arr_6 [2ULL] [(unsigned short)2] [i_4] [i_4])))) ? (-1382374940998697182LL) : (((/* implicit */long long int) 3559762146U))));
        arr_17 [i_4] = (unsigned short)13871;
        /* LoopSeq 4 */
        for (unsigned char i_5 = 0; i_5 < 11; i_5 += 1) 
        {
            arr_22 [i_4] [i_4] = ((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) 1227858209)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))))));
            var_14 += ((arr_3 [(signed char)0]) ? (((/* implicit */int) ((unsigned short) 713586425U))) : (((/* implicit */int) arr_4 [10] [i_5])));
        }
        for (int i_6 = 4; i_6 < 7; i_6 += 4) 
        {
            arr_25 [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) arr_12 [i_4 + 1] [6U])) ? (arr_12 [i_4 - 1] [i_6]) : (arr_12 [i_4 + 2] [i_6 - 2])));
            var_15 = ((/* implicit */_Bool) arr_8 [i_6]);
            arr_26 [i_4] [i_4] = ((/* implicit */long long int) (-(((/* implicit */int) arr_21 [i_4] [i_6] [i_6]))));
            var_16 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 7112968482390224310ULL)) ? (((/* implicit */unsigned long long int) arr_24 [i_6 + 4] [i_6 - 3] [i_6])) : (((unsigned long long int) (unsigned short)34300))));
        }
        for (unsigned int i_7 = 0; i_7 < 11; i_7 += 1) 
        {
            /* LoopNest 2 */
            for (short i_8 = 1; i_8 < 9; i_8 += 1) 
            {
                for (unsigned short i_9 = 1; i_9 < 9; i_9 += 1) 
                {
                    {
                        arr_36 [i_4] [i_4] [i_4] [i_4] [i_4] [i_7] = ((/* implicit */_Bool) ((arr_29 [i_9 + 1] [i_9 + 1] [i_9] [i_7]) ? (((/* implicit */int) arr_29 [i_9 + 1] [i_9 + 2] [i_9] [i_7])) : (((/* implicit */int) arr_29 [i_9 - 1] [i_9 - 1] [i_9] [i_7]))));
                        /* LoopSeq 4 */
                        for (short i_10 = 0; i_10 < 11; i_10 += 1) 
                        {
                            var_17 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_7 [i_10] [i_7])))) ? (((/* implicit */int) arr_34 [5] [i_4 + 1] [i_7] [i_7])) : (((/* implicit */int) (!(((/* implicit */_Bool) -1371911322)))))));
                            var_18 += ((/* implicit */long long int) (+(((/* implicit */int) var_2))));
                            arr_40 [i_10] [(signed char)3] [i_7] [i_8 - 1] [i_7] [i_7] [4ULL] = ((/* implicit */signed char) arr_34 [i_4 + 3] [i_7] [i_9 + 1] [i_7]);
                        }
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            arr_44 [i_4] [i_7] [i_7] [i_8] [i_7] [(unsigned short)3] [i_11] = ((/* implicit */int) ((unsigned short) (+(arr_19 [i_11]))));
                            var_19 = arr_29 [2ULL] [2ULL] [5] [i_7];
                            var_20 += ((/* implicit */short) ((((/* implicit */int) arr_29 [6] [i_4 + 3] [i_4] [6])) ^ (((/* implicit */int) ((unsigned short) arr_7 [i_4] [(signed char)0])))));
                            arr_45 [i_4] [i_4] [i_7] = (~(((/* implicit */int) ((_Bool) arr_28 [i_7]))));
                        }
                        for (unsigned long long int i_12 = 0; i_12 < 11; i_12 += 1) 
                        {
                            arr_48 [i_4] [i_7] [i_9] [7U] = ((/* implicit */unsigned char) ((short) ((((/* implicit */int) (unsigned short)28498)) << (((((((/* implicit */int) var_0)) + (25449))) - (3))))));
                            var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) ((unsigned char) ((arr_13 [(_Bool)1]) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) arr_27 [2ULL]))))))));
                            var_22 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_29 [i_4] [i_8] [i_9 + 1] [i_7])) & (((/* implicit */int) var_0)))) | (((/* implicit */int) ((unsigned char) (unsigned short)12615)))));
                            arr_49 [i_4] [i_4] [i_7] [i_8] [i_7] [(unsigned char)9] = ((/* implicit */signed char) (-(3703231115U)));
                        }
                        for (long long int i_13 = 3; i_13 < 8; i_13 += 2) 
                        {
                            var_23 = ((/* implicit */int) min((var_23), (((((((/* implicit */int) arr_27 [4U])) / (((/* implicit */int) arr_28 [9U])))) | (((/* implicit */int) arr_2 [i_4] [i_4] [i_4]))))));
                            var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_30 [i_4 - 1] [i_13 + 2] [i_13 + 2])) ? (arr_30 [i_4 - 1] [i_13 + 2] [i_13]) : (arr_30 [i_4 - 1] [i_13 + 2] [i_13])));
                            var_25 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) arr_21 [(unsigned char)2] [(unsigned char)2] [i_8]))) && (((/* implicit */_Bool) arr_30 [i_8] [i_8 + 1] [i_8]))));
                            var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) ((((((/* implicit */int) arr_35 [(unsigned char)10] [10LL])) >= (((/* implicit */int) arr_35 [i_8] [(unsigned char)2])))) ? (((/* implicit */unsigned int) ((arr_3 [14]) ? (var_1) : (((/* implicit */int) var_3))))) : (var_9))))));
                        }
                        arr_54 [9U] [i_7] [i_7] [i_9 - 1] = ((/* implicit */short) arr_18 [i_4] [i_9]);
                        var_27 = (!(((/* implicit */_Bool) arr_2 [i_8] [(short)4] [i_8])));
                    }
                } 
            } 
            var_28 += ((short) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) arr_38 [i_4 + 3] [i_7] [i_4]))));
            /* LoopNest 2 */
            for (unsigned long long int i_14 = 0; i_14 < 11; i_14 += 4) 
            {
                for (long long int i_15 = 1; i_15 < 10; i_15 += 1) 
                {
                    {
                        arr_61 [i_4] [6] [i_14] [i_7] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) (short)25927))) ? ((-(((/* implicit */int) var_5)))) : (((((/* implicit */_Bool) arr_42 [i_7] [i_4] [i_4] [i_7] [5U] [i_14] [i_15 + 1])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_43 [i_4]))))));
                        /* LoopSeq 1 */
                        for (int i_16 = 1; i_16 < 8; i_16 += 3) 
                        {
                            var_29 = ((/* implicit */short) max((var_29), (((/* implicit */short) (~(((/* implicit */int) arr_35 [i_7] [i_14])))))));
                            var_30 = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) (short)0)) && (((/* implicit */_Bool) var_9)))));
                            var_31 *= ((/* implicit */short) ((((/* implicit */_Bool) (+(arr_32 [i_4 + 3])))) ? (((/* implicit */int) arr_47 [i_14] [i_7] [i_16 - 1] [i_15] [i_4 + 1] [i_16])) : (((/* implicit */int) arr_9 [i_4 - 1] [i_15 + 1] [i_15 + 1] [(_Bool)0] [i_16 - 1]))));
                            arr_65 [i_7] [i_7] [i_14] [i_15] [i_16] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_42 [i_7] [i_15] [i_14] [i_16 + 3] [i_16 + 3] [i_7] [(short)7]))) * (arr_41 [i_4] [i_4] [i_4] [i_16 - 1] [i_7])));
                        }
                        var_32 = ((/* implicit */signed char) max((var_32), (((/* implicit */signed char) ((((/* implicit */int) (unsigned char)255)) & (((/* implicit */int) (unsigned short)5560)))))));
                    }
                } 
            } 
            arr_66 [i_4] [i_7] [i_7] = ((/* implicit */unsigned int) (-(((arr_12 [2ULL] [i_4]) - (((/* implicit */int) arr_35 [i_7] [i_7]))))));
        }
        for (unsigned short i_17 = 2; i_17 < 8; i_17 += 1) 
        {
            arr_71 [i_17] = ((/* implicit */int) (short)8548);
            /* LoopNest 2 */
            for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
            {
                for (unsigned short i_19 = 3; i_19 < 10; i_19 += 4) 
                {
                    {
                        arr_76 [i_4] [i_4 + 1] [i_17] = ((/* implicit */short) ((int) arr_5 [i_17] [i_17 - 1]));
                        var_33 = ((/* implicit */int) ((short) 118878867521218144LL));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_20 = 0; i_20 < 11; i_20 += 4) 
                        {
                            var_34 = ((/* implicit */long long int) ((unsigned short) arr_12 [i_19 + 1] [i_19]));
                            arr_80 [i_4 + 1] [i_17] [(unsigned short)7] [i_19] [i_20] = ((/* implicit */unsigned short) arr_74 [i_4 + 2] [i_17] [i_17] [i_18]);
                            var_35 = (i_17 % 2 == 0) ? (((/* implicit */long long int) ((((/* implicit */int) ((4294967295U) < (((/* implicit */unsigned int) ((/* implicit */int) arr_67 [i_17])))))) << (((arr_41 [i_4] [i_17 - 2] [i_18] [i_19] [i_17]) - (16414812U)))))) : (((/* implicit */long long int) ((((/* implicit */int) ((4294967295U) < (((/* implicit */unsigned int) ((/* implicit */int) arr_67 [i_17])))))) << (((((arr_41 [i_4] [i_17 - 2] [i_18] [i_19] [i_17]) - (16414812U))) - (2947928425U))))));
                            var_36 = (+(arr_77 [i_4 - 1] [2LL] [i_17 + 1] [i_17] [i_19 - 3] [i_20] [i_17 + 1]));
                        }
                        for (_Bool i_21 = 1; i_21 < 1; i_21 += 1) 
                        {
                            var_37 = ((/* implicit */short) min((var_37), ((short)32767)));
                            arr_84 [i_17] [0LL] [i_19] [i_19 - 3] [9ULL] = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_3 [i_17])) >> (((((/* implicit */int) var_7)) - (49371))))) << (((arr_60 [i_4 + 3] [i_18] [(unsigned short)7] [i_21 - 1] [i_21]) - (1109709276)))));
                            arr_85 [i_17] [i_17] = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)0)) > ((-(((/* implicit */int) (short)22625))))));
                        }
                        var_38 = ((/* implicit */short) ((unsigned short) arr_62 [i_17] [i_17] [i_17 + 1]));
                        arr_86 [i_4] [i_17] [i_17 + 2] [i_18] [i_19] [i_19] = ((/* implicit */unsigned long long int) ((arr_1 [i_17 + 3] [i_17]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_17 + 3] [i_17]))) : (var_9)));
                    }
                } 
            } 
        }
    }
}
