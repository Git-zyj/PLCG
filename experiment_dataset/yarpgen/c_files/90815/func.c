/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90815
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90815 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90815
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
    var_20 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) (signed char)35)) * (((/* implicit */int) (signed char)-36)))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        var_21 &= ((/* implicit */_Bool) ((((/* implicit */int) var_7)) + (((/* implicit */int) var_13))));
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            var_22 = ((/* implicit */unsigned char) arr_0 [i_0]);
            var_23 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_1 [i_0]))));
            var_24 += ((/* implicit */signed char) arr_2 [i_0]);
        }
        arr_6 [i_0] = ((/* implicit */short) ((((/* implicit */int) arr_1 [i_0])) | (((/* implicit */int) ((arr_4 [i_0] [i_0]) || (((/* implicit */_Bool) (signed char)114)))))));
    }
    for (unsigned char i_2 = 1; i_2 < 23; i_2 += 4) 
    {
        arr_10 [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-36)) && (((/* implicit */_Bool) (signed char)(-127 - 1)))));
        var_25 = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_7 [i_2])) / (((/* implicit */int) arr_7 [i_2])))) - (((/* implicit */int) arr_7 [i_2]))));
    }
    for (signed char i_3 = 0; i_3 < 10; i_3 += 4) 
    {
        arr_13 [i_3] = ((/* implicit */unsigned long long int) arr_2 [i_3]);
        var_26 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */signed char) arr_4 [i_3] [i_3])), (arr_3 [i_3] [i_3]))))) > ((-((-(var_1)))))));
        arr_14 [i_3] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) (~(arr_0 [i_3])))))) || (((/* implicit */_Bool) arr_3 [i_3] [i_3]))));
    }
    for (unsigned short i_4 = 0; i_4 < 12; i_4 += 4) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_5 = 1; i_5 < 9; i_5 += 4) 
        {
            var_27 += ((((/* implicit */_Bool) (unsigned short)3100)) ? (2147483647LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))));
            var_28 += ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-19)))))));
            var_29 = ((/* implicit */unsigned long long int) 953460267602681650LL);
        }
        arr_22 [i_4] = ((/* implicit */unsigned int) (((+(var_19))) >= (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_12)) - (((/* implicit */int) arr_4 [i_4] [i_4]))))))))));
    }
    var_30 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_2)))) / ((-(var_17)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (var_11)));
    var_31 -= ((/* implicit */short) ((((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)127))))) | (((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned int) ((((((/* implicit */int) var_8)) + (2147483647))) << (((((((/* implicit */int) (signed char)-46)) + (72))) - (26)))))) : (var_5)))));
    var_32 -= var_3;
}
