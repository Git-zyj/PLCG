/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69425
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69425 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69425
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
    var_16 ^= ((/* implicit */unsigned long long int) var_15);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 4; i_1 < 12; i_1 += 3) 
        {
            {
                /* LoopSeq 2 */
                for (int i_2 = 0; i_2 < 14; i_2 += 4) /* same iter space */
                {
                    var_17 -= ((/* implicit */int) ((unsigned long long int) (signed char)77));
                    arr_6 [i_0] [i_0] [i_2] [(unsigned short)0] = ((/* implicit */_Bool) ((max((1337937373), (-1337937374))) >> (((((((/* implicit */int) (short)-403)) ^ (((/* implicit */int) (unsigned short)25298)))) + (25411)))));
                }
                for (int i_3 = 0; i_3 < 14; i_3 += 4) /* same iter space */
                {
                    arr_9 [i_0] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((-393157941) & (((/* implicit */int) (short)11967))))), (max((((/* implicit */unsigned long long int) ((long long int) (short)-15230))), (18446744073709551615ULL)))));
                    arr_10 [i_0] [i_0] [i_1] [9U] = ((/* implicit */int) ((_Bool) ((((/* implicit */unsigned int) 1337937373)) <= (1360283829U))));
                }
                var_18 ^= ((/* implicit */unsigned char) min((((/* implicit */long long int) 2934683466U)), (549218942976LL)));
                var_19 = ((/* implicit */_Bool) (short)22174);
            }
        } 
    } 
}
