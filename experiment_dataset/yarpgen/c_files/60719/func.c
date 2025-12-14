/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60719
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60719 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60719
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
    var_12 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)0)))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (signed char)-43)) : (((/* implicit */int) (_Bool)1)))))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                var_13 = (-(max((min((((/* implicit */long long int) arr_1 [7LL] [7LL])), (arr_2 [i_0]))), (((/* implicit */long long int) (((_Bool)0) ? (((/* implicit */int) (signed char)12)) : (arr_3 [i_0] [i_1] [i_1])))))));
                arr_6 [i_0] [i_0 - 1] = ((/* implicit */int) (~(max((max((arr_2 [i_0]), (((/* implicit */long long int) arr_1 [i_1] [i_1])))), (((/* implicit */long long int) (unsigned short)65535))))));
                var_14 = ((/* implicit */int) ((max((((/* implicit */long long int) (_Bool)1)), ((+(562949953421280LL))))) == (((/* implicit */long long int) ((/* implicit */int) min((max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)32519))), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_0 [i_0])))))))))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned long long int) (unsigned short)32519);
}
