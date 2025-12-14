/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92187
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92187 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92187
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
    var_14 = ((/* implicit */long long int) var_13);
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    var_15 = ((/* implicit */unsigned int) arr_6 [(unsigned char)5] [i_0]);
                    var_16 += ((/* implicit */unsigned short) ((((arr_7 [i_2] [i_0] [i_0]) & (((/* implicit */unsigned long long int) (-2147483647 - 1))))) | (((/* implicit */unsigned long long int) max((3748704003026204252LL), (((/* implicit */long long int) arr_3 [i_0] [i_1])))))));
                    arr_8 [i_1] [i_1] [(signed char)4] = ((/* implicit */signed char) min((((/* implicit */short) (_Bool)1)), (arr_2 [i_1] [i_1])));
                    var_17 = ((/* implicit */long long int) arr_7 [i_2] [i_1] [i_0]);
                }
            } 
        } 
    } 
}
