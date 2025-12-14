/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71772
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71772 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71772
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
    for (signed char i_0 = 2; i_0 < 10; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_0] [7ULL] [2] = ((/* implicit */int) max((17293822569102704640ULL), (((10420599280005998553ULL) * (17293822569102704640ULL)))));
                    var_10 = min((((/* implicit */unsigned int) (+(((/* implicit */int) max((((/* implicit */unsigned short) arr_1 [0ULL] [0ULL])), (arr_5 [i_0] [i_1] [i_2]))))))), (arr_4 [i_2] [i_0] [i_0]));
                }
            } 
        } 
    } 
    var_11 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) max((((unsigned long long int) var_2)), (min((((/* implicit */unsigned long long int) var_5)), (var_6))))))));
}
