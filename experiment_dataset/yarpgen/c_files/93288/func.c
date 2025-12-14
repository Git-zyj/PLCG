/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93288
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
    for (signed char i_0 = 3; i_0 < 13; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 16; i_1 += 2) 
        {
            for (unsigned char i_2 = 1; i_2 < 16; i_2 += 4) 
            {
                {
                    var_13 = ((/* implicit */int) arr_7 [i_2] [2ULL] [(short)15] [(short)15]);
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 17; i_3 += 3) 
                    {
                        for (signed char i_4 = 0; i_4 < 17; i_4 += 2) 
                        {
                            {
                                var_14 = ((/* implicit */int) ((unsigned short) min((var_3), (arr_3 [i_1 + 1] [i_2 + 1] [i_0 + 4]))));
                                var_15 = ((/* implicit */short) arr_3 [i_0] [i_1 - 1] [i_1 - 1]);
                                var_16 = ((/* implicit */unsigned char) ((2U) & (((/* implicit */unsigned int) (((~(var_9))) | (2147483643))))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */_Bool) min((var_17), (((((/* implicit */int) max((arr_4 [i_2 - 1]), (arr_4 [i_2 - 1])))) > (((/* implicit */int) arr_4 [i_2 - 1]))))));
                }
            } 
        } 
    } 
    var_18 ^= ((/* implicit */unsigned short) 2147483633);
    var_19 = ((/* implicit */_Bool) (-((~(((/* implicit */int) var_8))))));
    var_20 = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) max((-2147483644), (-2147483644)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)88))) : (2352698503451473969ULL))));
    var_21 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((((/* implicit */int) var_3)) - (((/* implicit */int) var_0))))) ? (var_11) : (((/* implicit */int) (!(((/* implicit */_Bool) 1538721046471838934LL))))))), (((/* implicit */int) (!(((9223372036854775805LL) != (((/* implicit */long long int) ((/* implicit */int) var_5))))))))));
}
