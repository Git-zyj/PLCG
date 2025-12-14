/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72522
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72522 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72522
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
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 17; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                var_11 = ((/* implicit */int) ((((/* implicit */_Bool) ((signed char) ((unsigned short) var_2)))) ? (((((/* implicit */_Bool) arr_0 [i_0 - 2])) ? (((/* implicit */unsigned long long int) max((3013365007U), (((/* implicit */unsigned int) (short)-12366))))) : (var_10))) : (max((max((arr_2 [i_0 + 3] [i_0 + 3]), (((/* implicit */unsigned long long int) arr_4 [i_0] [(signed char)13] [i_0])))), (max((arr_2 [(signed char)12] [(signed char)12]), (((/* implicit */unsigned long long int) 325811796))))))));
                var_12 -= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((var_3), (13556132802053573728ULL))))));
                var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) (!((!(((/* implicit */_Bool) (signed char)63)))))))));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned long long int) ((var_7) - ((+(((/* implicit */int) (signed char)75))))));
}
