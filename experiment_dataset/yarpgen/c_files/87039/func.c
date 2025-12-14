/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87039
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87039 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87039
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
    for (signed char i_0 = 3; i_0 < 11; i_0 += 2) 
    {
        arr_3 [i_0] [i_0] |= ((/* implicit */long long int) max((((/* implicit */unsigned long long int) min(((~(((/* implicit */int) (unsigned short)29817)))), (((/* implicit */int) (unsigned char)247))))), ((~(1ULL)))));
        var_10 = ((/* implicit */signed char) (+(arr_1 [i_0])));
        var_11 = ((/* implicit */unsigned int) arr_2 [i_0]);
        var_12 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)8))))), (max((arr_0 [i_0 + 2] [i_0]), (arr_0 [i_0 - 1] [i_0 - 2])))));
        arr_4 [i_0] [i_0 - 3] = ((/* implicit */_Bool) arr_1 [i_0]);
    }
    for (unsigned int i_1 = 3; i_1 < 13; i_1 += 1) 
    {
        arr_8 [i_1] = ((/* implicit */_Bool) arr_5 [i_1]);
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_2 = 1; i_2 < 13; i_2 += 2) /* same iter space */
        {
            var_13 = ((/* implicit */unsigned short) var_4);
            arr_12 [8U] [i_2] |= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_1 [i_1 - 3])) & (var_8)));
            arr_13 [i_1] [i_1] = ((/* implicit */unsigned int) arr_10 [i_2] [i_2 - 1]);
        }
        for (unsigned char i_3 = 1; i_3 < 13; i_3 += 2) /* same iter space */
        {
            var_14 = ((/* implicit */unsigned char) max((arr_0 [i_1 - 3] [i_3]), (((/* implicit */unsigned long long int) min(((unsigned char)237), (((/* implicit */unsigned char) (_Bool)1)))))));
            var_15 = ((/* implicit */short) min((max((min((arr_0 [i_1 + 1] [i_1 + 1]), (((/* implicit */unsigned long long int) arr_1 [i_3 + 1])))), (((/* implicit */unsigned long long int) arr_14 [i_3])))), (((/* implicit */unsigned long long int) max(((short)0), (((/* implicit */short) (unsigned char)3)))))));
            arr_17 [0U] &= ((/* implicit */unsigned int) min((min((11122630825334385163ULL), (((/* implicit */unsigned long long int) (unsigned char)253)))), (((/* implicit */unsigned long long int) arr_7 [13ULL]))));
        }
        var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) max((((/* implicit */long long int) max((((/* implicit */unsigned int) min((arr_7 [i_1]), (((/* implicit */int) arr_16 [i_1]))))), (min((((/* implicit */unsigned int) (unsigned char)3)), (986001217U)))))), (max((((/* implicit */long long int) min((arr_14 [i_1]), (((/* implicit */unsigned short) arr_2 [i_1]))))), (max((arr_5 [i_1]), (((/* implicit */long long int) arr_7 [i_1])))))))))));
    }
    var_17 -= ((/* implicit */_Bool) var_8);
    var_18 -= ((/* implicit */int) var_8);
    var_19 *= ((/* implicit */unsigned char) max((max((((/* implicit */unsigned long long int) max((var_4), (var_4)))), (max((var_8), (((/* implicit */unsigned long long int) var_4)))))), (min((max((((/* implicit */unsigned long long int) var_9)), (var_6))), (((/* implicit */unsigned long long int) var_7))))));
}
