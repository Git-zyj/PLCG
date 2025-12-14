/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93613
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
    var_14 = ((/* implicit */unsigned short) (~(0ULL)));
    /* LoopNest 3 */
    for (long long int i_0 = 2; i_0 < 15; i_0 += 3) 
    {
        for (signed char i_1 = 4; i_1 < 15; i_1 += 4) 
        {
            for (unsigned short i_2 = 1; i_2 < 12; i_2 += 4) 
            {
                {
                    arr_9 [i_0] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 273800639U)) ? (((((/* implicit */_Bool) arr_4 [i_2] [i_1] [i_0])) ? (-9223372036854775787LL) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_0]))))) : (((/* implicit */long long int) ((/* implicit */int) ((var_2) >= (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1])))))))))) ? (((((/* implicit */int) arr_1 [i_0] [i_2 + 1])) - (((/* implicit */int) arr_1 [i_0] [i_2 + 4])))) : ((~(((/* implicit */int) arr_4 [i_2 + 3] [i_2 - 1] [i_2 + 1]))))));
                    var_15 &= ((/* implicit */unsigned long long int) (short)-2238);
                    var_16 = ((/* implicit */_Bool) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) 18446744073709551595ULL))))), (arr_1 [i_1] [i_2])));
                }
            } 
        } 
    } 
    var_17 -= ((/* implicit */unsigned int) var_8);
}
