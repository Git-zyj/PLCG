/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80225
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */short) (signed char)(-127 - 1));
        var_11 = ((/* implicit */short) (~(((((/* implicit */int) arr_0 [i_0])) >> (((((/* implicit */int) (signed char)(-127 - 1))) + (149)))))));
        /* LoopSeq 3 */
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            arr_7 [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) (signed char)(-127 - 1))) * (((/* implicit */int) arr_1 [i_0] [i_1]))));
            var_12 = ((/* implicit */unsigned short) ((signed char) ((unsigned long long int) (short)29942)));
            /* LoopSeq 2 */
            for (signed char i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-116))) : (arr_4 [i_0] [i_0] [i_0])))) && (((/* implicit */_Bool) var_7))));
                var_14 = ((/* implicit */short) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) && (((/* implicit */_Bool) var_8))));
            }
            for (unsigned char i_3 = 1; i_3 < 21; i_3 += 4) 
            {
                var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) ((11904448879920704084ULL) * (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_6 [i_0] [i_1]))))))))));
                var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) (signed char)-127)) : (((/* implicit */int) (signed char)(-127 - 1)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_1] [i_1]))))) : (((/* implicit */int) ((arr_5 [i_0] [i_1] [i_0]) > (arr_8 [i_0] [i_0] [i_3] [i_0]))))));
                var_17 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) (signed char)113)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (arr_4 [i_3] [i_0] [i_0])))));
            }
            var_18 = ((/* implicit */unsigned short) 9223372036854775807LL);
            var_19 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0])))) && (((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_1] [i_1])) || (((/* implicit */_Bool) (signed char)123))))));
        }
        for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 2) 
        {
            var_20 = ((/* implicit */unsigned short) ((arr_4 [i_0] [i_0] [i_4]) > (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1))))));
            arr_15 [i_0] [i_0] = arr_6 [i_0] [i_4];
        }
        for (long long int i_5 = 2; i_5 < 20; i_5 += 3) 
        {
            arr_18 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)106))))) ? (((((/* implicit */int) (_Bool)1)) << (((/* implicit */int) arr_6 [i_0] [(short)8])))) : (((/* implicit */int) arr_12 [i_0] [i_5 + 2]))));
            var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) arr_8 [i_5 + 2] [i_0] [i_0] [i_0]))));
        }
    }
    for (unsigned int i_6 = 1; i_6 < 9; i_6 += 4) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_7 = 0; i_7 < 10; i_7 += 2) 
        {
            /* LoopSeq 2 */
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned char i_9 = 0; i_9 < 10; i_9 += 2) 
                {
                    for (unsigned long long int i_10 = 0; i_10 < 10; i_10 += 4) 
                    {
                        {
                            arr_33 [i_6] [i_6] [i_6 - 1] [i_8] [i_6 - 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)126)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (unsigned char)9))));
                            var_22 *= ((/* implicit */unsigned char) (+(((/* implicit */int) (signed char)-78))));
                            var_23 = (~(var_1));
                            arr_34 [i_6] [i_8] [i_8] [i_6] [i_10] = ((/* implicit */long long int) arr_29 [i_6 - 1] [i_8] [i_8] [i_10]);
                        }
                    } 
                } 
                arr_35 [i_8] [i_7] [i_8] [i_7] = ((/* implicit */long long int) (short)-32757);
            }
            for (unsigned char i_11 = 0; i_11 < 10; i_11 += 4) 
            {
                arr_39 [i_6] [i_7] [i_6] = ((/* implicit */short) (((+(((/* implicit */int) arr_29 [i_6] [i_7] [i_11] [i_6])))) < (((/* implicit */int) var_6))));
                arr_40 [i_7] [i_7] |= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_22 [i_6 + 1] [i_6 + 1])) ? (arr_22 [i_6 - 1] [i_6 + 1]) : (arr_22 [i_6 + 1] [i_6 - 1])));
                arr_41 [i_6] [i_6] [i_6] [i_6] = ((/* implicit */unsigned long long int) (!(((arr_16 [i_7] [i_7]) && (((/* implicit */_Bool) var_10))))));
                arr_42 [i_6] [i_6] [(signed char)2] = ((/* implicit */signed char) (~(((unsigned long long int) (short)29687))));
                var_24 = ((/* implicit */signed char) ((var_3) > (var_3)));
            }
            var_25 = arr_8 [i_6 - 1] [i_7] [i_7] [i_6 - 1];
        }
        /* LoopSeq 3 */
        for (long long int i_12 = 2; i_12 < 8; i_12 += 3) 
        {
            arr_45 [i_6] [i_12] [i_12] = ((/* implicit */short) var_1);
            var_26 = ((/* implicit */unsigned short) var_4);
        }
        for (signed char i_13 = 0; i_13 < 10; i_13 += 1) 
        {
            var_27 ^= ((unsigned long long int) (signed char)26);
            var_28 = (i_13 % 2 == zero) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)123)) >> (((/* implicit */int) arr_27 [i_13] [i_13]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)123)) >> (((((/* implicit */int) arr_27 [i_13] [i_13])) + (9))))));
            arr_49 [i_6] [(unsigned char)0] |= ((/* implicit */unsigned int) arr_36 [i_6] [i_13] [(unsigned char)3] [i_13]);
            var_29 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) arr_25 [i_6] [i_6] [i_6 + 1])), (max((max((6542295193788847559ULL), (((/* implicit */unsigned long long int) var_7)))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_43 [i_6]))) & (var_9)))))));
            arr_50 [i_13] [i_13] [i_13] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_31 [i_6] [i_13] [i_13] [i_13] [i_6] [i_13])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_10 [i_6] [i_6 - 1] [i_13] [i_13]), (((/* implicit */short) (signed char)(-127 - 1))))))) : (var_9)))) ? ((((!(((/* implicit */_Bool) var_3)))) ? (((((/* implicit */_Bool) arr_9 [i_13])) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((7072537042725240511LL) < (((/* implicit */long long int) ((/* implicit */int) (signed char)116))))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 318983797646340962ULL)) ? (((/* implicit */int) (signed char)-126)) : (((/* implicit */int) max(((signed char)36), (arr_32 [i_6] [i_13] [i_13] [i_13] [i_13])))))))));
        }
        /* vectorizable */
        for (signed char i_14 = 1; i_14 < 8; i_14 += 1) 
        {
            var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_10 [i_6] [i_6] [i_6] [i_14 + 1]))) != (((long long int) (short)-24864))));
            /* LoopNest 3 */
            for (short i_15 = 2; i_15 < 9; i_15 += 2) 
            {
                for (int i_16 = 3; i_16 < 8; i_16 += 4) 
                {
                    for (short i_17 = 0; i_17 < 10; i_17 += 4) 
                    {
                        {
                            arr_62 [i_16] [i_14] [i_16] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_32 [i_6 + 1] [i_6 + 1] [i_15 - 2] [i_6 + 1] [i_15 + 1]))));
                            var_31 = ((/* implicit */unsigned int) ((((((/* implicit */int) (short)-29682)) < (((/* implicit */int) var_6)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_53 [i_14 + 1] [i_16 - 3] [i_14 + 1]))) : (arr_26 [i_6 - 1] [i_14] [i_15 + 1])));
                            var_32 += ((((/* implicit */int) arr_1 [i_6 - 1] [i_6 - 1])) * (((/* implicit */int) arr_1 [i_6 - 1] [i_6 - 1])));
                            var_33 = ((((/* implicit */_Bool) arr_55 [2U] [i_15 - 1] [i_16] [i_16] [i_16 - 1] [i_15 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_59 [i_6] [i_6] [i_15] [i_15] [3ULL] [i_16 + 2] [i_17]))) : (arr_22 [i_6] [i_14 + 1]));
                        }
                    } 
                } 
            } 
        }
        /* LoopSeq 1 */
        for (unsigned short i_18 = 0; i_18 < 10; i_18 += 2) 
        {
            arr_65 [1LL] [1LL] = var_6;
            arr_66 [i_18] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) min(((-(((/* implicit */int) (unsigned char)96)))), ((+(((/* implicit */int) (unsigned char)205))))))) ? (((/* implicit */long long int) ((max((var_2), (((/* implicit */unsigned int) (signed char)36)))) * (((/* implicit */unsigned int) ((int) (signed char)-29)))))) : (max((arr_19 [i_6 + 1]), (((/* implicit */long long int) max((((/* implicit */int) (unsigned char)205)), (var_10))))))));
            var_34 = ((/* implicit */unsigned long long int) arr_12 [(signed char)11] [i_18]);
            arr_67 [i_6] = ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (signed char)-39)) : (((/* implicit */int) arr_11 [i_6] [i_18]))))) ? (((var_1) | (((/* implicit */unsigned long long int) var_10)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min(((signed char)38), ((signed char)90))))))) * (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) arr_12 [i_18] [i_18])) == (((/* implicit */int) (unsigned char)39))))) << (((((/* implicit */int) (signed char)32)) - (27))))))));
        }
        arr_68 [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_57 [i_6 + 1] [i_6] [i_6]) ? (max((var_3), (((/* implicit */unsigned long long int) (unsigned char)18)))) : (((arr_6 [i_6] [i_6 - 1]) ? (arr_64 [i_6] [i_6] [i_6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)18)))))))) ? (((/* implicit */int) ((unsigned short) max((arr_8 [i_6 - 1] [14ULL] [i_6] [i_6]), (((/* implicit */long long int) (unsigned char)160)))))) : (((/* implicit */int) ((((/* implicit */long long int) max((((/* implicit */int) (unsigned short)11039)), (2147483644)))) != ((+(3971044814265627870LL))))))));
    }
    var_35 |= ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_2)) ? (min((((/* implicit */long long int) (_Bool)1)), (var_0))) : (((/* implicit */long long int) ((/* implicit */int) min((var_7), (((/* implicit */unsigned char) var_4)))))))), (max((((/* implicit */long long int) min((((/* implicit */int) var_4)), (var_10)))), (var_8)))));
}
