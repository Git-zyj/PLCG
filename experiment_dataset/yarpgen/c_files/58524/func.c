/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58524
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58524 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58524
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
    var_12 = ((/* implicit */unsigned int) (~(((/* implicit */int) var_11))));
    var_13 = ((/* implicit */unsigned char) ((var_3) < (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-53)) ? (var_8) : (var_8)))) ? (var_10) : (((/* implicit */int) ((((/* implicit */unsigned long long int) -1983549450)) <= (3789478387982074595ULL))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        arr_2 [i_0] [(unsigned short)14] &= ((/* implicit */unsigned int) var_7);
        /* LoopSeq 4 */
        for (unsigned long long int i_1 = 4; i_1 < 21; i_1 += 2) /* same iter space */
        {
            arr_6 [i_0] = ((/* implicit */short) (unsigned char)254);
            arr_7 [i_1] [i_0] [i_0] = (i_0 % 2 == zero) ? (((/* implicit */unsigned int) ((((((/* implicit */_Bool) (short)-30309)) ? (1894526659) : (((/* implicit */int) var_11)))) | (((arr_4 [i_0] [i_1] [i_0]) << (((((((/* implicit */int) var_11)) + (25000))) - (22)))))))) : (((/* implicit */unsigned int) ((((((/* implicit */_Bool) (short)-30309)) ? (1894526659) : (((/* implicit */int) var_11)))) | (((((arr_4 [i_0] [i_1] [i_0]) + (2147483647))) << (((((((/* implicit */int) var_11)) + (25000))) - (22))))))));
            var_14 = ((-1894526633) / (((/* implicit */int) arr_3 [i_0] [i_0])));
        }
        for (unsigned long long int i_2 = 4; i_2 < 21; i_2 += 2) /* same iter space */
        {
            var_15 = (!(((/* implicit */_Bool) 1894526652)));
            arr_10 [i_0] [i_2] [i_0] &= ((/* implicit */_Bool) (-(((/* implicit */int) ((-1894526651) >= (var_9))))));
            var_16 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_0 [i_0] [i_2 - 3]))));
        }
        for (unsigned long long int i_3 = 4; i_3 < 21; i_3 += 2) /* same iter space */
        {
            var_17 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_3 [i_0] [i_3 - 4])) / (((/* implicit */int) arr_3 [i_0] [i_3 - 3]))));
            var_18 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) -1894526640))));
            arr_13 [i_3] [i_0] [i_0] = ((/* implicit */short) ((1894526635) << (((((-5492658795071685810LL) + (5492658795071685831LL))) - (21LL)))));
            arr_14 [i_0] [i_0] [i_3] = ((/* implicit */unsigned short) (~((-(var_10)))));
            arr_15 [i_0] [i_3] = ((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) ((_Bool) 3433028068540293806ULL))) : (((((/* implicit */_Bool) (unsigned char)239)) ? (((/* implicit */int) (unsigned char)104)) : (var_8)))));
        }
        for (long long int i_4 = 2; i_4 < 21; i_4 += 4) 
        {
            var_19 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2448905210U)) ? (((/* implicit */int) arr_12 [i_4 - 2] [i_4 - 2])) : (arr_4 [i_4] [i_4 - 2] [(short)6])));
            arr_20 [i_0] [i_4 - 1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_8 [i_4 - 1] [i_4 - 2] [i_4])) ? (15013716005169257819ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_4 - 1] [i_4 - 2] [i_4])))));
        }
        arr_21 [i_0] = ((/* implicit */long long int) ((((((/* implicit */int) var_2)) + (2147483647))) >> (((arr_16 [i_0] [10U] [i_0]) + (1856268197)))));
        arr_22 [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned short)59899)) : (((/* implicit */int) arr_1 [i_0])))) << ((((~(var_0))) + (2392596536442224648LL)))));
    }
}
