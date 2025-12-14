/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91980
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91980 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91980
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
    var_15 = ((/* implicit */unsigned long long int) max(((+(((/* implicit */int) (!(((/* implicit */_Bool) 2070916152U))))))), (((/* implicit */int) var_11))));
    var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)4)) << (((var_1) + (508075390)))))) == (((unsigned long long int) (!(((/* implicit */_Bool) (short)26985))))))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 2; i_0 < 10; i_0 += 3) 
    {
        var_17 = ((/* implicit */long long int) (-(((/* implicit */int) min((arr_1 [i_0 + 3] [i_0 + 4]), (arr_1 [i_0 - 2] [i_0 - 2]))))));
        var_18 &= ((/* implicit */long long int) max((((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_9)), (arr_0 [0U])))) ? (((/* implicit */int) ((unsigned char) var_0))) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)32768)) || (((/* implicit */_Bool) arr_0 [(signed char)2]))))))), ((~(((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) || (((/* implicit */_Bool) var_6)))))))));
    }
    for (unsigned char i_1 = 2; i_1 < 22; i_1 += 4) 
    {
        /* LoopSeq 1 */
        for (signed char i_2 = 0; i_2 < 25; i_2 += 4) 
        {
            var_19 = ((/* implicit */int) max((var_19), (((((/* implicit */_Bool) ((((/* implicit */_Bool) max((2258594606U), (((/* implicit */unsigned int) arr_7 [i_1]))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-12848))))) : (arr_5 [i_1])))) ? (((/* implicit */int) ((((((/* implicit */_Bool) arr_5 [i_2])) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))) != (var_4)))) : (((/* implicit */int) min((arr_6 [i_1]), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_6 [i_1]))))))))))));
            arr_8 [i_1] [i_2] [15U] &= ((/* implicit */short) min((arr_7 [i_1]), (((/* implicit */unsigned short) (short)-26986))));
            var_20 = ((/* implicit */signed char) (short)-26986);
            /* LoopSeq 1 */
            /* vectorizable */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                var_21 = ((/* implicit */unsigned char) arr_5 [i_2]);
                var_22 = ((/* implicit */short) arr_9 [i_3] [i_3] [i_2] [i_3]);
                var_23 += ((/* implicit */signed char) ((unsigned char) (unsigned char)255));
            }
            arr_11 [i_2] [i_1] [i_1] &= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (+((-(((/* implicit */int) var_0))))))) == (((arr_4 [i_2] [i_1]) / (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-26986)))))));
        }
        var_24 = arr_5 [i_1 - 2];
    }
}
