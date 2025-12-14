/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9968
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9968 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9968
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
    var_13 = ((/* implicit */int) (short)-32746);
    var_14 = ((/* implicit */unsigned short) var_5);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 23; i_0 += 2) 
    {
        for (int i_1 = 1; i_1 < 20; i_1 += 4) 
        {
            for (unsigned int i_2 = 1; i_2 < 21; i_2 += 1) 
            {
                {
                    arr_9 [i_0 + 1] [i_1 - 1] [i_2 + 2] = ((/* implicit */int) (unsigned short)65520);
                    var_15 *= ((/* implicit */unsigned int) (+(((/* implicit */int) arr_5 [i_1 + 3] [i_1 + 3]))));
                    var_16 *= ((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) (unsigned short)65535)) || ((_Bool)1))));
                    var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) var_6))));
                }
            } 
        } 
    } 
    var_18 = var_9;
    var_19 = ((/* implicit */unsigned short) var_4);
}
