/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85391
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85391 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85391
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
    var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) 7060665320971099402ULL))));
    var_15 = ((/* implicit */unsigned short) max((((/* implicit */int) var_5)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_4))))) ? (((/* implicit */int) ((_Bool) var_8))) : (((/* implicit */int) var_7))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    var_16 += ((/* implicit */unsigned short) ((int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned char)224)), (var_3)))))));
                    var_17 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 16739642229198892847ULL)) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) max((((/* implicit */long long int) arr_4 [i_2])), (arr_5 [i_0] [i_0] [i_0] [i_2])))))) : ((~(((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_2]))) | (var_3)))))));
                }
            } 
        } 
    } 
    var_18 &= ((/* implicit */unsigned int) var_2);
}
