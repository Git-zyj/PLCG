/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69872
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69872 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69872
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
    var_16 = ((((/* implicit */_Bool) (signed char)-78)) ? (470384105467028151LL) : (((/* implicit */long long int) ((((/* implicit */unsigned int) 1069547520)) & (var_9)))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 4) 
                    {
                        var_17 = ((/* implicit */_Bool) max((var_17), (((_Bool) (-(arr_11 [i_3]))))));
                        var_18 = ((/* implicit */_Bool) (+(max((18446744073709551615ULL), (((/* implicit */unsigned long long int) (_Bool)1))))));
                    }
                    arr_13 [(_Bool)1] [i_1] = (short)2884;
                    /* LoopNest 2 */
                    for (signed char i_4 = 0; i_4 < 13; i_4 += 4) 
                    {
                        for (long long int i_5 = 0; i_5 < 13; i_5 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) ((1069547517) != (((/* implicit */int) (signed char)15)))))));
                                arr_19 [i_0] [i_1] [i_0] [i_4] [i_4] [i_0] [i_5] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (+(((-5556689823089917844LL) + (((/* implicit */long long int) ((/* implicit */int) (signed char)7)))))))) - (((18446744073709551605ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
