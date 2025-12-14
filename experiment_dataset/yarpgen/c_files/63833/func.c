/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63833
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63833 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63833
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */short) (((!(((/* implicit */_Bool) arr_0 [i_0 - 1])))) ? (max((arr_3 [i_0]), (((/* implicit */unsigned int) (short)26)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) min((arr_1 [i_0]), (((/* implicit */unsigned short) (short)-43))))) == (((/* implicit */int) var_5))))))));
                /* LoopSeq 1 */
                for (int i_2 = 0; i_2 < 20; i_2 += 3) 
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        var_11 *= ((/* implicit */unsigned int) (-(((((/* implicit */long long int) ((/* implicit */int) (short)-43))) - (-9223372036854775789LL)))));
                        var_12 = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (short)44))) / (arr_9 [i_0 - 1] [i_1] [3] [3] [i_0] [i_3]))));
                        /* LoopSeq 2 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
                        {
                            arr_14 [i_0] = ((/* implicit */long long int) ((signed char) (~(((/* implicit */int) arr_5 [i_0] [i_2] [i_3])))));
                            var_13 ^= ((/* implicit */_Bool) ((((((/* implicit */int) ((((/* implicit */int) (short)44)) >= (((/* implicit */int) (short)39))))) <= (((/* implicit */int) arr_8 [i_0] [i_1] [i_3] [i_3])))) ? (4764589523764400581LL) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */int) var_5)) < (((/* implicit */int) (short)511)))))))));
                        }
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                        {
                            var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) (!(((min((((/* implicit */long long int) arr_2 [0ULL])), (var_3))) < (((((/* implicit */long long int) ((/* implicit */int) (short)60))) - (var_6))))))))));
                            var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) 1846767184U)) ? (((/* implicit */int) arr_5 [i_0] [i_5] [i_5])) : (((/* implicit */int) var_9))))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_5] [(signed char)3] [6U] [i_5] [i_0] [i_5])))))))) : (arr_3 [i_5])));
                            arr_17 [i_0] [i_3] [i_0 - 1] [i_0] &= ((/* implicit */long long int) ((((/* implicit */_Bool) (+(var_8)))) ? (((/* implicit */unsigned int) ((((/* implicit */int) ((_Bool) arr_15 [(signed char)0] [i_1] [i_1] [i_5]))) ^ (((/* implicit */int) arr_5 [i_3] [i_1] [i_2]))))) : (((((/* implicit */unsigned int) (~(((/* implicit */int) var_0))))) | (3U)))));
                            var_16 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) var_6)) : (2827125847631189015ULL))) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_5] [i_0] [5U] [(short)16] [i_0]))))))));
                        }
                    }
                    for (short i_6 = 4; i_6 < 16; i_6 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_7 = 1; i_7 < 17; i_7 += 2) 
                        {
                            var_17 = ((/* implicit */unsigned char) ((unsigned short) arr_0 [i_7 + 3]));
                            var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) ((((((/* implicit */long long int) ((/* implicit */int) ((arr_20 [(_Bool)1]) > (((/* implicit */unsigned int) ((/* implicit */int) (short)31261))))))) < (((((/* implicit */long long int) ((/* implicit */int) (short)-26))) / (-8912882905219807409LL))))) || ((!(((/* implicit */_Bool) arr_9 [i_7 - 1] [i_7] [i_7 - 1] [i_7 - 1] [(unsigned short)6] [i_7 - 1])))))))));
                        }
                        arr_24 [i_0] [i_0 - 1] [3ULL] = ((/* implicit */unsigned int) min((max((((/* implicit */int) (_Bool)0)), (1512373208))), (((/* implicit */int) ((((/* implicit */_Bool) (short)31261)) || (((/* implicit */_Bool) (short)44)))))));
                        var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_0))))) ? (((((/* implicit */_Bool) (unsigned short)8601)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_2] [i_2] [i_2] [i_2] [i_2] [(unsigned short)11] [i_2]))))) : (-8610380006885556759LL)))) ? (((arr_18 [(signed char)3] [i_6 - 2] [i_6 - 4] [i_6 + 4] [i_6 + 2]) % (arr_18 [i_6] [i_6 + 2] [i_6 + 2] [i_6 + 4] [i_6 - 3]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) 3803613941U)) ? (((/* implicit */int) arr_19 [i_6] [i_0] [i_0])) : (((/* implicit */int) (short)-45)))))))));
                        var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0 - 1] [i_0 - 1])) ? (((((/* implicit */int) (_Bool)0)) ^ (((((/* implicit */int) (short)29876)) & (((/* implicit */int) (short)-6281)))))) : (((/* implicit */int) (unsigned short)65534))));
                    }
                    var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_0))))))))));
                    var_22 = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_12 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1])) < (((/* implicit */int) arr_21 [(signed char)2] [i_2] [i_0 - 1] [(short)4])))) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (short)66)))));
                }
                var_23 = ((/* implicit */unsigned int) var_10);
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned int) var_0);
}
