/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90077
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90077 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90077
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
    var_17 ^= ((/* implicit */short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)49322)) ? (2340437771U) : (2475661790U)))) ? (var_1) : (2340437771U))), (((/* implicit */unsigned int) min((((/* implicit */int) var_10)), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_11)))))))));
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_7) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_8)))) ? (min((((/* implicit */long long int) var_6)), (var_14))) : (((/* implicit */long long int) ((/* implicit */int) max((var_9), (((/* implicit */unsigned short) var_12))))))))) ? (((((/* implicit */_Bool) min((((/* implicit */long long int) var_3)), (var_14)))) ? (((/* implicit */int) max((((/* implicit */signed char) var_3)), (var_2)))) : (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_0)))))) : (((/* implicit */int) max((var_0), (((/* implicit */unsigned short) max((var_12), (((/* implicit */unsigned char) var_15))))))))));
    var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) ((((_Bool) ((short) var_9))) ? (((((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_14))) & (((/* implicit */long long int) max((((/* implicit */unsigned int) var_12)), (var_8)))))) : (((/* implicit */long long int) ((var_3) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (var_1))) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) var_11)), (var_6)))))))))))));
    /* LoopSeq 4 */
    for (unsigned char i_0 = 1; i_0 < 17; i_0 += 1) 
    {
        var_20 += ((/* implicit */short) arr_1 [18LL]);
        var_21 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) 1954529525U)) ? (((/* implicit */int) (unsigned char)219)) : (((/* implicit */int) (_Bool)1))));
        var_22 = ((unsigned short) ((unsigned long long int) (-(((/* implicit */int) (unsigned char)36)))));
        var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) var_7))));
    }
    for (long long int i_1 = 0; i_1 < 21; i_1 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_2 = 0; i_2 < 21; i_2 += 3) 
        {
            var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) var_0))));
            arr_8 [i_2] = ((/* implicit */unsigned short) var_2);
        }
        /* LoopNest 2 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (short i_4 = 0; i_4 < 21; i_4 += 1) 
            {
                {
                    arr_13 [i_1] [i_3] [i_4] = ((/* implicit */_Bool) ((long long int) arr_12 [i_3] [i_3] [i_3] [(_Bool)1]));
                    var_25 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_7 [i_1]), (var_0)))) ? (min((((/* implicit */unsigned long long int) arr_12 [14U] [i_1] [i_3] [i_4])), (arr_9 [(_Bool)1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_12)), (var_9)))) ? (((unsigned long long int) var_3)) : (((/* implicit */unsigned long long int) var_8)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_1)), (arr_9 [(short)6])))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_11 [i_1] [i_1] [(unsigned char)16] [i_4]))) / (var_14))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_4])) ? (((/* implicit */int) (short)-14410)) : (((/* implicit */int) (unsigned char)220))))))))));
                }
            } 
        } 
        arr_14 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_9))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_1]))) - (arr_6 [i_1] [i_1] [i_1]))) : (min((arr_4 [i_1]), (((/* implicit */unsigned int) var_4)))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [(_Bool)1])) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) arr_3 [i_1]))))) ? (((/* implicit */int) var_16)) : (((/* implicit */int) arr_3 [i_1])))))));
    }
    /* vectorizable */
    for (int i_5 = 1; i_5 < 20; i_5 += 2) /* same iter space */
    {
        /* LoopNest 3 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            for (unsigned int i_7 = 0; i_7 < 21; i_7 += 3) 
            {
                for (unsigned short i_8 = 0; i_8 < 21; i_8 += 1) 
                {
                    {
                        var_26 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_5] [i_6] [i_7] [i_8])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_5 - 1] [i_5 - 1] [i_6]))) : (arr_19 [i_6])))) ? (((/* implicit */unsigned int) ((arr_17 [i_5] [i_7] [i_8]) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_13))))) : (((((/* implicit */_Bool) arr_7 [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_6]))) : (arr_19 [i_6])))));
                        var_27 = ((/* implicit */unsigned char) min((var_27), (arr_18 [(_Bool)1] [i_7])));
                        arr_25 [i_5] [i_6] [i_6] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_11 [i_5] [i_6] [i_7] [i_8])) : (((/* implicit */int) arr_23 [i_5] [i_5] [i_7] [i_7] [i_8] [i_8]))))) ? (((((/* implicit */_Bool) arr_6 [i_6] [i_7] [i_8])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_6]))) : (arr_4 [i_6]))) : (var_8)));
                    }
                } 
            } 
        } 
        var_28 = ((/* implicit */_Bool) max((var_28), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (arr_12 [0LL] [i_5] [(unsigned char)2] [i_5 + 1]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_12 [(_Bool)1] [i_5] [i_5] [i_5 - 1])) ? (((/* implicit */int) arr_5 [i_5])) : (((/* implicit */int) var_16))))))))));
        arr_26 [i_5] [i_5] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_23 [i_5] [i_5 + 1] [i_5] [i_5] [i_5] [i_5]))));
        arr_27 [i_5] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)58161)) ? (1819305495U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0)))));
    }
    for (int i_9 = 1; i_9 < 20; i_9 += 2) /* same iter space */
    {
        var_29 = ((/* implicit */unsigned short) ((long long int) ((arr_17 [i_9] [i_9] [5ULL]) ? (((/* implicit */int) min((arr_7 [i_9 - 1]), (((/* implicit */unsigned short) arr_17 [i_9 - 1] [i_9 - 1] [i_9]))))) : (((/* implicit */int) arr_7 [i_9])))));
        var_30 = ((/* implicit */long long int) arr_20 [i_9 - 1] [i_9 + 1] [i_9]);
        var_31 = ((/* implicit */short) ((arr_28 [i_9]) ? (((/* implicit */unsigned int) (+(((/* implicit */int) arr_20 [i_9] [i_9 + 1] [i_9]))))) : (((((/* implicit */_Bool) ((((/* implicit */int) arr_18 [(unsigned char)6] [i_9])) >> (((arr_6 [i_9] [i_9 - 1] [19U]) - (1403941517U)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_12 [(unsigned char)12] [i_9] [(_Bool)1] [i_9 - 1])))) : (var_5)))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            arr_33 [i_10] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */int) arr_18 [i_10] [i_10])) - (((/* implicit */int) arr_31 [i_9] [i_10])))) : (((arr_29 [i_10]) ? (((/* implicit */int) arr_30 [i_9] [i_10])) : (((/* implicit */int) var_15))))));
            var_32 = ((/* implicit */unsigned short) max((var_32), (((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) arr_32 [(unsigned short)12] [(unsigned short)6]))))))))));
        }
        /* LoopSeq 1 */
        for (unsigned short i_11 = 3; i_11 < 19; i_11 += 3) 
        {
            /* LoopSeq 1 */
            for (signed char i_12 = 0; i_12 < 21; i_12 += 3) 
            {
                arr_40 [i_12] = ((/* implicit */unsigned long long int) var_16);
                var_33 -= min((((/* implicit */unsigned long long int) max(((-(((/* implicit */int) var_4)))), (((/* implicit */int) min((arr_15 [i_11]), (((/* implicit */short) arr_23 [i_9] [i_9] [i_11] [(unsigned char)18] [i_12] [i_12])))))))), (((unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_12]))) == (arr_38 [i_9 + 1] [i_11] [2ULL])))));
                var_34 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) max((max((((/* implicit */long long int) arr_39 [i_9] [i_12])), (var_14))), (((/* implicit */long long int) ((short) var_5)))))), (((((/* implicit */unsigned long long int) ((arr_19 [i_12]) - (((/* implicit */unsigned int) arr_39 [i_9 - 1] [i_12]))))) - (((var_15) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_9] [i_11 - 3] [i_12]))) : (arr_9 [i_12])))))));
            }
            var_35 = ((/* implicit */unsigned long long int) max((var_35), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */int) min((arr_5 [i_9]), (arr_23 [i_9 + 1] [i_9] [i_11] [i_11] [i_11] [i_11])))), ((-(((/* implicit */int) arr_20 [i_9 - 1] [i_11] [i_11]))))))) ? (arr_19 [(short)20]) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (arr_19 [(signed char)16]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_9] [i_11 - 2] [i_11])))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_7 [i_9]))))) : (((((/* implicit */_Bool) arr_30 [i_9] [i_11])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_8))))))))));
            arr_41 [i_9] [(_Bool)1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) arr_15 [i_9])) ? (arr_38 [i_9] [i_9] [(unsigned char)2]) : (((/* implicit */unsigned long long int) arr_16 [i_9] [i_11 - 2])))) : (((/* implicit */unsigned long long int) var_1))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_9 - 1] [0LL] [(unsigned short)2])) ? (((/* implicit */int) arr_11 [i_9] [i_11 + 1] [i_11 + 2] [i_11])) : (((/* implicit */int) arr_5 [i_9]))))) ? (min((((/* implicit */unsigned int) arr_30 [i_9] [i_11])), (arr_37 [i_9] [(_Bool)1] [i_11 + 2] [i_11 + 1]))) : (max((arr_4 [(short)4]), (((/* implicit */unsigned int) arr_31 [i_9] [i_11])))))) : (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [(_Bool)1])) ? (((/* implicit */int) arr_15 [i_9 - 1])) : (((/* implicit */int) arr_23 [i_9 - 1] [i_9] [i_9] [i_11] [i_11] [i_11 - 2]))))), (arr_19 [2ULL])))));
        }
    }
}
