/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99244
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99244 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99244
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
    var_14 = ((/* implicit */unsigned long long int) ((var_7) < (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */int) var_11)), (var_6))))))))));
    var_15 &= ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)129)) ? (((/* implicit */int) (unsigned char)127)) : (((/* implicit */int) (_Bool)1))))) || (((((/* implicit */_Bool) -8408154137626759536LL)) || (((/* implicit */_Bool) var_11)))))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_2] = ((/* implicit */short) max((((((/* implicit */int) var_4)) + (((/* implicit */int) (unsigned char)127)))), (((((/* implicit */_Bool) 18149278553716838198ULL)) ? (((/* implicit */int) var_3)) : (var_6)))));
                    arr_8 [i_0] [i_1] [i_1] [(unsigned short)1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((min((var_2), (((/* implicit */unsigned long long int) var_5)))) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))))));
                    arr_9 [i_1] [i_2] = ((/* implicit */signed char) min(((short)(-32767 - 1)), ((short)-15025)));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */long long int) var_9);
    var_17 = ((/* implicit */unsigned short) var_3);
}
