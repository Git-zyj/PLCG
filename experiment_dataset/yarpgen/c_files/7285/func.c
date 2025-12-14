/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7285
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7285 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7285
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
    for (unsigned short i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                var_19 += ((/* implicit */unsigned int) ((((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) arr_2 [i_1])))))) >> (((min((var_16), (((/* implicit */unsigned int) arr_4 [i_1] [i_1])))) - (4263251017U)))));
                arr_5 [i_0] = ((/* implicit */short) ((unsigned char) var_3));
                var_20 += ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)7)) ? (-6298608556723357085LL) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))) ? (((((((/* implicit */int) (short)-23934)) + (2147483647))) >> (((/* implicit */int) (short)7)))) : (((/* implicit */int) arr_1 [i_1])))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */long long int) (+(((/* implicit */int) (short)8))))) < ((~(8327013714499063128LL)))))) != ((~(((((/* implicit */_Bool) 268435455)) ? (((/* implicit */int) var_3)) : (540531212)))))));
    var_22 -= ((/* implicit */int) var_15);
    /* LoopNest 2 */
    for (unsigned char i_2 = 0; i_2 < 23; i_2 += 2) 
    {
        for (short i_3 = 0; i_3 < 23; i_3 += 2) 
        {
            {
                var_23 = ((((/* implicit */_Bool) arr_7 [i_2])) ? (((/* implicit */int) (short)597)) : (((/* implicit */int) (signed char)-11)));
                var_24 ^= ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) (-(((/* implicit */int) arr_9 [i_2] [i_3] [i_2]))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_11)))) : (var_8)));
            }
        } 
    } 
    var_25 += ((/* implicit */long long int) (+(var_7)));
}
