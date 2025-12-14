/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99898
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99898 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99898
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
    var_10 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((((((/* implicit */int) var_6)) + (2147483647))) >> (((/* implicit */int) var_5))))) ? (((/* implicit */int) (signed char)5)) : (((/* implicit */int) (unsigned short)24940)))), (((/* implicit */int) var_6))));
    var_11 = ((/* implicit */_Bool) max((var_11), (((/* implicit */_Bool) (unsigned short)24959))));
    var_12 = ((/* implicit */unsigned char) -1104214147);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) (signed char)5)) | (((((/* implicit */int) var_8)) * (((/* implicit */int) arr_4 [i_1]))))))))))));
                var_14 += ((/* implicit */signed char) min((((long long int) (-(((/* implicit */int) (unsigned short)59270))))), (((/* implicit */long long int) ((((/* implicit */int) (short)-10515)) * (((((/* implicit */_Bool) (unsigned short)40350)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (short)-1)))))))));
            }
        } 
    } 
}
