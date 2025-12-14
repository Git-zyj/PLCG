/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57735
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57735 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57735
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
    var_17 = ((/* implicit */unsigned short) (~((+(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_16))))))));
    var_18 = ((/* implicit */unsigned int) var_4);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 23; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 23; i_2 += 2) 
            {
                {
                    arr_7 [i_2] [(signed char)20] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(arr_6 [i_2 + 2] [0ULL])))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_0 [(_Bool)1]))))) : (min((((((/* implicit */_Bool) arr_0 [8U])) ? (4294967287U) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))), (((/* implicit */unsigned int) var_6))))));
                    arr_8 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_2 [i_0]))));
                    arr_9 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) var_13);
                    arr_10 [i_0] [2LL] [i_0] [i_0] = ((/* implicit */long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_2 + 2]))) ^ (27U))) & (((/* implicit */unsigned int) ((/* implicit */int) max((arr_0 [(unsigned short)20]), (arr_0 [(unsigned short)2])))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */signed char) 17U);
}
