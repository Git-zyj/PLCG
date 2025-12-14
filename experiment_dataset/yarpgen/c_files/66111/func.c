/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66111
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66111 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66111
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
    var_12 = ((/* implicit */unsigned char) ((_Bool) var_6));
    var_13 = ((/* implicit */short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) & (((((/* implicit */_Bool) -2776586131998737593LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_4))))) << (((/* implicit */int) (!(((/* implicit */_Bool) 2776586131998737564LL)))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (unsigned int i_1 = 3; i_1 < 20; i_1 += 2) 
        {
            for (unsigned short i_2 = 2; i_2 < 23; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) ((((((int) ((((/* implicit */_Bool) 4294967295U)) ? (-2776586131998737537LL) : (2776586131998737578LL)))) + (2147483647))) >> ((((~(((((/* implicit */_Bool) (signed char)34)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_0]))) : (arr_5 [i_0] [i_0] [i_0]))))) - (18446744073709551568ULL))))))));
                    var_15 = ((/* implicit */short) (~((~(arr_9 [i_1 - 1] [i_1] [i_1 + 1] [i_1])))));
                    arr_10 [i_0] [i_0] [i_1] = ((/* implicit */unsigned int) 2776586131998737537LL);
                }
            } 
        } 
    } 
}
