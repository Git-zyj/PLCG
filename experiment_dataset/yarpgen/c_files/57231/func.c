/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57231
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57231 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57231
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
    var_19 = ((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) var_15))) | (var_1))) | (((/* implicit */long long int) ((/* implicit */int) var_10)))))) ? (((/* implicit */unsigned long long int) (~(max((var_8), (((/* implicit */unsigned int) var_15))))))) : (((((/* implicit */_Bool) (~(((/* implicit */int) var_13))))) ? (((/* implicit */unsigned long long int) min((var_0), (((/* implicit */long long int) var_13))))) : (max((18240126380660472923ULL), (var_6)))))));
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        for (unsigned char i_1 = 2; i_1 < 23; i_1 += 2) 
        {
            for (signed char i_2 = 2; i_2 < 23; i_2 += 3) 
            {
                {
                    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_8 [i_0]))))) || ((!(((/* implicit */_Bool) (-(((/* implicit */int) var_18)))))))));
                    var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-31453)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (arr_6 [i_0] [i_0] [i_2 + 1] [i_0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : ((~(var_5)))))) ? (arr_3 [18ULL]) : (((/* implicit */long long int) (~(((((/* implicit */_Bool) 1396741863U)) ? (((/* implicit */int) (signed char)50)) : (((/* implicit */int) (short)4352))))))))))));
                }
            } 
        } 
    } 
}
