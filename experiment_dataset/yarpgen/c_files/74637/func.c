/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74637
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74637 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74637
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
    var_18 -= ((/* implicit */unsigned long long int) min((((int) ((int) var_0))), (((/* implicit */int) var_9))));
    var_19 = ((/* implicit */_Bool) (((-(-954147750959143035LL))) / (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (signed char)-48)) : (var_11)))) ? (((((/* implicit */_Bool) var_10)) ? (812573538) : (var_15))) : (((/* implicit */int) var_9)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                var_20 = ((((/* implicit */_Bool) (-((-(((/* implicit */int) var_17))))))) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) ((arr_0 [i_0] [i_1]) < (((((/* implicit */_Bool) 2831414611U)) ? (((/* implicit */long long int) 2930265063U)) : (arr_0 [i_0] [i_0])))))));
                arr_5 [i_0] = ((/* implicit */unsigned char) (-(((/* implicit */int) max((((/* implicit */unsigned short) arr_4 [i_0] [i_1] [i_1])), (arr_1 [i_1]))))));
                var_21 = ((/* implicit */unsigned char) ((unsigned long long int) var_4));
                arr_6 [i_0] [i_1] [i_0] = ((/* implicit */long long int) var_10);
            }
        } 
    } 
}
