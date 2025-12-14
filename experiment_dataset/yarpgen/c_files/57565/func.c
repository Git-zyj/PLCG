/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57565
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57565 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57565
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
    var_17 = max((((/* implicit */signed char) (_Bool)1)), (var_2));
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((((/* implicit */int) (_Bool)0)) | (((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0])) >> (((14756827374370061480ULL) - (14756827374370061449ULL)))))) ? (((/* implicit */int) ((var_4) || (((/* implicit */_Bool) (short)32767))))) : ((~(((/* implicit */int) arr_0 [i_0])))))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) >= (((/* implicit */int) var_8))))) - (((/* implicit */int) (_Bool)1))))) ? (var_1) : ((-(arr_1 [i_0])))));
    }
    for (int i_1 = 0; i_1 < 25; i_1 += 2) /* same iter space */
    {
        arr_6 [i_1] [13LL] = ((/* implicit */_Bool) 1275243338354485683LL);
        arr_7 [1] [i_1] = ((/* implicit */long long int) arr_5 [i_1]);
        arr_8 [i_1] = (_Bool)1;
        var_18 = ((/* implicit */unsigned long long int) arr_5 [i_1]);
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 25; i_2 += 2) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) arr_11 [i_2]))));
        arr_12 [(short)3] = ((/* implicit */long long int) ((_Bool) arr_5 [i_2]));
    }
}
