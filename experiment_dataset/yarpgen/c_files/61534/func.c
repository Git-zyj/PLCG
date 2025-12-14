/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61534
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61534 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61534
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
    for (signed char i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 1) 
                {
                    for (long long int i_3 = 3; i_3 < 10; i_3 += 1) 
                    {
                        {
                            var_20 |= ((/* implicit */_Bool) (((~(((((/* implicit */unsigned long long int) var_3)) * (var_10))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))));
                            var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) min((arr_6 [i_1] [i_2] [i_3]), (arr_6 [i_3 - 2] [i_3 + 1] [i_3 + 1]))))));
                        }
                    } 
                } 
                var_22 = ((/* implicit */unsigned long long int) 0U);
                /* LoopNest 3 */
                for (short i_4 = 2; i_4 < 13; i_4 += 2) 
                {
                    for (short i_5 = 2; i_5 < 13; i_5 += 4) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 14; i_6 += 4) 
                        {
                            {
                                arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) min(((((~(((/* implicit */int) arr_12 [i_0] [i_0] [i_0])))) | (((var_3) | (((/* implicit */int) arr_2 [i_0] [i_0])))))), ((~((~(((/* implicit */int) (short)32767))))))));
                                var_23 = min((min((min((((/* implicit */unsigned long long int) var_11)), (arr_15 [i_1] [i_4 - 2] [i_4 - 2] [13ULL]))), (((/* implicit */unsigned long long int) max((var_9), (((/* implicit */unsigned int) var_3))))))), (((/* implicit */unsigned long long int) ((arr_13 [i_4 - 1] [i_4] [i_5 + 1] [i_5 + 1]) == (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))));
                            }
                        } 
                    } 
                } 
                var_24 = ((/* implicit */short) (((+(((((/* implicit */int) (unsigned char)181)) + (((/* implicit */int) arr_2 [i_1] [i_0])))))) / (((/* implicit */int) var_1))));
                arr_21 [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) (~(((/* implicit */int) (short)32759))))) % (((((/* implicit */_Bool) var_19)) ? (max((((/* implicit */unsigned int) arr_2 [i_0] [i_1])), (arr_17 [i_0] [i_0] [i_1] [i_0] [i_1]))) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))));
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned char) ((var_2) ? (((((/* implicit */_Bool) max((var_10), (((/* implicit */unsigned long long int) (short)-32764))))) ? (((/* implicit */int) min((var_17), (((/* implicit */short) var_13))))) : (((/* implicit */int) min((((/* implicit */signed char) var_7)), (var_16)))))) : (((/* implicit */int) (unsigned short)0))));
}
