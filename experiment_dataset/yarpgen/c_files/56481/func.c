/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56481
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56481 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56481
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
    var_15 &= ((/* implicit */signed char) var_2);
    var_16 = ((/* implicit */int) var_8);
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        var_17 = ((/* implicit */_Bool) 18446744073709551615ULL);
        arr_3 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */short) arr_1 [i_0])), ((short)(-32767 - 1))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0])))))) : (((((/* implicit */_Bool) var_4)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0])))))));
    }
    for (short i_1 = 0; i_1 < 25; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_2 = 0; i_2 < 25; i_2 += 3) 
        {
            for (long long int i_3 = 0; i_3 < 25; i_3 += 1) 
            {
                {
                    arr_12 [i_1] [i_2] [i_2] [i_3] = ((/* implicit */long long int) max((4ULL), (((/* implicit */unsigned long long int) (short)32767))));
                    var_18 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_6 [i_1] [i_2])) ? (((/* implicit */int) arr_6 [i_1] [i_3])) : (((/* implicit */int) arr_6 [i_1] [i_1]))))));
                }
            } 
        } 
        var_19 = ((/* implicit */_Bool) var_12);
        var_20 = ((/* implicit */short) min(((~(((((/* implicit */_Bool) 71776119061217280ULL)) ? (arr_5 [17LL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_1] [14ULL]))))))), (((/* implicit */unsigned long long int) (short)32753))));
    }
    for (unsigned long long int i_4 = 1; i_4 < 23; i_4 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_5 = 0; i_5 < 25; i_5 += 3) 
        {
            for (unsigned long long int i_6 = 0; i_6 < 25; i_6 += 3) 
            {
                {
                    var_21 ^= ((/* implicit */long long int) (short)4);
                    /* LoopNest 2 */
                    for (signed char i_7 = 0; i_7 < 25; i_7 += 1) 
                    {
                        for (long long int i_8 = 2; i_8 < 24; i_8 += 3) 
                        {
                            {
                                arr_25 [i_4] = ((/* implicit */unsigned long long int) ((short) min((((/* implicit */unsigned long long int) var_7)), (((unsigned long long int) 1152921487426977792ULL)))));
                                var_22 = ((/* implicit */long long int) (~((-(((/* implicit */int) (unsigned char)15))))));
                            }
                        } 
                    } 
                    var_23 |= ((/* implicit */short) (unsigned char)128);
                    var_24 ^= ((/* implicit */_Bool) (((+(var_8))) >> (((/* implicit */int) ((((/* implicit */int) arr_4 [i_6])) == (((/* implicit */int) min((arr_6 [i_4] [i_6]), (((/* implicit */short) (unsigned char)128))))))))));
                }
            } 
        } 
        arr_26 [i_4] = ((/* implicit */unsigned int) (!((((-9223372036854775807LL - 1LL)) < (((((/* implicit */_Bool) arr_5 [i_4 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_4]))) : (-27LL)))))));
        /* LoopNest 2 */
        for (short i_9 = 0; i_9 < 25; i_9 += 3) 
        {
            for (unsigned char i_10 = 0; i_10 < 25; i_10 += 3) 
            {
                {
                    var_25 = ((/* implicit */signed char) arr_11 [i_9]);
                    var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) arr_23 [i_4 - 1] [2U] [i_9] [(short)19] [2U] [i_10] [i_10]))));
                    arr_32 [i_10] [i_9] [i_9] = ((/* implicit */unsigned int) 33554424LL);
                    arr_33 [i_4] [i_10] [i_10] [i_10] = (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)0))))));
                }
            } 
        } 
    }
    var_27 = ((/* implicit */unsigned int) var_11);
}
