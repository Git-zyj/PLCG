/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83561
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83561 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83561
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
    var_13 = ((/* implicit */long long int) min((min((var_8), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_11))))))), (((/* implicit */unsigned long long int) -2147483644))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (short i_1 = 1; i_1 < 13; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 12; i_2 += 4) 
            {
                {
                    var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) min((max((min((((/* implicit */long long int) var_5)), (var_1))), (((/* implicit */long long int) ((unsigned char) arr_3 [i_0]))))), (((/* implicit */long long int) var_6)))))));
                    var_15 = arr_6 [i_0];
                    var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) min(((+(((/* implicit */int) arr_5 [i_1 - 1])))), (((int) ((((/* implicit */_Bool) (short)-32171)) || (((/* implicit */_Bool) var_12))))))))));
                    arr_9 [i_2] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) arr_1 [i_1 + 2])), ((unsigned short)1726)));
                }
            } 
        } 
    } 
    var_17 *= ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) 9223372036854775807LL)), (min((((/* implicit */unsigned long long int) (unsigned short)57586)), (1802136075841800264ULL)))));
    var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) (+(((/* implicit */int) var_4)))))));
}
