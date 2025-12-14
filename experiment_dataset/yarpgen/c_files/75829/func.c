/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75829
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75829 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75829
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
    var_11 = ((/* implicit */signed char) (~(max((min((-9223372036854775804LL), (var_1))), (((/* implicit */long long int) max(((short)6122), (((/* implicit */short) var_0)))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                arr_6 [i_0] = var_4;
                arr_7 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) var_7);
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned char) (((-(((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))) / (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (var_10)))))));
    var_13 = ((/* implicit */long long int) ((min((((/* implicit */long long int) var_8)), (-9223372036854775786LL))) <= (((/* implicit */long long int) ((var_9) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned short)13029)) : (((/* implicit */int) var_2)))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_5)))))))));
    var_14 = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((long long int) (unsigned short)31711))), (min((((/* implicit */unsigned long long int) ((var_9) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (-4079726421184801570LL)))), (min((1801883622946281431ULL), (((/* implicit */unsigned long long int) (unsigned short)1852))))))));
}
