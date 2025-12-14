/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97849
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97849 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97849
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
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_1] [(signed char)8] = ((/* implicit */unsigned long long int) max((((unsigned int) arr_5 [i_0] [i_0] [i_1] [i_2])), (((/* implicit */unsigned int) (signed char)-5))));
                    arr_9 [i_2] [i_0] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) -1276539106)), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) 17930645470615858987ULL)))) : (((((/* implicit */unsigned long long int) 1192282589U)) + (0ULL)))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */long long int) (+((((-(var_8))) >> (((((/* implicit */int) var_4)) + (17603)))))));
}
