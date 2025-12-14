/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77287
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77287 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77287
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    arr_9 [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) arr_5 [i_0] [i_1] [i_2]))) ? (((var_2) + (((/* implicit */long long int) ((/* implicit */int) var_3))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_5)) != (((/* implicit */int) arr_6 [i_0] [i_1] [i_0]))))))));
                    arr_10 [6LL] |= ((/* implicit */unsigned long long int) max((((/* implicit */int) ((short) min((var_9), (var_8))))), (((((/* implicit */int) max((((/* implicit */unsigned short) var_6)), (arr_8 [(_Bool)1] [i_1] [i_2])))) * (((/* implicit */int) arr_8 [2LL] [i_1] [2LL]))))));
                }
            } 
        } 
    } 
    var_10 = ((/* implicit */signed char) min((var_10), (((/* implicit */signed char) min((((/* implicit */int) ((((var_2) & (((/* implicit */long long int) var_0)))) >= (((/* implicit */long long int) ((/* implicit */int) ((var_8) <= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)46921)))))))))), (var_0))))));
    var_11 = ((/* implicit */unsigned char) var_2);
}
