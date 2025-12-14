/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88516
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88516 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88516
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
    var_14 = ((/* implicit */long long int) var_1);
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (unsigned short i_1 = 2; i_1 < 22; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                {
                    arr_8 [i_1] [(unsigned short)3] [(unsigned short)15] [i_2] = ((/* implicit */short) ((((/* implicit */int) (signed char)56)) != (-12)));
                    var_15 *= ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) (-9223372036854775807LL - 1LL))))))) == (((/* implicit */int) (((!(((/* implicit */_Bool) arr_4 [i_2] [i_2] [i_2])))) || ((!(((/* implicit */_Bool) arr_3 [(signed char)2] [i_1 - 1] [i_0])))))))));
                }
            } 
        } 
    } 
    var_16 -= min((var_3), ((+(((var_0) / (((/* implicit */int) (unsigned char)227)))))));
}
