/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62359
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62359 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62359
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
    var_14 = ((/* implicit */unsigned char) min((561503218476933725ULL), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))) ? (max((((/* implicit */unsigned long long int) var_12)), (var_11))) : (min((17722191235572215019ULL), (((/* implicit */unsigned long long int) var_10))))))));
    var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) ((unsigned int) ((short) ((var_5) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (short)-10375)))))))));
    var_16 = ((max((var_1), ((((_Bool)1) || ((_Bool)1))))) ? ((+(max((var_3), (((/* implicit */int) (_Bool)0)))))) : (-1610615648));
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 22; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            for (unsigned char i_2 = 3; i_2 < 23; i_2 += 2) 
            {
                {
                    arr_8 [i_2] [i_2] = max(((unsigned char)21), (arr_2 [i_0]));
                    var_17 = ((/* implicit */int) arr_2 [i_2 + 1]);
                }
            } 
        } 
    } 
}
