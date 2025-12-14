/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94077
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94077 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94077
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
    for (unsigned short i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        for (signed char i_1 = 2; i_1 < 10; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 9; i_2 += 2) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_14 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) arr_6 [i_3])) < (((/* implicit */int) var_3))))) << (((/* implicit */int) ((((/* implicit */_Bool) ((((var_1) + (2147483647))) << ((((((((-2147483647 - 1)) - (-2147483640))) + (21))) - (13)))))) && (((/* implicit */_Bool) (~(((/* implicit */int) (short)-6096))))))))));
                            var_15 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((arr_9 [i_0] [i_0 - 1]) < (((/* implicit */long long int) ((/* implicit */int) (short)-6096))))) ? (((/* implicit */int) ((signed char) (_Bool)1))) : (min((var_1), (((/* implicit */int) arr_2 [i_0]))))))) & (var_11)));
                            var_16 = ((/* implicit */unsigned int) 4611686018427387903LL);
                            var_17 = ((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0]);
                        }
                    } 
                } 
                var_18 = ((/* implicit */short) arr_8 [i_0] [i_1 - 1] [(unsigned short)6] [i_1]);
                var_19 += ((/* implicit */short) ((((/* implicit */unsigned long long int) ((-9223372036854775807LL) ^ (((/* implicit */long long int) ((2132198342U) | (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_1 + 2] [i_1] [i_0] [i_0]))))))))) & (((((arr_8 [i_1] [i_1] [i_0 - 1] [i_0]) & (var_9))) ^ (((/* implicit */unsigned long long int) (~(var_6))))))));
            }
        } 
    } 
    var_20 = var_2;
    var_21 = ((/* implicit */unsigned int) ((unsigned short) var_3));
}
