/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9477
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9477 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9477
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
    var_17 = ((/* implicit */unsigned long long int) var_10);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)3))) / (arr_1 [4])))) * ((+(max((((/* implicit */long long int) 2097151U)), (1994093904869424817LL))))))))));
                var_19 = ((/* implicit */unsigned char) min((((((/* implicit */unsigned int) arr_3 [i_1] [i_0])) < (var_16))), (((var_3) == (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (long long int i_2 = 0; i_2 < 10; i_2 += 2) 
    {
        var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((int) max((((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))))), (min((((/* implicit */unsigned long long int) arr_9 [i_2] [i_2])), (var_11)))))))));
        /* LoopNest 2 */
        for (unsigned char i_3 = 0; i_3 < 10; i_3 += 2) 
        {
            for (unsigned char i_4 = 2; i_4 < 6; i_4 += 4) 
            {
                {
                    arr_17 [i_3] [i_3] [i_4] [i_3] = ((/* implicit */unsigned int) (-(max((((/* implicit */unsigned long long int) var_13)), (arr_12 [i_4 + 2] [i_4 - 1])))));
                    /* LoopSeq 1 */
                    for (unsigned int i_5 = 0; i_5 < 10; i_5 += 2) 
                    {
                        var_21 = ((/* implicit */int) var_1);
                        arr_20 [i_2] [i_3] [i_4] [i_5] = ((/* implicit */int) ((((/* implicit */_Bool) 12491229797889849985ULL)) || (((/* implicit */_Bool) (unsigned char)117))));
                    }
                }
            } 
        } 
    }
}
