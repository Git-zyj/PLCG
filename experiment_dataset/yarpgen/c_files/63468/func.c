/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63468
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63468 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63468
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
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned char i_2 = 1; i_2 < 9; i_2 += 2) 
                {
                    arr_8 [i_0] = ((/* implicit */unsigned char) max((((/* implicit */int) arr_0 [i_0])), (((int) arr_7 [i_2 + 1] [i_2] [i_2 - 1] [i_2 + 2]))));
                    /* LoopSeq 1 */
                    for (short i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        var_10 = ((/* implicit */short) max((var_10), (((short) (signed char)(-127 - 1)))));
                        arr_11 [i_3] [i_2] [(unsigned char)8] [i_3] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_3]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_3]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_3])))))));
                    }
                }
                for (signed char i_4 = 2; i_4 < 7; i_4 += 2) 
                {
                    var_11 += ((/* implicit */unsigned char) max((((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_4] [i_4] [i_4 + 4])) && (((/* implicit */_Bool) arr_13 [i_4] [8] [i_4 + 2]))))), (min((31), (((/* implicit */int) (short)-32756))))));
                    arr_15 [i_0] = ((/* implicit */unsigned long long int) ((max((arr_13 [i_0] [7] [(_Bool)1]), (arr_13 [i_0] [i_0] [i_4]))) - (((arr_13 [i_0] [i_1] [i_4 + 4]) - (arr_13 [i_0] [i_1] [i_4])))));
                }
                for (unsigned short i_5 = 1; i_5 < 10; i_5 += 2) 
                {
                    var_12 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) min((((arr_10 [i_1]) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)34765))))), (arr_17 [i_0] [i_0] [i_5] [i_5 - 1])))) + (arr_14 [(short)6])));
                    arr_18 [i_0] [i_0] = ((/* implicit */unsigned char) arr_2 [i_0] [i_0]);
                    var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) -31))));
                }
                var_14 = ((/* implicit */unsigned short) (-(arr_13 [i_0] [i_0] [i_1])));
                /* LoopSeq 1 */
                /* vectorizable */
                for (signed char i_6 = 3; i_6 < 9; i_6 += 1) 
                {
                    arr_22 [i_0] = (-((+(((/* implicit */int) (signed char)127)))));
                    arr_23 [(signed char)2] [i_1] [i_6] [i_0] = ((/* implicit */short) (-(((/* implicit */int) (_Bool)1))));
                    arr_24 [i_0] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */long long int) arr_10 [i_1])) - (-3010387203032407000LL)))) ? (65535) : (((/* implicit */int) arr_19 [i_0] [i_0])));
                }
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_7 = 0; i_7 < 19; i_7 += 2) 
    {
        for (signed char i_8 = 0; i_8 < 19; i_8 += 2) 
        {
            for (signed char i_9 = 0; i_9 < 19; i_9 += 4) 
            {
                {
                    arr_33 [i_8] [i_8] [i_9] [i_8] = ((/* implicit */long long int) max((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_31 [i_7] [i_7])) ? (((/* implicit */int) (short)8191)) : (((/* implicit */int) arr_32 [13U] [i_8] [i_7] [18ULL]))))) : ((-(arr_26 [i_9] [i_7]))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_31 [(short)9] [i_8])) ? (arr_25 [i_8] [i_7]) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) ((unsigned char) arr_31 [i_8] [i_8]))) : (((/* implicit */int) arr_30 [i_7] [i_8] [i_8] [i_9])))))));
                    arr_34 [(short)7] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_25 [i_7] [i_7]) + (arr_25 [i_9] [i_7])))) ? (arr_25 [i_7] [i_7]) : (max((arr_25 [i_7] [i_8]), (arr_25 [i_7] [i_7])))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */long long int) ((((var_8) + (2147483647))) << ((((+(max((((/* implicit */unsigned long long int) (unsigned char)158)), (11980325828600133068ULL))))) - (11980325828600133068ULL)))));
    var_16 = ((short) ((unsigned short) (-(((/* implicit */int) (signed char)-1)))));
}
