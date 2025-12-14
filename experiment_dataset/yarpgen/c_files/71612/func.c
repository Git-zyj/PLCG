/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71612
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71612 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71612
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
    for (int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_11 = ((/* implicit */_Bool) max((var_11), ((!(((/* implicit */_Bool) (~((~(((/* implicit */int) (_Bool)0)))))))))));
                    var_12 = ((/* implicit */unsigned char) ((int) (~((~(((/* implicit */int) arr_3 [i_0] [i_1] [i_2])))))));
                    arr_7 [i_0] [i_1] [(short)15] = ((/* implicit */_Bool) (+((~((-(((/* implicit */int) arr_6 [i_0] [11] [i_2]))))))));
                    arr_8 [i_2] [i_2] [i_1] [i_0] = ((/* implicit */short) min(((+(((/* implicit */int) min((arr_1 [i_1] [(short)1]), (((/* implicit */unsigned short) arr_4 [i_0]))))))), ((+(((/* implicit */int) ((unsigned short) arr_4 [i_1])))))));
                    var_13 += ((/* implicit */short) (-((~((-(((/* implicit */int) var_10))))))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */signed char) max(((!((!((_Bool)0))))), ((!(((/* implicit */_Bool) ((unsigned short) var_10)))))));
}
