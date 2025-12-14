/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6876
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6876 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6876
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
    var_15 = ((/* implicit */unsigned int) var_14);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    arr_6 [i_0] = ((/* implicit */short) max((((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) ^ (((((/* implicit */_Bool) arr_2 [i_0])) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))))))), (((/* implicit */long long int) ((((/* implicit */int) max((arr_3 [(unsigned char)1] [i_1] [i_1]), (var_11)))) != (((/* implicit */int) (_Bool)1)))))));
                    var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0])) - (((((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [i_0 + 1] [i_1] [i_1]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) 1879802182)) || (((/* implicit */_Bool) 1879802191))))) : (((/* implicit */int) (!(arr_1 [i_2])))))))))));
                    arr_7 [i_0 + 1] [i_0 + 1] [i_2] [i_0] = ((/* implicit */short) ((((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) 17040413523899499344ULL)))))))) | (((long long int) arr_0 [i_0 + 1]))));
                    var_17 += ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_1))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_2] [i_2])))))) > (((long long int) 1406330549810052272ULL)))))) : (min((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_4 [i_2] [i_2]))))), (max((((/* implicit */long long int) arr_3 [i_0] [i_1] [i_0])), (arr_2 [i_1]))))));
                }
            } 
        } 
    } 
    var_18 |= ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1473360683U)) ? (2127028346941057070ULL) : (9ULL)))) ? ((+(462006499))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_6))))))) : (((long long int) 15ULL))));
}
