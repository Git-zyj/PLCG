/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65924
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65924 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65924
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
    var_13 = ((/* implicit */signed char) (!(((/* implicit */_Bool) 7690800411041325164ULL))));
    var_14 = ((/* implicit */unsigned char) ((unsigned long long int) var_4));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 3; i_0 < 15; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                var_15 *= ((/* implicit */short) ((unsigned short) arr_0 [i_0 - 2]));
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 4; i_2 < 15; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        for (signed char i_4 = 0; i_4 < 16; i_4 += 3) 
                        {
                            {
                                var_16 *= ((/* implicit */unsigned char) 17000729002523863165ULL);
                                var_17 = ((/* implicit */unsigned short) max((5547642442694138179ULL), (((/* implicit */unsigned long long int) (signed char)18))));
                                arr_11 [i_1] [i_1] [i_2] [i_4] [i_4] &= ((/* implicit */unsigned long long int) ((signed char) (!(((/* implicit */_Bool) 0ULL)))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
