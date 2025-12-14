/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60001
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60001 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60001
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
    var_14 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(var_0))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((min((3081242851961412328ULL), (((/* implicit */unsigned long long int) arr_2 [i_1] [i_0])))) / (min((((/* implicit */unsigned long long int) arr_0 [i_0])), (1108307720798208ULL)))))) && (((/* implicit */_Bool) min((max((((/* implicit */long long int) arr_3 [i_0])), (var_12))), (((/* implicit */long long int) ((((/* implicit */int) var_7)) * (((/* implicit */int) (_Bool)1))))))))));
                var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) min((arr_0 [i_1]), (((/* implicit */short) arr_4 [(signed char)8] [i_1 - 1])))))) : (var_1)));
                arr_7 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_1 - 1])) << ((((~(((/* implicit */int) arr_0 [(signed char)1])))) - (29405)))))) ? (max((var_1), (((/* implicit */unsigned int) ((((((/* implicit */int) arr_0 [i_1])) + (2147483647))) >> (((((/* implicit */int) var_2)) - (69)))))))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)522)))));
            }
        } 
    } 
    var_16 = ((/* implicit */short) ((((/* implicit */int) var_2)) + (((/* implicit */int) ((((((/* implicit */_Bool) 1565148191)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_6))))) > (((/* implicit */long long int) ((/* implicit */int) var_6))))))));
}
