/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93987
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93987 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93987
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
    var_12 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */_Bool) (~(var_9)))) && (((/* implicit */_Bool) min((var_10), (((/* implicit */unsigned short) var_5))))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (int i_1 = 3; i_1 < 12; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                {
                    var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((6ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_5), (((/* implicit */short) (unsigned char)124))))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) 17799663271414936608ULL)))) : ((+((+(9ULL)))))));
                    var_14 ^= ((/* implicit */short) ((((arr_4 [i_0] [i_2] [(unsigned short)6] [(unsigned short)6]) >= (arr_4 [i_0] [(signed char)12] [10ULL] [i_2]))) ? (max((arr_4 [i_0] [(_Bool)1] [i_1] [(short)8]), (arr_4 [i_2] [(signed char)6] [(signed char)4] [i_0]))) : ((-(18446744073709551592ULL)))));
                    var_15 = ((/* implicit */unsigned char) ((_Bool) -1330549803));
                    arr_8 [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) (!((_Bool)1)));
                    arr_9 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) var_3)) % (((/* implicit */int) ((arr_0 [i_1 + 3]) && (((/* implicit */_Bool) var_2)))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) (-((-(((/* implicit */int) var_2)))))))));
    var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((max((((/* implicit */unsigned long long int) var_10)), (18446744073709551592ULL))) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_10)) != (((/* implicit */int) (_Bool)0))))))))))))));
    var_18 = ((/* implicit */signed char) var_1);
}
