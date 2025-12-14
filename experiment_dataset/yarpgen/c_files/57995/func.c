/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57995
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57995 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57995
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
    var_10 |= ((/* implicit */signed char) (!(((/* implicit */_Bool) var_4))));
    var_11 = ((/* implicit */unsigned char) var_7);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        var_12 = ((/* implicit */long long int) var_7);
        var_13 += ((/* implicit */long long int) var_0);
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            arr_6 [i_0] [i_0] = ((/* implicit */unsigned int) (~(min((((/* implicit */unsigned long long int) max((var_6), (var_9)))), (4997836221152005287ULL)))));
            /* LoopSeq 1 */
            for (signed char i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                var_14 = ((/* implicit */signed char) var_1);
                var_15 = ((/* implicit */short) ((((/* implicit */_Bool) 4997836221152005281ULL)) ? (((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (var_0))) : (((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) 9223372036854775807LL))))));
                var_16 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) (unsigned short)34412)))) ? (((/* implicit */long long int) ((/* implicit */int) max((max((var_4), ((unsigned char)48))), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) 1559794157U))))))))) : (((((/* implicit */_Bool) ((((/* implicit */int) var_3)) ^ (((/* implicit */int) var_8))))) ? (min((-1844084888801099786LL), (((/* implicit */long long int) (signed char)91)))) : (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)57437)))))))));
            }
        }
    }
    /* LoopNest 2 */
    for (unsigned int i_3 = 0; i_3 < 19; i_3 += 3) 
    {
        for (int i_4 = 0; i_4 < 19; i_4 += 3) 
        {
            {
                var_17 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((var_0), (((/* implicit */unsigned int) max((var_8), (var_2))))))) ? ((+(((((/* implicit */_Bool) (unsigned short)61012)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))) : (((/* implicit */unsigned int) ((/* implicit */int) max((var_7), (var_9)))))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned long long int i_5 = 0; i_5 < 19; i_5 += 3) 
                {
                    var_18 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_9))))) && (((/* implicit */_Bool) arr_7 [(short)2] [i_4] [i_4] [16U]))));
                    var_19 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_6))))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_8)))) : (((/* implicit */int) arr_8 [(_Bool)1] [(_Bool)1]))));
                }
                for (unsigned char i_6 = 0; i_6 < 19; i_6 += 2) 
                {
                    /* LoopNest 2 */
                    for (signed char i_7 = 0; i_7 < 19; i_7 += 1) 
                    {
                        for (long long int i_8 = 0; i_8 < 19; i_8 += 4) 
                        {
                            {
                                arr_25 [i_6] [0] [0] = ((/* implicit */short) (signed char)115);
                                var_20 &= ((/* implicit */signed char) var_4);
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned char i_9 = 0; i_9 < 19; i_9 += 1) 
                    {
                        var_21 = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned short)57514))));
                        var_22 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_1)))));
                        var_23 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) ((short) (signed char)79))) : (((/* implicit */int) var_7))));
                        var_24 = ((/* implicit */unsigned long long int) ((((9223372036854775797LL) != (((/* implicit */long long int) ((/* implicit */int) (signed char)124))))) && ((!(((/* implicit */_Bool) var_3))))));
                    }
                    for (int i_10 = 0; i_10 < 19; i_10 += 3) 
                    {
                        var_25 = ((/* implicit */signed char) (~(((max((var_0), (((/* implicit */unsigned int) arr_20 [i_3] [i_4] [i_6] [i_10])))) * (((/* implicit */unsigned int) (~(((/* implicit */int) var_6)))))))));
                        /* LoopSeq 1 */
                        for (unsigned int i_11 = 0; i_11 < 19; i_11 += 1) 
                        {
                            var_26 += max((((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) (~(((/* implicit */int) var_6)))))))), (var_3));
                            var_27 = ((/* implicit */signed char) max((((/* implicit */int) arr_8 [i_6] [i_10])), (((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_2)), (var_0)))) ? ((+(((/* implicit */int) (short)-4021)))) : (((/* implicit */int) max((((/* implicit */unsigned short) (signed char)86)), (var_3))))))));
                            arr_33 [i_11] [i_10] [i_6] [i_10] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_6)) | (((/* implicit */int) (short)4034))))) ? (((/* implicit */unsigned int) ((var_6) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_2))))) : (max((var_0), (((/* implicit */unsigned int) var_5))))))) ? (((/* implicit */int) max(((!(((/* implicit */_Bool) arr_7 [i_10] [i_6] [i_10] [i_6])))), (var_6)))) : (((/* implicit */int) (!(var_7))))));
                        }
                    }
                }
                for (unsigned int i_12 = 0; i_12 < 19; i_12 += 4) 
                {
                    var_28 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)8091)) ^ (((/* implicit */int) (unsigned char)65))));
                    var_29 = ((/* implicit */unsigned char) max((var_29), (((/* implicit */unsigned char) var_0))));
                }
                var_30 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_7))))))) ? (((((var_1) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))) ? (((((/* implicit */_Bool) var_4)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_32 [i_3]))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 2305807824841605120ULL))))))));
                var_31 = ((int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [(unsigned char)8])) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (arr_18 [i_3] [i_3] [i_4] [i_4]))))));
                var_32 = ((/* implicit */unsigned long long int) max((((((((/* implicit */_Bool) (unsigned char)227)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_2)))) - ((+(((/* implicit */int) var_2)))))), (((/* implicit */int) ((((var_1) >= (((/* implicit */unsigned long long int) arr_7 [20] [i_3] [i_3] [i_3])))) && (((/* implicit */_Bool) ((arr_23 [(unsigned char)5] [i_4] [i_3] [i_3] [i_3] [i_3]) ^ (((/* implicit */int) var_7))))))))));
            }
        } 
    } 
}
