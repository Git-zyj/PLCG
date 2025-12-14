/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64214
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64214 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64214
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
    var_13 *= ((/* implicit */unsigned char) var_10);
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned int) max((min((((/* implicit */unsigned long long int) arr_0 [i_0])), (min((arr_1 [i_0]), (((/* implicit */unsigned long long int) arr_0 [i_0])))))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((short) arr_1 [i_0]))), (((unsigned int) arr_1 [i_0])))))));
        var_14 = ((/* implicit */short) arr_1 [i_0]);
    }
    for (unsigned char i_1 = 0; i_1 < 19; i_1 += 3) 
    {
        var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) max((((/* implicit */unsigned int) arr_6 [i_1])), (arr_3 [i_1] [i_1]))))));
        var_16 -= ((/* implicit */signed char) max((((short) ((unsigned char) arr_3 [i_1] [i_1]))), (((/* implicit */short) ((unsigned char) arr_6 [i_1])))));
        arr_7 [i_1] = ((/* implicit */unsigned char) arr_4 [i_1]);
        /* LoopSeq 1 */
        for (unsigned char i_2 = 0; i_2 < 19; i_2 += 2) 
        {
            var_17 = ((/* implicit */int) arr_9 [i_1] [i_1] [i_1]);
            arr_10 [i_1] [i_2] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) arr_4 [i_1])), (((unsigned long long int) ((short) arr_3 [i_1] [i_2])))));
            var_18 ^= ((/* implicit */signed char) ((unsigned short) max((((unsigned int) arr_5 [i_2])), (((unsigned int) arr_3 [i_1] [i_2])))));
        }
    }
    for (int i_3 = 2; i_3 < 11; i_3 += 3) 
    {
        var_19 = ((/* implicit */_Bool) arr_4 [i_3]);
        var_20 = ((/* implicit */unsigned char) ((_Bool) arr_5 [i_3]));
        arr_15 [i_3] = ((/* implicit */unsigned long long int) arr_3 [i_3] [i_3 - 2]);
        arr_16 [i_3] = arr_5 [i_3];
    }
    var_21 = ((/* implicit */unsigned long long int) var_5);
}
