/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9220
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9220 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9220
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
    var_10 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(var_5)))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) ((signed char) var_1)))))), (var_3)));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 23; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                arr_5 [i_1] [i_0] [i_0] = ((((/* implicit */_Bool) ((26ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) * (((/* implicit */int) arr_4 [(unsigned short)21] [i_1] [i_0]))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)12310))) * (max((((/* implicit */unsigned long long int) var_2)), (arr_0 [i_0]))))));
                var_11 = ((/* implicit */long long int) min((var_11), (((/* implicit */long long int) max((((/* implicit */int) max((arr_4 [i_0 - 1] [i_0 + 1] [i_0 - 1]), (arr_4 [i_0 - 1] [i_0 + 1] [i_0 + 1])))), ((((!(((/* implicit */_Bool) -160417237)))) ? (((/* implicit */int) ((unsigned char) (unsigned short)13116))) : (((/* implicit */int) max(((unsigned short)12327), ((unsigned short)25291)))))))))));
                arr_6 [i_0 - 1] [(unsigned short)14] = ((/* implicit */int) arr_4 [i_1] [i_1] [i_1]);
                arr_7 [i_0 + 1] &= var_1;
            }
        } 
    } 
    var_12 ^= ((/* implicit */short) var_3);
    var_13 = ((/* implicit */short) min((max((((((/* implicit */_Bool) var_1)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))), (((/* implicit */unsigned long long int) var_1)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_0)), (-1303004879330939505LL)))) ? ((~(1303004879330939496LL))) : (((/* implicit */long long int) ((/* implicit */int) ((-4138686778286881481LL) == (((/* implicit */long long int) ((/* implicit */int) var_9))))))))))));
    var_14 = ((/* implicit */unsigned char) var_6);
}
