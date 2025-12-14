/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65814
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65814 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65814
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
    var_11 = ((/* implicit */signed char) var_0);
    var_12 = ((/* implicit */int) ((((/* implicit */_Bool) (~(var_4)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)204))) : (var_7)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19; i_0 += 4) 
    {
        for (signed char i_1 = 2; i_1 < 18; i_1 += 2) 
        {
            {
                var_13 = ((/* implicit */unsigned char) max(((~(((/* implicit */int) (signed char)108)))), (((/* implicit */int) max((var_2), (((/* implicit */unsigned short) var_8)))))));
                var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) ((((/* implicit */_Bool) max((min((((/* implicit */unsigned long long int) arr_2 [i_1])), (arr_5 [i_0] [i_0] [i_0]))), (((/* implicit */unsigned long long int) min((var_8), (((/* implicit */signed char) arr_2 [i_1])))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (arr_1 [i_1]))))));
                var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) max((arr_0 [i_1] [i_1]), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((arr_5 [i_0] [i_0] [i_1]), (((/* implicit */unsigned long long int) arr_4 [13ULL] [i_1] [13ULL])))))))))))));
                /* LoopSeq 2 */
                for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 2) 
                {
                    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_7 [i_0] [9U] [i_1 + 1] [i_2])) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-109))))) : (var_4)));
                    var_17 = ((/* implicit */unsigned short) (-((-(((/* implicit */int) ((arr_2 [i_0]) || (((/* implicit */_Bool) arr_6 [i_0] [i_1] [(unsigned char)5] [i_2])))))))));
                    /* LoopSeq 1 */
                    for (signed char i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        var_18 = ((/* implicit */_Bool) max(((unsigned short)61486), (((/* implicit */unsigned short) arr_6 [(short)11] [i_1] [i_0] [i_3]))));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned short i_4 = 0; i_4 < 20; i_4 += 4) 
                        {
                            var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) (~(arr_0 [i_1] [i_0 - 1]))))));
                            arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) arr_12 [i_3] [i_3]);
                            arr_14 [i_0] [(unsigned short)11] [i_2] [i_0] [i_4] = ((/* implicit */short) arr_12 [i_0] [i_0]);
                            var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(arr_10 [i_0] [i_1] [i_2] [i_2] [(_Bool)1] [i_3] [i_4])))) ? ((~(((/* implicit */int) var_6)))) : (var_5))))));
                        }
                        for (unsigned short i_5 = 4; i_5 < 19; i_5 += 4) 
                        {
                            var_21 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_1]))));
                            arr_17 [i_0 - 1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_9))))) < (arr_7 [(unsigned char)19] [i_2] [(short)17] [(unsigned char)12])));
                        }
                        /* vectorizable */
                        for (int i_6 = 2; i_6 < 16; i_6 += 2) 
                        {
                            arr_20 [i_0] = ((/* implicit */unsigned short) var_3);
                            var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) (-((~(((/* implicit */int) var_6)))))))));
                            var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_5)))))));
                            var_24 = ((/* implicit */unsigned short) max((var_24), (var_2)));
                        }
                        arr_21 [i_0] [i_0] [i_0 + 1] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (!(((arr_7 [i_1 - 2] [7ULL] [i_2] [i_3]) > (arr_7 [i_1 + 2] [i_1 + 2] [i_1 + 2] [i_1 + 2])))));
                    }
                }
                for (long long int i_7 = 0; i_7 < 20; i_7 += 4) 
                {
                    var_25 = (-(((/* implicit */int) ((short) var_3))));
                    var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) var_10))));
                    var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) min(((+(arr_16 [(unsigned short)13] [i_1] [i_1] [i_1] [i_1 - 2]))), ((+(arr_16 [i_0 + 1] [i_1] [i_1 - 1] [i_1 - 1] [i_1])))))) ? (((/* implicit */int) arr_4 [i_0] [i_1] [i_7])) : ((+(((/* implicit */int) (short)(-32767 - 1)))))));
                }
            }
        } 
    } 
    var_28 = ((/* implicit */unsigned char) var_1);
}
