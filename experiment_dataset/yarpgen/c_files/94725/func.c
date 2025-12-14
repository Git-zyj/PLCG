/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94725
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94725 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94725
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
    var_10 = ((/* implicit */short) max((var_10), (((/* implicit */short) (+(max((((/* implicit */unsigned int) min((((/* implicit */unsigned short) var_7)), (var_0)))), (1617183263U))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 12; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                {
                    arr_8 [i_0] [(signed char)8] [(signed char)8] [i_1] = ((/* implicit */int) ((signed char) var_4));
                    var_11 = (+(((/* implicit */int) ((signed char) arr_1 [i_1 + 2] [i_1]))));
                    var_12 = ((/* implicit */unsigned int) max((((/* implicit */unsigned short) (short)3503)), (max(((unsigned short)25349), ((unsigned short)25349)))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_0))));
    var_14 = ((/* implicit */unsigned short) ((((/* implicit */long long int) min((var_3), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned short)25349)) : (((/* implicit */int) var_7)))))))) + (4092249655146229117LL)));
    var_15 = ((/* implicit */unsigned short) max((((/* implicit */int) var_2)), (((((/* implicit */_Bool) ((((/* implicit */int) var_6)) + (var_1)))) ? (((/* implicit */int) (signed char)-66)) : (((/* implicit */int) var_6))))));
}
