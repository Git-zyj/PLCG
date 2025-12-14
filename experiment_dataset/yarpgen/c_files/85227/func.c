/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85227
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85227 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85227
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
    for (short i_0 = 2; i_0 < 11; i_0 += 3) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 1; i_1 < 11; i_1 += 1) 
        {
            var_11 = ((/* implicit */long long int) max((var_11), (((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_0 [2U])) : (((/* implicit */int) arr_4 [11ULL]))))), (18446744073709551615ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) min((((/* implicit */unsigned char) arr_4 [(short)1])), (arr_3 [i_0 - 2] [(signed char)10] [i_0 - 2])))))) : (((min((907447808U), (((/* implicit */unsigned int) (unsigned char)255)))) / ((-(var_1))))))))));
            var_12 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) min((var_0), (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)10)) / (var_5))))))) - (((((/* implicit */_Bool) (+(arr_1 [(short)11])))) ? (((/* implicit */unsigned long long int) (-(arr_1 [i_0 + 1])))) : (((((/* implicit */unsigned long long int) 3387519487U)) / (3710022531306900989ULL)))))));
            arr_5 [i_0] = ((/* implicit */signed char) (!((!(((/* implicit */_Bool) min((arr_1 [(signed char)1]), (arr_1 [i_0]))))))));
            var_13 += ((/* implicit */short) (!(((/* implicit */_Bool) min((var_7), (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))))));
            arr_6 [i_0] [i_0 - 2] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_1 + 1] [i_0] [i_1])) / (((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))))), (min((max((((/* implicit */unsigned long long int) arr_3 [i_0 - 2] [i_0] [i_0 - 2])), (var_4))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3387519459U)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)0))))))))));
        }
        for (short i_2 = 0; i_2 < 12; i_2 += 4) 
        {
            var_14 += ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_3 [i_0 + 1] [i_2] [i_0 + 1])) ? (((/* implicit */int) arr_3 [i_2] [i_2] [i_0 - 1])) : (((/* implicit */int) arr_3 [i_0 - 2] [i_2] [i_0 - 1])))) + (((((/* implicit */_Bool) arr_3 [i_0 - 1] [i_2] [i_0 - 2])) ? (((/* implicit */int) arr_3 [(short)4] [i_2] [i_0 + 1])) : (((/* implicit */int) arr_3 [10U] [i_2] [i_0 + 1]))))));
            arr_10 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((3387519488U) ^ (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-103)))))))) || (((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0 - 2])) ? (-3314794451106326988LL) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))))));
            /* LoopSeq 2 */
            for (short i_3 = 0; i_3 < 12; i_3 += 2) 
            {
                var_15 = ((/* implicit */short) arr_4 [i_0 + 1]);
                var_16 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_0 + 1])) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) min((arr_3 [i_3] [i_3] [i_3]), (((/* implicit */unsigned char) arr_4 [i_2])))))))) : (min((arr_8 [i_0] [i_2] [i_0]), (arr_8 [i_0] [i_3] [i_3])))));
                arr_14 [i_0] [i_3] = ((/* implicit */short) 907447808U);
                var_17 |= ((/* implicit */signed char) ((unsigned long long int) arr_0 [i_3]));
            }
            for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 4) 
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned int i_5 = 0; i_5 < 12; i_5 += 2) /* same iter space */
                {
                    arr_20 [i_0 - 1] [i_0] = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */int) (unsigned char)178)) * (((/* implicit */int) arr_3 [i_5] [i_0] [i_0 - 2])))));
                    var_18 ^= ((/* implicit */int) ((((/* implicit */long long int) (+(((/* implicit */int) var_2))))) < (1030089796686115274LL)));
                    /* LoopSeq 2 */
                    for (unsigned int i_6 = 1; i_6 < 8; i_6 += 1) 
                    {
                        var_19 &= ((/* implicit */unsigned char) arr_21 [i_0] [i_2] [i_4] [i_5] [(short)6] [i_2]);
                        var_20 *= ((/* implicit */short) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) arr_4 [i_2]))));
                        var_21 &= ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */int) arr_23 [3ULL] [i_2] [i_2] [i_2] [i_2])) != (((/* implicit */int) arr_0 [i_2])))))));
                        arr_25 [i_0 + 1] [i_2] [i_2] [i_0] [i_2] = -1793589951;
                    }
                    for (short i_7 = 1; i_7 < 10; i_7 += 3) 
                    {
                        var_22 = ((/* implicit */signed char) ((((/* implicit */int) arr_21 [i_7 - 1] [i_0] [i_7 + 2] [i_7 - 1] [i_0] [i_0 + 1])) / (((/* implicit */int) arr_3 [i_0] [i_0] [i_0 - 1]))));
                        arr_28 [i_0] [i_0] [i_4] [(short)5] [i_4] [i_0 - 2] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_9 [i_0]))));
                    }
                    var_23 ^= ((/* implicit */short) arr_19 [2LL] [i_2] [2LL] [i_5] [2LL]);
                }
                /* vectorizable */
                for (unsigned int i_8 = 0; i_8 < 12; i_8 += 2) /* same iter space */
                {
                    var_24 = ((/* implicit */int) ((unsigned long long int) ((var_5) < (arr_11 [i_0] [i_0] [i_4] [i_0]))));
                    arr_33 [i_0 - 2] [i_8] |= ((/* implicit */signed char) (-(((/* implicit */int) arr_23 [i_0] [i_0] [i_8] [i_8] [i_0 + 1]))));
                    var_25 = ((/* implicit */unsigned long long int) arr_3 [i_8] [i_0] [i_4]);
                }
                for (unsigned int i_9 = 0; i_9 < 12; i_9 += 2) /* same iter space */
                {
                    var_26 = ((/* implicit */int) (unsigned char)23);
                    arr_36 [i_0] [i_2] [i_0] = ((/* implicit */int) (((-(1ULL))) > (((((((/* implicit */_Bool) arr_12 [(short)2] [(short)2] [i_0])) ? (var_6) : (arr_7 [i_2] [i_0] [i_0]))) + (((/* implicit */unsigned long long int) ((4323455642275676160LL) / (((/* implicit */long long int) arr_1 [i_4])))))))));
                    arr_37 [(short)2] [(signed char)8] [i_4] [i_0] [i_2] [i_0 + 1] = ((/* implicit */unsigned long long int) arr_32 [i_0] [i_0] [i_2] [i_2] [i_0]);
                }
                var_27 ^= ((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_23 [i_0] [i_4] [i_4] [i_4] [i_0 + 1])))))));
            }
            /* LoopSeq 1 */
            for (unsigned long long int i_10 = 0; i_10 < 12; i_10 += 4) 
            {
                arr_41 [i_0 + 1] [i_0 - 2] [i_0 - 1] [i_10] |= ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_39 [i_10] [i_10] [i_10])) ? (arr_18 [i_0 - 2] [(signed char)11] [i_0 - 1] [i_0 - 2] [i_0 - 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_34 [i_10] [i_10] [i_2] [i_0] [i_10])))))))));
                var_28 += ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_8 [i_10] [i_10] [i_10]))));
            }
        }
        var_29 = ((/* implicit */unsigned long long int) min((var_29), (((/* implicit */unsigned long long int) arr_32 [(short)4] [i_0 + 1] [i_0] [i_0 + 1] [i_0 - 2]))));
    }
    /* vectorizable */
    for (short i_11 = 2; i_11 < 11; i_11 += 3) /* same iter space */
    {
        var_30 = ((/* implicit */int) max((var_30), (((((/* implicit */_Bool) arr_17 [i_11 - 2] [i_11 - 2])) ? (arr_17 [i_11 - 1] [i_11 - 2]) : (arr_17 [i_11 - 2] [i_11 + 1])))));
        arr_46 [i_11] = (((!(((/* implicit */_Bool) arr_39 [i_11] [2ULL] [i_11])))) ? (((/* implicit */int) ((((/* implicit */int) var_3)) > (arr_2 [i_11])))) : (((/* implicit */int) (!(((/* implicit */_Bool) 907447808U))))));
        var_31 = ((/* implicit */long long int) max((var_31), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-32753))) / (((var_10) & (((/* implicit */unsigned int) ((/* implicit */int) arr_45 [4ULL] [4ULL]))))))))));
    }
    var_32 += ((/* implicit */int) (((+(((((/* implicit */_Bool) var_2)) ? (9822357137864875350ULL) : (((/* implicit */unsigned long long int) var_1)))))) >= (min((var_6), (((/* implicit */unsigned long long int) max((1030089796686115283LL), (((/* implicit */long long int) var_2)))))))));
}
