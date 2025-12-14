/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89118
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89118 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89118
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
    var_12 = ((/* implicit */_Bool) min((var_12), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_5))))) ? (var_7) : (var_7)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((1073741824) << (((((-783461702455886042LL) + (783461702455886070LL))) - (28LL)))))) ^ (((((/* implicit */_Bool) var_11)) ? (-783461702455886042LL) : (-783461702455886047LL)))))) : (((((/* implicit */unsigned long long int) min((var_7), (var_10)))) & ((~(var_1))))))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 4; i_2 < 21; i_2 += 3) 
            {
                {
                    var_13 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((arr_5 [i_1]) << (((var_4) - (14981698659748070437ULL))))) ^ ((~(-783461702455886042LL)))))) ? (((/* implicit */int) ((min((4368947082676121958LL), (((/* implicit */long long int) var_10)))) > (((/* implicit */long long int) min((((/* implicit */unsigned int) -1746836939)), (2147221504U))))))) : (((arr_2 [i_0 - 1] [i_2 - 1]) ? (((/* implicit */int) arr_2 [i_0 - 1] [i_2 - 3])) : (((/* implicit */int) arr_2 [i_0 - 1] [i_2 - 3]))))));
                    var_14 = ((/* implicit */unsigned int) arr_2 [i_0] [i_2]);
                    var_15 ^= 0U;
                }
            } 
        } 
        var_16 = ((/* implicit */unsigned char) arr_2 [i_0] [i_0 - 1]);
    }
    for (long long int i_3 = 0; i_3 < 25; i_3 += 4) 
    {
        var_17 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((long long int) arr_11 [i_3]))) + (max((((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) var_2)), ((unsigned short)27391)))), (arr_10 [i_3])))));
        var_18 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max(((-(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (unsigned short)5))))) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (((((/* implicit */_Bool) arr_11 [i_3])) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) ((-4368947082676121958LL) <= (((/* implicit */long long int) 3794423316U))))))))));
    }
    var_19 = var_7;
}
