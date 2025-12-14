/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65546
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
    var_10 = ((/* implicit */unsigned long long int) (((!(((var_9) >= (((/* implicit */long long int) ((/* implicit */int) var_0))))))) ? (((/* implicit */int) (unsigned char)65)) : (((/* implicit */int) var_3))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 15; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((var_5) ? (((/* implicit */unsigned int) ((/* implicit */int) max(((signed char)119), ((signed char)116))))) : (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) & (arr_3 [i_1 - 1] [i_1 - 1] [i_1 - 1])))));
                var_11 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (signed char)-123)), (min((var_4), (((/* implicit */unsigned long long int) (signed char)-123))))))) ? (arr_1 [i_0]) : (max((arr_1 [i_0]), (((/* implicit */int) max(((signed char)-123), ((signed char)114))))))));
                arr_7 [i_0] [i_0] [i_0] = ((/* implicit */signed char) 9223372036854775798LL);
            }
        } 
    } 
}
