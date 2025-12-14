/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88979
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88979 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88979
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
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (unsigned char i_1 = 3; i_1 < 8; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) ((short) arr_2 [i_1 - 2] [i_1 - 1]))) > (((arr_2 [i_1 - 2] [i_1 - 1]) ? (((/* implicit */int) ((short) var_8))) : (arr_0 [i_0])))));
                var_14 = (~(max((((/* implicit */int) var_6)), (var_8))));
                var_15 = ((/* implicit */_Bool) (~(max((((/* implicit */int) arr_2 [i_1] [i_1 + 1])), (((((/* implicit */int) (unsigned short)58518)) | (((/* implicit */int) var_1))))))));
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */signed char) var_11);
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((2147483634) % (-536870912)))) ? (min((((/* implicit */int) min((((/* implicit */unsigned short) var_10)), ((unsigned short)60496)))), (((((/* implicit */_Bool) var_13)) ? (536870923) : (var_8))))) : (max(((-(var_8))), (((/* implicit */int) max(((short)-6405), (((/* implicit */short) var_0)))))))));
    var_17 = ((/* implicit */signed char) (-(var_13)));
    var_18 = ((/* implicit */unsigned long long int) (!(var_5)));
}
