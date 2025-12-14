/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58515
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58515 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58515
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        /* LoopSeq 3 */
        for (unsigned char i_1 = 3; i_1 < 12; i_1 += 1) 
        {
            var_11 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-110)) ? (((/* implicit */int) (signed char)106)) : (((/* implicit */int) arr_5 [i_1 + 1] [i_1 + 1]))))) ? (((((/* implicit */_Bool) (signed char)-125)) ? (((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_0] [3U]))) + (var_9))) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1 + 1] [i_1 + 1]))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)-47)) == (((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) arr_1 [i_0])))))))))));
            var_12 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((3231948551852185789ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)62850)))))) ? (((((/* implicit */int) arr_2 [i_0] [i_1])) + (((/* implicit */int) arr_5 [i_0] [i_0])))) : (((/* implicit */int) ((signed char) (signed char)68))))))));
            var_13 ^= ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */_Bool) 0)) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) arr_2 [i_0] [i_0])))));
            arr_6 [i_1] = var_1;
            var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) arr_4 [i_0] [10U] [i_1 + 1]))));
        }
        for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 3) 
        {
            var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) ((((/* implicit */_Bool) ((short) 784046879U))) ? (max((((/* implicit */int) (signed char)110)), (0))) : (((/* implicit */int) (signed char)-16)))))));
            var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) (unsigned char)25))));
            var_17 -= ((/* implicit */unsigned int) ((_Bool) min(((~(((/* implicit */int) (signed char)35)))), (((/* implicit */int) arr_8 [i_0] [i_2])))));
            var_18 -= ((/* implicit */unsigned short) var_6);
        }
        for (unsigned char i_3 = 1; i_3 < 11; i_3 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_4 = 3; i_4 < 11; i_4 += 1) 
            {
                var_19 = ((/* implicit */short) max((((/* implicit */unsigned long long int) 1015808U)), (18446744073709551598ULL)));
                var_20 ^= ((/* implicit */unsigned char) ((((((/* implicit */int) arr_11 [i_4])) + (2147483647))) << (((min((((/* implicit */int) arr_2 [i_3 - 1] [i_0])), (((((/* implicit */int) var_1)) << (((((/* implicit */int) arr_11 [i_4])) + (16518))))))) - (443)))));
                var_21 = ((/* implicit */unsigned char) (signed char)-120);
                var_22 = ((/* implicit */short) ((min((((/* implicit */unsigned int) arr_8 [i_3 + 1] [i_4 - 1])), (min((arr_1 [i_3 - 1]), (((/* implicit */unsigned int) var_10)))))) & (((/* implicit */unsigned int) (-(((((/* implicit */_Bool) arr_8 [i_0] [i_0])) ? (((/* implicit */int) arr_9 [i_0] [i_3] [i_4])) : (((/* implicit */int) var_2)))))))));
                arr_14 [i_4] [i_3] [(short)2] = ((/* implicit */unsigned int) (~(((/* implicit */int) min((arr_2 [i_0] [i_4]), (arr_2 [i_0] [i_4]))))));
            }
            var_23 += ((/* implicit */short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-67))) : (arr_3 [i_3]))), (((/* implicit */unsigned long long int) max((var_2), ((unsigned char)230))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_5 [(signed char)4] [i_3 - 1])) <= (((/* implicit */int) max((arr_11 [7U]), (arr_2 [i_3 - 1] [i_0])))))))) : (((((/* implicit */_Bool) arr_2 [(unsigned char)0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_3 + 2] [i_3 + 1]))) : (max((((/* implicit */unsigned long long int) var_1)), (arr_12 [i_0] [i_0] [i_3 + 2] [i_0])))))));
        }
        var_24 = ((((/* implicit */_Bool) arr_10 [(short)6] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) arr_10 [i_0] [i_0] [i_0])) : (((arr_3 [i_0]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_0]))))));
    }
    var_25 = ((/* implicit */unsigned short) var_10);
}
