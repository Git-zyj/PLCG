/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62795
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62795 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62795
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
    var_11 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) var_6)), (var_4)))) ? (var_4) : (((/* implicit */int) ((var_4) != (var_4))))))) ? (((((/* implicit */_Bool) max((((/* implicit */int) var_9)), (var_4)))) ? (((13835058055282163712ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (var_4) : (((/* implicit */int) (signed char)-49))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) ^ (((/* implicit */int) var_3)))))));
    var_12 = ((/* implicit */signed char) var_1);
    var_13 = ((/* implicit */int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((var_0) + (((/* implicit */int) var_3))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967283U)) ? (4611686018427387880ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : ((+(var_7)))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */short) var_10);
        var_14 = ((/* implicit */signed char) (~((~(max((var_0), (((/* implicit */int) var_1))))))));
        var_15 = ((/* implicit */unsigned short) 0LL);
        var_16 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((min((((/* implicit */int) var_9)), (var_5))) > (((/* implicit */int) var_6)))))));
        var_17 -= ((/* implicit */_Bool) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)43828)) ? (((/* implicit */int) (short)26499)) : (((/* implicit */int) (signed char)87))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_2 [i_0])))) : (arr_2 [i_0])))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_7 [i_1] = ((((((/* implicit */_Bool) (~(var_10)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : ((~(arr_6 [(signed char)4] [(signed char)4]))))) % (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)21683))));
        var_18 = ((/* implicit */unsigned char) 0ULL);
        var_19 -= ((/* implicit */int) max((max((min((((/* implicit */long long int) (signed char)-34)), (arr_4 [i_1]))), (((((/* implicit */long long int) ((/* implicit */int) var_1))) ^ (var_7))))), (((/* implicit */long long int) arr_5 [i_1]))));
        var_20 += ((/* implicit */long long int) var_10);
    }
}
