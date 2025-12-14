/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75385
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75385 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75385
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
    var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) ((((/* implicit */_Bool) max((min((12959958621620372851ULL), (((/* implicit */unsigned long long int) 219543506U)))), (((/* implicit */unsigned long long int) var_2))))) ? (((/* implicit */int) ((_Bool) ((var_9) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (0U))))) : (((/* implicit */int) ((_Bool) ((unsigned long long int) (signed char)79)))))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_10 [i_0] [5ULL] [i_0] [7LL] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [(signed char)1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */int) var_8)), (arr_4 [i_1] [i_2])))))))) : (max((((((/* implicit */_Bool) var_11)) ? (arr_9 [i_0] [i_1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))), (((/* implicit */unsigned int) 575078505))))));
                    var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (-2147483647 - 1))), (13711311U)))) ? (((/* implicit */unsigned long long int) ((arr_1 [i_0] [i_0]) - (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-97)))))) : (0ULL)))) ? (arr_7 [i_1] [i_2]) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_1] [i_1] [i_0])) ? (var_2) : (arr_9 [i_2] [i_0] [i_0])))) ? (((/* implicit */unsigned long long int) max((575078505), (((/* implicit */int) arr_6 [i_0] [i_0]))))) : (918631769382089290ULL)))));
                }
            } 
        } 
    } 
}
