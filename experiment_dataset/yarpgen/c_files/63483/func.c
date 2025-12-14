/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63483
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63483 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63483
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (short i_1 = 3; i_1 < 22; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 21; i_2 += 3) 
            {
                {
                    var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) ((_Bool) (+(((((/* implicit */unsigned long long int) 3874067668U)) % (var_15)))))))));
                    arr_8 [i_1 - 2] [i_0] = ((/* implicit */unsigned short) var_12);
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned short) var_17);
    var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)121)) ? ((+((~(((/* implicit */int) var_16)))))) : ((-(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_12)))))))))));
    var_22 = ((/* implicit */_Bool) (signed char)115);
}
