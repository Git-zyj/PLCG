/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76951
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76951 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76951
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
    var_13 = (!(((/* implicit */_Bool) ((((((((/* implicit */int) (short)-28955)) + (2147483647))) << (((var_3) - (1931151505U))))) ^ (((/* implicit */int) ((signed char) var_4)))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 15; i_2 += 1) 
                {
                    for (short i_3 = 1; i_3 < 14; i_3 += 2) 
                    {
                        {
                            var_14 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_8 [i_0] [i_1] [i_2 - 1])) % (((/* implicit */int) arr_4 [i_3 + 1] [i_2 - 2]))))) / ((+(arr_6 [i_0] [i_0] [i_2] [i_0])))));
                            arr_9 [i_0] [i_2 - 1] &= ((short) (+(((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0]))) | (var_2)))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    var_15 = ((/* implicit */long long int) max(((-(arr_13 [i_0] [i_1] [(unsigned char)6] [i_4]))), (((/* implicit */unsigned long long int) ((arr_12 [i_0] [i_1] [i_0]) / (arr_12 [i_4] [i_1] [i_0]))))));
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 16; i_5 += 2) 
                    {
                        for (long long int i_6 = 0; i_6 < 17; i_6 += 4) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned int) ((((min((var_8), (((/* implicit */unsigned long long int) arr_16 [15U] [i_1] [i_4] [i_5] [14U] [i_1])))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_0] [i_5])) ? (((/* implicit */int) (short)28930)) : (((/* implicit */int) (short)28935))))))) == (min((((/* implicit */unsigned long long int) (short)-28941)), (((arr_11 [i_6]) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))))));
                                arr_18 [i_0] [i_0] [i_1] [i_4] [i_1] [i_6] = ((/* implicit */short) ((unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)28949)) ? (((/* implicit */int) (short)-28930)) : (((/* implicit */int) arr_17 [i_0] [i_1] [i_4] [i_1] [i_6] [(unsigned short)9] [14]))))))));
                                var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) ((((/* implicit */int) ((signed char) ((((/* implicit */int) (short)28937)) ^ (((/* implicit */int) (short)28930)))))) << (((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned int) arr_1 [i_1] [i_1])) : (var_0)))) & (min((((/* implicit */unsigned long long int) (short)28933)), (arr_13 [i_0] [i_4] [i_5 - 1] [i_6]))))) - (20479ULL))))))));
                                arr_19 [i_0] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-28937)) ? (arr_1 [i_5 - 1] [i_5 + 1]) : (arr_1 [i_5 - 1] [i_5 - 1])))), (((unsigned long long int) (short)28945))));
                            }
                        } 
                    } 
                }
                arr_20 [10U] [i_0] = ((/* implicit */int) var_0);
            }
        } 
    } 
}
