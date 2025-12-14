/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90506
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90506 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90506
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
    var_10 &= ((((/* implicit */_Bool) max((var_4), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_4)))))))) ? (max((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) var_8)) : (var_2))), (max((var_2), (var_2))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_3)))));
    var_11 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((~((-2147483647 - 1)))) ^ (((((/* implicit */_Bool) (-2147483647 - 1))) ? ((-2147483647 - 1)) : (((/* implicit */int) (_Bool)1))))))) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_5)))));
    var_12 = ((/* implicit */short) var_3);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    arr_6 [i_0] [(unsigned char)8] [i_1] [i_2] = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) ((var_8) & (((/* implicit */int) var_5))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) & (((/* implicit */int) var_6))))) : (((unsigned long long int) var_2)))));
                    /* LoopSeq 1 */
                    for (short i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        var_13 ^= ((/* implicit */long long int) ((unsigned char) ((int) ((var_2) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))));
                        var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) ((((/* implicit */_Bool) (short)32767)) ? (13135458212456569339ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)20540))))))));
                        var_15 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) & (var_2)))) ? (((/* implicit */int) ((unsigned char) var_0))) : (((/* implicit */int) max((((/* implicit */signed char) var_3)), (var_9))))));
                        var_16 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(max((var_4), (var_4))))))));
                        var_17 = ((/* implicit */signed char) max((((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) var_7)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) : (((/* implicit */unsigned long long int) ((int) var_1))))), (((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_2)))))));
                    }
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) max((max((((/* implicit */unsigned long long int) var_5)), ((+(var_0))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) var_3))) ? (((/* implicit */int) var_5)) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_5)) : (var_8)))))))))));
}
