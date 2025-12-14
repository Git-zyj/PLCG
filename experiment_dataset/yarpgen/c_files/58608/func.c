/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58608
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58608 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58608
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
    var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) (short)(-32767 - 1)))));
    var_14 = ((/* implicit */unsigned char) (_Bool)0);
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) arr_1 [i_0] [i_0]))) ? (((((((/* implicit */_Bool) 1746092113096293597LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (1746092113096293597LL))) << (((min((var_11), (arr_1 [i_0] [i_0]))) + (1792531346033830778LL))))) : ((~(arr_1 [i_0] [i_0]))))))));
        var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) max(((+(max((((/* implicit */unsigned long long int) (signed char)75)), (var_12))))), (((/* implicit */unsigned long long int) (-(6563924183445595219LL)))))))));
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            /* LoopSeq 1 */
            for (long long int i_2 = 1; i_2 < 11; i_2 += 1) 
            {
                arr_6 [i_0] = ((/* implicit */unsigned long long int) 0LL);
                var_17 *= ((/* implicit */_Bool) min((min((((((/* implicit */_Bool) (unsigned char)114)) ? (18446744073709551612ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))), (((/* implicit */unsigned long long int) arr_0 [i_2])))), (((/* implicit */unsigned long long int) min((arr_4 [i_1]), (((/* implicit */unsigned int) (unsigned char)125)))))));
                var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-32703)) || (((/* implicit */_Bool) ((int) 9223372036854775807LL)))));
                var_19 = ((/* implicit */unsigned long long int) (~((+(5047607120136544658LL)))));
                var_20 &= ((/* implicit */int) ((((/* implicit */_Bool) var_7)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_1] [i_2 - 1] [i_1]))) < (((unsigned long long int) 0LL))))))));
            }
            /* LoopSeq 1 */
            for (int i_3 = 1; i_3 < 10; i_3 += 3) 
            {
                arr_9 [i_0] [i_1] [i_3 - 1] [i_3 + 1] = ((/* implicit */unsigned char) var_9);
                var_21 = ((/* implicit */short) min((-9202217770514751045LL), (max((-1LL), (((/* implicit */long long int) arr_2 [i_3 + 2] [i_3]))))));
                var_22 = ((/* implicit */long long int) min(((-(((/* implicit */int) (_Bool)1)))), (((((/* implicit */_Bool) arr_5 [i_3] [i_3 + 2] [i_3 + 2] [i_0])) ? (((/* implicit */int) arr_5 [i_3 - 1] [i_3 + 2] [i_3 + 2] [i_0])) : (((/* implicit */int) arr_5 [i_3] [i_3 + 2] [i_3 + 2] [(unsigned short)8]))))));
            }
        }
        var_23 = ((/* implicit */_Bool) ((((_Bool) (unsigned char)40)) ? ((-(((arr_2 [i_0] [(short)5]) + (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))) : (2983256224U)));
    }
    var_24 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_4))));
}
