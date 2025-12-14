/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77698
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77698 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77698
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
    var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_5))) / ((-(-6520846663112642777LL)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 32767)) ? (((/* implicit */int) (_Bool)1)) : (32747))))))) : (((/* implicit */int) var_1)))))));
    var_19 = ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_14))))), (min((((/* implicit */unsigned long long int) var_5)), (var_12)))))) ? ((-(((/* implicit */int) ((((/* implicit */_Bool) 32756)) && (((/* implicit */_Bool) (unsigned char)97))))))) : (var_3));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 23; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */short) (~(((/* implicit */int) (short)(-32767 - 1)))));
                var_21 *= ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-24)) ? (arr_1 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (short)-4961)))))) ? (max((((/* implicit */int) (unsigned char)149)), (-1))) : (((/* implicit */int) ((short) arr_0 [11ULL])))))));
            }
        } 
    } 
}
