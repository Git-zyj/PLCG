/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5753
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5753 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5753
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
    for (short i_0 = 1; i_0 < 16; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) ((((/* implicit */unsigned long long int) -2133744667)) != (((((/* implicit */_Bool) var_5)) ? (max((((/* implicit */unsigned long long int) arr_2 [i_0] [(_Bool)1])), (var_7))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_0))))))))))));
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (unsigned int i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        var_20 &= ((/* implicit */long long int) -2010295884);
                        var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) var_6))));
                        arr_9 [i_3] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)94)) || (((/* implicit */_Bool) arr_8 [i_0 + 1] [i_1] [i_1]))));
                        var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) ((((int) var_10)) != (((/* implicit */int) var_11)))))));
                        arr_10 [i_1] [i_2] [i_1] = ((/* implicit */int) var_9);
                    }
                    for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 1) 
                    {
                        arr_13 [i_0 + 3] [i_1] [(unsigned short)2] [i_1] [i_1] = ((/* implicit */_Bool) ((((int) var_7)) - ((-(((((/* implicit */_Bool) -739577385)) ? (((/* implicit */int) var_3)) : (var_18)))))));
                        arr_14 [i_1] = ((/* implicit */short) var_2);
                        arr_15 [14] |= ((/* implicit */short) 4280290284736407606ULL);
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 20; i_5 += 3) 
                    {
                        arr_18 [i_0 + 2] [i_1] [i_1] [i_1] = ((/* implicit */short) arr_1 [i_0] [i_0]);
                        arr_19 [i_0] [i_1] [i_2] [i_5] = ((/* implicit */unsigned short) ((short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) * (var_12))));
                        var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) ((unsigned char) var_17)))));
                        /* LoopSeq 1 */
                        for (int i_6 = 2; i_6 < 19; i_6 += 1) 
                        {
                            arr_22 [i_0] [i_1] [i_1] [i_2] [(signed char)8] [i_6] [(signed char)8] = ((/* implicit */unsigned long long int) (+((-(((/* implicit */int) var_11))))));
                            var_24 &= ((/* implicit */long long int) ((((arr_6 [i_6 - 1] [i_0 - 1] [i_0 - 1] [i_0] [i_0 + 3]) + (2147483647))) >> (((/* implicit */int) arr_21 [i_6 + 1] [i_6 + 1] [i_2] [i_0 - 1]))));
                            var_25 *= ((/* implicit */short) (_Bool)0);
                        }
                    }
                    for (short i_7 = 2; i_7 < 16; i_7 += 3) 
                    {
                        arr_26 [(short)14] [8U] [8U] [i_7] &= ((/* implicit */_Bool) max((((/* implicit */int) min((((/* implicit */unsigned short) ((var_18) >= (((/* implicit */int) (short)4331))))), (arr_5 [i_0 + 1])))), (((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) max((var_10), (((/* implicit */short) var_1))))) : ((-(((/* implicit */int) (unsigned short)34543))))))));
                        arr_27 [i_1] = ((/* implicit */short) min((((/* implicit */int) (unsigned char)237)), (min((((/* implicit */int) (!((_Bool)0)))), (arr_3 [i_0] [i_1] [i_2])))));
                        var_26 = ((/* implicit */int) max((((/* implicit */short) var_16)), (max((((/* implicit */short) (_Bool)1)), (max((((/* implicit */short) (signed char)108)), (var_3)))))));
                    }
                }
            } 
        } 
    } 
    var_27 = ((/* implicit */unsigned char) min((var_27), (max((var_4), (((/* implicit */unsigned char) var_11))))));
    var_28 &= ((/* implicit */unsigned char) max((((/* implicit */int) (short)-23722)), (max((((/* implicit */int) max((var_14), (((/* implicit */unsigned char) var_11))))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (short)-2652)) : (((/* implicit */int) var_14))))))));
}
