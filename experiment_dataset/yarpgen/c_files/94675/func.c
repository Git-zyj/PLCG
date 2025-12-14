/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94675
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94675 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94675
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
    var_20 = ((/* implicit */_Bool) var_11);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                arr_7 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -670933414462831528LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_6)) <= (((/* implicit */int) arr_5 [i_0 + 2] [i_0 + 2] [i_1])))))) : (15U)));
                var_21 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */long long int) arr_2 [i_0 + 2]))));
                var_22 &= ((/* implicit */unsigned char) ((((var_5) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 + 2]))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 + 2])))));
                var_23 = ((/* implicit */unsigned int) ((int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0 + 3]))) < (arr_3 [i_0]))));
                arr_8 [i_0 + 3] [i_1] [i_1] = ((/* implicit */signed char) 0U);
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) min((((/* implicit */long long int) max((((/* implicit */unsigned short) var_9)), (var_1)))), (max((var_15), (((/* implicit */long long int) var_16))))))) | (((var_13) & (((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) << (((var_0) + (1420865006))))))))));
    var_25 = ((/* implicit */unsigned int) ((_Bool) var_18));
}
