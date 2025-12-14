/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64712
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
    var_18 = ((((/* implicit */_Bool) min(((+(var_17))), ((~(var_9)))))) ? (((/* implicit */int) (!(((((/* implicit */int) var_14)) > (((/* implicit */int) (unsigned char)99))))))) : (((/* implicit */int) (unsigned short)42178)));
    var_19 = ((/* implicit */signed char) min((((/* implicit */int) min((((/* implicit */unsigned char) var_12)), ((unsigned char)188)))), (var_4)));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (short i_1 = 4; i_1 < 16; i_1 += 4) 
        {
            for (int i_2 = 1; i_2 < 17; i_2 += 3) 
            {
                {
                    var_20 = (+(((/* implicit */int) min((arr_7 [i_2] [i_2] [i_1 + 3] [i_2 + 3]), (arr_7 [i_0] [i_1] [i_1 + 3] [i_2 + 3])))));
                    var_21 = ((/* implicit */int) (signed char)-49);
                    var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 1214541756)), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) var_13)) : (10583351612433875506ULL)))))) ? (((/* implicit */int) ((_Bool) arr_4 [i_0]))) : ((+(((((/* implicit */int) (unsigned short)47928)) << (((-1214541761) + (1214541761)))))))));
                }
            } 
        } 
    } 
    var_23 = var_16;
}
