/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72491
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72491 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72491
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
    var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) var_8))));
    var_19 = ((/* implicit */unsigned long long int) var_11);
    var_20 = (unsigned short)55792;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 18; i_0 += 2) 
    {
        for (long long int i_1 = 2; i_1 < 17; i_1 += 1) 
        {
            {
                var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) (+((-(arr_3 [16ULL] [i_1]))))))));
                arr_4 [i_0 - 3] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) arr_0 [i_0 - 3]))) && (((/* implicit */_Bool) arr_0 [(unsigned char)15]))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (long long int i_2 = 0; i_2 < 19; i_2 += 2) 
                {
                    var_22 *= ((/* implicit */_Bool) arr_2 [i_0 - 3]);
                    var_23 = ((/* implicit */signed char) (-(((/* implicit */int) var_12))));
                }
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 1) 
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_4 = 0; i_4 < 19; i_4 += 2) /* same iter space */
                    {
                        var_24 += ((/* implicit */long long int) ((arr_3 [i_1 + 2] [i_1 + 2]) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))));
                        arr_13 [i_3] = ((/* implicit */unsigned short) (((-(arr_5 [i_0 - 3] [i_0 - 3] [i_3]))) << ((((+(18446744073709551608ULL))) - (18446744073709551608ULL)))));
                    }
                    for (unsigned short i_5 = 0; i_5 < 19; i_5 += 2) /* same iter space */
                    {
                        var_25 |= (~(arr_3 [i_0 - 1] [i_0 - 2]));
                        var_26 = ((/* implicit */long long int) (signed char)96);
                        var_27 = ((/* implicit */unsigned long long int) max((var_27), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_5] [i_0] [i_0]))))))))));
                        var_28 = ((/* implicit */int) var_10);
                    }
                    var_29 = ((/* implicit */long long int) (((~((-2147483647 - 1)))) >= (((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_1] [i_3])))))));
                    /* LoopNest 2 */
                    for (unsigned char i_6 = 0; i_6 < 19; i_6 += 3) 
                    {
                        for (unsigned int i_7 = 1; i_7 < 18; i_7 += 1) 
                        {
                            {
                                var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_18 [i_0 - 3] [i_1] [i_3] [i_3] [i_7])) ? (((((/* implicit */_Bool) (signed char)73)) ? (arr_19 [i_0] [i_0 - 3]) : (((/* implicit */long long int) ((/* implicit */int) var_12))))) : (((/* implicit */long long int) arr_16 [i_0 - 3] [i_0 - 3] [i_3] [(signed char)12] [i_7 - 1] [i_7]))));
                                var_31 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)55792)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)99))) : (-1895975695630809337LL)))) ? (((/* implicit */unsigned long long int) arr_18 [i_7] [i_7] [i_7] [i_7 - 1] [i_0 - 1])) : (arr_0 [i_0 - 2])));
                                var_32 = ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0 - 3] [i_1 + 1])) ? (arr_3 [i_0 + 1] [i_1 + 1]) : (arr_3 [i_0 - 3] [i_1 - 1])));
                            }
                        } 
                    } 
                    arr_22 [i_0] [i_1] [i_3] = ((/* implicit */unsigned char) (~(arr_7 [i_0 + 1] [i_0 + 1])));
                }
            }
        } 
    } 
    var_33 = ((/* implicit */unsigned long long int) var_4);
}
