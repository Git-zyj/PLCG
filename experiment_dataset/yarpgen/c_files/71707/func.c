/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71707
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71707 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71707
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
    var_17 *= ((/* implicit */_Bool) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_10))))), (((unsigned short) max(((signed char)4), (((/* implicit */signed char) (_Bool)1)))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                {
                    arr_9 [i_0] [i_0] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) (signed char)100))) && (((/* implicit */_Bool) ((unsigned char) (!(((/* implicit */_Bool) 5330223267771832333LL))))))));
                    var_18 = ((/* implicit */short) ((max((var_11), (((/* implicit */int) arr_4 [i_0] [i_1] [i_2])))) < (((/* implicit */int) arr_4 [i_0] [i_1] [i_1]))));
                    arr_10 [i_0] = ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) var_9)) ? (var_11) : (((/* implicit */int) ((unsigned char) 14991565180998211482ULL))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */signed char) max((((/* implicit */int) ((short) (+(387814910))))), (((((-303232771) / (((/* implicit */int) var_15)))) / (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (short)14963))))))));
    var_20 = ((/* implicit */signed char) ((short) (unsigned short)0));
}
