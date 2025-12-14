/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81639
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81639 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81639
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
    var_20 |= ((/* implicit */short) var_9);
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 2097151)), (10ULL)))) ? (max((arr_3 [i_0]), (arr_2 [i_0] [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) var_4))))) - (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0] [i_0]))))))));
        arr_5 [i_0] = ((/* implicit */unsigned char) max(((-2147483647 - 1)), (((/* implicit */int) (signed char)-66))));
        var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) ((((((/* implicit */int) arr_0 [(unsigned short)0])) | (((/* implicit */int) arr_1 [10LL])))) / ((-(((/* implicit */int) arr_1 [(short)4])))))))));
    }
    for (short i_1 = 0; i_1 < 10; i_1 += 3) 
    {
        var_22 += ((/* implicit */signed char) 6967065555423702048ULL);
        arr_10 [i_1] [(unsigned char)5] = var_5;
        var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) (_Bool)1))));
    }
}
