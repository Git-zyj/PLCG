/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81011
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81011 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81011
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
    var_10 = ((/* implicit */signed char) var_9);
    var_11 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_6) ? ((-(((/* implicit */int) (signed char)8)))) : (((/* implicit */int) var_3))))) ? (((max((var_9), (var_2))) / ((-(((/* implicit */int) (signed char)-9)))))) : (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)6143)) * (((/* implicit */int) (unsigned short)11650))))) ? (((((/* implicit */_Bool) (signed char)-7)) ? (1475699823) : (((/* implicit */int) var_0)))) : (((/* implicit */int) min((var_0), (((/* implicit */unsigned char) var_5)))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 8; i_0 += 1) 
    {
        for (short i_1 = 3; i_1 < 10; i_1 += 3) 
        {
            for (unsigned short i_2 = 3; i_2 < 10; i_2 += 1) 
            {
                {
                    var_12 = ((/* implicit */_Bool) (signed char)6);
                    arr_7 [i_0] [i_0] [(unsigned short)4] [i_0] = ((/* implicit */unsigned char) ((signed char) min(((unsigned short)17569), (((/* implicit */unsigned short) (signed char)9)))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)2))))) ? (((/* implicit */long long int) (~(((((/* implicit */int) var_3)) ^ (var_9)))))) : (((((((/* implicit */_Bool) var_4)) ? (9223372036854775807LL) : (((/* implicit */long long int) var_2)))) | (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_8))))))));
}
