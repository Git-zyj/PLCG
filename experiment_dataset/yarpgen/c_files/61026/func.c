/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61026
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
    for (signed char i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    arr_7 [7ULL] [3ULL] [i_1] [3ULL] = ((/* implicit */unsigned short) (unsigned char)93);
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        var_11 -= arr_9 [i_0];
                        arr_10 [i_0] [i_1] [(unsigned char)12] [i_0] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) -4565815979218426443LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1]))) : (18446744073709551615ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [i_3])) | (((/* implicit */int) var_6)))))));
                        var_12 = ((/* implicit */unsigned char) arr_4 [(unsigned short)11]);
                        var_13 = ((/* implicit */signed char) max((((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned short)7962)) : (((/* implicit */int) arr_5 [(short)13] [(short)13] [i_0])))))), (((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) arr_8 [i_3] [i_1] [i_0])) : (((/* implicit */int) arr_8 [i_2] [i_2] [i_1]))))));
                    }
                    var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) min(((short)-19318), (((/* implicit */short) (_Bool)1)))))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */short) ((((/* implicit */int) var_0)) - ((+(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_6))))))));
    var_16 = ((/* implicit */unsigned short) var_3);
}
