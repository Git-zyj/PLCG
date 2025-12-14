/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67817
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67817 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67817
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 2; i_0 < 14; i_0 += 3) 
    {
        var_17 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0]))));
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            var_18 ^= ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_13))));
            var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) (+((~(((/* implicit */int) arr_4 [i_0 + 1] [i_1])))))))));
            arr_6 [i_0] = (unsigned short)0;
            var_20 = ((/* implicit */unsigned long long int) 9221518535327906060LL);
        }
    }
    for (unsigned int i_2 = 0; i_2 < 25; i_2 += 3) 
    {
        var_21 = ((/* implicit */signed char) max(((~((~(((/* implicit */int) var_11)))))), (((/* implicit */int) min((arr_7 [i_2] [(_Bool)1]), (arr_7 [i_2] [i_2]))))));
        var_22 = ((/* implicit */unsigned short) var_8);
        var_23 = ((/* implicit */unsigned short) var_8);
        arr_9 [20] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [19] [i_2])) ? (5177785573114289245ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_2] [i_2])))))) ? (((/* implicit */int) max((arr_7 [i_2] [i_2]), (arr_7 [i_2] [i_2])))) : ((~(((/* implicit */int) arr_7 [i_2] [i_2]))))));
    }
    var_24 = ((/* implicit */_Bool) max((var_10), (var_12)));
    var_25 = ((/* implicit */_Bool) max((max((((short) (signed char)-43)), (((/* implicit */short) var_5)))), (((/* implicit */short) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_16))))))))));
}
