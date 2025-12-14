/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99186
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99186 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99186
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
    var_14 -= ((/* implicit */long long int) min((((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)87)) ? (var_11) : (var_8)))) < (((unsigned long long int) var_3))))), (var_3)));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 18; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 21; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        {
                            var_15 = ((long long int) ((arr_8 [i_0] [i_0 + 2] [i_0]) * (arr_8 [i_0] [i_0 + 1] [3LL])));
                            var_16 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_3 [i_0 + 1]))));
                        }
                    } 
                } 
                var_17 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_10 [(unsigned short)8] [i_0 - 1] [i_0 + 3])) ? (arr_9 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))), (((((/* implicit */_Bool) arr_7 [i_0 + 2] [(unsigned char)3])) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0 + 1] [i_1]))) : (arr_9 [i_1])))));
            }
        } 
    } 
}
