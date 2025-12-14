/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83590
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83590 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83590
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
    var_20 = ((/* implicit */long long int) (!(var_19)));
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 11; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0 + 3] [i_1 + 1]))) < ((((!(((/* implicit */_Bool) var_10)))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_5 [i_0])) + (((/* implicit */int) arr_6 [i_2] [i_2] [i_2]))))) : (((((/* implicit */_Bool) var_6)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) var_18)))))))));
                    arr_9 [i_0] [i_0] [i_2] [i_2] = ((/* implicit */long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) max((5648833197992943429LL), (-5648833197992943453LL))))))), ((-(((/* implicit */int) var_17))))));
                    var_21 -= ((/* implicit */_Bool) ((((/* implicit */int) arr_5 [(_Bool)1])) * ((+(((/* implicit */int) ((((/* implicit */long long int) 4294967282U)) <= (3256735300483347446LL))))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) ((signed char) var_16))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) ((signed char) (unsigned char)248))) : (((((/* implicit */int) var_14)) * (((/* implicit */int) var_3))))))));
    var_23 = ((/* implicit */signed char) var_8);
}
