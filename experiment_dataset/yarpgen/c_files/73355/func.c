/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73355
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73355 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73355
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
    for (short i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (short i_1 = 1; i_1 < 10; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_17 = var_5;
                    var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_13))))) && ((!(((/* implicit */_Bool) arr_3 [(unsigned char)1] [i_1 + 2] [i_2]))))));
                    arr_9 [i_0] [i_1] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((arr_2 [i_2] [i_0] [i_0]) != (arr_2 [i_2] [i_0] [i_0]))))));
                    var_19 = ((/* implicit */short) ((arr_2 [i_2] [i_2] [i_2]) >= (((/* implicit */unsigned int) ((/* implicit */int) max((arr_7 [i_2] [i_0] [i_1 - 1]), (((/* implicit */short) (unsigned char)37))))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */int) (unsigned short)7885);
}
