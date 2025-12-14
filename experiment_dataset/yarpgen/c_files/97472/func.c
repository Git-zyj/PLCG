/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97472
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97472 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97472
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
    for (int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_18 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) min((((/* implicit */short) (signed char)-32)), (arr_4 [i_1])))) : (((/* implicit */int) ((_Bool) arr_4 [i_1])))));
                /* LoopSeq 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        for (signed char i_4 = 1; i_4 < 23; i_4 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */_Bool) max((var_19), (((max((((((/* implicit */int) (unsigned short)64012)) + (((/* implicit */int) arr_1 [i_2])))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_2])) : (((/* implicit */int) var_17)))))) >= (-408720566)))));
                                arr_13 [i_2] [i_1] [i_2] [i_4 + 1] [i_1] = ((/* implicit */unsigned short) var_6);
                                var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) min((min(((~(arr_2 [i_1] [i_3] [i_4]))), (((/* implicit */unsigned long long int) ((-408720566) ^ (((/* implicit */int) (_Bool)0))))))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((var_8) ? (((/* implicit */int) arr_9 [(_Bool)1] [i_3] [i_2] [i_3])) : (((/* implicit */int) (unsigned char)89))))), (((((/* implicit */_Bool) arr_2 [i_4] [i_1] [(short)12])) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0]))) : (var_7)))))))))));
                                var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) arr_6 [i_3] [i_1]))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */int) max((var_22), (((int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_4 [i_0]))))) ? (((/* implicit */int) (!(var_11)))) : (((/* implicit */int) ((((/* implicit */int) arr_7 [i_0] [i_1] [i_2])) > (((/* implicit */int) (_Bool)1))))))))));
                }
                for (unsigned char i_5 = 1; i_5 < 23; i_5 += 2) 
                {
                    arr_17 [i_5 + 1] [i_5] [i_5] [i_0] = ((/* implicit */signed char) var_0);
                    /* LoopNest 2 */
                    for (short i_6 = 2; i_6 < 23; i_6 += 2) 
                    {
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            {
                                var_23 ^= ((/* implicit */_Bool) min((((/* implicit */int) (!(((/* implicit */_Bool) 2135071372U))))), (((((var_3) > (((/* implicit */int) arr_6 [i_0] [i_0])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_5]))))) : (((((/* implicit */int) var_16)) % (((/* implicit */int) var_17))))))));
                                arr_23 [i_5] [i_6] [i_0] [i_1] [i_1] [i_1] [i_5] = ((/* implicit */short) min(((-((+(((/* implicit */int) var_14)))))), ((+(((/* implicit */int) arr_21 [i_5] [i_5 + 1] [i_5] [i_6] [i_0]))))));
                            }
                        } 
                    } 
                    var_24 = (((+(((/* implicit */int) arr_7 [i_5] [i_5] [i_5 + 1])))) / (max((((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (((/* implicit */int) arr_15 [i_1])) : (var_3))), (997890157))));
                }
                /* LoopSeq 1 */
                for (int i_8 = 0; i_8 < 24; i_8 += 4) 
                {
                    var_25 *= (!(((/* implicit */_Bool) ((unsigned short) ((((/* implicit */int) arr_4 [i_1])) == (-1739474080))))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 24; i_9 += 2) /* same iter space */
                    {
                        var_26 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_28 [i_0] [i_1] [i_8] [i_9]))));
                        var_27 = ((/* implicit */unsigned char) var_14);
                        var_28 += (signed char)-117;
                    }
                    for (int i_10 = 0; i_10 < 24; i_10 += 2) /* same iter space */
                    {
                        var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_32 [i_8] [i_8] [i_8] [i_8]) ? (((/* implicit */int) (unsigned short)42384)) : (((/* implicit */int) arr_32 [i_0] [i_0] [i_8] [i_10]))))) ? (4217321386U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_32 [i_0] [i_1] [i_1] [i_8])))));
                        arr_33 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) min(((-(((((/* implicit */_Bool) arr_20 [i_0] [i_1] [i_8])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))), (((/* implicit */int) arr_22 [i_0] [i_8]))));
                    }
                    for (signed char i_11 = 0; i_11 < 24; i_11 += 4) 
                    {
                        var_30 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) (signed char)32)) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) (unsigned char)142)) ? (1620070880) : (((/* implicit */int) (short)0)))))), ((-(((/* implicit */int) max((arr_10 [i_8]), (((/* implicit */unsigned short) var_8)))))))));
                        var_31 = ((/* implicit */_Bool) min((var_31), (((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_8)), (var_4)))) ? ((-(((/* implicit */int) var_5)))) : (((/* implicit */int) (short)32767)))))));
                    }
                    arr_37 [i_0] = ((/* implicit */signed char) min((arr_5 [i_0] [1]), (var_1)));
                }
            }
        } 
    } 
    var_32 = ((/* implicit */_Bool) (+(var_6)));
    var_33 = ((/* implicit */int) var_13);
}
