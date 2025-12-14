/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99102
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99102 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99102
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
    var_11 *= ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (+(var_7)))))) >= (min((((/* implicit */unsigned int) max((((/* implicit */int) var_2)), (var_8)))), (var_7)))));
    var_12 = ((/* implicit */unsigned long long int) var_6);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                var_13 = ((/* implicit */_Bool) ((((((/* implicit */int) arr_2 [i_0] [i_1])) + (((/* implicit */int) (signed char)2)))) * (((/* implicit */int) ((_Bool) (+(15U)))))));
                arr_4 [i_0] [(signed char)7] [i_1] = ((/* implicit */int) (-(min((((/* implicit */unsigned long long int) arr_1 [(unsigned char)19] [i_0])), (min((3237958890272582795ULL), (3237958890272582795ULL)))))));
                var_14 *= ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) 3237958890272582795ULL)) ? (((/* implicit */int) arr_2 [i_0] [i_1])) : (((/* implicit */int) max((arr_2 [0LL] [(unsigned short)16]), (((/* implicit */unsigned short) (signed char)-73)))))))));
            }
        } 
    } 
    var_15 = ((/* implicit */long long int) ((var_10) < (((/* implicit */int) (signed char)72))));
}
