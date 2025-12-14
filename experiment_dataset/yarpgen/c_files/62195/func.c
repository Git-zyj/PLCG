/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62195
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62195 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62195
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
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 13; i_1 += 2) 
        {
            for (unsigned int i_2 = 3; i_2 < 12; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 13; i_3 += 3) 
                    {
                        for (long long int i_4 = 0; i_4 < 14; i_4 += 1) 
                        {
                            {
                                var_20 = arr_6 [i_1] [i_1] [3U] [i_4];
                                arr_13 [i_0] [i_1] [i_2] [i_3 - 1] [i_4] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)(-32767 - 1)))))) ? (arr_12 [i_1] [i_1] [i_4]) : (((/* implicit */int) (short)(-32767 - 1)))));
                                arr_14 [i_0] [i_0] = ((/* implicit */short) 1720964489U);
                                arr_15 [i_0] [i_3 - 1] [i_1] [i_0] = ((((min((((((/* implicit */long long int) arr_12 [3LL] [i_1] [13])) | (arr_3 [i_0] [i_0] [i_0]))), (((/* implicit */long long int) arr_10 [i_2] [i_2 - 2] [8] [8])))) + (9223372036854775807LL))) >> (((min((-8421245805023014446LL), (((/* implicit */long long int) (_Bool)0)))) + (8421245805023014446LL))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_2 + 2])) ? (arr_0 [i_0] [i_1 - 1]) : (arr_0 [i_0] [i_2 - 1])))) ? ((~(arr_0 [i_1 + 1] [i_0]))) : ((~(((/* implicit */int) (short)-26545)))))))));
                    var_22 = ((/* implicit */int) min(((-(arr_3 [i_2 - 2] [i_1] [i_1 - 1]))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_2 - 3])) ? (-1748544039) : (-67206314))))));
                    var_23 ^= ((/* implicit */unsigned long long int) (unsigned char)0);
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */int) ((unsigned int) min((((/* implicit */unsigned int) ((1748544039) & (((/* implicit */int) var_10))))), (((((/* implicit */_Bool) 4294967282U)) ? (var_18) : (((/* implicit */unsigned int) ((/* implicit */int) var_13))))))));
    var_25 = ((/* implicit */long long int) ((((var_10) ? (((((/* implicit */_Bool) 602399752U)) ? (4294967267U) : (((/* implicit */unsigned int) 1748544038)))) : (((((/* implicit */_Bool) 4294967251U)) ? (3692567544U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-85))))))) < ((-(29U)))));
}
