/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69278
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69278 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69278
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
    var_17 = ((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) var_15)))) ? (((/* implicit */int) ((var_7) >= (((/* implicit */long long int) ((/* implicit */int) (short)12945)))))) : (((/* implicit */int) min(((signed char)116), ((signed char)(-127 - 1))))))) - (((((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (signed char)-117)) : (((/* implicit */int) (signed char)121)))) % ((+(((/* implicit */int) (signed char)-117))))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 3; i_0 < 16; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            arr_4 [i_1] = ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? ((~(max((((/* implicit */unsigned long long int) (signed char)14)), (arr_0 [i_0]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0 - 1]))) : (max((arr_3 [11]), (1779216440U)))))));
            arr_5 [i_1] [(short)7] [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((4130569750U) & (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1))))))) ? (((((/* implicit */int) arr_2 [i_0])) + (((/* implicit */int) arr_1 [i_1])))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))))) * (((int) ((((/* implicit */_Bool) (signed char)122)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [(short)3])))))));
        }
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_2 = 0; i_2 < 17; i_2 += 2) 
        {
            arr_9 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */int) arr_6 [i_0 - 2])) - (((/* implicit */int) arr_6 [i_0 - 3]))));
            arr_10 [i_0] = ((/* implicit */short) ((signed char) (signed char)22));
            arr_11 [i_0] [i_0] = ((/* implicit */short) (~(((/* implicit */int) arr_7 [i_0] [i_0 - 2]))));
        }
        for (unsigned int i_3 = 3; i_3 < 14; i_3 += 4) 
        {
            arr_16 [i_0] = ((/* implicit */short) arr_0 [i_3]);
            arr_17 [i_0] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((((/* implicit */int) arr_14 [i_0] [i_3] [i_3])) > (((/* implicit */int) arr_14 [i_0 - 3] [i_3] [i_0])))) ? ((~(((/* implicit */int) (signed char)-123)))) : (((/* implicit */int) arr_13 [i_0])))))));
            arr_18 [8ULL] [i_0] [i_0] = max((arr_0 [i_0 - 3]), (((/* implicit */unsigned long long int) var_5)));
            arr_19 [i_0] [i_3] [i_3 - 2] = ((/* implicit */int) min((((arr_0 [i_3 - 3]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_3 + 3])) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) min(((short)20623), (arr_13 [(unsigned short)11])))))))));
        }
        arr_20 [i_0 - 2] = ((/* implicit */short) max((((/* implicit */unsigned long long int) arr_15 [i_0] [(short)6])), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446743798831644672ULL)) ? (((/* implicit */int) (short)-16604)) : (((/* implicit */int) (signed char)-122))))) ? ((~(arr_0 [i_0 + 1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0 + 1]))))))))));
        arr_21 [i_0] = ((/* implicit */_Bool) ((unsigned char) var_7));
    }
}
