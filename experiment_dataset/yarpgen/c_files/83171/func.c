/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83171
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83171 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83171
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
    var_11 = ((/* implicit */signed char) max((var_0), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_5))))) ? (min((var_4), (858000252))) : (((/* implicit */int) ((short) var_7))))))));
    var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) (~(var_10))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 1; i_0 < 13; i_0 += 2) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) (short)-7374)), (arr_1 [i_0 + 1] [i_0 + 1]))))));
        /* LoopSeq 2 */
        for (signed char i_1 = 2; i_1 < 13; i_1 += 2) 
        {
            var_13 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)47)) ? (((/* implicit */int) min(((short)-7393), (((/* implicit */short) var_5))))) : (((/* implicit */int) var_7))));
            arr_5 [i_0] [(_Bool)1] &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)209)) ? (((/* implicit */unsigned int) -858000266)) : (3485134527U)))) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (unsigned char)209)), (2427801029U)))) : (8889763816282176161ULL)));
        }
        for (int i_2 = 3; i_2 < 10; i_2 += 3) 
        {
            /* LoopNest 3 */
            for (int i_3 = 1; i_3 < 10; i_3 += 4) 
            {
                for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 3) 
                {
                    for (signed char i_5 = 0; i_5 < 14; i_5 += 1) 
                    {
                        {
                            var_14 = ((((/* implicit */_Bool) -858000263)) ? (-12LL) : (((/* implicit */long long int) -858000243)));
                            var_15 = ((/* implicit */short) (~(-1740113763)));
                            var_16 |= ((/* implicit */unsigned char) arr_1 [1U] [i_4]);
                        }
                    } 
                } 
            } 
            arr_16 [6U] |= ((/* implicit */int) min((max((((/* implicit */unsigned long long int) arr_7 [i_2 - 2])), (((((/* implicit */_Bool) 1701330597)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-48))) : (arr_13 [i_0] [i_2] [i_2] [i_0] [i_0 + 1] [i_0] [i_0]))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned int) var_3))))))));
            /* LoopNest 3 */
            for (unsigned long long int i_6 = 0; i_6 < 14; i_6 += 3) 
            {
                for (short i_7 = 1; i_7 < 12; i_7 += 4) 
                {
                    for (unsigned int i_8 = 2; i_8 < 13; i_8 += 4) 
                    {
                        {
                            arr_26 [(_Bool)1] [i_2] [i_2] [i_7 + 2] [i_2] = ((/* implicit */unsigned char) arr_24 [i_0 - 1] [i_2] [i_6] [10U] [i_8]);
                            var_17 = ((/* implicit */short) (unsigned char)50);
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (unsigned short i_9 = 3; i_9 < 13; i_9 += 4) 
            {
                for (unsigned short i_10 = 0; i_10 < 14; i_10 += 4) 
                {
                    {
                        arr_32 [i_0] [i_2] [i_9] [i_10] = ((/* implicit */unsigned short) arr_31 [i_9 - 3] [i_9] [i_9] [i_9 - 1]);
                        var_18 = ((/* implicit */_Bool) var_4);
                        /* LoopSeq 4 */
                        for (unsigned char i_11 = 0; i_11 < 14; i_11 += 4) /* same iter space */
                        {
                            var_19 = ((/* implicit */unsigned char) arr_15 [7U] [i_2] [i_2]);
                            arr_37 [i_0] [i_2] [i_9] [i_10] [i_11] [2] |= ((/* implicit */short) ((((/* implicit */_Bool) max((((7U) * (((/* implicit */unsigned int) ((/* implicit */int) var_3))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 963353229)) || (var_9))))))) ? (((unsigned int) min((var_7), (((/* implicit */short) arr_9 [i_2] [i_9] [i_11]))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))));
                        }
                        /* vectorizable */
                        for (unsigned char i_12 = 0; i_12 < 14; i_12 += 4) /* same iter space */
                        {
                            var_20 = ((/* implicit */unsigned int) min((var_20), ((+(0U)))));
                            arr_41 [i_2] = ((/* implicit */unsigned long long int) arr_31 [i_0 - 1] [i_9] [i_0 - 1] [7ULL]);
                            arr_42 [i_2] = ((/* implicit */signed char) ((var_6) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)40363)))));
                            var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_22 [i_2 + 4] [i_2 + 2] [i_2] [i_2 + 4] [i_2 - 3])) && (((/* implicit */_Bool) (+(0U))))));
                        }
                        /* vectorizable */
                        for (signed char i_13 = 0; i_13 < 14; i_13 += 1) 
                        {
                            var_22 = var_5;
                            var_23 = ((/* implicit */int) min((var_23), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned char)47)) : (((/* implicit */int) arr_17 [i_0] [i_10]))))));
                            var_24 = ((/* implicit */unsigned int) (unsigned char)181);
                            var_25 = ((/* implicit */short) var_10);
                        }
                        for (signed char i_14 = 0; i_14 < 14; i_14 += 3) 
                        {
                            var_26 = ((/* implicit */short) min((-963353246), (((/* implicit */int) (signed char)-7))));
                            arr_49 [i_14] [i_0 + 1] [i_2] [i_2] [i_0 + 1] [i_0 + 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) (signed char)-7)))) ? (max((((/* implicit */long long int) var_8)), (arr_12 [i_2] [i_2] [i_2] [i_10]))) : (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_0] [0U] [i_9] [(unsigned char)12] [i_14] [(signed char)5])))))) ? (((/* implicit */unsigned long long int) var_2)) : (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((((/* implicit */_Bool) arr_46 [i_0] [i_2] [i_2] [i_0] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_0] [i_0] [i_2] [i_2] [i_9 - 3] [i_2] [i_14]))) : (var_0))) : (var_0)))));
                            var_27 = (!(((/* implicit */_Bool) -858000266)));
                            var_28 = ((/* implicit */unsigned int) var_10);
                        }
                        arr_50 [i_2] = ((/* implicit */unsigned char) var_2);
                        arr_51 [i_2] [i_2] = ((/* implicit */short) (~((-(7ULL)))));
                    }
                } 
            } 
            var_29 += ((/* implicit */unsigned char) (~(((/* implicit */int) var_3))));
        }
    }
    for (unsigned short i_15 = 1; i_15 < 13; i_15 += 2) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned int i_16 = 0; i_16 < 14; i_16 += 2) 
        {
            var_30 = ((/* implicit */unsigned char) ((short) ((3058448359U) + (((/* implicit */unsigned int) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)209))))))));
            var_31 = ((/* implicit */int) min((var_31), (((/* implicit */int) 18446744073709551609ULL))));
            arr_58 [(signed char)7] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_46 [i_15] [i_15 + 1] [i_15 + 1] [i_15 - 1] [i_16]), (arr_46 [i_15 - 1] [i_15 + 1] [i_15 - 1] [i_15 + 1] [i_16])))) ? ((+(((/* implicit */int) arr_43 [i_16] [i_15] [i_16])))) : (((((/* implicit */int) arr_55 [i_15 + 1] [i_15 + 1] [i_15 - 1])) - (((/* implicit */int) arr_55 [i_15 + 1] [12ULL] [i_15 - 1]))))));
        }
        for (unsigned int i_17 = 0; i_17 < 14; i_17 += 1) 
        {
            var_32 = ((/* implicit */_Bool) max((var_32), (arr_35 [i_17] [0U] [i_17] [0U] [i_15])));
            var_33 |= ((/* implicit */unsigned short) (short)0);
        }
        /* LoopSeq 3 */
        for (long long int i_18 = 0; i_18 < 14; i_18 += 3) 
        {
            var_34 = ((/* implicit */int) min((var_34), (((/* implicit */int) min(((~(((var_2) >> (((/* implicit */int) var_8)))))), (((/* implicit */unsigned int) min((var_4), (((/* implicit */int) (signed char)6))))))))));
            var_35 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 7ULL))));
        }
        for (long long int i_19 = 0; i_19 < 14; i_19 += 1) 
        {
            arr_65 [i_15 - 1] [i_19] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) 18446744073709551615ULL)))) ? (min((((/* implicit */unsigned int) min((((/* implicit */signed char) arr_33 [i_15] [i_19] [i_19])), ((signed char)-76)))), (((3058448374U) & (arr_10 [i_19] [i_19] [i_19] [i_19]))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_19] [i_19]))))))));
            /* LoopNest 2 */
            for (unsigned long long int i_20 = 0; i_20 < 14; i_20 += 1) 
            {
                for (unsigned int i_21 = 0; i_21 < 14; i_21 += 1) 
                {
                    {
                        arr_73 [9ULL] [i_19] [(_Bool)1] [i_19] = ((/* implicit */signed char) var_0);
                        var_36 = ((/* implicit */_Bool) min((var_36), (((/* implicit */_Bool) ((min((arr_8 [i_15 - 1] [i_15 - 1] [i_15]), (arr_8 [i_15] [i_15 - 1] [i_20]))) >> (((var_10) - (1751025478))))))));
                        arr_74 [i_15] [i_19] [i_15] = ((/* implicit */unsigned short) (-(max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) -7484212705029483052LL))))), (17U)))));
                    }
                } 
            } 
        }
        for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
        {
            arr_79 [i_15] = ((/* implicit */unsigned long long int) var_6);
            var_37 = ((/* implicit */long long int) (-(17U)));
        }
    }
}
