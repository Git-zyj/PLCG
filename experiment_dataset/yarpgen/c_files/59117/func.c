/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59117
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59117 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59117
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
    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((var_16) - (((/* implicit */long long int) ((/* implicit */int) var_2)))))) ? (((/* implicit */int) var_4)) : (((((/* implicit */_Bool) (~(var_10)))) ? ((-(((/* implicit */int) var_15)))) : (((/* implicit */int) (signed char)-94))))));
    var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_4)), (var_18)))) ? (min((var_14), (var_14))) : (((/* implicit */long long int) (~(var_5))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */signed char) var_4)), ((signed char)-112)))) ? (((/* implicit */int) ((_Bool) var_16))) : (((/* implicit */int) ((((/* implicit */int) (signed char)87)) > (((/* implicit */int) (short)1184)))))))) : ((((!(((/* implicit */_Bool) var_10)))) ? (var_18) : (var_18))))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 19; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 20; i_1 += 4) 
        {
            {
                var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) max(((unsigned char)247), (arr_0 [i_0])))) ? ((+(var_0))) : (((/* implicit */int) arr_3 [i_0] [i_0]))));
                /* LoopSeq 1 */
                for (unsigned char i_2 = 0; i_2 < 22; i_2 += 2) 
                {
                    /* LoopSeq 3 */
                    for (long long int i_3 = 1; i_3 < 21; i_3 += 4) 
                    {
                        arr_11 [i_0] [12] [i_1 - 1] [i_0] = ((/* implicit */signed char) ((((((/* implicit */int) arr_0 [i_0 + 2])) <= (((((/* implicit */int) (short)-31184)) ^ (((/* implicit */int) var_11)))))) ? ((~(((((/* implicit */_Bool) arr_7 [(unsigned char)18] [(_Bool)1] [i_3])) ? (var_18) : (((/* implicit */long long int) var_6)))))) : (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */int) var_13)) / (((/* implicit */int) (short)18662)))) != (((/* implicit */int) var_11))))))));
                        arr_12 [i_0] [i_3] [i_0] [i_3] = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_0])) ? ((-(((/* implicit */int) arr_1 [(_Bool)1] [7])))) : (((/* implicit */int) max((((/* implicit */short) arr_0 [i_0])), ((short)-1209)))))));
                        arr_13 [i_0] [i_1] [i_2] [i_3] [i_0] = ((/* implicit */int) var_14);
                        var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_14)))))));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_4 = 3; i_4 < 21; i_4 += 2) 
                        {
                            var_23 = (-(((/* implicit */int) ((_Bool) (unsigned short)35389))));
                            var_24 = ((/* implicit */signed char) (-(((/* implicit */int) ((((((/* implicit */int) arr_3 [i_1] [i_1])) % (arr_17 [i_1] [i_1] [(unsigned char)4]))) < (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))))))));
                            arr_18 [i_2] [i_1] [i_2] [12] [i_4 - 2] |= ((/* implicit */long long int) arr_9 [i_4] [i_0 + 1] [i_1] [i_1] [i_4]);
                            var_25 *= ((/* implicit */unsigned char) arr_14 [i_1] [i_1] [i_1] [i_1] [i_1]);
                            var_26 = ((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */int) arr_8 [i_4 - 1] [i_1 + 2])) == (((/* implicit */int) arr_8 [i_4 - 2] [i_1 - 2])))))));
                        }
                        for (unsigned char i_5 = 2; i_5 < 21; i_5 += 4) 
                        {
                            var_27 *= ((/* implicit */signed char) (-(((((/* implicit */int) ((((/* implicit */int) (signed char)-94)) != (((/* implicit */int) arr_16 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]))))) << (((min((((/* implicit */int) arr_3 [(unsigned char)5] [i_1])), (arr_17 [i_3] [18] [(signed char)20]))) - (63)))))));
                            arr_21 [i_1] [i_1] [i_2] [i_0] [i_2] [i_2] = ((/* implicit */signed char) var_7);
                            var_28 = (i_0 % 2 == 0) ? (((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)2))))) << ((~(((/* implicit */int) arr_14 [i_0] [(short)3] [i_3] [i_0] [i_5])))))) : (((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)2))))) << ((((~(((/* implicit */int) arr_14 [i_0] [(short)3] [i_3] [i_0] [i_5])))) + (115)))));
                        }
                    }
                    /* vectorizable */
                    for (short i_6 = 0; i_6 < 22; i_6 += 3) 
                    {
                        arr_24 [i_6] [i_0] [i_0] [(short)12] = ((/* implicit */signed char) (_Bool)1);
                        arr_25 [i_0] [i_0] [i_6] [i_0] [i_2] [(signed char)14] = ((/* implicit */short) ((arr_7 [i_2] [i_1 - 1] [i_0 - 3]) | (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)2)))));
                    }
                    for (signed char i_7 = 0; i_7 < 22; i_7 += 4) 
                    {
                        arr_28 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(arr_15 [i_0 - 2] [(short)14] [i_0] [11] [i_7])))) ? (((/* implicit */int) max((((/* implicit */short) (!(((/* implicit */_Bool) arr_4 [i_0]))))), (min((var_2), ((short)32634)))))) : (((/* implicit */int) arr_5 [i_0] [i_7]))));
                        var_29 = ((/* implicit */unsigned short) max((var_29), (((/* implicit */unsigned short) ((((/* implicit */int) (short)1192)) < (-1))))));
                    }
                    var_30 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)18662)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)18662))));
                    arr_29 [i_0] = ((/* implicit */int) (((_Bool)1) ? (((/* implicit */long long int) (((-(var_12))) | (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_27 [i_1]))))))) : ((-((-(var_16)))))));
                    var_31 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-31207)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [i_0]))))) ? (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (short)-18663)))) : (((/* implicit */int) max((arr_2 [i_0]), (((/* implicit */unsigned short) (short)18690)))))));
                    var_32 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_26 [i_0 - 2] [i_1] [i_2] [i_0] [i_2] [i_1])) ? (((/* implicit */int) arr_26 [i_0 - 3] [3] [i_0 - 3] [i_1] [i_0 - 3] [i_2])) : (((/* implicit */int) arr_14 [i_0 + 1] [16] [i_0] [i_0] [7])))) - ((-(((/* implicit */int) min((((/* implicit */unsigned short) var_2)), (arr_22 [i_1] [i_2] [i_0] [i_1] [i_0]))))))));
                }
            }
        } 
    } 
    var_33 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_1))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) var_2))) * (var_5))) == (((/* implicit */unsigned int) ((/* implicit */int) ((var_10) >= (((/* implicit */int) var_9)))))))))) : (max((var_18), (((/* implicit */long long int) var_10))))));
}
