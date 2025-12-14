/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57033
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57033 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57033
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (unsigned short i_1 = 2; i_1 < 20; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [(unsigned char)9] [i_1 + 2] [i_1 + 2] = var_2;
                    var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_4)), (var_7)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_1 + 2] [i_2]))) : (max((var_4), (((/* implicit */long long int) var_5)))))) & (((/* implicit */long long int) ((/* implicit */int) ((signed char) ((arr_7 [19] [i_1] [i_1] [i_2]) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned short)7792)))))))))))));
                    arr_9 [i_0] [i_1 - 2] [i_1] [i_2] |= ((/* implicit */unsigned long long int) (~(min((arr_7 [13ULL] [13ULL] [i_0] [i_1 - 1]), (((/* implicit */long long int) (-(arr_4 [i_0] [i_1] [i_2]))))))));
                    arr_10 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) (-(var_1)));
                    var_21 = ((/* implicit */long long int) arr_6 [i_0] [i_1] [i_2] [i_2]);
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned short) var_2);
}
