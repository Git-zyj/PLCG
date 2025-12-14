/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61494
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61494 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61494
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
    var_14 *= ((/* implicit */_Bool) max(((short)8191), (((/* implicit */short) (_Bool)1))));
    var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (short)8191))) * (639432656U)))) ? (((/* implicit */int) max((((unsigned short) var_4)), (((/* implicit */unsigned short) var_13))))) : (((/* implicit */int) var_2))));
    var_16 = ((/* implicit */unsigned char) var_10);
    var_17 += ((/* implicit */short) var_12);
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 19; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */_Bool) max(((~(arr_1 [i_0]))), (((/* implicit */unsigned int) (unsigned short)55599))));
                arr_7 [i_0] [i_0] = ((/* implicit */_Bool) max((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 1278099720U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0)))))))), ((((!(((/* implicit */_Bool) 11761346905684124921ULL)))) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-34)))))))));
                var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) max((((/* implicit */int) var_3)), ((~(arr_2 [(_Bool)1]))))))));
                arr_8 [i_0] [i_1] [i_1] = ((/* implicit */short) (-(((((/* implicit */_Bool) (short)22961)) ? (((((/* implicit */_Bool) (short)4817)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (short)-8191)))) : (((/* implicit */int) ((unsigned short) 3)))))));
            }
        } 
    } 
}
