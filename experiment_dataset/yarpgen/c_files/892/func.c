/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 892
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=892 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/892
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
    var_11 = ((/* implicit */signed char) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_10))))), (154421437U)));
    /* LoopSeq 1 */
    for (short i_0 = 2; i_0 < 13; i_0 += 1) 
    {
        var_12 = ((((/* implicit */_Bool) max((((/* implicit */long long int) var_6)), (min((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0])))))) ? (arr_1 [i_0] [i_0 + 1]) : (arr_1 [i_0] [i_0]));
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            /* LoopSeq 2 */
            for (long long int i_2 = 1; i_2 < 15; i_2 += 1) 
            {
                arr_8 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */long long int) min((arr_5 [i_0] [i_0] [i_0 + 1]), (arr_4 [i_0] [i_2 - 1] [i_0 + 1])));
                /* LoopSeq 2 */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_4 = 0; i_4 < 16; i_4 += 1) 
                    {
                        var_13 *= ((/* implicit */_Bool) arr_5 [(short)12] [i_1] [i_1]);
                        var_14 = ((/* implicit */unsigned int) arr_7 [i_1]);
                        var_15 *= var_6;
                        var_16 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (short)21876)) - (((/* implicit */int) (short)-21904)))) << (((var_6) - (2918966090U)))));
                        var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) arr_1 [i_0] [i_0]))));
                    }
                    arr_13 [i_3] [i_0] [i_0] = ((/* implicit */long long int) (+(arr_11 [i_0] [i_2] [i_2] [i_0] [i_0 + 3])));
                }
                for (signed char i_5 = 1; i_5 < 12; i_5 += 1) 
                {
                    arr_18 [i_0] [i_1] = ((/* implicit */unsigned short) ((((((/* implicit */int) min((var_9), (((/* implicit */short) ((signed char) var_5)))))) + (2147483647))) << (((arr_16 [i_0] [i_0] [i_0]) - (12126789896001714372ULL)))));
                    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_3 [(_Bool)1] [i_0 - 2])) : (((/* implicit */int) var_10))))) ? (((arr_3 [i_5] [i_0 - 2]) ? (((/* implicit */int) arr_3 [i_0] [i_0 - 2])) : (((/* implicit */int) arr_3 [8ULL] [i_0 - 2])))) : (((/* implicit */int) ((short) var_6)))));
                    var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) var_9))));
                }
                var_20 = ((/* implicit */int) min((var_20), (((((/* implicit */_Bool) ((unsigned int) arr_11 [i_0] [i_1] [i_1] [i_1] [i_1]))) ? ((~(((/* implicit */int) arr_3 [i_0 - 2] [i_0 + 3])))) : (((/* implicit */int) min((arr_15 [i_0] [i_2 + 1] [i_1] [i_2] [i_0 - 2] [i_2 - 1]), (arr_15 [i_2] [i_2 - 1] [11LL] [i_1] [i_0 - 2] [i_2]))))))));
                arr_19 [i_0] [i_1] &= ((/* implicit */unsigned char) arr_3 [i_0 - 1] [(unsigned char)14]);
            }
            for (unsigned char i_6 = 0; i_6 < 16; i_6 += 2) 
            {
                var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((_Bool) ((arr_3 [i_0] [i_0 + 1]) ? (((((/* implicit */_Bool) 939703545)) ? (((/* implicit */int) arr_4 [i_0 - 2] [(_Bool)1] [i_6])) : (((/* implicit */int) var_3)))) : (((((/* implicit */_Bool) arr_15 [(short)4] [13U] [(short)4] [i_0] [i_1] [i_0])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (short)7151))))))))));
                arr_23 [i_0] [i_0] = ((/* implicit */long long int) ((var_4) << (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_0 [i_0])))) >= (min((3251286028U), (((/* implicit */unsigned int) arr_12 [i_0 + 3] [i_0 + 1] [2ULL] [i_0] [i_1] [9ULL])))))))));
                /* LoopSeq 2 */
                for (short i_7 = 0; i_7 < 16; i_7 += 1) 
                {
                    var_22 = ((_Bool) var_3);
                    arr_26 [i_0] [i_1] [i_6] [i_1] = ((/* implicit */unsigned short) arr_10 [i_0] [i_1] [i_1] [i_6] [i_7]);
                    var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) max((((((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_0 - 1]))) % (((((/* implicit */_Bool) -4069081747213183361LL)) ? (1914754978U) : (((/* implicit */unsigned int) 939703553)))))), (((((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned short)57206)), (var_8)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0 + 3] [i_0]))) : (arr_2 [i_1] [i_1]))))))));
                }
                for (unsigned long long int i_8 = 4; i_8 < 12; i_8 += 1) 
                {
                    arr_29 [i_0] [i_0] [i_1] [3U] [i_0] = (_Bool)1;
                    var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) (~(arr_22 [i_0] [i_1] [14] [10LL]))))));
                }
            }
            var_25 &= ((/* implicit */short) (-(((/* implicit */int) var_7))));
        }
    }
}
