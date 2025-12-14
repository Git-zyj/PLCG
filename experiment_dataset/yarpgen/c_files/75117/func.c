/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75117
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75117 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75117
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
    for (signed char i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1581675162U)) ? (((/* implicit */unsigned long long int) arr_4 [i_0] [i_1])) : (3265845879766304369ULL)))) ? (((long long int) ((((/* implicit */_Bool) 1581675162U)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_8))))) : (((/* implicit */long long int) ((((_Bool) arr_1 [i_0])) ? ((-(((/* implicit */int) arr_0 [i_0])))) : (((int) arr_5 [i_0])))))));
                var_13 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4874414758247542511LL)) ? (1581675162U) : (((/* implicit */unsigned int) 1073489316))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_9)), (-6467486423179399395LL)))) ? (((/* implicit */int) ((short) 10683490497600571320ULL))) : (min((((/* implicit */int) var_7)), (arr_2 [(_Bool)1] [(_Bool)1])))))) : (((long long int) (signed char)-39))));
            }
        } 
    } 
    var_14 *= ((/* implicit */signed char) ((unsigned int) (+(((/* implicit */int) min((((/* implicit */unsigned short) var_9)), (var_7)))))));
    var_15 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(-1461480395)))) ? (((((/* implicit */_Bool) -1073489331)) ? (-1073489331) : (-932315895))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_8))))))))));
}
