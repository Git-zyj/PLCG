/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91582
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91582 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91582
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
    var_14 = ((/* implicit */_Bool) var_7);
    var_15 = ((/* implicit */_Bool) ((min(((-(-8054235909739269711LL))), (((((/* implicit */long long int) var_4)) / (8054235909739269711LL))))) + (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) >= (min((((/* implicit */unsigned long long int) 8054235909739269709LL)), (var_13)))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 21; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) ((((/* implicit */_Bool) -461081010)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 8054235909739269688LL)))))) : (((min((((/* implicit */unsigned long long int) (_Bool)1)), (var_13))) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1 - 1] [i_2 - 1]))))))))));
                    var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) min((max((min((((/* implicit */long long int) (_Bool)1)), (arr_3 [i_2] [(signed char)16] [i_0]))), (((/* implicit */long long int) (unsigned short)8898)))), (max((((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-8054235909739269694LL))), (((/* implicit */long long int) max((-1228571766), (((/* implicit */int) arr_2 [i_2] [i_0]))))))))))));
                    var_18 ^= ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((unsigned short) var_11))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1228571753)) ? (((/* implicit */unsigned long long int) 1766576442)) : (0ULL)))) ? (min((((/* implicit */unsigned long long int) arr_4 [i_0] [8ULL])), (var_13))) : (((/* implicit */unsigned long long int) min(((-2147483647 - 1)), (((/* implicit */int) var_0)))))))));
                    var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-4)) ? (((((/* implicit */_Bool) 461081009)) ? (-1766576442) : (1228571763))) : ((-(((/* implicit */int) var_11))))));
                }
            } 
        } 
    } 
}
