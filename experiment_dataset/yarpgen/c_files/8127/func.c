/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8127
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8127 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8127
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
    var_15 -= ((/* implicit */signed char) ((short) ((long long int) var_3)));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                var_16 = ((/* implicit */unsigned long long int) ((unsigned int) max((((/* implicit */unsigned long long int) (signed char)57)), (0ULL))));
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 4) 
                {
                    for (unsigned short i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 3; i_4 < 16; i_4 += 3) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) (~(13ULL)))) ? (((((/* implicit */_Bool) 12332208344236866643ULL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)-4)))) : (-1135896957))), (((((((/* implicit */int) (signed char)-4)) + (2147483647))) << (((/* implicit */int) (_Bool)0))))));
                                arr_14 [i_0] = ((/* implicit */_Bool) 2U);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
