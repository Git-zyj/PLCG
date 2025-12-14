/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82353
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82353 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82353
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
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        /* LoopSeq 4 */
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 4) /* same iter space */
        {
            var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_1])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned char)0)))))));
            var_16 = ((/* implicit */short) ((((/* implicit */int) arr_3 [i_0] [i_1])) | (((/* implicit */int) var_14))));
            arr_5 [24] [i_0] = ((/* implicit */short) ((((/* implicit */int) var_9)) > (((/* implicit */int) (unsigned char)255))));
        }
        for (unsigned short i_2 = 0; i_2 < 25; i_2 += 4) /* same iter space */
        {
            var_17 *= ((/* implicit */unsigned long long int) (+((~(((/* implicit */int) (unsigned char)255))))));
            var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_0])) ^ (((/* implicit */int) arr_0 [i_0])))))));
            var_19 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_7 [i_0])) : (0)))));
            var_20 = ((/* implicit */unsigned short) 0);
            arr_8 [i_2] [(unsigned short)15] [(short)24] = ((18446744073709551615ULL) & (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (unsigned short)65524))))));
        }
        for (int i_3 = 0; i_3 < 25; i_3 += 3) /* same iter space */
        {
            arr_11 [i_0] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_10 [i_3])) ? (arr_6 [i_0] [7ULL] [4U]) : (((/* implicit */long long int) ((/* implicit */int) var_5)))));
            arr_12 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_6 [i_0] [i_3] [i_3])) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) : (23ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)112)))));
            var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) var_14))));
            /* LoopSeq 1 */
            for (signed char i_4 = 1; i_4 < 22; i_4 += 3) 
            {
                var_22 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) % (arr_14 [i_0] [i_3] [i_4 + 1] [i_0])));
                var_23 *= ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_15 [i_4 + 1] [1LL] [1LL])) ? (((/* implicit */int) (unsigned char)224)) : (((/* implicit */int) arr_1 [i_0]))))));
            }
        }
        for (int i_5 = 0; i_5 < 25; i_5 += 3) /* same iter space */
        {
            arr_20 [4U] |= ((/* implicit */unsigned int) (+((-(2305843004918726656LL)))));
            var_24 *= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_10)))) * (0U)));
        }
        arr_21 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)0)) < (((/* implicit */int) (unsigned short)48))));
        var_25 = ((/* implicit */signed char) ((unsigned long long int) arr_17 [i_0] [i_0]));
    }
    var_26 += ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) var_10)) : (var_13))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (short)-1)))))))) ? (var_10) : (((/* implicit */int) max((var_5), (var_6))))));
    var_27 += ((((/* implicit */_Bool) (((-(((/* implicit */int) var_2)))) | ((-(((/* implicit */int) (unsigned short)13))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned short)65535), (((/* implicit */unsigned short) (unsigned char)247)))))) : (((unsigned int) var_9)));
}
