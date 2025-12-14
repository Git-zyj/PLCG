/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82614
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82614 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82614
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
    var_12 = ((/* implicit */short) var_11);
    /* LoopSeq 4 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0] [4]))))) : (((/* implicit */int) max((((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) (short)3840)))), (((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) (short)3835)))))))));
        arr_2 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) ((unsigned short) var_8)))))) && (((/* implicit */_Bool) (+(((unsigned long long int) (short)-3835)))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) ((((/* implicit */unsigned long long int) (-(((arr_5 [i_1]) + (((/* implicit */long long int) ((/* implicit */int) (signed char)-62)))))))) + ((~(((var_11) + (((/* implicit */unsigned long long int) -1033181172428701804LL)))))))))));
        var_15 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) min((arr_4 [i_1] [i_1]), (max((var_2), (arr_4 [i_1] [i_1]))))))) | (((arr_5 [i_1]) / (arr_5 [i_1])))));
        var_16 = ((/* implicit */signed char) max((((/* implicit */short) ((((/* implicit */_Bool) arr_4 [i_1] [7U])) || (((/* implicit */_Bool) arr_4 [i_1] [(signed char)4]))))), (((short) arr_4 [i_1] [i_1]))));
    }
    for (short i_2 = 2; i_2 < 21; i_2 += 1) 
    {
        var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((max((var_7), (((/* implicit */unsigned long long int) arr_6 [i_2] [(signed char)16])))) | (arr_7 [i_2 - 2])))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_3 [7LL] [i_2 - 2]))) + ((+(arr_5 [i_2]))))) : ((~(arr_5 [i_2 - 2])))));
        var_18 ^= ((/* implicit */unsigned int) var_3);
    }
    for (short i_3 = 0; i_3 < 16; i_3 += 4) 
    {
        arr_12 [i_3] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-((+(((/* implicit */int) (signed char)122))))))) ? (((/* implicit */int) ((unsigned char) var_8))) : (((((/* implicit */int) ((((/* implicit */int) arr_9 [(signed char)12])) > (((/* implicit */int) var_9))))) / (((/* implicit */int) (short)-1))))));
        var_19 = ((/* implicit */_Bool) var_9);
    }
}
