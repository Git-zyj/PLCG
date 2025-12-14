/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62535
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62535 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62535
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
    for (long long int i_0 = 4; i_0 < 10; i_0 += 2) 
    {
        for (long long int i_1 = 2; i_1 < 10; i_1 += 4) 
        {
            {
                arr_6 [i_1] [0U] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((long long int) arr_1 [i_0 - 4] [i_1 - 1])) : (arr_1 [i_1 + 2] [i_1 - 2])));
                var_12 = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) ((((/* implicit */_Bool) 3968U)) ? (-8256874705343708485LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)40719))))))))));
                arr_7 [3LL] [i_1] = ((/* implicit */long long int) arr_2 [i_0]);
                arr_8 [i_0] [i_1] [i_1 + 1] = ((/* implicit */long long int) ((unsigned int) var_8));
                var_13 = (~(((long long int) ((unsigned int) (unsigned short)8567))));
            }
        } 
    } 
    var_14 -= ((/* implicit */unsigned int) ((((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) -492842026339644280LL)))) | (min((var_2), (var_3))))) == (var_6)));
    /* LoopSeq 1 */
    for (unsigned short i_2 = 3; i_2 < 9; i_2 += 1) 
    {
        arr_13 [i_2 + 1] [i_2] = ((((/* implicit */long long int) ((unsigned int) arr_2 [i_2 - 2]))) | (-3598257914201518142LL));
        var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) (-(((unsigned int) (unsigned short)54196)))))));
        var_16 = ((/* implicit */long long int) arr_10 [i_2]);
        var_17 = ((/* implicit */long long int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_2] [i_2] [i_2])) ? (8513451741098167864LL) : (((/* implicit */long long int) var_9))))) ? ((-(arr_0 [i_2]))) : (((((/* implicit */_Bool) 1609871742U)) ? (arr_4 [i_2] [i_2] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_2]))))))), (((unsigned int) ((unsigned int) var_0)))));
    }
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) ? (max((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)41083))) ^ (var_3))), (((/* implicit */unsigned int) ((var_11) >= (((/* implicit */long long int) var_4))))))) : ((+(var_9)))));
}
