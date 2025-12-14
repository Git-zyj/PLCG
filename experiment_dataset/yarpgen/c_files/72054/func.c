/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72054
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72054 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72054
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
    for (unsigned long long int i_0 = 1; i_0 < 18; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                /* LoopSeq 4 */
                for (unsigned char i_2 = 1; i_2 < 19; i_2 += 2) 
                {
                    var_15 ^= min((max(((-(arr_5 [i_0 + 2] [i_0 + 2] [i_2] [i_2]))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_2] [i_0])) ? (((/* implicit */int) arr_2 [i_0] [i_1] [i_2])) : (((/* implicit */int) arr_3 [(unsigned short)8] [i_2]))))))), (((((/* implicit */_Bool) (-(arr_0 [10LL])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_0 + 2] [i_1] [i_0 + 2] [8LL])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_6))))) : (((((/* implicit */long long int) ((/* implicit */int) var_10))) & (arr_0 [(unsigned char)12]))))));
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 1; i_3 < 17; i_3 += 4) 
                    {
                        var_16 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_7 [i_0] [i_0] [2U] [i_3 + 1] [i_3] [i_3]))));
                        var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_3 [(unsigned short)6] [(unsigned short)6]))))) - (((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_2] [i_3])) ? (((/* implicit */unsigned long long int) arr_4 [i_1] [i_2] [2U])) : (var_7))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_1 [(unsigned char)12]), (arr_1 [(_Bool)1]))))))))));
                        arr_8 [i_0] = ((/* implicit */unsigned char) ((unsigned short) ((_Bool) arr_7 [i_0] [11ULL] [i_2] [13] [i_1] [i_2])));
                    }
                    for (unsigned short i_4 = 0; i_4 < 20; i_4 += 4) 
                    {
                        var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) (-(min((arr_5 [18LL] [i_2] [i_2] [i_4]), ((~(arr_5 [i_0] [i_1] [i_1] [i_1]))))))))));
                        var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) (-(max((((/* implicit */long long int) arr_1 [i_4])), (min((arr_0 [i_4]), (((/* implicit */long long int) var_8)))))))))));
                        /* LoopSeq 1 */
                        for (signed char i_5 = 0; i_5 < 20; i_5 += 4) 
                        {
                            var_20 |= ((/* implicit */signed char) var_5);
                            var_21 = ((/* implicit */short) (~(((/* implicit */int) (unsigned char)72))));
                            var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) ((((/* implicit */int) arr_14 [i_1] [i_2 + 1] [i_1] [i_5])) - (((/* implicit */int) ((_Bool) min((((/* implicit */unsigned short) arr_1 [i_4])), (arr_2 [i_0] [i_0] [i_0]))))))))));
                            arr_15 [i_0] [i_1] [0ULL] [i_4] [0ULL] [i_0] = ((/* implicit */short) ((((/* implicit */long long int) max(((-(((/* implicit */int) var_0)))), (((((/* implicit */int) arr_3 [i_0] [i_0])) - (((/* implicit */int) var_14))))))) != ((-(arr_0 [i_0])))));
                            var_23 = ((/* implicit */short) (unsigned char)182);
                        }
                    }
                    var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) -5634514524828780287LL))));
                }
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    var_25 = ((/* implicit */_Bool) (-(((/* implicit */int) var_1))));
                    var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((max((((/* implicit */unsigned long long int) arr_3 [i_0] [i_0])), (arr_10 [i_6] [i_0] [13ULL] [i_6]))), (((/* implicit */unsigned long long int) (unsigned char)71))))) ? (((/* implicit */int) max((((/* implicit */unsigned short) arr_1 [i_0])), (var_3)))) : ((-(((/* implicit */int) arr_14 [i_0 + 1] [12] [i_1] [i_6]))))));
                }
                for (unsigned long long int i_7 = 0; i_7 < 20; i_7 += 4) 
                {
                    var_27 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((arr_7 [i_7] [i_1] [(unsigned char)3] [i_1] [i_1] [i_1]), (((/* implicit */unsigned char) ((var_2) == (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_0] [i_0] [i_7])))))))))));
                    var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_0] [i_0] [i_0 + 1])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_5)))), (((/* implicit */int) (unsigned char)192))))) ? ((-(((((/* implicit */_Bool) arr_18 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 2])) ? (var_7) : (((/* implicit */unsigned long long int) arr_5 [i_0] [0LL] [i_0] [i_0])))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) var_4)))))))));
                }
                for (unsigned char i_8 = 0; i_8 < 20; i_8 += 4) 
                {
                    var_29 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_22 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_0] [i_1] [i_0] [i_1]))) : (arr_13 [i_0] [i_1] [i_8]))) % (((/* implicit */long long int) ((/* implicit */int) arr_22 [(unsigned short)12] [i_0])))));
                    arr_24 [(_Bool)1] [i_1] [i_0] [i_1] = ((/* implicit */unsigned int) arr_4 [i_0] [i_1] [i_0]);
                }
                var_30 = ((/* implicit */unsigned char) min((var_30), (((/* implicit */unsigned char) arr_16 [i_0] [(unsigned short)12] [i_1]))));
            }
        } 
    } 
    var_31 = ((/* implicit */int) ((unsigned long long int) ((unsigned int) ((short) var_7))));
}
