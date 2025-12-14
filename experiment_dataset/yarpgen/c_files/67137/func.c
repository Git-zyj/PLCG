/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67137
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67137 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67137
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
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (+(min((((/* implicit */int) var_11)), (38060083)))))) ? (((/* implicit */unsigned int) min(((-(((/* implicit */int) var_11)))), (((/* implicit */int) ((unsigned char) -38060084)))))) : (min((((/* implicit */unsigned int) (-(((/* implicit */int) var_13))))), (max((4294967283U), (((/* implicit */unsigned int) var_10))))))));
                var_14 += ((/* implicit */signed char) max((max((((/* implicit */int) ((((/* implicit */_Bool) 1U)) || (((/* implicit */_Bool) var_7))))), ((+(((/* implicit */int) var_1)))))), (((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) var_11)))))));
            }
        } 
    } 
    var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) ((((/* implicit */unsigned int) (~(((((/* implicit */int) var_4)) % (((/* implicit */int) var_3))))))) % (17U))))));
    /* LoopNest 2 */
    for (unsigned int i_2 = 0; i_2 < 19; i_2 += 2) 
    {
        for (signed char i_3 = 0; i_3 < 19; i_3 += 3) 
        {
            {
                var_16 = ((/* implicit */unsigned short) (-(((-38060083) + (-1852555185)))));
                var_17 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) -1852555185)) || (((/* implicit */_Bool) (unsigned short)44463)))) ? (((((/* implicit */_Bool) (signed char)57)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (signed char)-16)))) : (((((/* implicit */int) var_5)) % (((/* implicit */int) var_3))))))) ? (max((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (signed char)54)))), (min((130944), (((/* implicit */int) (short)-7425)))))) : (((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)114))) < (var_0))) || (((/* implicit */_Bool) max((((/* implicit */short) var_2)), (var_4)))))))));
            }
        } 
    } 
}
