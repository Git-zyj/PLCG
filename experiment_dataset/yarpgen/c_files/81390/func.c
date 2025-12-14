/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81390
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81390 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81390
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned int i_2 = 4; i_2 < 24; i_2 += 3) 
                {
                    arr_7 [i_0] [i_0] [i_2 - 4] [i_0] = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) ((long long int) -9223372036854775781LL))) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_2 - 4]))) : (9223372036854775772LL))));
                    var_11 = ((/* implicit */_Bool) ((((arr_4 [2LL] [i_0] [i_2 - 1]) / (-9223372036854775765LL))) >> (((arr_5 [24LL] [24LL] [i_2 - 2]) - (7385152151785136744ULL)))));
                }
                var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) arr_2 [i_1] [i_0])) / (arr_6 [i_0] [i_0])))) ? (11412896098500526135ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767)))))) ? (((/* implicit */unsigned long long int) -9223372036854775758LL)) : (((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) arr_0 [i_0])) / (arr_6 [i_0] [i_1])))) : ((((_Bool)1) ? (((/* implicit */unsigned long long int) arr_6 [i_0] [i_0])) : (1701314598912908392ULL)))))));
                var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) ((short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0]))) / (11412896098500526121ULL)))))));
                var_14 = ((/* implicit */long long int) ((_Bool) arr_4 [i_0] [i_0] [i_0]));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned short) var_0);
}
