/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66804
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66804 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66804
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
    var_12 |= ((/* implicit */short) 4922423170027388624LL);
    var_13 = var_10;
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */unsigned char) ((1672138684849647416LL) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65000)))));
                /* LoopSeq 1 */
                for (unsigned char i_2 = 0; i_2 < 13; i_2 += 3) 
                {
                    var_15 = ((/* implicit */int) max((((/* implicit */long long int) ((((((/* implicit */_Bool) var_8)) ? (2610464913344763864LL) : (2610464913344763864LL))) > (-2610464913344763864LL)))), (var_0)));
                    arr_10 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(-2610464913344763864LL)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 2610464913344763864LL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)11306))) : (2610464913344763864LL)))) ? (max((var_2), (((/* implicit */unsigned long long int) var_8)))) : (var_5))) : (((/* implicit */unsigned long long int) ((((((/* implicit */long long int) arr_7 [i_0] [i_0] [i_0] [(unsigned short)8])) > (var_8))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_6 [i_0] [i_1] [i_2])))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 13; i_4 += 4) 
                        {
                            {
                                arr_16 [i_0] [(unsigned char)2] = ((/* implicit */int) ((min((-2610464913344763864LL), (((/* implicit */long long int) arr_15 [i_3] [i_3] [i_3 - 1] [i_3 - 1] [i_3])))) < (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) & (var_1)))) ? (max((-2610464913344763864LL), (((/* implicit */long long int) var_7)))) : (((/* implicit */long long int) min((arr_2 [(unsigned short)8] [i_2] [i_4]), (((/* implicit */int) var_3)))))))));
                                var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) var_11))));
                                arr_17 [i_0] [3] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) max((max((((/* implicit */long long int) max((((/* implicit */short) (unsigned char)96)), (var_9)))), (((((/* implicit */_Bool) var_6)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)96))))))), ((-(2610464913344763878LL)))));
                                arr_18 [i_4] [(signed char)5] [i_0] [i_2] [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) max((var_10), (min((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)13648)) | (((/* implicit */int) var_9))))), (min((arr_13 [i_1] [(_Bool)1] [i_1] [i_1] [i_1]), (((/* implicit */unsigned long long int) (short)-26805))))))));
                            }
                        } 
                    } 
                    var_17 ^= ((/* implicit */unsigned char) ((var_3) ? (min((((((/* implicit */_Bool) arr_6 [(unsigned short)12] [i_1] [i_2])) ? (arr_3 [i_0] [7LL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))), (((/* implicit */unsigned long long int) -2610464913344763864LL)))) : (min((max((((/* implicit */unsigned long long int) -2610464913344763873LL)), (var_6))), (max((((/* implicit */unsigned long long int) (unsigned char)96)), (var_5)))))));
                }
            }
        } 
    } 
}
