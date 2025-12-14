/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82272
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82272 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82272
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
    var_10 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (unsigned short)9956)) ? (((/* implicit */int) (unsigned short)24735)) : (((/* implicit */int) (short)-32748)))), (((/* implicit */int) (short)-14594))));
    var_11 = ((/* implicit */unsigned short) (short)13211);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) ((((((/* implicit */_Bool) (short)14581)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (arr_4 [7LL]))) <= (((((/* implicit */long long int) ((/* implicit */int) arr_2 [10ULL]))) / (var_7)))))) : ((-(((/* implicit */int) min((var_4), (((/* implicit */short) var_9)))))))));
                var_13 = ((/* implicit */unsigned short) (((((~(arr_6 [i_0] [i_1] [i_0]))) < (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-14591)))))))) ? (((/* implicit */unsigned long long int) (~(arr_3 [i_0] [i_1])))) : ((+((-(16713383429330824063ULL)))))));
                var_14 = ((/* implicit */long long int) 18446744073709551615ULL);
                arr_8 [i_0] [i_0] = ((/* implicit */short) (+(min((((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_4))))), (((arr_4 [i_0]) - (arr_4 [i_1])))))));
            }
        } 
    } 
    var_15 = ((/* implicit */int) ((var_3) != (((((/* implicit */_Bool) ((((/* implicit */int) var_6)) % (((/* implicit */int) var_1))))) ? ((+(((/* implicit */int) (_Bool)1)))) : ((+(((/* implicit */int) var_2))))))));
    var_16 = ((/* implicit */long long int) (short)32749);
}
