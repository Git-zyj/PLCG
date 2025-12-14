/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 578
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=578 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/578
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
    for (signed char i_0 = 2; i_0 < 22; i_0 += 4) 
    {
        var_12 *= ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_6)), (1425666929280016959ULL)))) ? (arr_3 [i_0 - 1] [i_0 - 1]) : (arr_3 [i_0 - 1] [i_0 - 2])));
        /* LoopNest 3 */
        for (short i_1 = 1; i_1 < 21; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                for (unsigned int i_3 = 0; i_3 < 23; i_3 += 1) 
                {
                    {
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (signed char i_4 = 0; i_4 < 23; i_4 += 3) 
                        {
                            var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) var_7))));
                            arr_13 [i_0 - 1] [i_0] [i_1] [i_0 + 1] [i_0 + 1] = ((/* implicit */long long int) ((arr_10 [i_1]) > (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0] [i_1]))) : (var_7))))));
                            var_14 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) var_1))) ? (((var_0) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_2] [(short)2]))))) : (var_10)));
                        }
                        for (unsigned int i_5 = 0; i_5 < 23; i_5 += 3) /* same iter space */
                        {
                            var_15 += ((/* implicit */signed char) max((((/* implicit */long long int) max(((-(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (unsigned short)50595))))), (max((-632321576719954734LL), (-632321576719954734LL)))));
                            arr_18 [i_0 - 2] [i_1] [i_2] [i_1] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_11) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (max((var_2), (((/* implicit */long long int) var_6))))))) ? (((/* implicit */unsigned long long int) var_2)) : (((((/* implicit */_Bool) (unsigned short)14940)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) 262140U))))));
                            arr_19 [i_0 - 1] [i_1] [i_1] [i_0 - 1] [i_1] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) ((_Bool) var_10)))))) ? (arr_5 [i_1]) : (((/* implicit */unsigned long long int) ((((((/* implicit */int) (unsigned short)50611)) + (((/* implicit */int) (unsigned short)0)))) - (2147483647))))));
                            var_16 |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */int) var_6)) == (arr_2 [i_3]))) ? (var_8) : (((/* implicit */unsigned long long int) arr_12 [i_0] [18] [i_1 + 2] [i_0 + 1] [i_1 + 2]))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) * (arr_5 [i_2]))) : (((/* implicit */unsigned long long int) ((long long int) var_5)))));
                            arr_20 [i_0] [i_0] [i_1] [i_0 - 1] = ((/* implicit */unsigned long long int) max((max((((((/* implicit */_Bool) (unsigned short)57393)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)14941))))), (((/* implicit */long long int) var_7)))), (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) (unsigned char)108)) : (((/* implicit */int) (unsigned char)114)))))));
                        }
                        for (unsigned int i_6 = 0; i_6 < 23; i_6 += 3) /* same iter space */
                        {
                            var_17 = ((/* implicit */_Bool) arr_2 [i_0]);
                            var_18 *= ((/* implicit */unsigned char) var_8);
                        }
                        for (unsigned int i_7 = 0; i_7 < 23; i_7 += 3) /* same iter space */
                        {
                            var_19 ^= ((((/* implicit */_Bool) max((((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) ^ (var_0))), (((/* implicit */unsigned long long int) arr_4 [i_0]))))) ? (((/* implicit */unsigned long long int) max(((-(((/* implicit */int) (signed char)127)))), (((/* implicit */int) arr_21 [i_1 + 1] [i_1] [i_1 + 2] [i_1 - 1] [i_0 - 1]))))) : (min((((/* implicit */unsigned long long int) var_1)), (((((/* implicit */_Bool) (short)-14)) ? (arr_23 [i_0] [i_1] [10LL] [i_3] [(signed char)8] [i_7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_0] [i_1] [i_2]))))))));
                            var_20 |= ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) arr_6 [i_2] [i_2])) == (((/* implicit */int) (unsigned short)13501))))) == (((((/* implicit */int) var_3)) * (((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))));
                        }
                        var_21 = ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)50606))));
                        var_22 += ((((/* implicit */_Bool) (((+(var_9))) & (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)8139)) % (((/* implicit */int) (unsigned char)252)))))))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) arr_23 [i_2] [i_2] [i_1] [i_1 - 1] [i_0] [i_0])))))) : (arr_23 [i_0] [i_1] [i_0 - 2] [i_0 - 2] [i_0] [i_2]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((var_10), (18446744073709551612ULL)))))))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
    {
        var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) (-(((var_7) & (((/* implicit */unsigned int) arr_27 [i_8])))))))));
        arr_28 [i_8] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((5511661067997040615LL) & (((/* implicit */long long int) 1517835997)))) : (((/* implicit */long long int) ((/* implicit */int) (!(var_3)))))));
        /* LoopNest 2 */
        for (signed char i_9 = 1; i_9 < 13; i_9 += 4) 
        {
            for (unsigned long long int i_10 = 0; i_10 < 16; i_10 += 1) 
            {
                {
                    var_24 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) var_8)))) ? (-1517835997) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned short)53760)) : (((/* implicit */int) arr_9 [i_8] [(signed char)13] [i_8] [i_8]))))));
                    arr_33 [4LL] [i_9] [i_9] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_1)))) ? (((/* implicit */int) arr_11 [i_8 + 1] [i_9])) : (((/* implicit */int) arr_16 [i_8 + 1] [i_8 + 1] [i_9]))));
                    var_25 = ((/* implicit */short) ((((/* implicit */_Bool) arr_21 [i_10] [i_9 + 3] [i_9 + 3] [i_8 + 1] [i_8])) ? (arr_8 [i_8] [i_8 + 1] [i_9] [i_9 + 3]) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (long long int i_11 = 1; i_11 < 13; i_11 += 1) 
        {
            for (unsigned int i_12 = 0; i_12 < 16; i_12 += 2) 
            {
                {
                    var_26 = ((/* implicit */unsigned char) (-(((((/* implicit */long long int) ((/* implicit */int) var_1))) & (var_9)))));
                    var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_11 [i_11] [i_11])) ? (((/* implicit */long long int) ((/* implicit */int) arr_29 [i_11 - 1] [i_8 + 1]))) : (var_9)));
                    var_28 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 842966703943962281LL)) ? (((/* implicit */int) (unsigned short)14598)) : (((/* implicit */int) (unsigned char)4))));
                    var_29 = ((/* implicit */signed char) (-(((/* implicit */int) arr_17 [i_11] [i_8 + 1] [i_8] [2ULL] [i_8] [i_11]))));
                }
            } 
        } 
    }
    var_30 = ((/* implicit */int) var_5);
}
