/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75942
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75942 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75942
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
    var_13 &= ((/* implicit */int) (signed char)82);
    var_14 *= ((/* implicit */unsigned int) var_4);
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                {
                    var_15 |= ((/* implicit */int) arr_6 [i_1] [i_0]);
                    /* LoopSeq 1 */
                    for (int i_3 = 2; i_3 < 14; i_3 += 1) 
                    {
                        var_16 *= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) var_8)) % (((((/* implicit */_Bool) ((unsigned short) var_8))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_4)), (arr_5 [i_0] [i_0] [i_0] [i_0]))))) : (var_0)))));
                        var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) var_1))));
                        var_18 = ((/* implicit */signed char) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_8 [i_3] [i_3] [i_3] [i_3 - 1] [i_3]))))), (((((1887935654U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (signed char)79))))) | (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_5 [i_0] [i_1] [i_1] [i_3 + 1])) > (((/* implicit */int) arr_5 [i_0] [i_1] [i_1] [i_1]))))))))));
                        arr_10 [i_0] [i_0] [i_0] [i_0] &= ((/* implicit */signed char) arr_5 [i_0] [i_0] [i_0] [i_0]);
                    }
                    arr_11 [i_1] = ((/* implicit */unsigned int) var_9);
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */signed char) ((unsigned int) var_2));
    var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) (signed char)82))));
}
