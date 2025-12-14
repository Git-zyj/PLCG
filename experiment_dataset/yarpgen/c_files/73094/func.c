/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73094
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73094 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73094
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
    var_13 = ((/* implicit */_Bool) (~(var_4)));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        var_14 *= ((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-25323)))))) ? (((/* implicit */int) arr_0 [i_0])) : ((+(0))))), (max((((/* implicit */int) (unsigned char)63)), (((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_6))))))));
        arr_2 [i_0] = ((/* implicit */signed char) (_Bool)1);
    }
    for (short i_1 = 0; i_1 < 19; i_1 += 2) 
    {
        /* LoopSeq 1 */
        for (long long int i_2 = 0; i_2 < 19; i_2 += 2) 
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 19; i_3 += 1) 
            {
                for (unsigned long long int i_4 = 0; i_4 < 19; i_4 += 2) 
                {
                    {
                        var_15 = arr_11 [i_4] [i_3] [i_2] [i_1];
                        var_16 *= ((/* implicit */unsigned char) var_8);
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (signed char i_5 = 0; i_5 < 19; i_5 += 3) 
                        {
                            var_17 *= ((/* implicit */short) (!(((/* implicit */_Bool) arr_7 [i_2] [i_3] [i_4]))));
                            var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)117)) ? (((/* implicit */int) (signed char)-63)) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) (unsigned char)7)) ? (-291863998) : (((/* implicit */int) (signed char)-16)))) : (((/* implicit */int) (!(var_6)))))))));
                            var_19 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_17 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] [i_5])) ? (((/* implicit */int) var_7)) : ((-(arr_14 [i_1] [i_1] [i_1] [i_1] [i_1])))));
                        }
                        /* vectorizable */
                        for (unsigned char i_6 = 0; i_6 < 19; i_6 += 1) 
                        {
                            var_20 *= ((/* implicit */signed char) ((((var_10) - (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) - (arr_17 [i_1] [i_1] [i_3] [i_1] [i_4] [i_1] [i_6])));
                            var_21 = ((/* implicit */int) ((unsigned long long int) (signed char)41));
                            var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_6) ? (658478502362218679ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))) ? (((int) var_10)) : (((/* implicit */int) ((((/* implicit */unsigned long long int) 1142000146U)) < (6551909322971439714ULL)))))))));
                        }
                        var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) (-(((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)216))) / (var_1))) / (((/* implicit */long long int) ((var_3) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)209)))))))))))));
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (unsigned long long int i_7 = 0; i_7 < 19; i_7 += 4) 
            {
                var_24 = ((/* implicit */long long int) min((((unsigned char) arr_15 [i_1] [i_1] [i_7] [i_7] [(_Bool)1] [i_7] [i_1])), (((/* implicit */unsigned char) ((((/* implicit */int) (short)-13664)) > (((/* implicit */int) max((((/* implicit */short) (_Bool)1)), ((short)10770)))))))));
                /* LoopNest 2 */
                for (signed char i_8 = 0; i_8 < 19; i_8 += 4) 
                {
                    for (int i_9 = 0; i_9 < 19; i_9 += 3) 
                    {
                        {
                            var_25 *= ((/* implicit */unsigned long long int) (~(min(((~(var_3))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_18 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])) ? (var_5) : (((/* implicit */int) var_7)))))))));
                            arr_29 [i_1] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((_Bool) arr_28 [i_7] [i_2])))));
                            var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) (~(max((17331269832787207952ULL), (65535ULL))))))));
                            arr_30 [i_1] [i_1] [i_7] [i_8] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(arr_21 [(signed char)7] [i_2])))) && (((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_8)) ? (5941407949373762311ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))))))));
                        }
                    } 
                } 
                var_27 ^= ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_3) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)23334)))))) ? (((var_3) - (((/* implicit */unsigned int) ((/* implicit */int) var_6))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_25 [i_1] [i_1] [i_7] [i_7] [i_1])) : (((/* implicit */int) arr_12 [i_1] [i_1] [i_1])))))))), (max((((arr_28 [(signed char)8] [i_7]) - (var_11))), (16271689276105098821ULL)))));
            }
        }
        var_28 = (((((((-(((/* implicit */int) var_8)))) + (2147483647))) >> (((((/* implicit */int) min((((/* implicit */short) arr_15 [i_1] [i_1] [i_1] [i_1] [i_1] [1ULL] [i_1])), (arr_10 [i_1] [i_1] [i_1] [i_1])))) + (18155))))) < (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_1] [i_1] [i_1] [i_1]))) <= (var_4)))));
        var_29 = ((/* implicit */long long int) ((short) max((((/* implicit */int) (_Bool)1)), (((((/* implicit */_Bool) (short)-8)) ? (((/* implicit */int) arr_13 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])) : (755328792))))));
        var_30 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((signed char) arr_23 [i_1] [i_1] [(unsigned char)6] [(unsigned char)6] [i_1] [i_1])))));
        arr_31 [i_1] = ((/* implicit */signed char) arr_10 [(_Bool)1] [(signed char)6] [i_1] [i_1]);
    }
    var_31 &= ((/* implicit */unsigned short) (-(((((/* implicit */long long int) (~(((/* implicit */int) (short)1008))))) ^ (min((var_10), (((/* implicit */long long int) var_6))))))));
    var_32 *= ((/* implicit */short) min((((/* implicit */int) var_2)), (min((((((/* implicit */int) var_9)) / (((/* implicit */int) var_6)))), (((((/* implicit */int) var_9)) - (((/* implicit */int) var_12))))))));
}
