/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79771
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79771 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79771
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
    for (long long int i_0 = 2; i_0 < 9; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 2; i_2 < 12; i_2 += 1) 
            {
                {
                    arr_9 [i_2 - 1] [i_1] [i_1] [i_0] = ((/* implicit */long long int) (((~(((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))) + (((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */int) ((signed char) arr_3 [i_2] [i_1]))) : (((/* implicit */int) (unsigned char)57))))));
                    var_11 *= ((/* implicit */unsigned int) min((((/* implicit */unsigned char) var_3)), ((unsigned char)189)));
                    arr_10 [i_0] [i_0 + 2] [i_1] [i_2 - 2] = ((/* implicit */signed char) ((((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)88))) == (-9223372036854775796LL))))) > ((~(0U))))) ? (arr_4 [i_0 + 4]) : (((long long int) ((((/* implicit */_Bool) (signed char)2)) || (((/* implicit */_Bool) 4294967270U)))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_3 = 3; i_3 < 14; i_3 += 1) 
    {
        for (long long int i_4 = 0; i_4 < 17; i_4 += 1) 
        {
            {
                arr_16 [i_4] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)178))));
                arr_17 [i_3] [i_4] = ((/* implicit */long long int) (!(((/* implicit */_Bool) max(((short)32767), (((/* implicit */short) (unsigned char)75)))))));
            }
        } 
    } 
}
