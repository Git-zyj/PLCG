/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88134
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88134 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88134
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
    var_19 += ((/* implicit */_Bool) var_3);
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 19; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_20 ^= ((((/* implicit */_Bool) ((((/* implicit */int) ((arr_4 [(_Bool)1] [i_1]) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0])))))) - (((((/* implicit */_Bool) (short)5119)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_18))))))) ? (((unsigned long long int) arr_3 [i_1])) : (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)61185))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_12)), (var_14)))) : (arr_7 [i_0 - 1] [i_1] [i_1]))));
                    arr_9 [i_0] [i_1] [i_2] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) max((((_Bool) 0ULL)), (((arr_0 [i_0]) >= (arr_7 [i_0] [i_1] [i_2])))))), ((+(arr_0 [i_0 - 1])))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))));
}
