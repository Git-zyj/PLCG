/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70400
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70400 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70400
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
    var_13 = ((/* implicit */unsigned short) var_12);
    var_14 = ((/* implicit */unsigned char) var_3);
    var_15 = ((((/* implicit */_Bool) ((((/* implicit */int) var_2)) % (((/* implicit */int) (short)(-32767 - 1)))))) ? (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_12))) / (-8500201055199455632LL)))) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (((1152640029630136320LL) << (((((/* implicit */int) var_2)) - (2326))))))) : (((/* implicit */long long int) ((/* implicit */int) var_4))));
    var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) var_4)) ? (min((((/* implicit */long long int) (signed char)(-127 - 1))), (-2815263630321745805LL))) : (((/* implicit */long long int) ((/* implicit */int) max((var_6), (var_1)))))))))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_17 = ((/* implicit */unsigned char) min((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)(-127 - 1)))))), ((~(((/* implicit */int) arr_1 [i_0 - 1]))))));
        var_18 = ((/* implicit */short) (+(arr_2 [i_0] [i_0 - 1])));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 1; i_1 < 9; i_1 += 3) 
    {
        var_19 -= ((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) (signed char)106)) : (((/* implicit */int) (signed char)125))));
        /* LoopSeq 2 */
        for (unsigned long long int i_2 = 1; i_2 < 10; i_2 += 3) 
        {
            arr_8 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (arr_4 [i_2 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) : (((/* implicit */int) (signed char)(-127 - 1)))));
            var_20 += ((unsigned long long int) arr_7 [i_1 + 3]);
        }
        for (unsigned long long int i_3 = 1; i_3 < 10; i_3 += 2) 
        {
            /* LoopSeq 1 */
            for (short i_4 = 0; i_4 < 12; i_4 += 2) 
            {
                var_21 -= ((/* implicit */short) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) arr_12 [i_3 - 1])) : (((/* implicit */int) arr_10 [i_1 - 1] [i_1] [i_1 + 1]))));
                var_22 = var_5;
                arr_14 [i_1 - 1] [i_1] [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_4)))))));
                arr_15 [i_1] [i_3] = ((((var_3) & (var_3))) + (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)102))))));
            }
            arr_16 [i_1] [(signed char)7] [i_1] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_3)))));
        }
        var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)65523)))))));
    }
    for (unsigned char i_5 = 3; i_5 < 7; i_5 += 3) 
    {
        arr_19 [i_5] = var_3;
        arr_20 [i_5] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)16))))), (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)16)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))) : (arr_3 [i_5 - 2])))), (((((/* implicit */_Bool) (signed char)-124)) ? (arr_0 [i_5] [(unsigned char)0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))));
        var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max(((unsigned short)65520), (((/* implicit */unsigned short) var_9))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) arr_7 [i_5 - 2])), (var_2)))) : (((/* implicit */int) arr_1 [i_5 + 4]))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_13 [(short)11] [i_5] [i_5]))))) : (((((arr_18 [i_5] [i_5]) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) max(((short)-2775), (((/* implicit */short) var_0))))))))));
    }
}
