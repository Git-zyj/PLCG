/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69756
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69756 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69756
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
    var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) var_2))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 11; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 4) 
                {
                    for (unsigned int i_3 = 0; i_3 < 14; i_3 += 4) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) max((var_12), (var_5)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [(unsigned char)10] [(signed char)4] [i_2] [(signed char)4])) ? (arr_8 [(unsigned short)5] [i_1] [(unsigned short)5] [(short)4]) : (((/* implicit */unsigned int) ((/* implicit */int) var_14)))))) : (min((var_1), (((/* implicit */unsigned long long int) var_2)))))));
                            var_18 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_2])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_3 [i_0] [i_0] [i_2])))) : (((/* implicit */int) ((_Bool) arr_1 [i_0])))))));
                        }
                    } 
                } 
                arr_9 [i_0] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_0 [i_0]))));
                /* LoopSeq 3 */
                for (signed char i_4 = 2; i_4 < 13; i_4 += 4) 
                {
                    var_19 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_0] [11U] [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (arr_10 [(unsigned short)4] [i_1] [i_0])))) ? (((/* implicit */int) ((short) var_6))) : (((/* implicit */int) min((arr_0 [i_0]), (((/* implicit */short) arr_1 [i_0])))))))));
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 14; i_5 += 1) 
                    {
                        for (int i_6 = 0; i_6 < 14; i_6 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */short) (~(((((/* implicit */_Bool) var_3)) ? (arr_16 [i_0 + 1]) : (arr_16 [i_0 - 1])))));
                                var_21 = ((long long int) min((arr_13 [i_0] [i_5]), (arr_13 [i_0] [i_1])));
                                var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) arr_1 [i_4]))) ? ((+(((/* implicit */int) var_4)))) : (((/* implicit */int) arr_1 [i_4])))))));
                                arr_18 [i_0] = ((signed char) ((((/* implicit */_Bool) min((var_11), (((/* implicit */int) var_13))))) ? (min((arr_10 [7U] [7U] [i_0]), (((/* implicit */long long int) var_3)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_0] [i_1] [(_Bool)1])) ? (((/* implicit */int) arr_6 [i_1] [i_4] [i_0])) : (((/* implicit */int) arr_5 [i_6] [i_0] [i_6])))))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_8 [i_0] [i_0 + 3] [i_4 - 1] [i_4 - 2])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_4] [i_4] [i_4 - 2] [i_4])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_4))))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_16 [(signed char)3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))))))))));
                }
                for (long long int i_7 = 1; i_7 < 12; i_7 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_8 = 3; i_8 < 13; i_8 += 2) 
                    {
                        for (unsigned short i_9 = 0; i_9 < 14; i_9 += 2) 
                        {
                            {
                                arr_27 [i_0] [i_1] [i_0] [9U] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */int) max((var_15), (var_4)))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_21 [4] [i_1] [7U] [i_8] [i_0] [(unsigned short)10]))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (((var_1) & (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_12)))))))));
                                arr_28 [i_0] [i_1] [6ULL] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) ((unsigned short) var_3))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_5 [i_0] [i_0] [i_9])))) : ((~(arr_15 [i_1] [i_8] [i_7 + 1] [12ULL] [(_Bool)1])))))));
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) max((arr_5 [12] [(signed char)0] [(signed char)4]), (((/* implicit */short) var_4)))))) != (((((/* implicit */_Bool) ((unsigned int) arr_6 [i_0] [i_0] [(_Bool)1]))) ? (((/* implicit */unsigned int) ((int) var_12))) : (arr_2 [i_7 + 1]))))))));
                    arr_29 [i_0] = ((/* implicit */unsigned short) arr_25 [i_0] [i_7 + 1] [i_7 - 1] [i_7] [(signed char)4]);
                    arr_30 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) var_7);
                }
                /* vectorizable */
                for (unsigned short i_10 = 0; i_10 < 14; i_10 += 1) 
                {
                    var_25 = ((/* implicit */unsigned char) var_7);
                    var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) ((var_7) ? (((/* implicit */unsigned long long int) arr_19 [6LL])) : (arr_16 [i_0 + 3]))))));
                    arr_33 [4LL] [i_1] [i_0] [8ULL] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) arr_21 [i_0] [i_0] [i_1] [i_0] [i_1] [(signed char)13]))) ? (((arr_11 [i_0] [i_0]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (arr_12 [i_1] [13] [i_1]))) : (((/* implicit */unsigned long long int) (+(arr_31 [i_0] [i_1] [i_10]))))));
                }
            }
        } 
    } 
    var_27 = ((/* implicit */short) (-(((/* implicit */int) ((signed char) var_3)))));
}
