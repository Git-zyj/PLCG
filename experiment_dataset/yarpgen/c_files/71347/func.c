/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71347
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71347 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71347
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
    for (int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 2; i_2 < 6; i_2 += 2) 
                {
                    for (unsigned short i_3 = 1; i_3 < 7; i_3 += 4) 
                    {
                        {
                            var_13 *= ((/* implicit */_Bool) (+(((/* implicit */int) (signed char)17))));
                            arr_11 [(short)2] = ((/* implicit */signed char) ((unsigned long long int) min((max((((/* implicit */unsigned long long int) var_0)), (var_5))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_4 [i_0])), (593921710U)))))));
                        }
                    } 
                } 
                var_14 ^= arr_1 [(unsigned char)5];
            }
        } 
    } 
    var_15 = ((/* implicit */_Bool) (-(((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) -186310194)))) / (var_2)))));
}
