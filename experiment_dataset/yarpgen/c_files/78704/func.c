/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78704
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78704 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78704
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
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        var_18 *= ((/* implicit */unsigned long long int) min((((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (unsigned short)29826)))), (((((/* implicit */_Bool) 0ULL)) ? (536870911) : (2147483647)))));
        arr_3 [i_0] = ((/* implicit */_Bool) (~((+(3339663910U)))));
    }
    var_19 -= ((/* implicit */unsigned short) ((((/* implicit */long long int) (-(((((/* implicit */int) (unsigned char)28)) >> (((((/* implicit */int) (signed char)61)) - (42)))))))) * (-1658725157826871810LL)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 19; i_1 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned int i_2 = 2; i_2 < 18; i_2 += 1) 
        {
            for (short i_3 = 0; i_3 < 19; i_3 += 3) 
            {
                for (unsigned long long int i_4 = 0; i_4 < 19; i_4 += 4) 
                {
                    {
                        var_20 ^= ((/* implicit */signed char) ((((/* implicit */int) (signed char)-120)) == (((/* implicit */int) (_Bool)0))));
                        var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-30))) != (-1LL))))));
                        var_22 += ((/* implicit */signed char) ((((/* implicit */_Bool) -1658725157826871810LL)) ? ((-2147483647 - 1)) : (((/* implicit */int) (unsigned short)29826))));
                    }
                } 
            } 
        } 
        arr_13 [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) | (1658725157826871810LL)));
    }
}
