/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65608
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65608 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65608
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
    for (short i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                arr_7 [i_0] [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) max((14782836969086931579ULL), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0]))))))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (long long int i_2 = 1; i_2 < 10; i_2 += 3) 
                {
                    arr_10 [i_0] [2U] [i_2] = ((/* implicit */signed char) ((3663907104622620051ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-2423)))));
                    arr_11 [i_0] [i_1] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_2 - 1] [i_2 + 1] [i_2 + 1])) ? (((long long int) 3663907104622620068ULL)) : (((/* implicit */long long int) ((int) arr_1 [(unsigned char)9] [(unsigned char)9])))));
                }
            }
        } 
    } 
    var_16 = max((var_4), (((/* implicit */signed char) (!(((/* implicit */_Bool) (short)-25026))))));
}
