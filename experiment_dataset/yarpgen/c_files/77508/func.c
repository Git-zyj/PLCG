/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77508
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77508 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77508
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
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (unsigned char i_1 = 2; i_1 < 23; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                {
                    var_17 *= ((/* implicit */short) (!(((/* implicit */_Bool) (((_Bool)0) ? (1384947461007294911ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))));
                    /* LoopSeq 3 */
                    for (signed char i_3 = 1; i_3 < 23; i_3 += 1) 
                    {
                        arr_11 [i_0] [i_2] = ((/* implicit */unsigned char) (-(max((((/* implicit */long long int) ((_Bool) 534773760U))), (max((var_3), (((/* implicit */long long int) (short)32767))))))));
                        var_18 *= ((/* implicit */signed char) (~(((arr_7 [i_1 - 1] [i_1 - 2]) ? (((/* implicit */int) var_13)) : (var_9)))));
                        var_19 = ((/* implicit */_Bool) (-(((/* implicit */int) (short)32046))));
                    }
                    for (unsigned short i_4 = 4; i_4 < 23; i_4 += 3) 
                    {
                        var_20 *= ((/* implicit */short) ((((/* implicit */_Bool) min((((((/* implicit */int) arr_3 [i_0] [i_0] [(signed char)4])) ^ (var_5))), (((((/* implicit */int) (_Bool)1)) + (var_9)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [9U] [i_1] [(_Bool)1])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_8 [18] [20] [i_2] [22ULL]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) -1)))) : (((((/* implicit */_Bool) 566845523U)) ? (3728121772U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)7498))))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)252))))))));
                        arr_15 [i_0] [i_2] = ((/* implicit */signed char) 3728121772U);
                        var_21 = ((/* implicit */short) (-(((/* implicit */int) (unsigned char)121))));
                    }
                    for (short i_5 = 0; i_5 < 25; i_5 += 4) 
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (long long int i_6 = 2; i_6 < 23; i_6 += 1) 
                        {
                            arr_21 [(unsigned char)20] [i_1] [i_2] [i_5] [i_6] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_13))));
                            var_22 *= ((/* implicit */_Bool) -1925302466);
                            arr_22 [i_2] [i_1 - 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (short)511)) : (((/* implicit */int) arr_13 [i_6 - 2] [i_6 - 2] [i_2] [i_1 - 2] [i_2] [i_6 - 1]))));
                        }
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) arr_6 [i_0] [i_2]))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) : (var_11)));
                            var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 3760193551U)) ? (((/* implicit */int) arr_9 [i_0] [i_1 - 1] [i_5])) : (((((/* implicit */_Bool) (short)30646)) ? (((/* implicit */int) arr_2 [i_1 + 2])) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_2))))))));
                            var_25 = ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)9675))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_10 [i_1] [i_1 + 2] [i_1 - 2] [i_1 + 2] [i_1] [i_1 - 1]))))) : (((unsigned long long int) (_Bool)1))));
                        }
                        var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) ((unsigned int) 534773760U)))));
                    }
                }
            } 
        } 
    } 
    var_27 = ((/* implicit */signed char) ((unsigned int) ((((/* implicit */int) var_4)) >> (((((/* implicit */int) ((signed char) 1048544ULL))) + (61))))));
    var_28 = ((/* implicit */signed char) max((((unsigned short) ((((/* implicit */int) (_Bool)1)) < (536870911)))), (((/* implicit */unsigned short) var_2))));
}
