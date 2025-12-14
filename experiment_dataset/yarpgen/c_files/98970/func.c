/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98970
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98970 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98970
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
    var_10 = ((/* implicit */_Bool) var_2);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */short) min((max((1656394820185956374ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 15605146362463575047ULL)) && (((/* implicit */_Bool) (short)25792))))))), (((/* implicit */unsigned long long int) ((short) var_1)))));
                var_11 = ((/* implicit */unsigned short) arr_4 [i_0]);
                arr_7 [i_0] [i_0] = ((/* implicit */unsigned short) arr_0 [i_0]);
                arr_8 [i_0] [i_1] = ((long long int) min((arr_2 [i_0]), (arr_2 [i_0])));
            }
        } 
    } 
    var_12 = ((/* implicit */long long int) min((var_7), (var_2)));
    var_13 |= ((/* implicit */unsigned int) ((((/* implicit */long long int) ((int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) | (15605146362463575023ULL))))) / (max((((/* implicit */long long int) var_7)), (max((12LL), (((/* implicit */long long int) (_Bool)1))))))));
    var_14 = ((/* implicit */unsigned int) (((~(((var_9) / (var_9))))) % (max(((~(var_9))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) ^ (((/* implicit */int) var_1)))))))));
}
