/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60749
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60749 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60749
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
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 3; i_2 < 20; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 4; i_3 < 21; i_3 += 3) 
                    {
                        {
                            var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) min((var_5), (((/* implicit */unsigned long long int) var_4))))))) : (((9ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_1] [8] [i_0]))))))))));
                            var_15 = var_2;
                            var_16 &= ((/* implicit */int) max((((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_0])) && (((/* implicit */_Bool) var_7))))) - (((/* implicit */int) arr_2 [i_3] [i_2 - 1] [i_2]))))), (((((/* implicit */_Bool) ((int) (unsigned char)202))) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (((long long int) var_3))))));
                        }
                    } 
                } 
                var_17 += ((/* implicit */unsigned short) ((((((/* implicit */_Bool) min(((unsigned char)54), (((/* implicit */unsigned char) (_Bool)1))))) ? (2216615441596416ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1))))) * (((/* implicit */unsigned long long int) var_4))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (int i_4 = 2; i_4 < 14; i_4 += 1) 
    {
        for (unsigned short i_5 = 0; i_5 < 18; i_5 += 1) 
        {
            for (short i_6 = 0; i_6 < 18; i_6 += 1) 
            {
                {
                    arr_19 [i_4] [i_4] = ((/* implicit */unsigned short) ((unsigned long long int) (~(((/* implicit */int) arr_7 [17U] [i_4 - 2] [i_4] [i_6])))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_7 = 0; i_7 < 18; i_7 += 3) 
                    {
                        for (long long int i_8 = 1; i_8 < 17; i_8 += 4) 
                        {
                            {
                                var_18 = ((((/* implicit */_Bool) arr_8 [i_4])) ? ((~(arr_8 [i_6]))) : (((/* implicit */int) arr_4 [i_4] [i_6] [i_4 + 4])));
                                var_19 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) 18444527458267955198ULL)) ? (((((/* implicit */_Bool) 2216615441596436ULL)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (signed char)(-127 - 1))))) : (arr_1 [i_8 - 1]))), ((+(((/* implicit */int) (unsigned short)0))))));
                                arr_27 [i_6] [3LL] [i_6] [i_6] [i_4] = ((/* implicit */_Bool) (short)9690);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_9 = 3; i_9 < 17; i_9 += 3) 
                    {
                        for (int i_10 = 0; i_10 < 18; i_10 += 3) 
                        {
                            {
                                var_20 = ((((/* implicit */_Bool) var_6)) ? ((~(min((var_1), (((/* implicit */int) var_11)))))) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_4 - 1] [i_5]))))))));
                                var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((unsigned int) min((((/* implicit */unsigned long long int) arr_28 [i_9] [i_5] [(_Bool)1] [i_4])), (var_5))))) < (7036104605326306210LL)));
                                var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) ((var_2) <= (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))) : (((/* implicit */int) var_12))))) ? (((/* implicit */int) var_7)) : (((((/* implicit */int) arr_20 [i_4 - 1] [i_4 - 1] [i_6] [i_9] [i_9 + 1] [i_4 - 1])) / (((/* implicit */int) arr_20 [i_4 - 2] [i_6] [(short)11] [(_Bool)1] [i_9 - 2] [(unsigned short)9])))))))));
                                var_23 = ((((/* implicit */_Bool) max((arr_9 [i_4 + 3]), (arr_9 [i_4 - 1])))) ? (((((/* implicit */int) arr_20 [i_9 + 1] [i_6] [i_9 + 1] [(signed char)1] [0] [i_9 + 1])) * (((/* implicit */int) arr_20 [i_9 - 2] [13U] [i_6] [i_9 - 3] [i_10] [i_9 - 2])))) : (arr_8 [i_6]));
                                var_24 = ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */int) arr_3 [i_6])) != (((/* implicit */int) arr_3 [i_6])))));
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */unsigned int) max((var_25), (1614889731U)));
                }
            } 
        } 
    } 
}
