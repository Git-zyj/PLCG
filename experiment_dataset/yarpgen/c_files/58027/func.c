/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58027
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58027 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58027
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
    var_15 = ((/* implicit */_Bool) min((((/* implicit */long long int) (-(((var_7) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_6))))))), (min((min((-6219058600730730847LL), (((/* implicit */long long int) 3913890857U)))), ((+(6219058600730730840LL)))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 10; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                {
                    var_16 = ((/* implicit */long long int) min((var_16), (min((((((/* implicit */_Bool) min((((/* implicit */long long int) arr_1 [i_0] [i_0])), (var_0)))) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) arr_5 [i_0])), (var_6))))) : ((-(6219058600730730853LL))))), (((/* implicit */long long int) (~(((/* implicit */int) min((((/* implicit */signed char) (_Bool)0)), (arr_5 [i_0])))))))))));
                    arr_7 [i_0] [i_1] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) min((min((13766212843249353139ULL), (((/* implicit */unsigned long long int) (unsigned short)27816)))), (((/* implicit */unsigned long long int) (((_Bool)1) ? (1456822048482496179LL) : (((/* implicit */long long int) ((/* implicit */int) var_12))))))))) ? (min((((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_6 [i_0] [i_0] [i_1] [i_2]))))), (min((((/* implicit */unsigned int) -930821197)), (var_3))))) : (((/* implicit */unsigned int) (((!(((/* implicit */_Bool) var_12)))) ? ((~(((/* implicit */int) arr_6 [i_0] [i_2] [i_0] [i_0])))) : (((((/* implicit */_Bool) arr_0 [i_2])) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) arr_1 [i_1] [i_1])))))))));
                    arr_8 [i_0] [i_1] = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (6219058600730730846LL) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_2])))))) ? (((arr_2 [i_1]) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (3605632983U))) : ((+(3605632974U)))))), (((((/* implicit */_Bool) max((6219058600730730846LL), (var_8)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_2 [i_1]))))) : ((-(var_13)))))));
                }
            } 
        } 
    } 
}
