/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77198
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77198 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77198
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
    var_16 = ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) & (min((((/* implicit */unsigned int) var_2)), (var_15))))));
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max(((-(var_3))), (((int) var_9))))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) var_0)))) : (((((/* implicit */_Bool) ((unsigned short) var_0))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) var_9)) : (var_0))) : (((/* implicit */long long int) (-(var_10))))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (signed char i_3 = 0; i_3 < 14; i_3 += 4) 
                    {
                        var_18 = max((((long long int) ((((/* implicit */_Bool) arr_10 [i_0] [12LL] [i_2] [i_3])) ? (arr_10 [i_3] [i_0] [i_0] [i_0]) : (((/* implicit */int) (_Bool)0))))), (((/* implicit */long long int) max((((/* implicit */int) var_12)), (var_13)))));
                        var_19 = ((/* implicit */_Bool) 0LL);
                        var_20 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((((/* implicit */unsigned long long int) 1356084631)) | (2ULL))), (((/* implicit */unsigned long long int) var_0))))) ? (((/* implicit */unsigned long long int) -5168330689682314168LL)) : (var_14)));
                    }
                    for (unsigned char i_4 = 0; i_4 < 14; i_4 += 4) 
                    {
                        var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_2 [i_1]))))) ? (min((-1356084629), (((/* implicit */int) var_4)))) : (((/* implicit */int) ((arr_3 [0U] [i_2] [i_4]) < (((/* implicit */unsigned int) var_13)))))))) ? (min((((var_11) << (((((/* implicit */int) arr_9 [i_1])) - (66))))), (((/* implicit */unsigned int) (((_Bool)1) ? (var_3) : (((/* implicit */int) (unsigned short)56743))))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))));
                        var_22 += arr_11 [i_0] [0] [i_4] [(_Bool)1] [i_2] [i_4];
                        /* LoopSeq 2 */
                        for (unsigned int i_5 = 2; i_5 < 13; i_5 += 4) 
                        {
                            var_23 ^= ((/* implicit */unsigned char) max((((/* implicit */long long int) var_7)), (((((/* implicit */_Bool) arr_4 [i_0] [10U] [i_5 + 1])) ? (arr_4 [i_0] [i_1] [i_0]) : (arr_4 [i_0] [i_0] [i_5 + 1])))));
                            var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) ((((((/* implicit */_Bool) ((unsigned short) var_14))) ? (arr_6 [(unsigned short)7] [i_1] [i_2] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)8799))))) >= (((/* implicit */long long int) ((/* implicit */int) ((1356084649) == (((/* implicit */int) arr_14 [i_5] [i_4] [i_2] [i_4] [i_0 - 1])))))))))));
                            arr_16 [i_0 - 1] [(_Bool)1] [i_1] [i_2] [i_0 - 1] [i_5 - 1] = (~(max((arr_0 [i_1 - 1] [i_5 - 2]), (var_8))));
                            var_25 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) (+(((/* implicit */int) var_12))))) * (arr_3 [i_0 - 1] [i_1 - 1] [i_5 + 1])));
                        }
                        for (short i_6 = 2; i_6 < 13; i_6 += 1) 
                        {
                            var_26 += ((/* implicit */int) (~((~(var_5)))));
                            arr_19 [i_0 - 1] [i_1 - 1] [i_2] [i_2] [i_1] [i_1 - 1] [i_6 - 2] = max((var_11), (((/* implicit */unsigned int) max((var_12), (((/* implicit */unsigned char) var_2))))));
                            arr_20 [i_1] [i_1] [i_2] [(_Bool)1] [i_6 - 2] [(_Bool)1] = ((/* implicit */_Bool) ((((/* implicit */int) ((signed char) arr_9 [i_1]))) & (((/* implicit */int) var_4))));
                            var_27 *= ((/* implicit */unsigned short) (-((-(((/* implicit */int) var_1))))));
                            arr_21 [i_0] [i_1] [i_1] [i_0] [i_0] [i_6] = ((/* implicit */long long int) min((((unsigned long long int) var_1)), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(arr_10 [i_0] [i_0] [i_4] [i_6])))))))));
                        }
                    }
                    var_28 -= ((/* implicit */unsigned char) arr_8 [i_0] [i_1] [(unsigned char)0] [i_2]);
                }
            } 
        } 
    } 
}
