/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73400
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73400 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73400
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                arr_4 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)224)) ? (((/* implicit */int) (unsigned short)28)) : (((/* implicit */int) (unsigned char)44))));
                var_17 = ((/* implicit */long long int) ((short) ((unsigned char) 503316480U)));
                var_18 = ((/* implicit */unsigned char) (+(((((4294967295U) < (4294967295U))) ? (((/* implicit */int) min(((short)16801), (((/* implicit */short) var_10))))) : (((/* implicit */int) ((unsigned char) (short)13532)))))));
                var_19 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) 255ULL)) ? (((/* implicit */int) (short)-15595)) : (((/* implicit */int) (!(((/* implicit */_Bool) 1860759527727064567ULL)))))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned int i_2 = 0; i_2 < 24; i_2 += 4) 
    {
        var_20 ^= ((/* implicit */unsigned int) ((((((((/* implicit */_Bool) 4294967287U)) ? (((/* implicit */int) (unsigned char)1)) : (((/* implicit */int) (short)-15595)))) << (((((/* implicit */int) min((var_3), ((short)-1522)))) + (2620))))) != ((+(((/* implicit */int) max((((/* implicit */signed char) arr_5 [i_2])), ((signed char)75))))))));
        var_21 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) max(((unsigned short)32256), (((/* implicit */unsigned short) (short)32764)))))))) >= (max((arr_6 [i_2]), (((/* implicit */unsigned long long int) arr_8 [i_2] [i_2]))))));
    }
    for (unsigned int i_3 = 0; i_3 < 10; i_3 += 1) 
    {
        var_22 = ((/* implicit */unsigned int) (~(((unsigned long long int) ((((-9211200959739731505LL) + (9223372036854775807LL))) >> (((((/* implicit */int) (signed char)-1)) + (13))))))));
        var_23 = ((/* implicit */short) (+(((/* implicit */int) (signed char)-20))));
        arr_12 [i_3] = ((/* implicit */signed char) (-(((/* implicit */int) arr_2 [i_3] [i_3]))));
    }
    var_24 &= ((/* implicit */int) var_2);
}
