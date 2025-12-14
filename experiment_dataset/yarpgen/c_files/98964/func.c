/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98964
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98964 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98964
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
    for (int i_0 = 3; i_0 < 17; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                {
                    var_13 += ((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [(signed char)12] [i_1])) && (((/* implicit */_Bool) max((((/* implicit */int) (signed char)6)), (arr_1 [i_0 + 1] [i_0 - 2]))))));
                    var_14 = ((/* implicit */int) max((var_14), (max((((arr_5 [(signed char)6] [i_1] [i_1]) << (((min((((/* implicit */unsigned int) var_4)), (var_7))) - (1054289414U))))), (((arr_5 [10] [i_1] [i_2]) | (((/* implicit */int) (signed char)-13))))))));
                    arr_7 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_2] [i_0 - 1])) ? (((((/* implicit */_Bool) -1799855155)) ? (arr_1 [i_0 - 3] [i_0 - 1]) : (arr_1 [i_2] [i_1]))) : (((arr_1 [i_0 - 3] [i_0 - 2]) / (((/* implicit */int) (signed char)-86))))));
                }
            } 
        } 
    } 
    var_15 ^= max((1799855150), (((/* implicit */int) (signed char)6)));
    var_16 = ((/* implicit */signed char) ((((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned int) (-(-1799855155)))) : (((1389556011U) - (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-8))))))) - (((/* implicit */unsigned int) ((/* implicit */int) var_2)))));
}
