/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87417
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87417 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87417
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
    var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((min((-2115006959944616032LL), (((/* implicit */long long int) (unsigned char)95)))) / (((/* implicit */long long int) ((/* implicit */int) var_1)))))) ? (((/* implicit */int) ((var_14) > (min((((/* implicit */long long int) 3409576292U)), (-802085938505009445LL)))))) : (((/* implicit */int) var_0))));
    var_17 *= (~(var_12));
    var_18 = ((/* implicit */_Bool) (unsigned short)10377);
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 15; i_1 += 4) 
        {
            for (short i_2 = 2; i_2 < 13; i_2 += 2) 
            {
                {
                    var_19 = ((/* implicit */unsigned short) min((arr_1 [i_0] [(short)13]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)8296)) || (((/* implicit */_Bool) 2687383020U)))))));
                    var_20 -= ((/* implicit */short) ((((/* implicit */long long int) (-(((/* implicit */int) var_5))))) / (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)58365))) & (-7634247407262213326LL)))));
                }
            } 
        } 
    } 
}
