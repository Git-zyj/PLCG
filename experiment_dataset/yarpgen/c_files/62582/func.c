/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62582
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62582 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62582
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
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (unsigned char i_2 = 2; i_2 < 15; i_2 += 1) 
            {
                {
                    var_10 = (-(((((/* implicit */int) arr_5 [i_2 + 2] [i_2 + 2] [i_2 + 1])) | (((/* implicit */int) var_6)))));
                    var_11 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (+(((/* implicit */int) var_3))))), (4250924690U)))) | (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_1)), (arr_1 [i_0])))) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1] [i_1]))) > (var_7)))))))));
                    arr_8 [i_2] [i_2] [i_1] [i_2] = ((/* implicit */signed char) (~(((/* implicit */int) arr_2 [10ULL] [10ULL]))));
                }
            } 
        } 
    } 
    var_12 ^= ((/* implicit */_Bool) var_9);
}
