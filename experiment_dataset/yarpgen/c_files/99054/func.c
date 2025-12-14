/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99054
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99054 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99054
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        var_15 = ((/* implicit */unsigned short) arr_1 [i_0]);
        var_16 = ((/* implicit */unsigned short) (unsigned char)111);
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 19; i_1 += 1) 
    {
        arr_6 [i_1] = ((/* implicit */long long int) (~(arr_0 [i_1])));
        /* LoopNest 3 */
        for (unsigned int i_2 = 0; i_2 < 19; i_2 += 1) 
        {
            for (unsigned int i_3 = 0; i_3 < 19; i_3 += 1) 
            {
                for (unsigned int i_4 = 0; i_4 < 19; i_4 += 1) 
                {
                    {
                        arr_16 [i_1] [i_1] [i_3] [i_4] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_1 [i_4]))));
                        var_17 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned char)111))));
                    }
                } 
            } 
        } 
        var_18 ^= ((/* implicit */unsigned char) var_5);
    }
    var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((_Bool) var_10)))));
    var_20 = ((/* implicit */unsigned char) max((((/* implicit */unsigned short) var_8)), ((unsigned short)18006)));
    var_21 = ((/* implicit */unsigned short) -2141228015);
}
