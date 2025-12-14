/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63598
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63598 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63598
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
    var_16 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) 262080)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_2)))) >> (((/* implicit */int) (!(((/* implicit */_Bool) 1284333231447572742ULL))))))))));
    var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) (unsigned short)28290)) ? (((/* implicit */int) (unsigned short)12730)) : (((/* implicit */int) (unsigned short)28298)))))) ? (((/* implicit */int) min((((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned char)100))))), (var_14)))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) (short)-25867))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 3; i_0 < 10; i_0 += 3) 
    {
        for (unsigned char i_1 = 1; i_1 < 10; i_1 += 1) 
        {
            {
                arr_7 [i_0] [i_1 - 1] [11LL] = (+((-(((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) arr_3 [i_0] [i_1 + 1])))))));
                arr_8 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((-905771687763125494LL) + (9223372036854775807LL))) >> (((((/* implicit */int) arr_2 [i_0] [i_0])) - (27962))))))));
            }
        } 
    } 
}
