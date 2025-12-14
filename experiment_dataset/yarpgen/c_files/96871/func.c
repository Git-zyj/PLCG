/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96871
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96871 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96871
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
    var_14 = ((/* implicit */int) max((3332266463U), (((/* implicit */unsigned int) var_5))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */short) max(((((!(((/* implicit */_Bool) arr_2 [i_0] [i_0])))) ? ((-(arr_1 [i_0] [i_0]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)88)) ? (((/* implicit */int) (unsigned short)6)) : (((/* implicit */int) arr_0 [i_0]))))))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-121))))))))));
        arr_4 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [9U] [i_0])) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned short)2)), (arr_1 [i_0] [(signed char)21])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)(-127 - 1)))))) : (max((-1558736189), (((/* implicit */int) arr_2 [i_0] [i_0])))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned short) arr_2 [(signed char)4] [(signed char)4]))))))));
        arr_5 [i_0] [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) (unsigned short)65519))));
        var_15 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)65519))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned int) 33554431U)))))) : (((((/* implicit */_Bool) min(((unsigned short)32143), (arr_2 [i_0] [i_0])))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)37832)) < (((/* implicit */int) (unsigned char)47))))) : (((/* implicit */int) (unsigned char)208))))));
    }
    for (unsigned char i_1 = 3; i_1 < 16; i_1 += 1) 
    {
        /* LoopSeq 3 */
        for (signed char i_2 = 0; i_2 < 17; i_2 += 2) 
        {
            arr_11 [i_1] [i_2] [4U] = ((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) arr_8 [i_1 - 2])) : (((/* implicit */int) min((arr_8 [i_1 + 1]), (((/* implicit */unsigned short) arr_6 [i_1 - 1] [i_2]))))));
            var_16 *= ((/* implicit */short) ((((/* implicit */_Bool) min((arr_0 [(unsigned char)22]), (arr_10 [i_1 - 2] [i_2])))) ? (((((((/* implicit */int) arr_7 [i_1 - 2])) > (((/* implicit */int) (unsigned short)43440)))) ? (((/* implicit */int) arr_10 [i_1 + 1] [i_1 - 3])) : (((((/* implicit */_Bool) (unsigned char)176)) ? (((/* implicit */int) (unsigned short)65518)) : (((/* implicit */int) arr_0 [i_2])))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_1])))))));
            arr_12 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) arr_1 [i_2] [i_1 - 1]);
            arr_13 [i_2] [i_2] = ((/* implicit */unsigned int) arr_8 [i_1]);
            arr_14 [i_1] = (-(((((/* implicit */_Bool) arr_0 [i_1 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_6 [i_1] [i_2]), (arr_6 [i_1 - 2] [i_1 - 2]))))) : (arr_1 [5U] [5U]))));
        }
        /* vectorizable */
        for (unsigned int i_3 = 0; i_3 < 17; i_3 += 4) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_4 = 1; i_4 < 16; i_4 += 2) 
            {
                arr_21 [i_4] [i_4] [i_4] = ((/* implicit */unsigned char) arr_1 [i_4 - 1] [i_1 + 1]);
                var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_16 [i_1 - 3] [i_1 - 3] [i_4 + 1])) ? (((/* implicit */int) arr_16 [i_1 - 2] [i_3] [i_4 - 1])) : (((/* implicit */int) (unsigned char)245)))))));
            }
            arr_22 [i_1 - 3] [i_1] = ((/* implicit */unsigned char) ((unsigned int) (unsigned short)32512));
            arr_23 [(unsigned char)12] [i_1] = arr_2 [i_1 - 3] [i_1 + 1];
            var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_20 [i_3])) ? (((/* implicit */int) arr_0 [i_1])) : (((((/* implicit */_Bool) arr_15 [16U] [i_1 - 1])) ? (((/* implicit */int) arr_19 [i_3] [i_3] [i_3] [(unsigned char)14])) : (((/* implicit */int) (unsigned short)17876))))));
        }
        for (unsigned char i_5 = 0; i_5 < 17; i_5 += 4) 
        {
            var_19 = ((((/* implicit */_Bool) max((((((/* implicit */_Bool) 4464211500366725742ULL)) ? (((/* implicit */int) arr_8 [i_1])) : (((/* implicit */int) arr_24 [i_5])))), (((/* implicit */int) max((arr_0 [i_5]), ((unsigned short)65535))))))) ? (((((((/* implicit */_Bool) arr_17 [i_5])) ? (((/* implicit */int) (signed char)17)) : (((/* implicit */int) arr_2 [i_1] [(unsigned char)8])))) >> ((((-(arr_1 [i_1] [(signed char)9]))) - (11899958199219221060ULL))))) : ((+(((/* implicit */int) arr_7 [i_1 + 1])))));
            var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_1 - 2])) ? (((/* implicit */int) arr_24 [i_1 - 3])) : (((/* implicit */int) (unsigned short)65512))))) ? (((((/* implicit */_Bool) arr_24 [i_1 - 3])) ? (((/* implicit */int) arr_16 [i_1 - 2] [i_1 - 3] [i_1 + 1])) : (((/* implicit */int) arr_24 [i_1 - 2])))) : (((/* implicit */int) arr_24 [i_1 - 2]))));
        }
        arr_26 [i_1] = ((/* implicit */unsigned long long int) arr_6 [i_1 - 2] [i_1]);
        var_21 += ((/* implicit */unsigned char) arr_9 [i_1]);
        var_22 = ((/* implicit */unsigned int) arr_19 [i_1 - 3] [(signed char)16] [(signed char)16] [10]);
    }
}
