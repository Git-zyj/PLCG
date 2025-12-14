/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78988
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78988 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78988
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
    var_12 ^= ((short) 3U);
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_9 [i_2] [i_1] [5U] [i_2]))));
                    var_14 = ((/* implicit */unsigned int) ((int) (unsigned short)30568));
                    arr_11 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) arr_6 [i_1])) == (((/* implicit */int) arr_6 [i_2]))))) | (((/* implicit */int) arr_6 [i_2]))));
                    arr_12 [i_0] [15] [i_2] [i_2] = ((/* implicit */unsigned short) max((min((((/* implicit */int) (unsigned char)246)), (-2147483636))), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)34964)))))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */unsigned char) (~(min((((((/* implicit */int) (unsigned short)5)) | (((/* implicit */int) var_7)))), (var_2)))));
}
