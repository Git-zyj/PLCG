/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76592
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76592 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76592
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
    var_12 = ((/* implicit */int) ((((/* implicit */_Bool) var_7)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (short i_0 = 1; i_0 < 19; i_0 += 4) /* same iter space */
    {
        var_13 = var_1;
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 22; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                {
                    arr_6 [i_0 + 4] [i_0] [i_1 + 1] [i_2] = ((/* implicit */short) var_0);
                    arr_7 [i_0 + 2] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (arr_2 [i_1 + 1] [i_1 - 1])));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned int i_3 = 3; i_3 < 22; i_3 += 2) 
        {
            arr_11 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)1632)) && (((/* implicit */_Bool) (unsigned short)1607))));
            var_14 = ((/* implicit */unsigned char) ((((/* implicit */int) var_8)) / (((/* implicit */int) var_1))));
            var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_3 [i_0] [i_0 + 3])) : (((/* implicit */int) arr_3 [i_0] [i_0 + 4]))));
            arr_12 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)40318)) ? (((/* implicit */int) (unsigned short)1660)) : (((/* implicit */int) (unsigned short)63916))));
        }
        arr_13 [i_0] = ((((/* implicit */_Bool) (unsigned short)63905)) ? (((/* implicit */unsigned int) -1235204534)) : (3875436704U));
    }
    for (short i_4 = 1; i_4 < 19; i_4 += 4) /* same iter space */
    {
        var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) min((((/* implicit */unsigned short) (signed char)51)), ((unsigned short)1643))))));
        arr_18 [i_4] = ((((/* implicit */int) var_7)) * (((/* implicit */int) arr_0 [(short)2] [19LL])));
        arr_19 [i_4] [i_4] = ((/* implicit */signed char) arr_17 [i_4]);
    }
    for (short i_5 = 1; i_5 < 21; i_5 += 1) 
    {
        var_17 |= ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) min((var_1), (arr_20 [i_5] [i_5])))) <= (min((var_3), (((/* implicit */int) (signed char)-1))))))) | ((((+(((/* implicit */int) var_4)))) - (((/* implicit */int) arr_21 [i_5] [i_5 - 1]))))));
        var_18 = ((/* implicit */long long int) (signed char)-29);
        arr_22 [i_5] |= ((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_20 [i_5] [i_5])) ? (11100349027192505870ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))), (((((/* implicit */unsigned long long int) min((var_5), (var_5)))) * (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)1))) * (0ULL)))))));
        /* LoopSeq 3 */
        for (short i_6 = 1; i_6 < 21; i_6 += 4) 
        {
            arr_25 [i_6] [21] [i_5] = ((/* implicit */_Bool) var_0);
            arr_26 [i_5] [i_6] [i_6] = ((/* implicit */unsigned int) ((((arr_23 [i_5 + 3] [i_6] [i_5 + 3]) / (arr_23 [i_6] [i_6 + 1] [i_5 + 1]))) | (((((/* implicit */int) arr_24 [i_5])) + (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned short)1658)) : (((/* implicit */int) var_7))))))));
        }
        for (int i_7 = 0; i_7 < 24; i_7 += 4) /* same iter space */
        {
            arr_29 [i_7] [i_7] [i_5] = ((/* implicit */unsigned char) (-(((/* implicit */int) (signed char)1))));
            var_19 = ((((((/* implicit */long long int) ((/* implicit */int) arr_24 [i_5 + 1]))) / (((((/* implicit */_Bool) var_1)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_8))))))) * (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_20 [i_5] [i_7])) ? (((/* implicit */unsigned int) var_6)) : (arr_27 [i_7] [i_5]))) < (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) var_11)) : (arr_27 [i_5] [i_5]))))))));
            arr_30 [i_5] [i_7] [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_21 [i_5 - 1] [i_5 + 2])) ? (((/* implicit */unsigned int) min((((((/* implicit */int) (signed char)36)) + (((/* implicit */int) arr_24 [i_7])))), (((/* implicit */int) arr_24 [i_7]))))) : (((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (var_6) : (((/* implicit */int) arr_24 [i_5]))))) | (((((/* implicit */_Bool) 4294967287U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (1403803435U)))))));
        }
        for (int i_8 = 0; i_8 < 24; i_8 += 4) /* same iter space */
        {
            /* LoopSeq 2 */
            for (int i_9 = 0; i_9 < 24; i_9 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned char i_10 = 0; i_10 < 24; i_10 += 3) 
                {
                    for (long long int i_11 = 0; i_11 < 24; i_11 += 4) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned short) var_6);
                            var_21 += ((/* implicit */unsigned char) ((((/* implicit */unsigned int) min((((/* implicit */int) var_0)), (min((var_6), (((/* implicit */int) arr_32 [17U] [17U]))))))) < (min((((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) == (var_2)))), (((((/* implicit */_Bool) arr_23 [i_8] [i_10] [i_11])) ? (4294967274U) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))))));
                            var_22 = ((/* implicit */signed char) var_0);
                        }
                    } 
                } 
                arr_42 [i_5] [i_5] [i_9] [i_9] = ((/* implicit */unsigned char) (signed char)41);
                arr_43 [(unsigned char)12] [i_8] [i_5] = ((/* implicit */unsigned long long int) var_7);
                var_23 = ((/* implicit */unsigned int) arr_32 [i_5] [i_8]);
                /* LoopNest 2 */
                for (unsigned int i_12 = 0; i_12 < 24; i_12 += 4) 
                {
                    for (int i_13 = 0; i_13 < 24; i_13 += 4) 
                    {
                        {
                            arr_49 [i_5] [i_8] [i_9] [19] [i_12] [i_13] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_45 [i_5 + 2] [i_5 + 2] [i_9] [i_9] [i_12]), (arr_45 [i_5 + 2] [i_5 + 3] [i_5 + 2] [i_8] [(unsigned short)7])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((arr_45 [i_5 - 1] [i_5 + 1] [i_5 - 1] [i_9] [i_9]) <= (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))) : ((-(arr_45 [i_5 + 1] [i_5 + 2] [i_5 + 1] [i_8] [i_12])))));
                            var_24 += ((((/* implicit */_Bool) max((max((((/* implicit */short) var_7)), ((short)0))), ((short)-1)))) ? (min((min((var_5), (((/* implicit */unsigned int) var_11)))), (((/* implicit */unsigned int) (unsigned char)131)))) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) max(((unsigned char)147), (((/* implicit */unsigned char) var_7))))), (var_0))))));
                            var_25 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) arr_36 [i_5] [i_8] [i_8] [i_8])) && (((/* implicit */_Bool) var_7))))) < (min((arr_23 [i_5 + 1] [i_5 + 2] [i_5 + 1]), ((-(((/* implicit */int) var_7))))))));
                            arr_50 [i_5] [18ULL] [i_13] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_31 [i_5] [i_5])) ? (((/* implicit */unsigned int) var_3)) : (var_2)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (650269609U)))))))) / (((min((((/* implicit */unsigned int) var_9)), (arr_28 [i_13]))) ^ (((/* implicit */unsigned int) (-(((/* implicit */int) var_9)))))))));
                            arr_51 [i_5] [i_8] [i_9] [i_12] [i_12] [i_13] [i_13] = ((/* implicit */short) (-(((/* implicit */int) (!(arr_34 [i_9]))))));
                        }
                    } 
                } 
            }
            /* vectorizable */
            for (unsigned short i_14 = 1; i_14 < 22; i_14 += 1) 
            {
                var_26 *= ((/* implicit */unsigned int) arr_54 [i_5 + 1] [i_8] [i_8]);
                arr_56 [i_5 + 3] [i_14] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? (arr_39 [i_5 + 1] [i_8] [i_14 + 1] [i_8]) : (arr_39 [i_5 + 3] [i_5 + 3] [i_14 + 1] [i_5])));
                arr_57 [i_14] [i_8] [(unsigned short)5] = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) var_6)) | (var_2))) * (((/* implicit */unsigned int) ((/* implicit */int) var_4)))));
            }
            var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) 18446744073709551609ULL)) ? (var_6) : (((/* implicit */int) var_4))))) | ((~(2064892692U)))))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) arr_33 [i_5 + 2] [i_8]))) : (max((arr_31 [i_5 + 1] [i_8]), (((/* implicit */long long int) arr_36 [i_5] [i_5] [i_8] [i_8]))))))));
        }
        var_28 = ((/* implicit */unsigned short) ((short) var_7));
    }
    for (int i_15 = 3; i_15 < 11; i_15 += 3) 
    {
        arr_60 [7ULL] = ((/* implicit */short) var_0);
        arr_61 [i_15 - 3] = ((/* implicit */long long int) min((var_4), (((/* implicit */short) var_9))));
        arr_62 [i_15] [i_15] = ((/* implicit */unsigned char) ((((0ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)63875)) ? (((var_5) * (((/* implicit */unsigned int) 542159582)))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_32 [i_15 - 3] [i_15 - 2]))))))));
        var_29 = ((/* implicit */short) max((var_29), (((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_52 [0ULL] [i_15 + 1])) ? (arr_52 [(unsigned short)16] [i_15]) : (((/* implicit */int) var_0))))), (arr_2 [i_15 - 1] [i_15]))))));
    }
    var_30 = ((/* implicit */signed char) min((var_30), (((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */unsigned int) ((/* implicit */int) min((var_0), (((/* implicit */unsigned short) var_4)))))) * (((((/* implicit */unsigned int) ((/* implicit */int) var_0))) / (var_5))))) : ((+(1605320672U))))))));
}
