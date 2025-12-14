/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63838
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
    var_11 = ((/* implicit */signed char) var_4);
    var_12 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_6))));
    var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_9)))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 6; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] = (+(((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)62695)) || (((/* implicit */_Bool) (unsigned short)2830))))));
                var_14 = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 6487361299389997697ULL)) ? (11959382774319553911ULL) : (11959382774319553907ULL))) > (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)29525)))))), (var_10)));
            }
        } 
    } 
}
