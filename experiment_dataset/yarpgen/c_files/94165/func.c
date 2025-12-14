/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94165
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94165 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94165
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
    var_18 &= ((/* implicit */long long int) 2295136259U);
    var_19 = ((/* implicit */unsigned long long int) var_10);
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        for (short i_1 = 1; i_1 < 15; i_1 += 2) 
        {
            {
                arr_7 [i_1] = 1999831018U;
                var_20 = (+(((((/* implicit */_Bool) var_8)) ? ((((_Bool)1) ? (((/* implicit */int) (short)29777)) : (((/* implicit */int) (short)32220)))) : ((-(((/* implicit */int) (short)29758)))))));
                var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) (~((~(var_5))))))));
                var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 4067557937U)) && (((/* implicit */_Bool) (unsigned short)38451))));
            }
        } 
    } 
    var_23 = ((/* implicit */_Bool) ((short) var_11));
    var_24 = ((/* implicit */short) var_4);
}
