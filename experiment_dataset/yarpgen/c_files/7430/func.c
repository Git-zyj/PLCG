/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7430
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7430 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7430
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
    var_15 = ((/* implicit */unsigned char) ((unsigned int) min(((!(((/* implicit */_Bool) -1LL)))), (((_Bool) var_0)))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_11)), (arr_2 [i_0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0])) && (((/* implicit */_Bool) (-(((/* implicit */int) var_2))))))))) : (((((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_0] [i_1]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_1])))))) : (arr_3 [i_0] [i_1]))))))));
                var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_1 [i_0] [i_1])) + (2147483647))) >> (((arr_0 [i_1] [i_0]) - (645467499)))))) ? (((/* implicit */int) (_Bool)1)) : (max((((/* implicit */int) ((unsigned short) arr_1 [(signed char)0] [i_0]))), (((((/* implicit */_Bool) arr_0 [i_1] [i_0])) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) arr_1 [i_0] [i_0])))))))))));
                var_18 = ((/* implicit */_Bool) (((_Bool)1) ? (3040393054393460146ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)1090)))));
            }
        } 
    } 
    var_19 += ((/* implicit */unsigned short) (~(((/* implicit */int) var_2))));
    var_20 = ((/* implicit */unsigned long long int) max((var_20), (((((/* implicit */_Bool) var_13)) ? ((+(max((((/* implicit */unsigned long long int) 4294967295U)), (var_9))))) : (((/* implicit */unsigned long long int) var_13))))));
    var_21 ^= ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_2)), (var_9))))))) & (((/* implicit */int) var_12))));
}
