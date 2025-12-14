/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90277
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90277 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90277
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
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_2 [i_0]);
        /* LoopSeq 2 */
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            arr_6 [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_5 [i_0])) ? (arr_5 [i_1]) : (arr_5 [i_0]))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)244))))), ((unsigned char)254))))));
            arr_7 [i_0] [i_0] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)30056)) ? (arr_5 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)35)))))))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) max((arr_2 [i_1]), ((unsigned short)44885)))) : (((/* implicit */int) arr_2 [(signed char)15])))) : (((((/* implicit */int) (unsigned short)65535)) * (((/* implicit */int) (signed char)-92))))));
            var_18 = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)53431)) ? (((/* implicit */int) (unsigned short)7680)) : (((/* implicit */int) (signed char)-83))))) ^ (((((/* implicit */_Bool) arr_4 [i_0] [i_1])) ? (min((((/* implicit */unsigned long long int) (signed char)-75)), (arr_5 [i_1]))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_1])) ^ (((/* implicit */int) (signed char)75))))))));
        }
        for (unsigned char i_2 = 2; i_2 < 16; i_2 += 1) 
        {
            var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((min(((signed char)-92), ((signed char)0))), ((signed char)127)))) ? (((/* implicit */int) (unsigned char)74)) : (((/* implicit */int) arr_4 [i_2] [i_2 + 2]))));
            var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) (unsigned char)96))));
            var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) arr_2 [i_2]))) ? (((/* implicit */int) (unsigned short)57872)) : (((((/* implicit */int) (unsigned char)4)) >> (((((/* implicit */int) ((signed char) (unsigned short)36738))) + (128)))))));
            var_22 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_2])) || (((/* implicit */_Bool) ((((min((((/* implicit */int) (signed char)(-127 - 1))), (arr_8 [i_0] [i_0]))) + (2147483647))) >> (((((9079256848778919936ULL) ^ (((/* implicit */unsigned long long int) arr_9 [(unsigned char)6])))) - (9367487224616195918ULL))))))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 1) 
            {
                arr_13 [i_2] [i_2] [i_3] [i_3] = ((/* implicit */unsigned short) ((((((/* implicit */int) (unsigned short)2047)) >> (((/* implicit */int) (signed char)1)))) == (((/* implicit */int) arr_12 [i_2 + 2] [i_2 - 1] [i_2 + 1] [i_2 - 2]))));
                var_23 -= ((/* implicit */unsigned char) ((((/* implicit */int) arr_4 [i_0] [i_2 - 2])) * (((/* implicit */int) arr_4 [i_2] [i_2 - 2]))));
                var_24 = ((/* implicit */int) ((signed char) arr_0 [i_2 + 2]));
            }
            for (signed char i_4 = 0; i_4 < 19; i_4 += 4) 
            {
                arr_16 [i_0] [i_2 - 1] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)100)) >> (((/* implicit */int) (unsigned char)7))));
                arr_17 [i_0] [i_0] [i_2] [i_4] = ((((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_2 + 2] [i_2 - 2]))))) & (((/* implicit */int) ((signed char) (unsigned char)242))));
                var_25 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(arr_8 [i_0] [i_2 - 1]))))));
            }
        }
        arr_18 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-28)) ? (((/* implicit */int) (short)15)) : (((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0]))))) ? (((((/* implicit */_Bool) (signed char)75)) ? (((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0])))) : (((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_4 [i_0] [i_0]))))));
    }
    var_26 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) max((((/* implicit */unsigned short) var_11)), (var_14)))) : (((/* implicit */int) (short)-30275)))) <= ((((-(((/* implicit */int) (short)-9669)))) >> (((((/* implicit */int) var_14)) - (46059)))))));
    var_27 = ((/* implicit */int) var_2);
    /* LoopSeq 1 */
    for (signed char i_5 = 2; i_5 < 16; i_5 += 3) 
    {
        var_28 = ((/* implicit */unsigned char) arr_12 [i_5] [i_5 - 1] [(signed char)18] [i_5]);
        var_29 = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) arr_5 [i_5 + 1])) ? (arr_5 [i_5 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-20))))));
        var_30 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) min((((/* implicit */unsigned short) (signed char)1)), ((unsigned short)58717)))) >> (((/* implicit */int) ((((/* implicit */int) arr_2 [i_5])) >= (((/* implicit */int) (unsigned short)65535)))))))) ? (min((((/* implicit */unsigned long long int) (unsigned short)20661)), (268435455ULL))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_11 [(unsigned char)2] [(unsigned short)1] [i_5 - 1] [i_5])))))));
    }
}
