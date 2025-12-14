/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73959
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73959 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73959
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
    var_19 = ((int) ((max((1073741823U), (var_15))) & (((/* implicit */unsigned int) (~(var_18))))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 14; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                var_20 = ((/* implicit */unsigned int) min((var_20), (((((/* implicit */_Bool) 3221225473U)) ? (1073741824U) : (((((/* implicit */_Bool) 26708497U)) ? (1073741818U) : (3245220146U)))))));
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 13; i_2 += 4) 
                {
                    for (unsigned int i_3 = 2; i_3 < 11; i_3 += 1) 
                    {
                        {
                            var_21 ^= ((/* implicit */int) (-(((((/* implicit */_Bool) (~(997869084)))) ? (3221225477U) : (((/* implicit */unsigned int) 29360128))))));
                            var_22 = ((/* implicit */int) min((var_22), ((~(((/* implicit */int) (!(((/* implicit */_Bool) 1080923564)))))))));
                            var_23 |= (-(((unsigned int) ((((/* implicit */_Bool) 57344U)) ? (((/* implicit */unsigned int) -128)) : (3221225462U)))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_24 ^= ((((/* implicit */_Bool) 26708492U)) ? (((((/* implicit */_Bool) (+(3280130154U)))) ? (((((/* implicit */_Bool) var_17)) ? (var_9) : (((/* implicit */unsigned int) 1195228801)))) : (((/* implicit */unsigned int) var_8)))) : (((unsigned int) ((((/* implicit */_Bool) 3221225443U)) ? (var_16) : (var_13)))));
    var_25 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 131008U)) ? (var_1) : (var_2)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 2147483642)))))) : (var_17)))) ? (var_7) : (((/* implicit */unsigned int) 859115466))));
}
