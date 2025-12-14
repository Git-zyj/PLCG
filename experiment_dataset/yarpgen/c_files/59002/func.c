/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59002
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59002 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59002
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
    for (short i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (int i_3 = 2; i_3 < 19; i_3 += 1) 
                    {
                        arr_11 [i_0] [i_0] [i_0] = ((/* implicit */int) arr_4 [i_0] [i_1] [i_1]);
                        /* LoopSeq 1 */
                        for (int i_4 = 3; i_4 < 20; i_4 += 3) 
                        {
                            arr_14 [i_0] [i_0] [(_Bool)1] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_8 [i_0] [i_4 - 1] [i_3 - 2] [(_Bool)1]))));
                            arr_15 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)0)) & (((/* implicit */int) (unsigned char)0))));
                        }
                        var_20 = (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_0] [i_2]))))));
                    }
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                    {
                        arr_18 [i_0] [i_1] [i_2] [i_5 - 1] = ((/* implicit */long long int) (((+(((/* implicit */int) (unsigned char)0)))) * (((/* implicit */int) (unsigned short)0))));
                        arr_19 [i_0] [i_0] [i_0] [i_0] = max((min((arr_7 [i_5 - 1] [i_5 - 1]), (arr_7 [i_5 - 1] [i_5 - 1]))), (min((arr_7 [i_5 - 1] [i_5 - 1]), (arr_7 [i_5 - 1] [i_5 - 1]))));
                    }
                    for (unsigned short i_6 = 0; i_6 < 22; i_6 += 3) 
                    {
                        /* LoopSeq 3 */
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            var_21 += ((/* implicit */long long int) (((+(((/* implicit */int) (unsigned char)0)))) + ((-(((/* implicit */int) arr_2 [i_2]))))));
                            var_22 = ((/* implicit */_Bool) max((max((arr_6 [i_1] [i_6]), (arr_6 [i_2] [i_7]))), (((((/* implicit */_Bool) arr_6 [i_2] [i_2])) ? (4095) : (arr_6 [i_2] [i_2])))));
                            var_23 = ((/* implicit */short) min((((long long int) arr_22 [i_0] [i_1] [i_1] [i_1] [i_1] [i_7])), (((/* implicit */long long int) arr_8 [i_0] [(signed char)6] [i_0] [i_0]))));
                        }
                        /* vectorizable */
                        for (int i_8 = 0; i_8 < 22; i_8 += 2) 
                        {
                            arr_28 [i_0] [i_0] [i_0] [i_0] [21] [i_0] = ((((((/* implicit */int) (unsigned char)0)) < (((/* implicit */int) (unsigned short)63316)))) ? (((/* implicit */int) arr_24 [(_Bool)1] [i_8])) : (((/* implicit */int) arr_27 [i_0] [i_8] [i_0] [i_6] [i_0])));
                            var_24 += ((/* implicit */short) (((-2147483647 - 1)) >= (((/* implicit */int) (unsigned char)241))));
                        }
                        /* vectorizable */
                        for (long long int i_9 = 0; i_9 < 22; i_9 += 4) 
                        {
                            arr_32 [i_1] [i_0] = arr_1 [i_0];
                            arr_33 [i_0] [i_1] [i_2] [i_2] [(unsigned short)2] [i_6] [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) arr_2 [i_0]))));
                            var_25 = ((/* implicit */signed char) (~(-6655839306717520684LL)));
                        }
                        var_26 = ((/* implicit */int) max((max((min((-6655839306717520684LL), (((/* implicit */long long int) arr_10 [i_0] [i_1] [(unsigned short)21] [i_6] [(short)3])))), (((/* implicit */long long int) ((int) arr_22 [i_0] [(unsigned short)1] [i_1] [i_1] [i_6] [i_6]))))), (((/* implicit */long long int) (-((((_Bool)0) ? (((/* implicit */int) arr_0 [i_0] [(_Bool)0])) : (7))))))));
                    }
                    var_27 |= ((/* implicit */int) arr_22 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]);
                    var_28 = ((/* implicit */short) arr_30 [i_1] [i_1] [i_2] [4] [i_1]);
                    var_29 = ((/* implicit */_Bool) ((max((arr_4 [i_0] [i_1] [i_2]), (arr_4 [i_0] [i_1] [i_2]))) ? (((((((/* implicit */int) var_18)) / (((/* implicit */int) arr_10 [i_0] [i_1] [i_0] [i_1] [(signed char)5])))) & (max((arr_7 [i_0] [i_2]), (var_17))))) : (((((/* implicit */_Bool) (~(arr_26 [i_0] [i_0] [i_2] [i_0])))) ? (((((/* implicit */_Bool) arr_21 [i_0] [i_2] [(unsigned short)6] [i_1] [i_1] [i_0])) ? (((/* implicit */int) arr_13 [(_Bool)1] [(_Bool)1] [i_2] [(unsigned short)0] [19LL])) : (((/* implicit */int) arr_1 [i_0])))) : (((/* implicit */int) arr_24 [i_1] [i_1]))))));
                }
            } 
        } 
    } 
    var_30 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) -1LL))));
}
