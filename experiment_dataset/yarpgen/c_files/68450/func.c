/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68450
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68450 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68450
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
    var_20 = ((((/* implicit */_Bool) var_19)) ? (var_18) : (((/* implicit */unsigned int) ((max((var_14), (((/* implicit */int) var_1)))) ^ (((/* implicit */int) (unsigned short)35035))))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) ((var_9) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)40761)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0]))))))) * (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) max((((/* implicit */unsigned short) var_4)), ((unsigned short)40761)))) : (((/* implicit */int) ((unsigned char) arr_3 [i_0])))))));
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) arr_1 [i_0] [i_1])) & (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_2 [i_1]))))))));
            var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max(((~(((/* implicit */int) (unsigned short)12402)))), (((/* implicit */int) (_Bool)0))))) ? ((-(((/* implicit */int) var_1)))) : ((((((~(((/* implicit */int) arr_3 [i_0])))) + (2147483647))) >> (((((/* implicit */int) max((var_17), (var_1)))) - (39332)))))));
        }
        for (long long int i_2 = 1; i_2 < 12; i_2 += 1) 
        {
            var_23 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) ((unsigned short) var_18))) : (((((/* implicit */_Bool) arr_6 [i_2] [i_2 + 1] [6LL])) ? (((/* implicit */int) var_1)) : (arr_7 [i_0])))))));
            var_24 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_2 + 2]))) * (var_18)))) ? (((/* implicit */unsigned int) arr_7 [i_0])) : (((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned int) 1783338004)) : (var_15))))), (var_18)));
            var_25 |= ((/* implicit */int) ((((/* implicit */long long int) var_15)) - (((((/* implicit */_Bool) var_3)) ? (arr_1 [i_2 + 2] [i_2 + 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_2 + 1])))))));
        }
    }
    for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 3) 
    {
        /* LoopNest 2 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
            {
                {
                    var_26 = ((/* implicit */unsigned short) max((((unsigned char) arr_12 [i_4] [i_3] [i_5 + 1])), (((/* implicit */unsigned char) ((((/* implicit */int) arr_12 [i_5] [i_3] [i_5 + 1])) > (((/* implicit */int) arr_12 [i_5] [i_3] [i_5])))))));
                    var_27 -= ((/* implicit */unsigned long long int) var_3);
                    arr_15 [i_3] [i_4] [i_3] [i_5] = ((/* implicit */unsigned long long int) (((-(arr_14 [i_5 + 1] [i_5 + 1] [i_5 + 1]))) * (((/* implicit */unsigned int) ((/* implicit */int) max((arr_12 [i_5 + 1] [i_3] [i_5 + 1]), (arr_12 [i_5 + 1] [i_3] [i_5 + 1])))))));
                    /* LoopNest 2 */
                    for (long long int i_6 = 0; i_6 < 15; i_6 += 1) 
                    {
                        for (unsigned int i_7 = 0; i_7 < 15; i_7 += 4) 
                        {
                            {
                                var_28 = ((/* implicit */_Bool) max((var_28), (((/* implicit */_Bool) (unsigned short)24787))));
                                arr_20 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned int) ((_Bool) ((unsigned short) arr_19 [i_6] [i_5 + 1] [i_6] [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_5 + 1])));
                                var_29 = ((/* implicit */unsigned short) ((((/* implicit */int) max(((unsigned short)40761), (((/* implicit */unsigned short) (_Bool)1))))) / (((/* implicit */int) (unsigned char)250))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_30 = ((/* implicit */short) arr_12 [i_3] [i_3] [i_3]);
        var_31 = ((/* implicit */long long int) arr_12 [i_3] [i_3] [i_3]);
        arr_21 [i_3] = ((/* implicit */long long int) ((unsigned char) max((((arr_11 [(_Bool)1] [i_3] [(unsigned short)2]) << (((((/* implicit */int) (unsigned char)236)) - (235))))), (arr_11 [(_Bool)1] [i_3] [i_3]))));
        arr_22 [i_3] = ((/* implicit */long long int) max(((~(((((/* implicit */_Bool) arr_14 [i_3] [i_3] [i_3])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_5)))))), (((/* implicit */int) (unsigned char)45))));
    }
    var_32 = ((/* implicit */unsigned int) (((+(((/* implicit */int) (!(((/* implicit */_Bool) var_4))))))) - (((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)213))))));
    var_33 = ((/* implicit */_Bool) min((var_33), (((/* implicit */_Bool) (-(var_2))))));
}
