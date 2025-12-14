/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97481
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97481 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97481
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
    var_17 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned char) ((((/* implicit */long long int) min((((/* implicit */int) (unsigned char)15)), (164298112)))) <= (var_4))))));
    var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) 164298103))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 11; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (int i_2 = 1; i_2 < 14; i_2 += 1) 
            {
                {
                    arr_8 [i_1] [i_0] = ((/* implicit */int) min((((/* implicit */long long int) min((164298103), (164298088)))), (((((/* implicit */_Bool) -164298100)) ? (7550736060039212100LL) : (-24LL)))));
                    arr_9 [i_0 + 1] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((((((/* implicit */_Bool) (unsigned char)2)) ? (164298112) : (((/* implicit */int) (_Bool)0)))) ^ (((((/* implicit */_Bool) 4140897939U)) ? (-164298118) : (((/* implicit */int) (_Bool)0))))))) | (((14680064U) >> (((max((164298117), (-164298117))) - (164298116)))))));
                }
            } 
        } 
    } 
}
