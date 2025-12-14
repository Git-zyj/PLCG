/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 752
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=752 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/752
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
    var_16 = ((/* implicit */long long int) ((max(((-(((/* implicit */int) var_5)))), (min((15), (((/* implicit */int) (unsigned short)25060)))))) % ((((_Bool)0) ? (-1449608479) : (((/* implicit */int) (short)-32190))))));
    var_17 &= ((/* implicit */unsigned int) var_8);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 20; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        {
                            var_18 = ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (-(arr_1 [i_1])))), (((arr_2 [i_0]) ^ (var_12)))))) ? ((-(((/* implicit */int) arr_0 [i_0] [i_1])))) : (((/* implicit */int) arr_8 [i_2])));
                            var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) arr_5 [i_0] [i_1] [i_1]))));
                        }
                    } 
                } 
                var_20 = ((short) max((max((((/* implicit */long long int) arr_8 [i_0])), (arr_9 [i_0] [i_1] [i_0]))), (((/* implicit */long long int) arr_8 [i_0]))));
                /* LoopNest 3 */
                for (short i_4 = 0; i_4 < 20; i_4 += 4) 
                {
                    for (short i_5 = 0; i_5 < 20; i_5 += 3) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 20; i_6 += 3) 
                        {
                            {
                                var_21 = ((/* implicit */int) (~(((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)27121)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (short)-32754)))))) : (((unsigned long long int) arr_13 [i_6] [i_5] [2LL] [(signed char)10]))))));
                                var_22 ^= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (~((+(((/* implicit */int) var_1))))))) < (max((((unsigned long long int) var_0)), (((/* implicit */unsigned long long int) ((-1164582436) ^ (((/* implicit */int) var_15)))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_7 = 1; i_7 < 20; i_7 += 3) 
    {
        for (unsigned int i_8 = 0; i_8 < 22; i_8 += 1) 
        {
            {
                arr_23 [i_7] [i_8] &= ((/* implicit */signed char) max((9223372036854775807LL), (((/* implicit */long long int) 2147483643))));
                /* LoopNest 3 */
                for (unsigned short i_9 = 0; i_9 < 22; i_9 += 2) 
                {
                    for (unsigned long long int i_10 = 0; i_10 < 22; i_10 += 1) 
                    {
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            {
                                var_23 &= ((/* implicit */signed char) (-(((/* implicit */int) arr_29 [i_7 + 1] [i_7 + 1] [i_7 + 1] [i_7 + 1] [i_7 - 1]))));
                                arr_30 [i_7] = arr_22 [i_9] [i_10] [i_11];
                                var_24 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) arr_27 [i_8] [i_8] [i_10] [i_11])) : (arr_25 [i_9] [i_11])))) ? (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (signed char)60)) : (((/* implicit */int) var_14))))) : (arr_20 [i_7 + 1])))), (min((((/* implicit */unsigned long long int) max((-7842824973668901749LL), (((/* implicit */long long int) (_Bool)0))))), ((~(arr_18 [i_8] [i_10])))))));
                                var_25 = ((/* implicit */long long int) (~(arr_25 [i_8] [i_9])));
                                arr_31 [i_7] [i_10] [i_11] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(1786433284)))) ? (((/* implicit */int) arr_29 [i_7 - 1] [i_7] [i_7] [i_7 - 1] [i_7])) : ((+(((/* implicit */int) (unsigned char)30))))));
                            }
                        } 
                    } 
                } 
                var_26 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_8] [i_7 - 1])) ? (arr_27 [i_7 + 1] [i_7 + 1] [i_8] [i_8]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [17ULL] [(unsigned short)13])))))) ? (arr_18 [i_7 + 2] [i_7 + 2]) : (((((/* implicit */_Bool) arr_18 [i_7 + 1] [i_7 + 1])) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))))) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))) ? (arr_24 [(unsigned short)6] [i_8] [i_8] [i_8]) : ((+(((/* implicit */int) arr_29 [i_7 + 1] [i_7 - 1] [i_7] [i_7 - 1] [(signed char)16])))))))));
                var_27 += ((/* implicit */unsigned long long int) arr_21 [i_7 + 1] [i_8]);
                var_28 = ((/* implicit */int) max((var_28), ((((-(((/* implicit */int) arr_29 [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_7 + 2] [i_7 + 1])))) + (((/* implicit */int) max((arr_29 [i_7] [i_7 + 2] [i_7 + 2] [i_7 + 1] [i_7 + 2]), (arr_29 [i_7] [i_7] [i_7 + 2] [i_7 + 1] [i_7 - 1]))))))));
            }
        } 
    } 
}
