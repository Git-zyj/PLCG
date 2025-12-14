/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96394
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96394 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96394
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
    for (short i_0 = 2; i_0 < 19; i_0 += 1) 
    {
        arr_3 [i_0] [(unsigned char)12] = ((/* implicit */_Bool) (-(max((((/* implicit */unsigned int) var_2)), (516394263U)))));
        arr_4 [i_0] = ((/* implicit */_Bool) max((max((((/* implicit */unsigned long long int) arr_0 [(short)5])), (max((((/* implicit */unsigned long long int) (_Bool)1)), (var_0))))), (((/* implicit */unsigned long long int) max((arr_2 [i_0]), (((unsigned char) var_12)))))));
        arr_5 [i_0] = ((/* implicit */unsigned long long int) 2177397326U);
    }
    for (unsigned short i_1 = 1; i_1 < 21; i_1 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_2 = 0; i_2 < 24; i_2 += 1) 
        {
            var_17 &= ((/* implicit */unsigned int) arr_11 [i_2]);
            arr_13 [i_2] [i_1] = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */unsigned int) (+(((/* implicit */int) var_6))))) != (arr_9 [i_1] [i_2]))));
        }
        var_18 = ((/* implicit */short) min((max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_14)), (2177397326U)))), (12326882658185223890ULL))), (((/* implicit */unsigned long long int) ((((_Bool) var_4)) ? (1366223303U) : (((/* implicit */unsigned int) ((((/* implicit */int) var_1)) << (((((/* implicit */int) arr_8 [(unsigned short)18] [(unsigned char)11])) - (5462)))))))))));
        /* LoopSeq 3 */
        for (int i_3 = 1; i_3 < 22; i_3 += 4) 
        {
            arr_16 [i_1] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_1] [i_1 + 3]))) == (var_11))))));
            /* LoopNest 3 */
            for (unsigned char i_4 = 0; i_4 < 24; i_4 += 2) 
            {
                for (unsigned int i_5 = 0; i_5 < 24; i_5 += 1) 
                {
                    for (int i_6 = 0; i_6 < 24; i_6 += 4) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) (-(((((/* implicit */int) var_6)) << (((/* implicit */int) ((((/* implicit */int) arr_20 [i_1] [i_3] [i_4] [i_6])) > (arr_21 [(signed char)11] [i_4])))))))))));
                            arr_26 [(unsigned short)23] [(unsigned short)17] [(unsigned short)14] [(unsigned short)2] [(signed char)3] = ((/* implicit */signed char) (((!((!(((/* implicit */_Bool) 4163741423U)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) max((var_12), (1157740549U)))))))) : (2117569954U)));
                            var_20 = ((/* implicit */int) ((unsigned short) ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_10 [0] [i_4])) : (((/* implicit */int) var_16)))) > (var_15))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 2 */
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                var_21 = ((var_15) ^ (((((/* implicit */_Bool) var_13)) ? (arr_28 [i_7]) : (((arr_15 [i_1]) ? (((/* implicit */int) var_14)) : (0))))));
                arr_30 [i_1] [14ULL] [i_7] [i_7] |= ((/* implicit */_Bool) arr_11 [(_Bool)1]);
                /* LoopNest 2 */
                for (signed char i_8 = 1; i_8 < 22; i_8 += 1) 
                {
                    for (int i_9 = 0; i_9 < 24; i_9 += 4) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 6119861415524327726ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)157))) : (18327985466161188305ULL)));
                            var_23 |= ((/* implicit */unsigned char) ((unsigned int) (-(((((/* implicit */_Bool) arr_17 [i_1] [(unsigned short)16] [(short)7] [14ULL])) ? (var_9) : (((/* implicit */unsigned long long int) var_4)))))));
                            arr_36 [i_3] [i_7] [(short)22] [(short)20] = ((/* implicit */unsigned char) min((max((((/* implicit */int) ((((/* implicit */int) var_2)) >= (((/* implicit */int) var_14))))), (((((/* implicit */_Bool) arr_27 [i_1] [(_Bool)1] [(signed char)8] [i_1])) ? (var_15) : (((/* implicit */int) var_2)))))), (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */int) (signed char)0)), (var_15)))))))));
                            arr_37 [0ULL] [i_3] [(unsigned char)18] [i_3] [i_9] &= ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_7))))) ? ((~(((/* implicit */int) var_7)))) : (((/* implicit */int) arr_34 [4] [4U] [i_7] [(signed char)8] [(unsigned char)15]))));
                        }
                    } 
                } 
                arr_38 [12U] [i_7] [17ULL] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) arr_34 [i_1] [i_3] [18LL] [i_3] [i_1]))) : (-6782934060283624151LL))), (((/* implicit */long long int) var_2))))) ? (((((/* implicit */_Bool) (+(var_4)))) ? (((unsigned int) (unsigned char)0)) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) var_7)), (var_16))))))) : (((((/* implicit */unsigned int) ((/* implicit */int) max((var_10), (((/* implicit */unsigned char) arr_33 [i_7] [i_7] [i_3] [(unsigned char)2] [6ULL] [1LL])))))) - (min((((/* implicit */unsigned int) var_1)), (var_4)))))));
            }
            for (unsigned int i_10 = 2; i_10 < 23; i_10 += 4) 
            {
                var_24 = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) max((((/* implicit */short) (signed char)75)), (var_6)))) ? (min((3778573014U), (var_12))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_1] [i_3] [i_10] [6]))))));
                var_25 = (+(((/* implicit */int) ((signed char) var_9))));
                arr_41 [i_1] [23] [(_Bool)1] [2] = ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) : (arr_19 [i_1] [(signed char)1] [23U] [i_3 - 1] [i_1 + 2]))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_15 [i_3 - 1]))))));
            }
        }
        /* vectorizable */
        for (signed char i_11 = 2; i_11 < 23; i_11 += 4) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_12 = 0; i_12 < 24; i_12 += 2) 
            {
                var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) ((arr_19 [i_1] [i_1 + 3] [i_1] [i_1] [i_1]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))));
                /* LoopNest 2 */
                for (unsigned short i_13 = 0; i_13 < 24; i_13 += 3) 
                {
                    for (unsigned short i_14 = 3; i_14 < 22; i_14 += 4) 
                    {
                        {
                            var_27 += ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)96)) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_8)) >> (((var_0) - (571096277877715661ULL)))))) : (var_11)));
                            var_28 += ((((((/* implicit */int) (signed char)-4)) < (((/* implicit */int) arr_20 [4ULL] [i_11] [i_11] [i_11])))) ? (((/* implicit */int) arr_12 [i_1 + 3] [i_11 - 1] [i_14 + 1])) : (((/* implicit */int) var_16)));
                            var_29 -= ((/* implicit */_Bool) ((((unsigned long long int) arr_29 [(unsigned short)4] [i_11] [i_13])) << (((288230341791973376ULL) - (288230341791973346ULL)))));
                        }
                    } 
                } 
                var_30 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_43 [i_11 + 1] [(unsigned char)22] [i_12])) && (((/* implicit */_Bool) arr_43 [i_11 + 1] [i_12] [i_12]))));
                var_31 = ((/* implicit */short) ((unsigned int) (short)32767));
                var_32 = ((/* implicit */int) min((var_32), (((((/* implicit */_Bool) 1837129419U)) ? (((-739001966) - (var_13))) : (((/* implicit */int) arr_39 [i_1 + 3] [(_Bool)1] [i_12]))))));
            }
            var_33 += ((/* implicit */unsigned long long int) var_8);
            arr_52 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) var_11))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (arr_42 [i_11 - 2] [(signed char)9])));
            var_34 += ((/* implicit */unsigned long long int) var_1);
        }
        /* vectorizable */
        for (signed char i_15 = 0; i_15 < 24; i_15 += 1) 
        {
            arr_55 [i_15] [i_15] [3ULL] = ((/* implicit */_Bool) ((((/* implicit */int) arr_27 [i_1 + 2] [i_1] [(short)16] [i_1 + 1])) - (((/* implicit */int) arr_27 [i_1 + 1] [7] [(unsigned short)2] [i_1 - 1]))));
            arr_56 [i_15] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) 327812286)) ? (arr_47 [(_Bool)1] [(_Bool)1] [i_15] [i_15] [8U]) : (((/* implicit */unsigned int) var_13))))));
            var_35 |= ((/* implicit */int) arr_11 [(unsigned char)10]);
        }
        /* LoopNest 3 */
        for (_Bool i_16 = 1; i_16 < 1; i_16 += 1) 
        {
            for (int i_17 = 2; i_17 < 22; i_17 += 3) 
            {
                for (unsigned int i_18 = 0; i_18 < 24; i_18 += 1) 
                {
                    {
                        var_36 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)255))));
                        var_37 *= ((/* implicit */short) max((((/* implicit */unsigned int) arr_10 [i_16 - 1] [i_17 + 2])), (((1740176864U) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)146)))))));
                        arr_65 [11U] [i_16] [i_16] [i_16] = ((/* implicit */unsigned short) ((unsigned int) 0U));
                        arr_66 [i_16] [i_16] [i_16] [14U] [(signed char)5] = ((/* implicit */unsigned char) var_1);
                    }
                } 
            } 
        } 
    }
    var_38 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) var_8)) ? (6749067525087193322ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))), (((/* implicit */unsigned long long int) ((0ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))))));
}
