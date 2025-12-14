/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77677
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77677 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77677
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
    var_10 = ((/* implicit */signed char) var_1);
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (short i_1 = 2; i_1 < 9; i_1 += 3) 
        {
            for (unsigned int i_2 = 2; i_2 < 9; i_2 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned int i_3 = 1; i_3 < 9; i_3 += 3) 
                    {
                        arr_12 [i_3] [i_1 + 1] [i_3] [i_1 + 1] [i_1 - 2] [i_1 + 1] = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) max(((short)-23375), (((/* implicit */short) (_Bool)1)))))) < (-9223372036854775790LL)));
                        var_11 = ((/* implicit */signed char) arr_5 [i_0] [i_0] [i_0]);
                        arr_13 [i_3] = ((/* implicit */_Bool) min(((-(((/* implicit */int) arr_2 [i_2 - 1])))), ((~(((/* implicit */int) arr_7 [i_3 + 1] [i_2 - 1] [i_0]))))));
                    }
                    for (int i_4 = 0; i_4 < 10; i_4 += 4) 
                    {
                        var_12 = ((/* implicit */int) max((var_12), (((/* implicit */int) arr_8 [i_0] [(short)8] [i_2 + 1]))));
                        var_13 ^= ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_16 [i_0] [(short)4] [i_1] [(unsigned char)5] [i_2 + 1] [(short)4])) || ((!(((/* implicit */_Bool) arr_5 [i_1] [1ULL] [i_1 - 1]))))))), (max(((+(var_9))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_2 [i_0])))))))));
                        /* LoopSeq 3 */
                        for (unsigned char i_5 = 2; i_5 < 8; i_5 += 3) /* same iter space */
                        {
                            var_14 += ((/* implicit */unsigned short) -9223372036854775790LL);
                            var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(arr_17 [i_1 - 2] [i_1 - 2] [i_1 - 2] [i_1 - 2] [i_2 - 2] [i_2 + 1] [i_5 + 2])))) || (((/* implicit */_Bool) max(((~(var_0))), ((+(arr_17 [i_2 + 1] [i_1] [i_0] [i_0] [i_5 - 1] [i_5] [i_5 + 2]))))))));
                        }
                        for (unsigned char i_6 = 2; i_6 < 8; i_6 += 3) /* same iter space */
                        {
                            arr_22 [i_0] [i_1] [i_0] [i_0] [i_6] = ((/* implicit */_Bool) min((((long long int) 9223372036854775779LL)), (((long long int) 4294967295U))));
                            var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) arr_16 [i_6 + 1] [i_4] [i_0] [i_1 - 1] [i_0] [i_0]))));
                        }
                        for (unsigned char i_7 = 2; i_7 < 8; i_7 += 3) /* same iter space */
                        {
                            var_17 = ((/* implicit */signed char) arr_9 [i_7] [i_1] [i_1]);
                            arr_25 [(signed char)0] [i_1] [i_1] [i_1] [i_7 + 2] [i_7] = ((/* implicit */unsigned long long int) arr_24 [i_0] [i_7] [i_2 - 2] [i_4] [i_7]);
                        }
                        arr_26 [i_0] [i_0] [i_2 - 2] [i_4] [i_4] [i_1 - 1] = ((/* implicit */short) max((max((((/* implicit */unsigned long long int) max((((/* implicit */long long int) (_Bool)1)), (arr_16 [i_0] [i_1 - 2] [0LL] [i_4] [i_1] [(signed char)2])))), (((unsigned long long int) arr_8 [i_0] [i_0] [i_0])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_21 [i_4] [i_2] [i_1] [i_0])) ? ((~(((/* implicit */int) arr_7 [(signed char)8] [i_1] [i_4])))) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-19))))))))));
                    }
                    for (unsigned int i_8 = 0; i_8 < 10; i_8 += 3) 
                    {
                        var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -9223372036854775757LL)) || (((/* implicit */_Bool) 3595558416U))));
                        var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_20 [i_1 + 1] [i_2 - 1])) & (((/* implicit */int) (unsigned char)161))))) ? (((arr_20 [i_1 + 1] [i_2 - 1]) ? (((/* implicit */int) arr_7 [i_1 - 1] [i_2 - 1] [i_2 - 2])) : (((/* implicit */int) var_4)))) : (((/* implicit */int) arr_20 [i_1 - 1] [i_2 - 2]))));
                    }
                    var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) arr_6 [i_2]))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */unsigned long long int) -9223372036854775746LL)) <= (var_3))))) >= (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_2))) + (-9223372036854775789LL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (699408857U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)2016)))))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)241))) : (var_3)))))));
    var_22 &= ((/* implicit */_Bool) var_6);
    var_23 = (~(var_0));
}
