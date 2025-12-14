/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70343
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70343 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70343
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
    var_10 = ((/* implicit */unsigned long long int) var_8);
    var_11 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) (short)(-32767 - 1))), (((var_9) * (((/* implicit */unsigned int) ((/* implicit */int) (short)32737)))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (signed char i_2 = 1; i_2 < 22; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 1; i_3 < 22; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 21; i_4 += 4) 
                        {
                            {
                                var_12 &= ((/* implicit */unsigned int) (~(((long long int) var_2))));
                                var_13 = ((/* implicit */short) ((((13612110057891253856ULL) ^ (((/* implicit */unsigned long long int) 1141851550U)))) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */int) (short)-32757)) ^ (((/* implicit */int) (_Bool)0)))) == (((((/* implicit */_Bool) 2305843009213693951ULL)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) arr_4 [i_0]))))))))));
                            }
                        } 
                    } 
                    arr_14 [i_2] [i_0] = ((/* implicit */_Bool) max((((unsigned int) (unsigned char)2)), (((arr_8 [i_2]) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_2])))))));
                    arr_15 [i_2 + 1] [i_2] [i_2] [i_0] = ((/* implicit */signed char) arr_11 [i_0]);
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 2; i_5 < 22; i_5 += 2) 
                    {
                        for (signed char i_6 = 2; i_6 < 22; i_6 += 2) 
                        {
                            {
                                arr_21 [i_6] [i_5 - 2] [i_2] [(short)0] [i_2] [(_Bool)1] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_11 [i_6 - 2])))) ? (max((arr_11 [i_6 - 2]), (arr_11 [i_6 - 2]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_11 [i_6 + 1])))));
                                arr_22 [i_2] [(short)16] [i_0] [i_2] = (i_2 % 2 == 0) ? (((/* implicit */short) min((((2U) >> (((((/* implicit */int) arr_17 [i_2 + 1] [i_5 - 1] [i_2 + 1] [i_2] [i_6 - 1] [i_6 + 1])) - (31823))))), (((/* implicit */unsigned int) max(((unsigned char)109), (((/* implicit */unsigned char) (signed char)120)))))))) : (((/* implicit */short) min((((2U) >> (((((((/* implicit */int) arr_17 [i_2 + 1] [i_5 - 1] [i_2 + 1] [i_2] [i_6 - 1] [i_6 + 1])) - (31823))) + (25527))))), (((/* implicit */unsigned int) max(((unsigned char)109), (((/* implicit */unsigned char) (signed char)120))))))));
                                var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-57)) ? (((/* implicit */int) (unsigned char)68)) : (((/* implicit */int) (signed char)99))));
                                var_15 = ((((/* implicit */_Bool) arr_9 [i_5 - 2] [i_2] [i_2] [i_0])) ? (((((/* implicit */_Bool) arr_3 [i_2 - 1])) ? (arr_3 [i_2 + 1]) : (var_8))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_19 [(unsigned char)1] [i_5] [i_2 + 1] [i_2 + 1] [i_1] [i_0] [i_0])) <= (((/* implicit */int) var_7)))))));
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) 16ULL)) ? (-8151875658248350036LL) : (((/* implicit */long long int) ((/* implicit */int) (short)32756)))));
                }
            } 
        } 
    } 
}
