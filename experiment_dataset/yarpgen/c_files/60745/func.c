/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60745
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60745 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60745
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
    for (int i_0 = 1; i_0 < 8; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_2 = 3; i_2 < 9; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        for (short i_4 = 0; i_4 < 10; i_4 += 3) 
                        {
                            {
                                arr_12 [2LL] [2LL] [2LL] [i_0] [i_4] = ((/* implicit */signed char) (-(((((/* implicit */int) arr_6 [i_0] [1LL])) + (((/* implicit */int) arr_6 [i_0] [(short)2]))))));
                                var_10 = ((/* implicit */signed char) max((var_10), (((/* implicit */signed char) ((long long int) var_4)))));
                                var_11 = ((/* implicit */int) ((max((arr_3 [i_0] [5] [i_0]), (var_9))) + (((/* implicit */unsigned long long int) ((int) max((((/* implicit */int) arr_6 [i_0] [i_1])), ((-2147483647 - 1))))))));
                                var_12 = ((/* implicit */signed char) ((unsigned short) (-(((((/* implicit */unsigned long long int) 9223372036854775796LL)) + (var_5))))));
                            }
                        } 
                    } 
                } 
                var_13 = ((/* implicit */signed char) min((9223372036854775807LL), (((/* implicit */long long int) (+((+(((/* implicit */int) (signed char)-69)))))))));
                arr_13 [i_0] [i_1] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) ((var_5) | (((/* implicit */unsigned long long int) 1207994295U))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) max((arr_9 [i_1] [i_0] [(_Bool)1]), (((/* implicit */short) var_1)))))))));
                var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) ((((/* implicit */unsigned long long int) arr_10 [i_0] [i_0] [(_Bool)1] [i_1] [i_1])) | (((min((((/* implicit */unsigned long long int) var_0)), (var_7))) & (((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) + (4858783065920319727ULL))))))))));
                var_15 = ((/* implicit */int) min((var_15), ((-(((/* implicit */int) ((unsigned char) var_3)))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_5 = 3; i_5 < 11; i_5 += 1) 
    {
        for (unsigned long long int i_6 = 2; i_6 < 12; i_6 += 2) 
        {
            for (unsigned short i_7 = 2; i_7 < 13; i_7 += 4) 
            {
                {
                    var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) ((long long int) 18198318232694800453ULL)))));
                    var_17 = ((/* implicit */long long int) min((((((/* implicit */int) ((unsigned char) arr_18 [i_6]))) + ((-(((/* implicit */int) var_1)))))), (((((/* implicit */int) arr_16 [i_5 + 1] [i_6 + 1] [i_7 - 2])) + (((/* implicit */int) arr_14 [i_6 - 2] [i_5 + 1]))))));
                }
            } 
        } 
    } 
}
