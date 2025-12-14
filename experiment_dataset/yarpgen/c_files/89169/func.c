/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89169
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89169 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89169
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
    var_15 = ((/* implicit */_Bool) var_1);
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 23; i_0 += 3) 
    {
        for (unsigned char i_1 = 3; i_1 < 22; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) max(((_Bool)1), ((_Bool)1))))) ^ (((((/* implicit */_Bool) (unsigned char)10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)40))) : (3984352820442975341ULL)))));
                var_17 = ((/* implicit */signed char) (((_Bool)1) ? (arr_5 [i_1 - 1] [i_1 + 3] [i_1 - 2]) : (((((/* implicit */_Bool) (short)27304)) ? (((13380334188258401076ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1] [14LL]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)104)))))));
                var_18 = ((/* implicit */unsigned char) (-(max((arr_4 [i_1 + 3] [i_1] [(signed char)18]), (arr_4 [i_1 + 1] [i_0] [i_0])))));
            }
        } 
    } 
}
