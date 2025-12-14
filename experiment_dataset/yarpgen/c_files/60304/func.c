/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60304
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60304 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60304
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
    for (int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    arr_9 [i_0] [i_0] [i_2] = ((/* implicit */signed char) max((min((5910029003139556168ULL), (arr_4 [i_0] [i_1]))), (max((arr_4 [i_1] [i_0]), (arr_4 [i_0] [i_1])))));
                    var_12 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned char) var_4))));
                    var_13 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) var_11)) : (var_1)))) ? (min((((/* implicit */unsigned long long int) (short)-11610)), (arr_8 [i_2]))) : (((((/* implicit */_Bool) arr_8 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_2]))) : (arr_8 [i_0]))));
                    arr_10 [i_0] [i_1] [i_0] [i_1] = ((/* implicit */long long int) (short)11610);
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */long long int) (+(var_7)));
    var_15 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? (var_11) : (((((/* implicit */_Bool) (~(((/* implicit */int) var_2))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) ((_Bool) -1096610894)))))));
}
