/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68153
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68153 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68153
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
    var_14 = ((var_2) ? (((/* implicit */long long int) ((/* implicit */int) (short)-1))) : (-9223372036854775786LL));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [2U] [i_0] = ((/* implicit */long long int) (((~(max((arr_2 [(_Bool)1]), (((/* implicit */unsigned long long int) var_0)))))) < (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) : (3014501895U)))) + (var_3))))));
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 1; i_2 < 8; i_2 += 2) 
            {
                for (long long int i_3 = 0; i_3 < 11; i_3 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (int i_4 = 1; i_4 < 9; i_4 += 1) 
                        {
                            var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */long long int) var_6)) : (var_7)))))) ? (((/* implicit */int) (unsigned short)65515)) : (((/* implicit */int) (!(((/* implicit */_Bool) max(((unsigned short)4), (((/* implicit */unsigned short) arr_9 [i_0] [i_1]))))))))));
                            var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) (-(max((((/* implicit */unsigned long long int) var_0)), ((+(arr_2 [i_1]))))))))));
                        }
                        /* LoopSeq 2 */
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            arr_19 [i_1] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? (var_3) : (arr_7 [i_1] [i_1] [i_0])));
                            var_17 += ((max((((((/* implicit */_Bool) (unsigned short)65527)) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_1] [i_3] [i_5]))) : (var_12))), (((/* implicit */long long int) min((((/* implicit */unsigned short) arr_4 [i_5] [i_0] [i_0])), ((unsigned short)65510)))))) + (((/* implicit */long long int) (+(((/* implicit */int) var_9))))));
                        }
                        /* vectorizable */
                        for (unsigned long long int i_6 = 0; i_6 < 11; i_6 += 1) 
                        {
                            arr_23 [i_0] [i_1] [i_2] [i_3] [i_1] = ((/* implicit */short) (((+((-9223372036854775807LL - 1LL)))) / (var_7)));
                            arr_24 [i_6] [i_1] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_2 - 1] [i_1])) ? (((/* implicit */int) arr_6 [i_2 + 1])) : (((/* implicit */int) arr_6 [i_2 - 1]))));
                            arr_25 [i_0] [(unsigned char)7] [10] [i_1] = ((/* implicit */unsigned long long int) ((((var_3) < (var_3))) ? (((((/* implicit */int) var_8)) & (((/* implicit */int) var_11)))) : (((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0]))));
                        }
                        var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) ((((((/* implicit */_Bool) min((((/* implicit */int) var_4)), (var_6)))) ? (var_5) : (((/* implicit */unsigned long long int) min((var_12), (((/* implicit */long long int) arr_14 [i_0] [i_1] [i_2] [i_3]))))))) != (((/* implicit */unsigned long long int) max((min((var_12), (((/* implicit */long long int) (unsigned char)255)))), (((((/* implicit */_Bool) arr_16 [(_Bool)1] [10LL] [i_2] [i_2] [2U])) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0] [i_1] [i_1] [i_2] [i_3])))))))))))));
                        var_19 -= ((/* implicit */unsigned char) min((var_6), (((/* implicit */int) (unsigned short)65535))));
                    }
                } 
            } 
        } 
        var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (min((((/* implicit */int) ((short) (unsigned short)0))), (((((/* implicit */int) arr_9 [i_0] [(unsigned short)4])) * (((/* implicit */int) var_8)))))) : (((/* implicit */int) arr_9 [i_0] [10LL]))));
    }
}
