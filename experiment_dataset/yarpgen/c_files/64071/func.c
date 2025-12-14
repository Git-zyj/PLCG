/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64071
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64071 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64071
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned int i_1 = 3; i_1 < 15; i_1 += 3) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_1] [(unsigned short)0] [i_2])) ? (min((((/* implicit */long long int) arr_4 [i_1 - 2] [i_1 - 2] [i_1] [i_2 - 1])), ((+(6665600798275617513LL))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) ((_Bool) var_3))) : ((-(((/* implicit */int) arr_0 [i_0] [(_Bool)1])))))))));
                    /* LoopSeq 1 */
                    for (short i_3 = 1; i_3 < 14; i_3 += 2) 
                    {
                        var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) ((_Bool) min((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_7 [i_3] [i_3] [i_3])))), ((-(((/* implicit */int) arr_1 [5LL]))))))))));
                        var_16 ^= ((/* implicit */unsigned short) (((+(((/* implicit */int) arr_3 [i_1 - 3])))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_1 + 1])))))));
                        var_17 = ((/* implicit */long long int) ((unsigned int) (~(max((var_3), (((/* implicit */int) var_11)))))));
                        var_18 = ((/* implicit */unsigned long long int) (~(arr_4 [i_0] [i_1 - 1] [i_3 + 2] [i_3])));
                    }
                    var_19 = ((((/* implicit */_Bool) arr_8 [(_Bool)1] [(_Bool)1] [i_1] [i_2] [i_2])) ? (max((max((((/* implicit */long long int) arr_8 [i_0] [i_1] [i_1] [i_1] [i_2])), (9220964274448435776LL))), (min(((-9223372036854775807LL - 1LL)), (var_8))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) var_5))) ? (arr_2 [i_1] [6LL] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned short) min((((/* implicit */long long int) (_Bool)1)), (((((/* implicit */long long int) ((/* implicit */int) var_11))) + (var_10)))));
}
