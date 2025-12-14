/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77631
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77631 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77631
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
    for (int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 8; i_1 += 2) 
        {
            {
                var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) max((((/* implicit */unsigned short) (signed char)75)), ((unsigned short)46738))))));
                var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) ((((((unsigned int) arr_2 [(unsigned short)5] [i_1] [(unsigned short)2])) >= (((/* implicit */unsigned int) (((((((-2147483647 - 1)) + (2147483647))) + (2147483647))) << (((((/* implicit */int) arr_3 [i_0] [i_1])) - (7272)))))))) && (((((((/* implicit */_Bool) (unsigned short)51809)) && (((/* implicit */_Bool) (unsigned char)234)))) && (((/* implicit */_Bool) ((long long int) arr_2 [i_0] [i_0] [i_0]))))))))));
                var_15 = ((/* implicit */long long int) ((signed char) ((((/* implicit */unsigned int) ((((/* implicit */int) var_6)) * (((/* implicit */int) var_7))))) * (max((arr_2 [(unsigned char)5] [(unsigned char)5] [i_0]), (((/* implicit */unsigned int) var_0)))))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned short) ((((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)32892)) ? (((/* implicit */int) (unsigned char)200)) : (((/* implicit */int) (short)(-32767 - 1)))))) == (((((/* implicit */_Bool) var_6)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))))) ? (((/* implicit */int) ((unsigned char) ((short) var_1)))) : (((int) (signed char)15))));
}
