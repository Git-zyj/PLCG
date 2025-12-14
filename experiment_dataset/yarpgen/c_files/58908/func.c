/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58908
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58908 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58908
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
    var_13 = ((/* implicit */unsigned long long int) (-((((-(((/* implicit */int) var_3)))) * ((-(((/* implicit */int) (signed char)80))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min(((short)-23408), (((/* implicit */short) (unsigned char)242))))) ? (((int) ((((/* implicit */_Bool) (unsigned char)194)) ? (((/* implicit */int) (unsigned char)200)) : (((/* implicit */int) (_Bool)1))))) : (((/* implicit */int) arr_3 [0] [(signed char)10]))));
                var_14 = ((/* implicit */unsigned char) var_8);
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned long long int) (-(var_0)));
    var_16 = ((/* implicit */_Bool) (-(((/* implicit */int) min(((unsigned char)206), ((unsigned char)62))))));
}
