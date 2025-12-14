/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66739
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66739 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66739
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
    for (unsigned long long int i_0 = 2; i_0 < 12; i_0 += 4) 
    {
        var_20 = ((/* implicit */int) ((_Bool) -597927975));
        var_21 += ((/* implicit */unsigned short) max((((/* implicit */long long int) ((-597927982) == (597927983)))), ((+(arr_1 [i_0 + 1] [i_0 + 1])))));
        var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? ((-(((/* implicit */int) arr_0 [i_0 - 2])))) : (((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) arr_0 [i_0 - 1])))))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 4) 
    {
        arr_5 [i_1] = ((/* implicit */unsigned short) ((signed char) ((unsigned short) arr_4 [i_1] [i_1])));
        var_23 = ((/* implicit */long long int) (-(min((max((((/* implicit */unsigned int) var_11)), (var_7))), (((/* implicit */unsigned int) ((((/* implicit */int) var_9)) - (((/* implicit */int) (_Bool)1)))))))));
        var_24 += ((/* implicit */short) ((((((/* implicit */_Bool) arr_4 [i_1] [i_1])) || (((/* implicit */_Bool) arr_4 [i_1] [i_1])))) ? (((((/* implicit */_Bool) ((unsigned short) arr_4 [i_1] [i_1]))) ? ((~(var_3))) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)102)) == (-597927988)))))) : (((int) arr_4 [i_1] [i_1]))));
    }
    var_25 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_2))));
    var_26 = ((/* implicit */unsigned char) (_Bool)1);
    var_27 += ((/* implicit */signed char) var_9);
}
