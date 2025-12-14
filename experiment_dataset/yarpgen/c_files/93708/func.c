/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93708
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93708 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93708
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
    var_12 = ((/* implicit */_Bool) var_4);
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        var_13 = ((/* implicit */unsigned char) max((var_13), (var_3)));
        arr_2 [(short)6] &= ((/* implicit */unsigned int) (-(((/* implicit */int) min((((/* implicit */unsigned short) var_0)), (arr_0 [i_0]))))));
        var_14 = ((/* implicit */signed char) max((min((((/* implicit */unsigned short) arr_1 [i_0])), (arr_0 [i_0]))), (arr_0 [i_0])));
        /* LoopNest 2 */
        for (unsigned char i_1 = 1; i_1 < 10; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 2; i_3 < 10; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 11; i_4 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned int) min(((~(arr_3 [i_4]))), (((((((/* implicit */int) arr_9 [i_0])) | (arr_8 [i_0] [i_1] [i_1] [i_1] [(unsigned char)8] [i_4]))) ^ (((arr_3 [1ULL]) ^ (((/* implicit */int) (_Bool)1))))))));
                                var_16 = ((/* implicit */unsigned char) arr_9 [i_1]);
                                var_17 = min((((/* implicit */int) (_Bool)1)), (((((/* implicit */_Bool) arr_8 [i_3] [i_3 - 2] [1] [1] [i_4] [i_4])) ? (arr_8 [i_3 + 1] [i_3 - 2] [i_3] [i_4] [i_4] [i_4]) : (arr_8 [i_3 - 1] [i_3 + 1] [i_3 + 1] [i_3 - 1] [i_3 - 1] [2ULL]))));
                            }
                        } 
                    } 
                    var_18 |= ((/* implicit */long long int) (short)12631);
                }
            } 
        } 
    }
    var_19 -= ((/* implicit */short) (-(((((unsigned int) var_8)) | (((/* implicit */unsigned int) ((/* implicit */int) min((var_1), (var_4)))))))));
    var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) (_Bool)1))));
}
