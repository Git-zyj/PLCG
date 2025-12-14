/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82304
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82304 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82304
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
    var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) - (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_15))))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_7))))))))));
    var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) ((((/* implicit */int) ((short) (+(((/* implicit */int) var_0)))))) < (((/* implicit */int) var_15)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 1; i_0 < 11; i_0 += 3) 
    {
        var_19 = ((/* implicit */unsigned char) ((unsigned int) arr_0 [i_0 + 1]));
        var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) var_6))));
        var_21 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)32614))) >= (0U)));
    }
    var_22 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) min((((/* implicit */short) (_Bool)0)), ((short)-32614))))));
    /* LoopNest 3 */
    for (unsigned int i_1 = 1; i_1 < 16; i_1 += 1) 
    {
        for (unsigned int i_2 = 3; i_2 < 15; i_2 += 4) 
        {
            for (int i_3 = 3; i_3 < 17; i_3 += 4) 
            {
                {
                    var_23 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_1] [i_1])) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_3 [i_2 - 1]))))) : ((-(arr_7 [i_1] [i_1 + 2])))))) ? ((~(((/* implicit */int) ((short) -7840431664965117047LL))))) : (((int) -7840431664965117047LL))));
                    arr_9 [i_1] [i_2] [i_3] = ((/* implicit */signed char) max((((/* implicit */long long int) ((short) var_4))), (max((3826086413759378797LL), (((/* implicit */long long int) (-(((/* implicit */int) arr_2 [i_2])))))))));
                    var_24 *= ((/* implicit */signed char) ((short) ((unsigned int) (-(arr_7 [i_1] [i_2])))));
                    var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) ((unsigned int) ((_Bool) arr_4 [i_1] [i_1 + 2]))))));
                }
            } 
        } 
    } 
}
