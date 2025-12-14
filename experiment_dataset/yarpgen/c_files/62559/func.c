/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62559
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62559 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62559
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
    var_10 = ((/* implicit */_Bool) var_7);
    var_11 = ((/* implicit */unsigned int) max((var_11), (((/* implicit */unsigned int) var_3))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 8; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    var_12 ^= ((/* implicit */int) ((_Bool) ((((/* implicit */int) (unsigned short)19437)) ^ (((/* implicit */int) (unsigned char)6)))));
                    var_13 = ((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) max(((unsigned short)46099), ((unsigned short)46098))))) == (arr_3 [i_1 - 2] [i_1 - 1] [i_1 - 2]))))));
                    var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_2]))))) * (((((/* implicit */_Bool) (unsigned short)46098)) ? (((/* implicit */int) (signed char)44)) : (1005012352)))))) ? (((/* implicit */long long int) arr_0 [i_0])) : (max((arr_3 [i_0] [i_1 + 3] [11]), (arr_3 [i_0] [i_1 + 2] [i_2])))));
                }
            } 
        } 
    } 
}
