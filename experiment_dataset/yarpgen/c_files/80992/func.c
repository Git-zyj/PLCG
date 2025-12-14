/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80992
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80992 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80992
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
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) var_11))))))) == ((+(var_16)))));
    /* LoopNest 3 */
    for (short i_0 = 4; i_0 < 20; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_21 *= ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((unsigned char) max(((short)-14203), (((/* implicit */short) (unsigned char)93)))))), (((((/* implicit */_Bool) (+(((/* implicit */int) var_19))))) ? (var_9) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) * (((/* implicit */int) arr_3 [(short)13])))))))));
                    var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned short) 6869476178568908039ULL))))))));
                    var_23 &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_2 - 1])))))) : (arr_4 [i_0 - 1] [i_2 - 1])))) ? (arr_0 [i_0] [i_1]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_0 + 3])) ? (((/* implicit */int) arr_3 [i_0 - 4])) : (((/* implicit */int) arr_3 [i_0 - 2])))))));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) max(((!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 216736587U)), (var_17)))))), (var_12))))));
}
