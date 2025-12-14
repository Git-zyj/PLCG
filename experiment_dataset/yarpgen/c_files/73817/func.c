/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73817
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73817 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73817
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
    var_11 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (signed char)96))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_4)) != (-268435456))))) : (min((var_6), (((/* implicit */long long int) var_2)))))) * (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 9223372036854775807LL)) || (((/* implicit */_Bool) var_3))))))));
    var_12 |= ((/* implicit */_Bool) var_5);
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 18; i_0 += 3) 
    {
        for (signed char i_1 = 3; i_1 < 18; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 3; i_2 < 18; i_2 += 4) 
                {
                    for (unsigned short i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        {
                            var_13 = ((/* implicit */int) ((unsigned long long int) ((signed char) (unsigned short)46492)));
                            var_14 = ((/* implicit */short) max((((/* implicit */unsigned long long int) 262143)), (871928215144296869ULL)));
                        }
                    } 
                } 
                var_15 = ((/* implicit */unsigned short) min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (signed char)127))));
                var_16 ^= ((/* implicit */unsigned short) arr_10 [(unsigned short)11] [(unsigned char)3] [i_1] [i_1] [i_1]);
            }
        } 
    } 
    var_17 = ((/* implicit */signed char) var_0);
}
