/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74493
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74493 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74493
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
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                arr_6 [i_0] = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((int) arr_4 [1ULL] [i_0]))), ((-(arr_4 [14U] [i_0])))));
                var_10 = (+(((((/* implicit */_Bool) arr_0 [i_1])) ? (arr_3 [i_0]) : (arr_3 [i_0]))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 21; i_2 += 2) 
                {
                    for (signed char i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        {
                            arr_12 [5LL] [i_0] [5LL] [i_2] [i_3] [i_3] = ((/* implicit */unsigned int) var_3);
                            var_11 ^= ((/* implicit */unsigned char) min((((((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) / (arr_10 [(unsigned short)20] [(unsigned short)20] [(unsigned short)20] [(unsigned short)20]))) & (((var_9) >> (((var_0) - (374366841U))))))), (((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))) % (var_2)))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned long long int) var_2);
}
