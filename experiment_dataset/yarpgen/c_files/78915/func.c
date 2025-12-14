/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78915
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78915 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78915
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
    for (unsigned long long int i_0 = 1; i_0 < 19; i_0 += 4) 
    {
        for (signed char i_1 = 2; i_1 < 19; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */unsigned long long int) (-(((((((((/* implicit */int) arr_0 [i_0])) + (2147483647))) << (((var_3) - (14881776092809772673ULL))))) | (((/* implicit */int) arr_5 [i_1 + 2] [i_0 - 1]))))));
                arr_6 [i_0] [i_1] = ((/* implicit */signed char) max((((((((/* implicit */_Bool) arr_3 [i_1] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_10))) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))), (((/* implicit */unsigned long long int) (-(8191))))));
                /* LoopNest 3 */
                for (unsigned short i_2 = 3; i_2 < 18; i_2 += 2) 
                {
                    for (unsigned int i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 20; i_4 += 1) 
                        {
                            {
                                arr_16 [i_0] [(signed char)0] [i_1] [i_2] [i_3] [i_3] [(short)0] |= ((/* implicit */signed char) ((((((((/* implicit */_Bool) var_14)) ? (arr_12 [16ULL]) : (var_7))) - (((/* implicit */unsigned long long int) ((((/* implicit */int) var_13)) + (((/* implicit */int) arr_4 [i_0 + 1]))))))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_10 [i_0 + 1] [i_1] [i_2 + 1] [i_4 + 1])) : (((/* implicit */int) ((short) arr_10 [i_4] [i_3] [i_1] [i_0 + 2]))))))));
                                arr_17 [i_4] [i_3] [i_2] [i_1] [i_0] = ((/* implicit */int) (-(((((/* implicit */_Bool) arr_3 [i_0 - 1] [i_0 - 1])) ? (((((/* implicit */_Bool) var_0)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))) : (((/* implicit */unsigned long long int) ((-8191) - (((/* implicit */int) arr_11 [i_0 - 1] [i_0] [i_0] [i_0])))))))));
                                arr_18 [i_0] [i_1] [i_0] [i_3] [i_4] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_2] [i_2] [i_2] [i_2 + 2])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_10 [i_2] [i_2] [i_2] [i_2 + 3]))))), (((((/* implicit */unsigned long long int) 8191)) - (var_7)))));
                                var_16 = ((/* implicit */signed char) ((((var_14) << (((((/* implicit */int) arr_5 [i_0] [i_0 + 2])) - (216))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) 8191))))));
                            }
                        } 
                    } 
                } 
                var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) ((((/* implicit */int) min((arr_14 [i_0] [i_0] [i_0 - 1] [8ULL] [i_0] [i_1 + 2]), (arr_14 [i_0] [i_1] [(short)8] [i_1 + 1] [i_1 + 2] [i_1 + 1])))) == (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_5 = 2; i_5 < 18; i_5 += 4) 
    {
        for (int i_6 = 3; i_6 < 19; i_6 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_7 = 2; i_7 < 20; i_7 += 2) 
                {
                    for (unsigned char i_8 = 0; i_8 < 21; i_8 += 1) 
                    {
                        {
                            var_18 ^= ((/* implicit */short) max((144044819331678208ULL), (((/* implicit */unsigned long long int) (unsigned char)255))));
                            var_19 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) var_4)) / (((/* implicit */int) var_9)))) >> (((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_14 [i_5] [i_6 - 2] [i_7 + 1] [i_8] [i_8] [i_7])))) + (10176)))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned char i_9 = 3; i_9 < 19; i_9 += 1) 
                {
                    for (signed char i_10 = 0; i_10 < 21; i_10 += 1) 
                    {
                        for (int i_11 = 0; i_11 < 21; i_11 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((/* implicit */int) arr_27 [i_5] [i_6] [10ULL] [i_10])), ((+(((/* implicit */int) var_12)))))))));
                                arr_38 [(short)18] [i_6 - 2] [i_6] [i_11] [i_11] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_4))));
                                var_21 = arr_14 [i_5] [i_6] [i_6] [i_9 - 3] [i_10] [i_11];
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
