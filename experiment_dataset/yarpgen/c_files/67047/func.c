/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67047
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67047 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67047
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
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        {
                            arr_8 [3] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(arr_2 [(_Bool)1] [i_1] [i_3]))))));
                            var_13 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) arr_4 [i_3] [i_2] [13U] [i_0]))) ? (arr_2 [12ULL] [i_2] [i_3]) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_6 [i_1])))))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))) : (((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) == (arr_2 [11LL] [(unsigned char)13] [(signed char)12]))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0]))) ^ (arr_3 [i_1] [i_3] [i_2]))) : (((/* implicit */long long int) (~(((/* implicit */int) (signed char)116))))))));
                        }
                    } 
                } 
                var_14 |= ((/* implicit */unsigned char) min(((-(((/* implicit */int) (signed char)-117)))), (((((/* implicit */_Bool) (signed char)-124)) ? (((/* implicit */int) (signed char)-123)) : (((/* implicit */int) (unsigned char)112))))));
            }
        } 
    } 
    /* LoopSeq 4 */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned short i_5 = 0; i_5 < 17; i_5 += 3) 
        {
            for (unsigned long long int i_6 = 0; i_6 < 17; i_6 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_7 = 0; i_7 < 17; i_7 += 3) 
                    {
                        for (unsigned long long int i_8 = 0; i_8 < 17; i_8 += 1) 
                        {
                            {
                                arr_22 [(unsigned char)15] [(unsigned char)15] [11LL] [i_7] [i_7] [i_8] = ((/* implicit */long long int) arr_4 [i_4] [i_5] [i_4] [i_7]);
                                var_15 ^= ((/* implicit */_Bool) var_2);
                                var_16 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (-(((long long int) arr_19 [i_4] [i_4] [(unsigned short)4]))))), ((~(min((((/* implicit */unsigned long long int) arr_4 [i_4] [i_5] [i_7] [i_5])), (arr_16 [i_4] [i_4] [i_6] [i_7])))))));
                                var_17 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (~((~(((/* implicit */int) var_11))))))), (((((/* implicit */_Bool) (~(((/* implicit */int) arr_7 [i_4] [i_4] [10LL] [(_Bool)1] [i_7] [i_8]))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_1 [15U] [15U]))))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_7]))) : (var_6)))))));
                            }
                        } 
                    } 
                    var_18 += ((/* implicit */long long int) (((+(max((var_3), (((/* implicit */long long int) (unsigned short)0)))))) > (((/* implicit */long long int) ((int) min((arr_5 [i_4] [i_5] [i_4] [i_4]), (((/* implicit */long long int) (signed char)124))))))));
                    /* LoopSeq 1 */
                    for (unsigned short i_9 = 0; i_9 < 17; i_9 += 4) 
                    {
                        var_19 = ((/* implicit */int) (signed char)119);
                        var_20 -= ((/* implicit */unsigned short) (-(min((var_6), (((/* implicit */unsigned long long int) var_4))))));
                        arr_27 [i_4] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_26 [i_6] [i_6] [i_5]), (((/* implicit */unsigned long long int) (signed char)103))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_10))))) : (((((/* implicit */_Bool) arr_1 [i_5] [i_9])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)40754))) : (arr_20 [i_4] [i_4] [4ULL] [i_4] [i_4])))))));
                    }
                }
            } 
        } 
        arr_28 [i_4] [(_Bool)1] = ((/* implicit */unsigned int) arr_17 [i_4] [i_4] [i_4] [(signed char)9]);
        var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) max((((/* implicit */unsigned short) ((((/* implicit */int) ((arr_5 [3LL] [i_4] [i_4] [i_4]) == (((/* implicit */long long int) ((/* implicit */int) var_12)))))) > (((/* implicit */int) ((unsigned char) var_4)))))), (((unsigned short) arr_12 [i_4] [i_4] [i_4])))))));
    }
    /* vectorizable */
    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned long long int i_11 = 1; i_11 < 15; i_11 += 3) 
        {
            for (long long int i_12 = 4; i_12 < 16; i_12 += 3) 
            {
                {
                    arr_35 [i_12] = ((/* implicit */unsigned short) ((((((/* implicit */int) (signed char)89)) < (((/* implicit */int) arr_19 [i_10] [i_11 - 1] [(unsigned char)15])))) ? (((((/* implicit */_Bool) arr_33 [7U] [i_12 + 1] [i_12])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)192))) : (arr_32 [i_10] [i_10]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_12 + 1] [i_11] [i_12 - 2] [i_10] [i_12])))));
                    arr_36 [i_12 - 4] [8] [i_12] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_19 [i_10] [(unsigned char)8] [i_12 - 2])) ? (((/* implicit */int) arr_19 [i_12] [0LL] [0LL])) : (((/* implicit */int) (unsigned short)24795)))) - (((((/* implicit */int) arr_33 [(_Bool)1] [i_11 + 1] [i_10])) + (((/* implicit */int) (signed char)124))))));
                    var_22 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_24 [i_12 - 1] [i_12 + 1] [i_12 + 1] [i_12 - 4]))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned int i_13 = 1; i_13 < 15; i_13 += 3) 
        {
            for (long long int i_14 = 2; i_14 < 16; i_14 += 4) 
            {
                for (unsigned short i_15 = 0; i_15 < 17; i_15 += 2) 
                {
                    {
                        var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_21 [i_13 - 1] [i_13 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_14 + 1] [i_13 - 1]))) : (arr_43 [i_14 - 2] [i_14 - 1]))))));
                        var_24 = ((/* implicit */unsigned char) (-(arr_0 [i_13 + 2])));
                        arr_45 [i_15] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_10] [i_13] [i_10] [i_14 + 1] [i_15] [i_15])))))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65535)))))));
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (unsigned char i_16 = 3; i_16 < 16; i_16 += 1) 
        {
            for (unsigned char i_17 = 0; i_17 < 17; i_17 += 4) 
            {
                for (int i_18 = 0; i_18 < 17; i_18 += 1) 
                {
                    {
                        /* LoopSeq 3 */
                        for (unsigned long long int i_19 = 4; i_19 < 13; i_19 += 2) 
                        {
                            arr_56 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_34 [i_16 + 1] [i_16 - 2] [i_16 - 2]))));
                            arr_57 [6LL] [(_Bool)1] [i_17] [i_18] [i_18] = (~(2936367084422202259ULL));
                            var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) ((unsigned short) var_7)))));
                            var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (arr_20 [i_19 + 2] [i_19 + 2] [i_19] [i_19 - 3] [i_19 + 1]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_10] [i_10] [i_10] [i_10])) ? (arr_39 [i_10] [i_16] [i_18] [i_10]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)56)))))))))));
                        }
                        for (unsigned int i_20 = 1; i_20 < 16; i_20 += 3) /* same iter space */
                        {
                            arr_60 [i_16 + 1] [i_16 - 1] [i_16] = ((/* implicit */long long int) ((arr_39 [(unsigned short)0] [i_10] [14ULL] [i_10]) < (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_33 [i_20 - 1] [i_18] [i_10])) > (((/* implicit */int) arr_51 [i_16 - 3]))))))));
                            arr_61 [6LL] [i_16 - 2] [i_16] [i_16 - 3] [i_16] [i_16] [i_16] = ((/* implicit */int) ((((/* implicit */_Bool) (signed char)123)) ? (((arr_5 [i_10] [(unsigned char)0] [i_17] [0LL]) + (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_10] [i_16] [4]))))) : (((/* implicit */long long int) ((/* implicit */int) var_9)))));
                        }
                        for (unsigned int i_21 = 1; i_21 < 16; i_21 += 3) /* same iter space */
                        {
                            arr_65 [i_17] [i_17] [i_17] [i_17] [i_16] [i_17] [i_10] = ((/* implicit */unsigned char) 11576447128566086538ULL);
                            var_27 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_2 [0LL] [0LL] [i_21 + 1]))));
                            var_28 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_59 [i_10] [i_10] [i_17] [i_18] [i_21]))));
                            var_29 = ((unsigned long long int) (!(((/* implicit */_Bool) arr_4 [i_16] [i_17] [i_18] [i_21 - 1]))));
                            var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -4636309433892568183LL)) ? (arr_12 [i_16 - 1] [i_17] [i_21]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)24782)) > (((/* implicit */int) (unsigned char)92))))))));
                        }
                        var_31 -= ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) (signed char)125)) ? (((/* implicit */int) (unsigned char)100)) : (((/* implicit */int) (_Bool)1)))));
                    }
                } 
            } 
        } 
    }
    for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) /* same iter space */
    {
        arr_68 [i_22] = ((/* implicit */long long int) (~(((/* implicit */int) (signed char)8))));
        var_32 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max(((unsigned short)40754), (((/* implicit */unsigned short) (signed char)123))))) ? (((long long int) arr_19 [(unsigned short)15] [(unsigned short)15] [i_22])) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) arr_37 [i_22])) : (var_3)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (arr_54 [i_22]))))) == (max((var_6), (((/* implicit */unsigned long long int) arr_7 [i_22] [i_22] [i_22] [i_22] [i_22] [i_22])))))))) : (((long long int) max(((unsigned short)24782), (((/* implicit */unsigned short) (unsigned char)78)))))));
    }
    for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) /* same iter space */
    {
        var_33 = ((/* implicit */unsigned long long int) min((var_33), (((/* implicit */unsigned long long int) (~(min((((/* implicit */long long int) min((arr_13 [i_23] [(signed char)13]), (((/* implicit */unsigned int) arr_33 [i_23] [i_23] [(unsigned short)2]))))), (((((/* implicit */_Bool) arr_32 [i_23] [i_23])) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (arr_39 [i_23] [i_23] [i_23] [i_23]))))))))));
        /* LoopNest 2 */
        for (unsigned char i_24 = 3; i_24 < 13; i_24 += 3) 
        {
            for (unsigned long long int i_25 = 0; i_25 < 17; i_25 += 4) 
            {
                {
                    var_34 = ((/* implicit */_Bool) max((var_34), (((/* implicit */_Bool) (-(min((min((arr_72 [i_23] [i_23] [16ULL]), (((/* implicit */unsigned long long int) (unsigned short)40754)))), ((~(arr_72 [i_25] [i_24 - 3] [i_23]))))))))));
                    arr_77 [i_24 + 3] |= ((/* implicit */unsigned long long int) (-((-(((/* implicit */int) arr_50 [i_25] [i_25] [i_25] [i_24 + 2]))))));
                    /* LoopNest 2 */
                    for (signed char i_26 = 0; i_26 < 17; i_26 += 4) 
                    {
                        for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) 
                        {
                            {
                                var_35 = ((/* implicit */int) max((var_35), (((/* implicit */int) (((!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_2)), (12690267053459864705ULL)))))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : ((-(var_1))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (-(arr_13 [i_27] [(unsigned short)9])))))))))))));
                                arr_83 [i_23] [i_24 + 2] [i_25] [i_26] [i_27] [i_24 + 2] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_5)))) || ((!(((/* implicit */_Bool) (unsigned char)96))))));
                            }
                        } 
                    } 
                    var_36 *= ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)65535))))) ? ((-(((/* implicit */int) var_12)))) : (((/* implicit */int) arr_31 [i_24 + 1]))))) ? (((unsigned long long int) arr_49 [i_24 - 2] [i_24 + 1] [i_24 + 3])) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)127)) ^ (((/* implicit */int) var_9))))) ? (((((/* implicit */_Bool) arr_75 [i_23] [i_23] [2ULL] [i_24])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_23] [(unsigned char)4] [i_23] [i_23]))) : (4294967294U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) (signed char)116)) : (((/* implicit */int) var_9)))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_28 = 2; i_28 < 15; i_28 += 3) 
                    {
                        for (unsigned long long int i_29 = 0; i_29 < 17; i_29 += 2) 
                        {
                            {
                                arr_89 [i_23] [(unsigned short)4] [i_23] [i_23] [i_23] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_58 [i_24 + 4] [i_28 + 2] [i_28 + 1] [i_28 + 2])) ? ((+(arr_18 [i_24 + 4] [i_28 + 2] [i_28 - 2] [i_28 - 1]))) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (unsigned char)92)), (arr_58 [i_24 + 1] [i_28 + 1] [i_28 - 2] [i_28 + 2]))))));
                                var_37 -= ((/* implicit */_Bool) ((((/* implicit */int) (((!(((/* implicit */_Bool) (unsigned short)24782)))) || (((/* implicit */_Bool) var_6))))) - ((-(((/* implicit */int) (_Bool)1))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
}
