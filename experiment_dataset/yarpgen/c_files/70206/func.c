/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70206
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70206 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70206
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
    for (unsigned short i_0 = 3; i_0 < 11; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (long long int i_2 = 0; i_2 < 13; i_2 += 1) 
                {
                    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)7152)) ? (((/* implicit */unsigned long long int) -2427865708751239303LL)) : (67108863ULL)));
                    arr_9 [i_2] [i_1] [i_0] [i_2] = ((/* implicit */short) (~(((((/* implicit */_Bool) 12017561158828175150ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-124))) : (3353278303U)))));
                }
                var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) var_3))));
            }
        } 
    } 
    var_22 = min((((/* implicit */long long int) var_5)), (4407622294069813754LL));
    var_23 = ((/* implicit */short) 18446744073642442729ULL);
}
