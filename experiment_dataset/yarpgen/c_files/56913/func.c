/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56913
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56913 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56913
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
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 14; i_1 += 4) 
        {
            {
                arr_5 [i_1] [i_1] = ((/* implicit */unsigned long long int) (~((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (1150800695)))));
                arr_6 [i_1] = ((/* implicit */long long int) min((((((/* implicit */_Bool) (unsigned short)56689)) ? (((/* implicit */int) arr_4 [i_0] [i_1 + 1] [i_1])) : (((/* implicit */int) arr_4 [i_0] [i_1 - 1] [i_1])))), (((/* implicit */int) min((((/* implicit */short) arr_3 [i_0])), (max((((/* implicit */short) (unsigned char)153)), ((short)17013))))))));
            }
        } 
    } 
    var_15 &= ((/* implicit */short) 989965789);
    var_16 -= ((/* implicit */unsigned long long int) 989965789);
}
