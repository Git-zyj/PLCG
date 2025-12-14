/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74065
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74065 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74065
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
    var_15 = var_14;
    /* LoopSeq 1 */
    for (unsigned int i_0 = 3; i_0 < 7; i_0 += 4) 
    {
        var_16 = ((/* implicit */unsigned long long int) var_0);
        /* LoopSeq 4 */
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            var_17 -= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned short)33012)), (2047U)))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) | (arr_1 [i_1]))) : (((/* implicit */unsigned long long int) ((int) var_10))))) > (((unsigned long long int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1]))) : (var_6))))));
            var_18 = ((/* implicit */unsigned short) (~((-(((/* implicit */int) var_12))))));
        }
        for (signed char i_2 = 0; i_2 < 11; i_2 += 4) /* same iter space */
        {
            arr_7 [(signed char)1] &= ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-111)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535)))));
            arr_8 [i_2] [i_0] = ((/* implicit */signed char) (((((~(((/* implicit */int) arr_0 [i_0])))) ^ (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)4095))) != (var_3)))))) & (((/* implicit */int) var_7))));
            var_19 = var_9;
        }
        for (signed char i_3 = 0; i_3 < 11; i_3 += 4) /* same iter space */
        {
            /* LoopNest 2 */
            for (signed char i_4 = 1; i_4 < 9; i_4 += 4) 
            {
                for (int i_5 = 0; i_5 < 11; i_5 += 4) 
                {
                    {
                        var_20 = ((/* implicit */signed char) max((((((/* implicit */_Bool) 281474976710655ULL)) ? ((-(((/* implicit */int) var_11)))) : (((/* implicit */int) (!(((/* implicit */_Bool) 6487732293242475009ULL))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_0] [i_3] [i_3] [i_5]))) : (4294967295U)))) ? (((int) arr_11 [i_3] [i_4])) : (((/* implicit */int) (signed char)-112))))));
                        var_21 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((signed char) arr_10 [i_5]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))) : (min((((/* implicit */unsigned long long int) var_12)), (var_14))))), (((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) arr_1 [i_5])))))))));
                    }
                } 
            } 
            var_22 = max((((/* implicit */unsigned long long int) arr_4 [7] [i_3] [i_3])), (((((((/* implicit */_Bool) arr_1 [i_0])) || (((/* implicit */_Bool) var_12)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_4 [i_0] [i_3] [i_3])))) : (arr_11 [i_0 + 4] [i_3]))));
        }
        for (signed char i_6 = 2; i_6 < 8; i_6 += 4) 
        {
            var_23 = ((/* implicit */signed char) var_5);
            /* LoopNest 2 */
            for (unsigned int i_7 = 1; i_7 < 10; i_7 += 4) 
            {
                for (unsigned short i_8 = 0; i_8 < 11; i_8 += 4) 
                {
                    {
                        var_24 = ((/* implicit */signed char) ((unsigned short) (signed char)127));
                        var_25 = ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned short) var_14))) + (max((((((/* implicit */int) var_9)) & (((/* implicit */int) var_4)))), (((/* implicit */int) arr_23 [i_8] [i_7] [i_7 - 1] [i_6] [i_0 + 1]))))));
                        arr_25 [i_0] [i_0] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) 6013038434245079136ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_9))))) <= (((((/* implicit */_Bool) arr_2 [i_7 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0]))) : (var_3))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (5909657216304343526ULL) : (((/* implicit */unsigned long long int) arr_10 [i_6]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_12)))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) | (2147483647ULL)))))));
                    }
                } 
            } 
            var_26 = ((/* implicit */int) ((((var_13) != (var_8))) ? (max((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_0 [i_0]))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-16))) / (var_8))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_22 [i_0] [i_6] [i_0]))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_6] [i_0] [i_0] [i_0]))) | (var_6))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)52389))))))));
        }
        var_27 = ((/* implicit */unsigned short) ((unsigned int) arr_10 [i_0 + 2]));
    }
    var_28 = ((/* implicit */signed char) ((((((/* implicit */int) var_0)) + (2147483647))) << (((((((/* implicit */int) var_0)) + (42))) - (13)))));
    /* LoopNest 2 */
    for (unsigned short i_9 = 2; i_9 < 17; i_9 += 4) 
    {
        for (signed char i_10 = 1; i_10 < 17; i_10 += 4) 
        {
            {
                var_29 = ((/* implicit */signed char) ((int) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_27 [i_9])) + (2147483647))) >> (((/* implicit */int) var_7))))) ? (((unsigned long long int) var_3)) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_30 [i_9] [i_10])))))));
                var_30 -= ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)43028)) < (((int) arr_31 [i_9 - 1] [i_9 - 2] [i_9 - 2]))));
                arr_32 [(unsigned short)2] [i_10 + 1] = ((/* implicit */unsigned int) var_4);
            }
        } 
    } 
}
