/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82923
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82923 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82923
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
    var_11 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)8522))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    arr_6 [i_0 - 1] [i_0 - 1] [i_0] [i_0] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) (short)3)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (short)25556)) ? (((/* implicit */int) (short)25545)) : (arr_1 [i_0])))) : (max((var_3), (((/* implicit */long long int) arr_1 [i_0]))))))));
                    var_12 = ((/* implicit */unsigned long long int) min((((/* implicit */int) arr_3 [i_0])), (((((/* implicit */_Bool) (short)-8522)) ? (((/* implicit */int) var_1)) : (((((/* implicit */int) (short)-25557)) - (((/* implicit */int) (unsigned short)6144))))))));
                    var_13 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (short)-8519)) + (2147483647))) << ((((+(((/* implicit */int) arr_3 [i_0 - 1])))) - (227)))));
                    arr_7 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */short) var_9);
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned short i_3 = 1; i_3 < 8; i_3 += 3) 
    {
        arr_10 [i_3] [i_3] = ((/* implicit */unsigned short) arr_4 [18LL]);
        arr_11 [(unsigned char)7] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) 0U)))) ? (max((((/* implicit */long long int) (short)-3)), (-8970820031018117990LL))) : (((8970820031018118009LL) / (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_3] [i_3]))))))))));
    }
}
