/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96539
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96539 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96539
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
    for (signed char i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        var_10 = ((/* implicit */short) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned char)224)) : (((/* implicit */int) var_2))))), (((unsigned long long int) (signed char)119)))))));
        /* LoopSeq 4 */
        for (signed char i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            /* LoopNest 3 */
            for (unsigned long long int i_2 = 3; i_2 < 9; i_2 += 4) 
            {
                for (signed char i_3 = 1; i_3 < 9; i_3 += 3) 
                {
                    for (unsigned char i_4 = 4; i_4 < 9; i_4 += 2) 
                    {
                        {
                            arr_15 [i_0] [i_0] [i_1] [(short)3] [i_2] [i_3] [i_4] = 3087789425U;
                            arr_16 [i_1] [i_2] = ((/* implicit */signed char) min((((/* implicit */int) ((signed char) arr_5 [3U] [i_1] [i_2]))), (((((/* implicit */_Bool) arr_1 [i_4])) ? (((/* implicit */int) arr_3 [i_0] [(unsigned char)6] [i_2])) : (((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 2 */
            for (unsigned long long int i_5 = 1; i_5 < 8; i_5 += 2) 
            {
                var_11 += ((/* implicit */short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_3 [i_0] [i_0] [(_Bool)1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (arr_10 [i_0] [i_0] [(signed char)0] [i_0]))), (((/* implicit */unsigned long long int) arr_14 [(signed char)4] [i_1] [i_5] [i_0] [i_5] [i_0] [i_1]))))) ? (((/* implicit */int) ((unsigned short) ((((/* implicit */int) var_0)) * (((/* implicit */int) (unsigned char)17)))))) : (((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))));
                var_12 &= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_3))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0]))))) : (((/* implicit */int) arr_17 [i_5] [i_5 + 2]))))) == (max((max((arr_5 [i_0] [i_1] [i_5]), (((/* implicit */unsigned long long int) var_7)))), (((/* implicit */unsigned long long int) arr_12 [(signed char)8] [i_1] [i_5 + 2]))))));
            }
            for (unsigned char i_6 = 0; i_6 < 10; i_6 += 2) 
            {
                arr_22 [i_6] [i_1] [i_6] [(signed char)0] = arr_0 [i_0];
                var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_5 [i_0] [i_1] [i_6]), (arr_5 [i_0] [i_1] [i_6])))) ? (((((/* implicit */_Bool) arr_5 [i_0] [i_1] [(_Bool)1])) ? (arr_5 [i_0] [i_1] [(unsigned short)1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))) : (arr_5 [i_6] [i_1] [i_6])));
                /* LoopNest 2 */
                for (unsigned int i_7 = 0; i_7 < 10; i_7 += 3) 
                {
                    for (unsigned char i_8 = 0; i_8 < 10; i_8 += 4) 
                    {
                        {
                            var_14 = max((min((arr_19 [(signed char)5] [i_1] [(unsigned char)0]), (((/* implicit */unsigned long long int) (signed char)-106)))), (((/* implicit */unsigned long long int) arr_13 [i_0] [i_1] [i_6] [i_7] [(_Bool)1])));
                            var_15 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) arr_8 [(signed char)4] [i_1]))) ? (arr_10 [i_6] [i_6] [i_1] [i_6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)90)))));
                            arr_27 [(short)9] [7U] [i_6] [i_6] [i_1] [(unsigned short)2] [i_0] = min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) min(((unsigned short)0), (((/* implicit */unsigned short) arr_7 [(unsigned char)4] [i_7] [i_8] [(unsigned char)4] [i_7])))))))), (arr_7 [i_0] [0ULL] [i_1] [i_0] [i_0]));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (short i_9 = 3; i_9 < 7; i_9 += 2) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (signed char i_10 = 1; i_10 < 9; i_10 += 3) /* same iter space */
                    {
                        var_16 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) arr_30 [8ULL] [i_1] [i_6] [(unsigned char)4] [i_10 - 1]))) ? ((~(min((((/* implicit */unsigned long long int) arr_2 [i_0])), (arr_19 [i_6] [i_1] [i_6]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))));
                        arr_35 [i_9] [i_1] [i_6] [i_9] [i_10] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_17 [i_9] [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((((/* implicit */_Bool) 2129293214362330997ULL)) ? (((/* implicit */int) (short)31172)) : (((/* implicit */int) arr_11 [i_0] [i_0] [(unsigned char)7] [i_0] [(signed char)2] [(short)7])))))) == (((/* implicit */int) arr_1 [i_0]))));
                    }
                    for (signed char i_11 = 1; i_11 < 9; i_11 += 3) /* same iter space */
                    {
                        arr_38 [7U] [(signed char)8] [(signed char)3] [i_9] [0ULL] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_9 [i_9])) == (((/* implicit */int) arr_9 [i_9])))) ? (((/* implicit */int) min((((/* implicit */short) arr_9 [i_9])), (arr_20 [(unsigned char)4] [i_9 - 2] [i_11] [i_11])))) : (((/* implicit */int) arr_20 [(unsigned char)0] [i_9 + 1] [(short)8] [(_Bool)0]))));
                        arr_39 [i_11] [i_9] [i_9] [(short)0] [2ULL] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_2))))) ? (((/* implicit */int) min((max((arr_36 [(unsigned char)9] [i_9] [i_6] [(signed char)7]), (var_0))), (((/* implicit */short) max((arr_9 [i_9]), (var_3))))))) : (((/* implicit */int) min((arr_25 [i_11] [i_0] [(unsigned char)8] [i_11 - 1] [i_0] [i_0]), (arr_25 [i_0] [8ULL] [i_6] [i_11 - 1] [i_11] [i_6]))))));
                    }
                    var_17 -= ((/* implicit */signed char) max((((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_0 [(unsigned short)3])) ? (((/* implicit */unsigned long long int) 3087789425U)) : (var_6))))), (max((((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0]))))), (((((/* implicit */int) var_2)) & (((/* implicit */int) (short)-16384))))))));
                    var_18 = ((/* implicit */signed char) (unsigned char)86);
                }
                for (short i_12 = 3; i_12 < 7; i_12 += 2) /* same iter space */
                {
                    var_19 = ((/* implicit */unsigned short) max((((((/* implicit */int) var_2)) >> (((min((((/* implicit */unsigned long long int) arr_2 [i_12])), (2251799679467520ULL))) - (2878450649ULL))))), (((/* implicit */int) arr_28 [i_12] [i_6] [(signed char)0] [i_1] [i_0]))));
                    /* LoopSeq 1 */
                    for (unsigned char i_13 = 0; i_13 < 10; i_13 += 1) 
                    {
                        arr_46 [i_0] [i_0] [i_1] [(unsigned char)9] [i_12] [i_13] = ((((/* implicit */_Bool) min((var_6), (((/* implicit */unsigned long long int) arr_32 [i_0] [i_6] [i_6] [i_12]))))) ? ((~(((((/* implicit */_Bool) arr_2 [i_12])) ? (arr_8 [i_1] [(unsigned short)2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [i_0] [(unsigned char)8] [i_12] [i_12]))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [2ULL] [(unsigned short)6]))));
                        var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((arr_41 [3ULL] [(unsigned char)0] [i_6] [i_1] [(unsigned short)5]) ? (((/* implicit */int) arr_25 [i_12] [i_13] [i_6] [i_0] [7U] [i_1])) : (((/* implicit */int) var_7)))))));
                    }
                    arr_47 [(_Bool)0] [i_1] = ((/* implicit */unsigned long long int) ((arr_2 [i_0]) ^ (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) var_1))) ? (((/* implicit */int) min((((/* implicit */short) var_7)), (var_8)))) : (((/* implicit */int) ((signed char) var_0))))))));
                }
            }
        }
        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
        {
            var_21 = min((arr_7 [i_0] [i_0] [i_0] [i_14] [i_14]), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_6))))));
            arr_50 [i_0] [1ULL] &= ((/* implicit */signed char) ((((/* implicit */_Bool) 3087789425U)) ? (((/* implicit */int) max((arr_20 [(unsigned short)9] [(signed char)3] [i_0] [i_0]), (arr_20 [i_0] [i_14] [i_0] [i_0])))) : (((/* implicit */int) arr_1 [i_14]))));
            var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) max((arr_23 [i_0] [i_0] [i_0] [(_Bool)1]), (var_0))))) : (587216730U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (min((((/* implicit */unsigned long long int) arr_14 [i_0] [(unsigned short)1] [i_0] [i_14] [(unsigned char)2] [4ULL] [i_14])), (min((arr_33 [i_0] [(short)4] [i_0] [i_0] [(short)6] [i_14]), (((/* implicit */unsigned long long int) arr_3 [i_14] [i_14] [i_14]))))))));
            var_23 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) max((arr_17 [i_0] [(signed char)5]), ((unsigned char)211)))))) ? (((((/* implicit */_Bool) arr_8 [i_0] [(signed char)5])) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [(short)3])) && (((/* implicit */_Bool) arr_20 [6ULL] [i_14] [(signed char)8] [i_14]))))) : (((/* implicit */int) min((arr_49 [4ULL] [(unsigned char)9]), (((/* implicit */short) arr_24 [i_0] [i_14]))))))) : (((/* implicit */int) arr_11 [6U] [i_14] [(signed char)5] [i_14] [i_0] [i_0]))));
        }
        for (signed char i_15 = 1; i_15 < 9; i_15 += 4) /* same iter space */
        {
            var_24 = ((/* implicit */_Bool) arr_42 [i_0] [i_0] [i_15] [i_15]);
            var_25 = ((/* implicit */signed char) min((var_25), (((signed char) min((var_2), (arr_24 [i_15 - 1] [i_15 - 1]))))));
        }
        for (signed char i_16 = 1; i_16 < 9; i_16 += 4) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned long long int i_17 = 1; i_17 < 7; i_17 += 4) 
            {
                for (unsigned long long int i_18 = 1; i_18 < 9; i_18 += 2) 
                {
                    {
                        arr_61 [i_0] [(unsigned short)7] [i_17] [(_Bool)1] = ((/* implicit */unsigned char) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_17]))))), ((((!(((/* implicit */_Bool) arr_20 [i_0] [i_16] [(signed char)8] [i_18])))) ? (((/* implicit */int) var_3)) : (((arr_51 [5ULL] [i_16] [9ULL]) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_5))))))));
                        arr_62 [i_0] [i_17] = ((/* implicit */unsigned long long int) var_7);
                        arr_63 [i_0] [i_0] [i_17] [i_0] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_1) ? (((/* implicit */int) (unsigned char)90)) : (((/* implicit */int) var_1))))) ? (arr_57 [i_18] [i_16] [i_16] [i_18] [(_Bool)0] [i_17]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned char)7)))))))), (max((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_56 [(unsigned short)8] [i_16]))))), (arr_43 [i_0] [i_0] [(short)9] [i_0] [(unsigned short)2])))));
                        var_26 -= ((/* implicit */unsigned char) arr_41 [i_16] [i_16 - 1] [i_18] [(short)0] [(short)7]);
                    }
                } 
            } 
            arr_64 [(unsigned short)6] [(unsigned char)1] [5ULL] = ((/* implicit */unsigned char) min((max((((/* implicit */unsigned long long int) ((unsigned int) arr_48 [i_16]))), (arr_8 [(_Bool)1] [i_16]))), (var_6)));
            /* LoopNest 2 */
            for (unsigned char i_19 = 0; i_19 < 10; i_19 += 1) 
            {
                for (unsigned short i_20 = 0; i_20 < 10; i_20 += 4) 
                {
                    {
                        var_27 = ((/* implicit */_Bool) ((min((min((arr_33 [(unsigned char)8] [(unsigned char)8] [i_20] [i_20] [i_19] [i_20]), (((/* implicit */unsigned long long int) arr_3 [(short)2] [(unsigned char)9] [i_19])))), (((/* implicit */unsigned long long int) max((var_8), (((/* implicit */short) var_4))))))) ^ (arr_10 [i_16] [(short)4] [i_16] [i_0])));
                        var_28 -= ((/* implicit */unsigned short) ((signed char) ((unsigned long long int) arr_0 [i_0])));
                        var_29 = ((/* implicit */signed char) (~(((((/* implicit */int) arr_11 [i_20] [i_20] [i_20] [i_20] [i_20] [(unsigned short)5])) | ((~(((/* implicit */int) var_5))))))));
                        var_30 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((var_4) ? (arr_4 [i_0]) : (arr_4 [i_0]))))));
                        var_31 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_42 [i_0] [i_16] [i_19] [i_16 - 1])) / (((/* implicit */int) arr_42 [i_0] [(signed char)1] [(short)1] [i_16 + 1]))))) ? (((/* implicit */int) ((((/* implicit */int) arr_42 [i_0] [(unsigned char)8] [i_19] [i_16 - 1])) != (((/* implicit */int) arr_42 [i_0] [i_0] [i_19] [i_16 - 1]))))) : (((/* implicit */int) arr_42 [i_0] [(short)7] [i_19] [i_16 - 1]))));
                    }
                } 
            } 
        }
        var_32 *= ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) >> (((((/* implicit */int) ((signed char) var_0))) + (135))))))));
        arr_71 [i_0] = ((/* implicit */signed char) var_5);
    }
    /* LoopNest 2 */
    for (signed char i_21 = 1; i_21 < 18; i_21 += 2) 
    {
        for (unsigned int i_22 = 0; i_22 < 19; i_22 += 2) 
        {
            {
                var_33 = ((/* implicit */signed char) arr_72 [(unsigned short)13]);
                arr_78 [i_21] = (signed char)121;
                arr_79 [i_21] = ((/* implicit */_Bool) var_6);
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_23 = 0; i_23 < 16; i_23 += 4) 
    {
        for (unsigned char i_24 = 0; i_24 < 16; i_24 += 4) 
        {
            {
                var_34 = (!(var_4));
                arr_84 [i_23] [i_24] [i_23] &= ((/* implicit */unsigned char) max((((/* implicit */short) ((((/* implicit */_Bool) arr_80 [i_24] [i_23])) || (((/* implicit */_Bool) arr_80 [i_23] [i_24]))))), (((short) arr_80 [(signed char)13] [i_24]))));
                var_35 *= ((/* implicit */unsigned short) arr_83 [i_24] [(signed char)14]);
            }
        } 
    } 
    var_36 &= ((/* implicit */short) max((((/* implicit */unsigned char) ((signed char) ((((/* implicit */int) (_Bool)1)) >> (((var_6) - (18278144286432427958ULL))))))), ((unsigned char)25)));
}
