/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56227
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56227 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56227
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
    var_14 -= ((((/* implicit */_Bool) (((+(var_12))) % (((/* implicit */long long int) ((/* implicit */int) var_10)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (var_0) : (((/* implicit */int) min((var_10), (((/* implicit */unsigned short) var_2)))))))) : (((((/* implicit */_Bool) (+(var_0)))) ? (((/* implicit */unsigned long long int) var_11)) : ((+(var_4))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 11; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                arr_5 [i_1] = ((/* implicit */long long int) (unsigned short)11521);
                var_15 = ((/* implicit */int) (signed char)1);
                arr_6 [i_0] [i_1] = ((/* implicit */unsigned char) var_1);
                var_16 = ((/* implicit */unsigned char) var_8);
                var_17 = ((/* implicit */int) (~(15196318887875265448ULL)));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned char) var_4);
}
