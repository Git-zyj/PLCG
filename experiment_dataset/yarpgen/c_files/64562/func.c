/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64562
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64562 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64562
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
    for (short i_0 = 4; i_0 < 17; i_0 += 2) 
    {
        for (int i_1 = 2; i_1 < 19; i_1 += 3) 
        {
            {
                var_12 = ((((((((/* implicit */int) var_6)) != (((/* implicit */int) var_2)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_9))))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) var_3)) : (var_8))))) / (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) (-(((/* implicit */int) var_9))))))))));
                arr_5 [i_1] = ((/* implicit */unsigned long long int) var_10);
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    arr_8 [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (var_1) : (((/* implicit */int) var_2))))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_4))))) > (((/* implicit */long long int) (((~(var_8))) * (((/* implicit */unsigned int) ((((/* implicit */int) var_9)) & (var_1)))))))));
                    arr_9 [i_1] [i_1] [i_1] [i_0 + 4] = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_5)) ? (var_5) : (((/* implicit */unsigned long long int) var_11)))) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))));
                    arr_10 [i_0] [i_1] = ((/* implicit */unsigned char) var_2);
                }
                arr_11 [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_1) / (var_1)))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_6))))) ? (((((/* implicit */int) ((var_8) != (((/* implicit */unsigned int) var_1))))) + ((-(((/* implicit */int) var_6)))))) : (((((var_1) ^ (var_1))) + (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_6))) > (var_0))))))));
            }
        } 
    } 
    var_13 = ((/* implicit */_Bool) var_2);
    var_14 = ((/* implicit */short) var_4);
    var_15 = ((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((var_4) >= (var_0)))));
    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (var_11) : (((/* implicit */int) var_2))))) & (var_0))) : (((((/* implicit */_Bool) (~(var_8)))) ? (((/* implicit */long long int) var_11)) : (((((/* implicit */_Bool) var_5)) ? (var_4) : (((/* implicit */long long int) var_3))))))));
}
