/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80898
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80898 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80898
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
    var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)0))))), (min((((/* implicit */unsigned int) var_3)), (var_19)))))) ? (((((var_19) >= (var_8))) ? ((~(((/* implicit */int) (unsigned short)42968)))) : ((-(var_0))))) : (((/* implicit */int) var_15))));
    var_21 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((min((var_18), (((/* implicit */long long int) var_2)))) <= (((/* implicit */long long int) var_19)))))) < (min((((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) var_15))) == (var_7)))), (((var_14) / (((/* implicit */long long int) ((/* implicit */int) (short)13547)))))))));
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            arr_6 [(unsigned short)18] [i_1] [(short)0] &= ((/* implicit */unsigned short) max((((/* implicit */int) ((268427264U) < (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))), (max((((/* implicit */int) (short)-13548)), (((((/* implicit */_Bool) (short)15)) ? (((/* implicit */int) (unsigned short)22567)) : (((/* implicit */int) (unsigned short)22554))))))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned int i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                arr_10 [i_2] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((11007780572633651263ULL) < (((/* implicit */unsigned long long int) 4294967279U))));
                arr_11 [i_0] [i_0] [8] |= ((/* implicit */long long int) 2262077449U);
            }
            for (short i_3 = 0; i_3 < 21; i_3 += 3) 
            {
                var_22 = ((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) (short)13547)) ? (arr_7 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_3] [10]))))) > (((/* implicit */long long int) arr_4 [i_0])))) ? (((/* implicit */unsigned int) ((((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (unsigned char)20)) : (2026797798))) / (((/* implicit */int) arr_8 [i_0] [i_1] [i_0] [i_3]))))) : (var_19)));
                var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) min((max((((/* implicit */unsigned int) (_Bool)0)), (((((/* implicit */_Bool) arr_13 [(unsigned char)16] [i_1] [i_3] [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_1] [i_1] [i_3]))) : (255U))))), (((/* implicit */unsigned int) min((((/* implicit */short) arr_8 [(unsigned char)17] [(unsigned short)7] [i_3] [i_3])), (max(((short)32767), (((/* implicit */short) arr_0 [i_3] [i_1]))))))))))));
                arr_14 [i_0] = ((/* implicit */unsigned short) max(((short)949), ((short)13551)));
            }
        }
        arr_15 [i_0] [i_0] = ((/* implicit */short) min(((-(((/* implicit */int) min((arr_3 [i_0]), (((/* implicit */unsigned short) (short)-13547))))))), (((((/* implicit */_Bool) ((((/* implicit */int) var_4)) | (((/* implicit */int) var_1))))) ? ((~(((/* implicit */int) arr_5 [i_0] [i_0] [i_0])))) : (((/* implicit */int) arr_0 [i_0] [i_0]))))));
    }
    for (int i_4 = 3; i_4 < 11; i_4 += 3) /* same iter space */
    {
        var_24 = ((/* implicit */unsigned long long int) min((max((((/* implicit */unsigned int) min((((/* implicit */short) (unsigned char)20)), ((short)-949)))), (((((/* implicit */_Bool) (short)949)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)13547))) : (2430441313U))))), (max((((646106828U) + (((/* implicit */unsigned int) ((/* implicit */int) (short)6727))))), (3648860467U)))));
        arr_20 [i_4] [i_4] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_5) / (((/* implicit */long long int) 3648860468U))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_4] [i_4] [i_4]))) : (var_5)))) ? ((~(((/* implicit */int) (short)-6745)))) : (((((/* implicit */_Bool) -163137000)) ? (((/* implicit */int) (short)-25627)) : (537296628)))));
        var_25 = ((/* implicit */short) ((((/* implicit */_Bool) (-(-1LL)))) ? (arr_17 [i_4]) : (min((((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_0)), (arr_7 [i_4])))), (arr_17 [i_4])))));
    }
    for (int i_5 = 3; i_5 < 11; i_5 += 3) /* same iter space */
    {
        var_26 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_5 + 2])) ? (((/* implicit */int) arr_22 [i_5 - 3])) : (((/* implicit */int) arr_8 [i_5 - 2] [i_5 - 3] [7LL] [i_5]))))) ? (((/* implicit */int) arr_3 [7])) : (arr_12 [i_5] [i_5] [i_5] [i_5])));
        var_27 = ((/* implicit */long long int) min((((/* implicit */int) ((((/* implicit */int) (short)-950)) >= (((/* implicit */int) (short)1472))))), ((+(((/* implicit */int) min(((short)-25627), (((/* implicit */short) arr_16 [i_5])))))))));
    }
    var_28 = ((/* implicit */unsigned long long int) min((var_28), (((/* implicit */unsigned long long int) (((~(min((var_0), (((/* implicit */int) (short)8235)))))) / ((((-(((/* implicit */int) var_9)))) - (((/* implicit */int) var_15)))))))));
}
