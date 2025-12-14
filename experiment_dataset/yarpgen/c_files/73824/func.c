/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73824
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73824 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73824
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
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 23; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 1; i_3 < 24; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 25; i_4 += 4) 
                        {
                            {
                                var_11 &= ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) > (-8984381392545428145LL))))) ^ (min((min((-8984381392545428145LL), (8984381392545428144LL))), ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-8984381392545428145LL)))))));
                                var_12 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) 8984381392545428145LL)) ? (8984381392545428144LL) : (8984381392545428144LL))), (-8984381392545428145LL)))), (9470340481210311569ULL)));
                                arr_14 [i_0] [i_1] [i_3] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 6944864502389703746ULL)) || (((/* implicit */_Bool) 9223372036854775807LL))));
                                arr_15 [i_4] [i_2] [i_0] [i_0] = ((/* implicit */short) (((_Bool)1) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) var_2))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 0; i_5 < 25; i_5 += 4) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 25; i_6 += 1) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned char) var_1);
                                var_14 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((1297126062) >> (((((((/* implicit */_Bool) 17435661591593754282ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)6236))) : (8984381392545428144LL))) - (6211LL)))))) ? (-8984381392545428146LL) : (min((((/* implicit */long long int) ((9223372036854775807LL) < (-9223372036854775807LL)))), ((~(-8984381392545428145LL)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_15 = max((((((/* implicit */_Bool) ((((/* implicit */_Bool) -418287509041810008LL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)25961))) : (-8984381392545428146LL)))) ? (-8984381392545428145LL) : (-418287509041810008LL))), (((/* implicit */long long int) 4182237334U)));
}
