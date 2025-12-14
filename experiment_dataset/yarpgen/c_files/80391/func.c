/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80391
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80391 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80391
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
    for (int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */int) (-((~(-7904445134147032860LL)))));
                    var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) min((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)177)) ? (((/* implicit */unsigned int) -1094071203)) : (arr_6 [i_0] [i_0])))) || (((arr_5 [i_2]) < (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))))), (((((/* implicit */int) (unsigned short)0)) << (((1094071220) - (1094071202))))))))));
                    var_17 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) (signed char)-118)))) ? (((((/* implicit */_Bool) (+(var_14)))) ? (-1094071218) : (((/* implicit */int) min(((signed char)-47), (((/* implicit */signed char) (_Bool)1))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0] [i_1 + 1] [i_2])))))));
                    var_18 = ((/* implicit */signed char) max((min((175311148), (((/* implicit */int) (_Bool)1)))), (((((/* implicit */_Bool) arr_2 [i_1 + 1] [i_1])) ? (var_6) : (((/* implicit */int) arr_2 [i_1 + 1] [i_1]))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_4))))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_2)))) : (((/* implicit */int) var_1))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) ((unsigned char) (_Bool)1))) < (((/* implicit */int) var_1)))))) : (max((((((/* implicit */_Bool) var_6)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) var_4))))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_4)) : (0)))))))))));
}
