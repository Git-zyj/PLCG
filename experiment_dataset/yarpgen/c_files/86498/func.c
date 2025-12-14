/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86498
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86498 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86498
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
    var_13 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned short) var_3))))))));
    var_14 = ((/* implicit */_Bool) min((((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) max(((short)8942), (((/* implicit */short) (signed char)-34)))))) > (max((var_2), (((/* implicit */unsigned int) (signed char)33))))))), (var_9)));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] [i_1] = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) ((unsigned short) var_5)))))));
                var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min(((~(6252168166627439856ULL))), (((/* implicit */unsigned long long int) ((_Bool) (signed char)-10)))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((((/* implicit */int) (short)-8163)) + (2147483647))) >> (((((/* implicit */int) arr_1 [(unsigned char)10])) - (99)))))) < ((-(arr_3 [i_1])))))) : (((/* implicit */int) arr_2 [i_0]))));
            }
        } 
    } 
}
