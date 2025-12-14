/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90897
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90897 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90897
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
    for (long long int i_0 = 1; i_0 < 22; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                {
                    arr_8 [i_1] [i_1] [i_1] [0LL] = ((long long int) ((((/* implicit */_Bool) var_2)) && (((((/* implicit */_Bool) arr_3 [i_1] [i_1])) || (((/* implicit */_Bool) var_0))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (long long int i_3 = 3; i_3 < 21; i_3 += 3) 
                    {
                        var_10 += ((/* implicit */unsigned char) 8779501146904806134LL);
                        /* LoopSeq 2 */
                        for (long long int i_4 = 0; i_4 < 23; i_4 += 1) 
                        {
                            var_11 |= ((/* implicit */long long int) arr_1 [i_2]);
                            arr_14 [i_1] [19ULL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) ((((/* implicit */_Bool) 0ULL)) || (((/* implicit */_Bool) var_0))))) : (((/* implicit */int) ((var_1) <= (-8779501146904806134LL))))));
                            var_12 = ((/* implicit */unsigned long long int) max((var_12), (arr_7 [(unsigned char)12])));
                        }
                        for (long long int i_5 = 0; i_5 < 23; i_5 += 2) 
                        {
                            var_13 -= ((/* implicit */unsigned char) (((~(7864328607114146364LL))) != (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_3))))));
                            var_14 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)23))) + (arr_17 [i_1] [i_0 + 1] [i_0 + 1] [i_1])));
                            var_15 = arr_17 [i_1] [i_1] [i_1] [i_1];
                        }
                        arr_18 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_12 [i_3 - 3] [i_1] [i_2] [i_1] [i_0]))))) && (((/* implicit */_Bool) ((unsigned char) (unsigned char)16)))));
                        var_16 *= ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)255)))))) < ((~(67108863LL)))));
                    }
                    for (unsigned char i_6 = 4; i_6 < 21; i_6 += 2) 
                    {
                        var_17 += ((/* implicit */unsigned long long int) max((var_7), (((unsigned char) arr_1 [i_0 + 1]))));
                        arr_21 [i_0] [i_0] [i_1] [i_1] [i_2] [i_6] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) var_1)) > (arr_10 [i_0 + 1] [i_1] [(unsigned char)19] [(unsigned char)19]))) ? (((/* implicit */long long int) ((/* implicit */int) min(((unsigned char)1), ((unsigned char)151))))) : (arr_13 [i_0] [i_1] [i_2] [i_2] [i_2] [i_6]))))));
                    }
                    var_18 = ((/* implicit */unsigned long long int) var_2);
                }
            } 
        } 
    } 
    var_19 |= var_4;
    var_20 = ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) (~(var_1)))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) + ((~(18446744073709551615ULL))))));
}
