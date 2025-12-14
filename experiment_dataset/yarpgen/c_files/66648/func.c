/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66648
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66648 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66648
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
    var_11 = ((/* implicit */unsigned short) (~((+((+(((/* implicit */int) var_10))))))));
    var_12 = ((/* implicit */unsigned char) (-((~(max((var_5), (((/* implicit */unsigned int) (signed char)0))))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_13 *= ((/* implicit */long long int) min((((/* implicit */unsigned int) (((+(((/* implicit */int) var_10)))) > (((/* implicit */int) (!((_Bool)1))))))), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) var_9)), ((unsigned short)7367))))) : (max((((/* implicit */unsigned int) var_10)), (var_1)))))));
        /* LoopNest 2 */
        for (short i_1 = 3; i_1 < 22; i_1 += 4) 
        {
            for (unsigned char i_2 = 2; i_2 < 22; i_2 += 4) 
            {
                {
                    var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) (~(max(((+(((/* implicit */int) arr_1 [i_2])))), (((/* implicit */int) min(((short)-15495), (((/* implicit */short) (_Bool)0))))))))))));
                    arr_7 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_5 [i_2] [i_1] [i_0])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_1 [i_0])))))))));
                }
            } 
        } 
        var_15 ^= ((/* implicit */unsigned int) max((((((/* implicit */unsigned long long int) ((2042374036) << (((((/* implicit */int) var_10)) - (7335)))))) ^ (min((arr_2 [(unsigned char)0]), (((/* implicit */unsigned long long int) var_3)))))), (((/* implicit */unsigned long long int) (((((~(((/* implicit */int) (unsigned char)255)))) + (2147483647))) >> (((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [16]))) & (arr_0 [(short)22]))) - (6188ULL))))))));
    }
}
