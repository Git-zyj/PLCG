/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84149
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
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                arr_8 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */long long int) (((~(((/* implicit */int) arr_7 [i_0] [i_1])))) | ((~(((/* implicit */int) var_2))))))) < ((-9223372036854775807LL - 1LL))));
                var_12 = ((/* implicit */_Bool) max((var_12), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1])) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))) ? (((/* implicit */int) (unsigned char)126)) : (((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0])))))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (int i_2 = 1; i_2 < 13; i_2 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_3 = 0; i_3 < 14; i_3 += 3) 
        {
            for (short i_4 = 0; i_4 < 14; i_4 += 3) 
            {
                {
                    var_13 -= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_14 [i_4] [8ULL] [8ULL] [i_2 + 1])) < (((/* implicit */int) arr_14 [i_2 + 1] [(unsigned char)10] [i_3] [i_4])))))) < (((((/* implicit */_Bool) arr_13 [i_2] [i_2 + 1] [i_2 - 1])) ? (arr_13 [i_2] [i_2 - 1] [i_2 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_2 + 1] [i_2 + 1])))))));
                    var_14 += ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_6 [i_2 - 1])) ? ((+(arr_11 [i_2 - 1] [i_2 - 1] [6ULL]))) : (((/* implicit */unsigned int) arr_4 [i_2 - 1] [i_2 - 1] [i_2 - 1])))) >> (((((int) 4294967295U)) + (8)))));
                    /* LoopSeq 1 */
                    for (long long int i_5 = 0; i_5 < 14; i_5 += 3) 
                    {
                        var_15 = ((/* implicit */int) ((((var_9) != (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)103))))) ? (((((/* implicit */_Bool) ((unsigned long long int) arr_16 [(unsigned char)10] [i_4] [i_3] [(unsigned char)10]))) ? (var_1) : (((/* implicit */unsigned long long int) var_5)))) : (((/* implicit */unsigned long long int) ((unsigned int) min((((/* implicit */int) (unsigned char)129)), (var_4)))))));
                        var_16 ^= ((/* implicit */unsigned short) arr_3 [i_2 - 1] [i_2 + 1]);
                        var_17 -= (-((~(((((/* implicit */_Bool) arr_7 [i_3] [i_3])) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_2 + 1] [12U] [i_2] [i_2]))))))));
                        var_18 |= ((/* implicit */signed char) (+(max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)126)) ? (((/* implicit */int) arr_12 [(unsigned char)12] [(unsigned char)12])) : (var_5)))), (((unsigned int) var_10))))));
                    }
                }
            } 
        } 
        arr_19 [i_2] [i_2 - 1] = ((/* implicit */long long int) (unsigned char)249);
        /* LoopNest 2 */
        for (short i_6 = 0; i_6 < 14; i_6 += 2) 
        {
            for (unsigned int i_7 = 0; i_7 < 14; i_7 += 1) 
            {
                {
                    var_19 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((var_11) / (((/* implicit */unsigned long long int) var_9)))) != (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_14 [i_7] [i_7] [i_7] [i_2]))))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_8 = 0; i_8 < 14; i_8 += 1) 
                    {
                        for (long long int i_9 = 0; i_9 < 14; i_9 += 1) 
                        {
                            {
                                var_20 ^= ((/* implicit */_Bool) var_8);
                                var_21 = 12645120366648668100ULL;
                                var_22 = ((/* implicit */unsigned char) 3063766850U);
                                var_23 += arr_3 [i_6] [i_7];
                            }
                        } 
                    } 
                    var_24 += ((/* implicit */unsigned short) ((3063766850U) | (((((/* implicit */unsigned int) var_5)) ^ (arr_11 [i_6] [i_6] [i_6])))));
                    arr_30 [i_2] [i_7] [i_7] [i_7] = ((/* implicit */signed char) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_14 [i_2 + 1] [i_7] [i_7] [i_2]))))), (var_10)));
                }
            } 
        } 
    }
    var_25 = ((/* implicit */short) (+(((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_10)), (2482353506U)))) ? (min((0LL), (((/* implicit */long long int) var_4)))) : (min((5293561186037184433LL), (((/* implicit */long long int) 1077340707U))))))));
    /* LoopNest 2 */
    for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
    {
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            {
                var_26 = ((/* implicit */short) ((arr_12 [i_11] [i_11]) ? ((((~(var_7))) & (max((var_11), (4878352924952848181ULL))))) : (((/* implicit */unsigned long long int) var_5))));
                var_27 = ((/* implicit */int) min((var_27), (((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_0))))) ? (var_1) : (((/* implicit */unsigned long long int) max((-1167176021869077856LL), (((/* implicit */long long int) arr_24 [i_10 - 1] [i_10 - 1]))))))))));
                arr_38 [i_11] [i_11] = ((/* implicit */unsigned char) min((((/* implicit */long long int) (((!(((/* implicit */_Bool) var_7)))) ? ((+(1812613790U))) : (((/* implicit */unsigned int) (-(-2052998056))))))), (((((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_10 - 1]))) != (var_9))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (var_3) : (((/* implicit */int) var_6))))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (arr_6 [i_10])))))));
                /* LoopNest 2 */
                for (unsigned int i_12 = 0; i_12 < 12; i_12 += 1) 
                {
                    for (unsigned long long int i_13 = 1; i_13 < 8; i_13 += 2) 
                    {
                        {
                            /* LoopSeq 3 */
                            for (unsigned int i_14 = 1; i_14 < 8; i_14 += 2) 
                            {
                                var_28 = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_25 [i_10] [i_11] [i_12] [i_11])), (((((/* implicit */_Bool) var_8)) ? (arr_13 [i_13 - 1] [i_12] [i_10]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)10387)))))))) ? (((/* implicit */unsigned long long int) min(((+(arr_31 [i_13]))), (((/* implicit */long long int) arr_14 [i_14] [i_11] [i_11] [i_10]))))) : (min((((((/* implicit */_Bool) arr_5 [i_12] [i_14])) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)55149))))), (((/* implicit */unsigned long long int) var_6))))));
                                var_29 -= ((/* implicit */short) max((3ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)43)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (arr_6 [i_10 - 1])))) ? (((/* implicit */int) max((((/* implicit */short) (_Bool)1)), (arr_7 [i_10] [i_11])))) : (((arr_29 [i_14 - 1] [i_13 + 1] [i_12] [i_10] [i_10]) ? (arr_16 [i_10 - 1] [i_10 - 1] [i_10 - 1] [(_Bool)0]) : (((/* implicit */int) (unsigned char)127)))))))));
                            }
                            for (unsigned short i_15 = 1; i_15 < 11; i_15 += 1) 
                            {
                                var_30 = ((/* implicit */long long int) ((arr_31 [i_13 - 1]) <= (((((/* implicit */_Bool) arr_31 [i_13 + 2])) ? (arr_31 [i_13 + 2]) : (((/* implicit */long long int) arr_18 [i_11]))))));
                                var_31 = ((/* implicit */unsigned long long int) arr_21 [i_10] [i_13 + 4] [i_15]);
                                var_32 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_10 - 1] [i_13] [i_13 + 1] [i_13 + 4] [i_11] [i_15 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)241))) : (arr_17 [i_10 - 1] [i_11] [i_13 + 4] [i_13 + 4] [i_11] [i_15 - 1])))) ? (min((((/* implicit */unsigned long long int) var_6)), (18097348696487670439ULL))) : (((/* implicit */unsigned long long int) (+(var_9))))));
                            }
                            for (unsigned long long int i_16 = 3; i_16 < 11; i_16 += 3) 
                            {
                                arr_51 [i_11] [i_11] [i_12] [i_13 + 1] [i_13 + 2] [i_16] = ((/* implicit */int) ((short) ((((/* implicit */_Bool) min((arr_16 [i_10 - 1] [i_10 - 1] [i_10] [i_11]), ((-2147483647 - 1))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_10 - 1] [i_10 - 1] [i_11])) || ((_Bool)0)))) : (((/* implicit */int) arr_43 [i_10 - 1] [i_11] [i_12] [i_13] [i_16])))));
                                var_33 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (~(770894530)))) ? (max((((/* implicit */unsigned long long int) var_8)), (var_11))) : (((/* implicit */unsigned long long int) (((~(0U))) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [(unsigned char)6] [i_11] [i_12] [i_16]))))))));
                                var_34 ^= ((/* implicit */long long int) arr_9 [i_12]);
                                var_35 ^= ((/* implicit */short) (-(((/* implicit */int) ((arr_35 [(signed char)8] [(signed char)8]) == (arr_35 [(unsigned short)8] [(unsigned short)8]))))));
                                var_36 += ((/* implicit */unsigned int) (unsigned short)41936);
                            }
                            var_37 = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((var_10), (((/* implicit */unsigned short) arr_10 [i_11] [i_13])))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_38 = ((/* implicit */short) (-(((var_3) / (min((((/* implicit */int) var_2)), (var_5)))))));
}
