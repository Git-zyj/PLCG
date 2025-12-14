/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80964
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80964 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80964
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
    var_15 = ((/* implicit */unsigned long long int) var_3);
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 8; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (short i_2 = 3; i_2 < 10; i_2 += 3) 
            {
                {
                    arr_9 [(unsigned char)10] [i_1] [(short)0] = ((/* implicit */short) ((((((/* implicit */_Bool) var_5)) ? (min((((/* implicit */long long int) arr_2 [(short)5])), (var_3))) : (((/* implicit */long long int) ((((/* implicit */int) arr_2 [(signed char)2])) * (((/* implicit */int) var_13))))))) >= (((/* implicit */long long int) min((((3663184013U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (short)-15343))))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_8 [6U] [i_1] [i_0])) | (((/* implicit */int) var_0))))))))));
                    var_16 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_8 [i_0 + 1] [i_2 - 3] [i_2]))));
                    arr_10 [i_0] [i_1] = ((/* implicit */unsigned int) max((((arr_4 [i_0 + 2] [(unsigned char)8] [i_0 - 1]) & (arr_4 [i_0 - 1] [i_0] [i_0 - 1]))), (((/* implicit */long long int) ((((/* implicit */_Bool) 631783282U)) ? (2147483631) : (((/* implicit */int) (signed char)-35)))))));
                }
            } 
        } 
    } 
}
