/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82724
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82724 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82724
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
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (int i_2 = 2; i_2 < 10; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 11; i_4 += 4) 
                        {
                            {
                                arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) var_2);
                                arr_13 [i_0 - 1] [i_0] [i_0] [i_0] [i_0 + 1] [i_0 - 1] [i_0 - 1] = ((/* implicit */signed char) ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3076146867U)) ? (17973788291089952114ULL) : (((/* implicit */unsigned long long int) -1LL))))) ? (((/* implicit */int) (signed char)127)) : (((((/* implicit */_Bool) (signed char)-127)) ? (-2147483621) : (((/* implicit */int) (unsigned char)21)))))));
                                var_19 = ((/* implicit */int) -1725173737246953160LL);
                                var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) (+(((arr_9 [i_0] [i_0 + 1] [i_0 + 1] [i_0 - 1]) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_1))) + (var_17))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)16))))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 11; i_6 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) 2099850315U)) ? (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) ^ (var_17))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)15)))));
                                var_22 = ((/* implicit */signed char) ((unsigned char) arr_15 [i_0] [i_0] [i_0] [i_0] [i_0]));
                                arr_19 [i_0] [i_2 - 1] = ((/* implicit */unsigned long long int) var_14);
                                var_23 = ((/* implicit */int) max((var_23), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)15)) ? ((+(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (!(((/* implicit */_Bool) 17973788291089952114ULL)))))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) max(((signed char)127), ((signed char)127))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_7 = 1; i_7 < 13; i_7 += 4) 
    {
        for (unsigned char i_8 = 0; i_8 < 14; i_8 += 4) 
        {
            for (unsigned int i_9 = 3; i_9 < 12; i_9 += 4) 
            {
                {
                    arr_30 [i_9] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_16))) : (arr_23 [i_8] [i_8] [i_8])))) ? ((+(6687725932004497438LL))) : (((/* implicit */long long int) arr_28 [i_7] [i_7] [i_7 - 1] [i_7])))) / (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) + (((/* implicit */int) var_0))))) ? (((int) var_11)) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)59)) == (((/* implicit */int) var_8))))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_10 = 1; i_10 < 13; i_10 += 1) 
                    {
                        for (unsigned int i_11 = 2; i_11 < 11; i_11 += 2) 
                        {
                            {
                                var_24 += ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_12))))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_1)))) : ((-(((/* implicit */int) (short)-32764)))))) == (((((/* implicit */int) min((var_5), (((/* implicit */unsigned char) arr_24 [i_7 + 1] [i_7 + 1]))))) >> ((((-(1218820429U))) - (3076146838U)))))));
                                var_25 ^= ((/* implicit */_Bool) arr_20 [i_7] [i_7]);
                                arr_35 [i_9] = ((/* implicit */_Bool) max((((/* implicit */unsigned short) (unsigned char)0)), (max((((unsigned short) var_17)), (((/* implicit */unsigned short) max(((_Bool)0), (var_8))))))));
                                var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) arr_31 [i_11 - 2] [i_11] [i_11] [i_11]))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_12 = 2; i_12 < 10; i_12 += 4) 
                    {
                        for (unsigned char i_13 = 0; i_13 < 14; i_13 += 4) 
                        {
                            {
                                var_27 *= (-(4035225266123964416ULL));
                                var_28 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)66)) ? (((((/* implicit */int) var_9)) ^ (((/* implicit */int) var_18)))) : (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (signed char)126))))))) > (3076146874U)));
                                arr_43 [i_7 + 1] [i_7 + 1] [i_9] [i_7 - 1] [i_7] [i_7] = ((/* implicit */unsigned int) max(((-(((((/* implicit */_Bool) arr_28 [i_7] [i_7] [i_7] [i_7])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_15))))), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) var_7)) : (4270889443U))) + (((/* implicit */unsigned int) ((/* implicit */int) var_18))))))));
                            }
                        } 
                    } 
                    var_29 = ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))) * (((long long int) ((((/* implicit */int) (signed char)22)) * (((/* implicit */int) var_0))))));
                }
            } 
        } 
    } 
}
