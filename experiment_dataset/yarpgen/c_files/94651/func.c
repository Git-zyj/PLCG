/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94651
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94651 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94651
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
    var_10 += ((/* implicit */unsigned short) max((var_3), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_9)))))));
    var_11 = ((/* implicit */unsigned short) var_6);
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 2; i_2 < 16; i_2 += 4) 
            {
                {
                    arr_8 [i_1] = ((/* implicit */short) ((unsigned char) (-(((/* implicit */int) (signed char)98)))));
                    arr_9 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) var_2))) ? (((/* implicit */int) var_6)) : ((~((-(((/* implicit */int) (unsigned short)37692))))))));
                    arr_10 [i_0] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? ((+(arr_3 [i_2] [i_2] [i_2]))) : (((((/* implicit */_Bool) max((((/* implicit */short) (signed char)-99)), ((short)27412)))) ? (((((/* implicit */_Bool) (unsigned short)27843)) ? (((/* implicit */int) (_Bool)1)) : (631644023))) : ((-(arr_3 [i_0] [i_2] [i_2])))))));
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */int) max((var_12), (var_0)));
}
