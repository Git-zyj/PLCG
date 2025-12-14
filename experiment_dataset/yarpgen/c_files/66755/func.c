/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66755
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66755 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66755
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
    for (short i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (signed char i_1 = 2; i_1 < 17; i_1 += 2) 
        {
            {
                var_11 ^= ((/* implicit */unsigned int) var_6);
                var_12 = ((/* implicit */unsigned short) arr_3 [i_0] [(unsigned char)5]);
                var_13 *= ((/* implicit */short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) min((min((1381577225U), (((/* implicit */unsigned int) arr_1 [i_0])))), (((/* implicit */unsigned int) var_5))))) : (((((((/* implicit */int) arr_1 [(unsigned char)6])) > (((/* implicit */int) var_4)))) ? (arr_3 [i_0] [i_0]) : (min((arr_3 [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_0 [5ULL]))))))));
            }
        } 
    } 
    var_14 = ((/* implicit */short) var_0);
}
