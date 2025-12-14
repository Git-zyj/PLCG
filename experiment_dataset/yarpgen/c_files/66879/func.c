/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66879
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66879 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66879
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
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (signed char i_1 = 3; i_1 < 19; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_18 = (-(((((3758096384U) >> (((((/* implicit */int) (signed char)-1)) + (21))))) * (((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)0))))))));
                    arr_8 [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) (~((+(((/* implicit */int) ((signed char) var_2)))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */long long int) min((min(((+(((/* implicit */int) (_Bool)1)))), (min((((/* implicit */int) (unsigned short)65535)), (var_6))))), (((((/* implicit */_Bool) max(((unsigned short)13), ((unsigned short)65523)))) ? (((/* implicit */int) min(((unsigned short)19815), ((unsigned short)7)))) : ((+(((/* implicit */int) (unsigned short)65525))))))));
}
