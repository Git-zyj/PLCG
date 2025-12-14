/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57988
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57988 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57988
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
    var_11 = ((/* implicit */long long int) max((var_11), (((/* implicit */long long int) min((var_6), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)-104))))))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (short i_1 = 1; i_1 < 15; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                for (unsigned int i_3 = 2; i_3 < 16; i_3 += 3) 
                {
                    {
                        var_12 = ((/* implicit */long long int) min((var_12), (((/* implicit */long long int) min((((((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_3 - 1])))) || (((/* implicit */_Bool) 9223372036854775799LL)))), (((((/* implicit */_Bool) arr_0 [i_1] [i_3 - 1])) || (((/* implicit */_Bool) var_9)))))))));
                        var_13 = ((/* implicit */unsigned long long int) ((min((((/* implicit */long long int) ((((/* implicit */int) arr_3 [i_0])) - (((/* implicit */int) arr_7 [i_3]))))), ((+(arr_8 [i_0] [i_1 + 1] [i_1 + 1] [i_1 + 1]))))) % (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_3 - 2])))));
                        var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) (unsigned short)65535))));
                    }
                } 
            } 
        } 
        arr_10 [i_0] [i_0] = ((/* implicit */unsigned int) (((((+(((/* implicit */int) var_9)))) > (((/* implicit */int) ((12666022736735927676ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65531)))))))) ? ((-(max((5780721336973623930ULL), (((/* implicit */unsigned long long int) arr_0 [i_0] [(short)5])))))) : (((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_0 [i_0] [i_0])) + (2147483647))) >> ((((~(((/* implicit */int) arr_0 [i_0] [12LL])))) - (28859))))))));
    }
}
