/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57367
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57367 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57367
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
    var_11 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (signed char)0))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_9))))) ? (((/* implicit */int) var_2)) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_8))))))) : (((((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)110))))) * ((+(287667426198290432ULL)))))));
    var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? ((-(((/* implicit */int) (unsigned short)57210)))) : (((/* implicit */int) var_6))));
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 16; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                arr_5 [i_1] [i_0] [i_0 + 1] = ((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0 - 2] [i_0 - 1])) ? (((/* implicit */int) (signed char)-27)) : (((/* implicit */int) arr_0 [i_0 + 2]))))), (((((/* implicit */_Bool) arr_1 [i_0 + 2] [i_0 - 2])) ? (arr_4 [i_0 + 2] [i_0 - 2]) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))));
                var_13 = ((/* implicit */long long int) ((unsigned long long int) ((unsigned short) (-(((/* implicit */int) (unsigned short)26923))))));
                /* LoopSeq 1 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    arr_8 [i_0] [i_2] [i_2] [i_1] = ((/* implicit */signed char) min((((/* implicit */int) arr_2 [i_2] [i_2])), (((((/* implicit */_Bool) 15916690804694072121ULL)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (signed char)110))))));
                    /* LoopSeq 4 */
                    for (long long int i_3 = 1; i_3 < 15; i_3 += 3) 
                    {
                        var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) ((((((((/* implicit */int) (unsigned short)50114)) ^ (((/* implicit */int) (unsigned short)20788)))) | (((/* implicit */int) arr_2 [i_3] [i_1])))) & ((~(((/* implicit */int) arr_9 [i_2] [i_2] [i_2] [i_2 - 1] [i_0])))))))));
                        arr_12 [i_2] [16] [i_2] [i_1] [i_2] = ((/* implicit */long long int) min(((signed char)0), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_0 [i_0 - 1])))))));
                        arr_13 [i_2] [i_2] = ((/* implicit */unsigned char) 18159076647511261184ULL);
                    }
                    /* vectorizable */
                    for (unsigned short i_4 = 0; i_4 < 18; i_4 += 1) 
                    {
                        arr_18 [i_0] [i_2] = ((/* implicit */unsigned char) arr_6 [i_2] [i_0]);
                        arr_19 [i_0] [i_1] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) (+((-(-7877747802296031283LL)))));
                        var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_2 - 1] [i_0 - 1]))) : ((~(arr_4 [i_2] [i_2]))))))));
                        arr_20 [i_0] [i_2] = ((/* implicit */short) (+(((/* implicit */int) (unsigned char)64))));
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 18; i_5 += 1) 
                    {
                        var_16 *= ((/* implicit */signed char) ((((/* implicit */int) (short)0)) / ((+(((/* implicit */int) var_1))))));
                        var_17 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_1 [i_2 - 1] [i_0 - 1]))));
                    }
                    for (unsigned char i_6 = 2; i_6 < 16; i_6 += 2) 
                    {
                        var_18 = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) (~(1933283461410421347ULL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) : (((((/* implicit */_Bool) arr_23 [i_2] [i_2])) ? (((/* implicit */int) arr_24 [i_6] [i_2] [i_1] [i_0])) : (((/* implicit */int) (unsigned short)7963)))))));
                        arr_25 [3LL] [i_2] [i_2] [i_0] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((max((((/* implicit */long long int) var_9)), ((-9223372036854775807LL - 1LL)))) < (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_0 - 1] [i_1] [i_2 - 1] [i_6 + 1])))))), (max((((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)0)) << (((/* implicit */int) var_8))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [(unsigned short)0] [(unsigned short)0] [i_2] [1LL] [i_6] [i_6]))) + (1933283461410421343ULL)))))));
                    }
                }
            }
        } 
    } 
}
