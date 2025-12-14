/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95915
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95915 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95915
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
    var_16 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) var_4))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_5))))) : (((var_4) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))))));
    /* LoopSeq 2 */
    for (int i_0 = 1; i_0 < 11; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_2)) ? (arr_1 [i_0]) : (arr_1 [i_0])))))) ? (((unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)53701))) | (18446744073709551615ULL)))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))));
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            arr_6 [i_0] [9LL] = (i_0 % 2 == 0) ? (((/* implicit */long long int) max((((/* implicit */int) ((signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_1]))) - (0LL))))), (((min((((/* implicit */int) var_11)), (arr_1 [i_0 - 1]))) >> (((arr_5 [i_0]) - (6943999853267472753ULL)))))))) : (((/* implicit */long long int) max((((/* implicit */int) ((signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_1]))) - (0LL))))), (((min((((/* implicit */int) var_11)), (arr_1 [i_0 - 1]))) >> (((((arr_5 [i_0]) - (6943999853267472753ULL))) - (11970383271032513043ULL))))))));
            var_17 |= ((unsigned short) ((unsigned int) (_Bool)1));
        }
    }
    for (unsigned short i_2 = 0; i_2 < 14; i_2 += 4) 
    {
        var_18 = ((/* implicit */_Bool) arr_10 [i_2]);
        var_19 ^= ((/* implicit */unsigned int) ((((/* implicit */int) (!((!(((/* implicit */_Bool) var_5))))))) - (max((((/* implicit */int) ((signed char) var_0))), ((~(((/* implicit */int) var_4))))))));
        arr_11 [i_2] = ((/* implicit */unsigned int) max((((((/* implicit */long long int) ((/* implicit */int) ((arr_7 [i_2]) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))))) + (max((var_9), (((/* implicit */long long int) var_13)))))), (((/* implicit */long long int) ((((/* implicit */long long int) (~(var_15)))) < (((((/* implicit */long long int) var_13)) % (arr_10 [i_2]))))))));
        var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_9)))))));
        /* LoopNest 2 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (long long int i_4 = 0; i_4 < 14; i_4 += 4) 
            {
                {
                    var_21 = (!(((/* implicit */_Bool) max((max(((unsigned short)53701), (((/* implicit */unsigned short) var_6)))), (((/* implicit */unsigned short) arr_12 [i_2] [i_3]))))));
                    arr_16 [i_2] [i_3] [i_4] = ((/* implicit */unsigned long long int) (-(((long long int) arr_15 [i_2]))));
                }
            } 
        } 
    }
    var_22 = ((((/* implicit */_Bool) ((int) var_12))) ? (((/* implicit */long long int) ((unsigned int) (-(var_13))))) : (var_9));
    /* LoopNest 2 */
    for (short i_5 = 2; i_5 < 14; i_5 += 4) 
    {
        for (signed char i_6 = 0; i_6 < 16; i_6 += 4) 
        {
            {
                var_23 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_18 [i_5 + 2] [i_5 + 2]) / (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_19 [i_5] [i_6])) != (-403883275)))))))) ? (max((var_13), (((/* implicit */unsigned int) arr_21 [i_5 - 2])))) : (((((/* implicit */_Bool) max((var_13), (arr_20 [i_5] [i_5] [i_5])))) ? (arr_20 [i_5 + 1] [i_5] [5U]) : (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)53709)))))))));
                /* LoopSeq 2 */
                for (int i_7 = 0; i_7 < 16; i_7 += 4) 
                {
                    arr_24 [i_5] [i_6] [i_5] [i_5] = max((((arr_17 [i_5 + 2]) | (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))))), (((/* implicit */int) ((((1673780725632496058ULL) ^ (((/* implicit */unsigned long long int) var_12)))) == (((/* implicit */unsigned long long int) var_9))))));
                    /* LoopNest 2 */
                    for (unsigned int i_8 = 0; i_8 < 16; i_8 += 4) 
                    {
                        for (unsigned long long int i_9 = 0; i_9 < 16; i_9 += 4) 
                        {
                            {
                                var_24 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_17 [i_5 + 2])) ? (((/* implicit */int) var_5)) : (arr_17 [i_5 + 2]))) != (min((var_1), (((/* implicit */int) arr_25 [i_9] [i_9] [i_9] [i_8] [i_5 + 2]))))));
                                var_25 ^= ((/* implicit */int) (!(((/* implicit */_Bool) arr_23 [i_5 - 2] [i_6] [i_8] [i_5 - 2]))));
                                arr_30 [(unsigned short)5] [i_6] [i_6] [i_8] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_18 [i_5 - 2] [i_5 + 2]) << (((arr_18 [i_5 - 2] [i_5 - 2]) - (2796863898U)))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)11827)) + (((/* implicit */int) (unsigned short)5258))))) : (((((/* implicit */_Bool) arr_18 [i_5 + 1] [i_5 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (arr_18 [i_5 - 2] [i_5 + 1])))));
                                arr_31 [i_5 + 2] [1] [i_7] [i_7] [i_9] = 18446744073709551615ULL;
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_10 = 0; i_10 < 16; i_10 += 4) 
                    {
                        for (unsigned long long int i_11 = 2; i_11 < 14; i_11 += 4) 
                        {
                            {
                                arr_37 [i_11] [i_6] [i_7] [i_10] [i_11] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((var_15) + (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))))) ? (((/* implicit */long long int) min((((/* implicit */unsigned int) arr_17 [i_11 + 1])), (arr_18 [i_5 + 1] [i_6])))) : ((~(var_9)))));
                                arr_38 [i_10] [i_10] [8U] [i_10] = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_21 [i_5 - 2])) ? (((/* implicit */int) var_10)) : (arr_21 [i_5 + 2])))));
                            }
                        } 
                    } 
                }
                for (unsigned long long int i_12 = 0; i_12 < 16; i_12 += 4) 
                {
                    var_26 = ((/* implicit */unsigned int) ((((/* implicit */int) ((_Bool) arr_39 [i_5 + 2] [i_5 + 2] [i_5 + 2]))) & (arr_39 [i_5 + 2] [i_5] [i_5 + 2])));
                    var_27 *= ((/* implicit */signed char) (((-(((/* implicit */int) min((arr_35 [i_6] [i_6] [i_12] [i_6]), (arr_35 [i_6] [(_Bool)1] [i_6] [i_6])))))) < (((/* implicit */int) ((((/* implicit */_Bool) arr_41 [i_5 - 1] [i_5 + 2] [i_5 - 2] [i_5])) || (((/* implicit */_Bool) (unsigned short)54829)))))));
                }
                /* LoopNest 2 */
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    for (long long int i_14 = 0; i_14 < 16; i_14 += 4) 
                    {
                        {
                            var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_5] [i_6] [i_5] [i_5] [i_5 - 1])) ? (arr_39 [i_5 - 1] [i_5 - 2] [i_5]) : (((/* implicit */int) arr_26 [i_5 + 1]))))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_25 [i_5] [5LL] [i_13] [i_14] [i_5 - 1]))) ^ (1123700883587072LL))) : (((/* implicit */long long int) (~(arr_39 [i_5 + 1] [i_5 - 1] [i_5]))))));
                            var_29 = var_12;
                            /* LoopSeq 3 */
                            for (long long int i_15 = 0; i_15 < 16; i_15 += 4) 
                            {
                                var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [i_5 - 1] [i_14] [8ULL] [i_5 - 1] [i_5 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_43 [i_5 + 1] [i_14] [i_14]))) : (var_13)))) ? (((long long int) arr_27 [i_15] [i_15] [1ULL] [1ULL] [i_5 + 1])) : (((/* implicit */long long int) ((/* implicit */int) min((var_0), ((unsigned short)0)))))));
                                var_31 = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_32 [i_5] [i_5] [i_5 - 1] [(signed char)1]) + (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_29 [8] [i_6] [i_13] [i_14] [i_15] [i_13])), (var_13))))))) ? (arr_39 [i_5] [i_5] [i_5]) : (max((arr_17 [i_5 + 2]), (((/* implicit */int) (unsigned short)60262))))));
                                var_32 = ((/* implicit */unsigned long long int) max((var_32), (((/* implicit */unsigned long long int) arr_19 [i_5] [i_6]))));
                            }
                            for (unsigned long long int i_16 = 0; i_16 < 16; i_16 += 4) 
                            {
                                var_33 = ((/* implicit */long long int) (((-(((var_4) ? (((/* implicit */int) arr_45 [i_5 + 2] [i_5] [i_5 + 2] [i_5])) : (((/* implicit */int) arr_41 [i_5] [i_6] [i_13] [i_6])))))) + (((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_40 [4ULL] [4ULL])) : (var_1))) / (((((/* implicit */_Bool) arr_33 [i_5] [i_5] [i_13] [i_14] [i_16])) ? (((/* implicit */int) arr_19 [(signed char)1] [i_6])) : (((/* implicit */int) var_0))))))));
                                var_34 = ((/* implicit */long long int) max((var_34), (((/* implicit */long long int) (-(((/* implicit */int) arr_26 [i_5])))))));
                            }
                            for (unsigned short i_17 = 3; i_17 < 15; i_17 += 4) 
                            {
                                arr_55 [i_5] [i_5] = ((/* implicit */_Bool) (((~(((/* implicit */int) max((arr_34 [i_17] [i_14] [i_5] [i_5] [i_5]), (var_2)))))) - (max(((-(((/* implicit */int) (unsigned short)0)))), (((/* implicit */int) arr_25 [i_5] [i_5 - 2] [i_5] [i_5 - 1] [i_5 + 2]))))));
                                var_35 ^= ((/* implicit */unsigned long long int) max((((/* implicit */int) arr_22 [i_5] [11ULL] [11ULL])), (((int) (~(((/* implicit */int) (unsigned short)11827)))))));
                                arr_56 [i_5] [i_6] [i_6] [i_14] [i_5] [12U] = ((/* implicit */signed char) var_1);
                                arr_57 [(_Bool)1] [i_6] [i_6] = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_12) : (((/* implicit */int) arr_26 [i_6]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))) : (((((/* implicit */_Bool) 17024045395781665228ULL)) ? (((/* implicit */unsigned int) arr_39 [i_5] [i_6] [i_14])) : (var_15)))))) == (((((unsigned long long int) var_7)) + (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)18637)))))))));
                            }
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_18 = 0; i_18 < 16; i_18 += 4) 
                {
                    for (unsigned short i_19 = 0; i_19 < 16; i_19 += 4) 
                    {
                        {
                            arr_62 [i_18] [i_5 + 2] [i_5 + 2] = ((/* implicit */long long int) ((unsigned short) ((_Bool) max((arr_32 [i_5] [i_6] [i_18] [i_19]), (((/* implicit */unsigned long long int) arr_29 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]))))));
                            var_36 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_61 [i_5 - 2] [i_5 - 1] [i_5 - 1] [i_5 + 1])) : (((/* implicit */int) var_0))))) ? (((/* implicit */int) ((_Bool) arr_43 [i_5 - 1] [(short)4] [i_18]))) : (((/* implicit */int) arr_45 [i_5 - 1] [i_5 - 1] [(unsigned short)7] [i_5 - 1]))));
                            var_37 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 7660049540366412851LL)) && (((/* implicit */_Bool) (unsigned short)5273))));
                        }
                    } 
                } 
            }
        } 
    } 
}
