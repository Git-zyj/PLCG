/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80868
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80868 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80868
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
    var_10 = ((/* implicit */unsigned long long int) var_2);
    /* LoopNest 2 */
    for (unsigned int i_0 = 3; i_0 < 8; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 11; i_2 += 4) 
                {
                    for (unsigned short i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        for (int i_4 = 0; i_4 < 11; i_4 += 1) 
                        {
                            {
                                var_11 -= ((/* implicit */unsigned long long int) arr_0 [i_2] [i_3]);
                                arr_13 [i_0] [i_2] |= ((/* implicit */unsigned char) var_5);
                                arr_14 [i_0] [1ULL] [6U] [i_0] [i_0] = ((((/* implicit */unsigned long long int) var_4)) <= (17592186042368ULL));
                            }
                        } 
                    } 
                } 
                var_12 = ((/* implicit */unsigned int) max((var_12), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) ((var_9) < (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0] [i_0] [4LL] [i_1]))))))) ? (((/* implicit */unsigned long long int) var_2)) : ((+(min((18446726481523509256ULL), (10ULL))))))))));
            }
        } 
    } 
}
