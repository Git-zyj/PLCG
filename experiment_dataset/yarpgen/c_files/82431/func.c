/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82431
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82431 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82431
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
    var_17 = ((/* implicit */unsigned char) (+(((((/* implicit */unsigned long long int) ((((/* implicit */int) var_14)) / (var_9)))) ^ (((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) ^ (2305842734335787008ULL)))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        var_18 = ((/* implicit */unsigned short) arr_2 [i_0]);
        var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) var_0))));
        /* LoopSeq 3 */
        for (short i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            arr_7 [i_1] [i_0] [i_0] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0]))) : (var_7)))));
            /* LoopSeq 3 */
            for (unsigned short i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned short)54321)))) : (((((/* implicit */int) (unsigned short)11214)) * (((/* implicit */int) (unsigned short)54321))))));
                var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(arr_0 [i_1])))) ? (((var_6) << (((((/* implicit */int) arr_11 [i_2] [i_0])) + (25498))))) : (((/* implicit */unsigned int) (+(((/* implicit */int) (short)-4436)))))));
                var_22 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_4))));
                arr_12 [i_1] [i_0] [i_2] = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_8 [i_2] [i_2] [i_1] [i_0])) - (((/* implicit */int) var_2)))) != (((((/* implicit */_Bool) arr_3 [i_1] [(_Bool)1])) ? (((/* implicit */int) (short)-32747)) : (((/* implicit */int) var_14))))));
                var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) (+((-(((/* implicit */int) arr_1 [i_0])))))))));
            }
            for (int i_3 = 1; i_3 < 18; i_3 += 2) 
            {
                arr_16 [(short)14] [i_3] = ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)54321))));
                /* LoopSeq 1 */
                for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 1) 
                {
                    var_24 |= ((/* implicit */short) (-(((/* implicit */int) (unsigned char)8))));
                    var_25 = ((/* implicit */short) min((var_25), (arr_18 [i_0])));
                    var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_13))))))))));
                    /* LoopSeq 2 */
                    for (signed char i_5 = 0; i_5 < 21; i_5 += 1) /* same iter space */
                    {
                        var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_15 [(unsigned short)18] [i_3])) == (((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])))))));
                        var_28 = ((/* implicit */short) (+(((((/* implicit */int) (short)-3303)) - (((/* implicit */int) arr_10 [i_4]))))));
                        var_29 = (~(((((/* implicit */_Bool) (unsigned short)430)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_13)))));
                        var_30 = ((/* implicit */unsigned short) var_6);
                        var_31 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_0] [i_1] [i_3] [i_4] [i_5])) ? (((/* implicit */int) arr_4 [i_0] [i_1] [i_4])) : (arr_14 [i_3] [i_4] [i_5]))))));
                    }
                    for (signed char i_6 = 0; i_6 < 21; i_6 += 1) /* same iter space */
                    {
                        var_32 = ((/* implicit */unsigned char) arr_8 [i_4] [i_4] [i_4] [(unsigned short)10]);
                        var_33 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) (unsigned short)11214)))) ? (((((/* implicit */_Bool) (unsigned short)40490)) ? (((/* implicit */int) arr_21 [(signed char)17] [i_6] [i_3] [i_4] [i_3] [i_1] [i_0])) : (((/* implicit */int) arr_15 [i_0] [i_3])))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_16)))))));
                        var_34 = ((/* implicit */signed char) min((var_34), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_4] [i_6]))) ^ (arr_20 [i_0]))))));
                    }
                    arr_23 [i_0] [(_Bool)1] [i_4] [i_3] = ((/* implicit */_Bool) var_10);
                }
            }
            for (unsigned short i_7 = 2; i_7 < 20; i_7 += 2) 
            {
                var_35 = ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)15)))))));
                var_36 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [i_7] [i_7] [i_7 - 2])) ? (arr_14 [i_7] [i_7] [i_7 - 2]) : (arr_14 [i_7] [i_7] [i_7 + 1])));
                /* LoopNest 2 */
                for (unsigned int i_8 = 3; i_8 < 20; i_8 += 1) 
                {
                    for (unsigned char i_9 = 0; i_9 < 21; i_9 += 1) 
                    {
                        {
                            var_37 = ((((/* implicit */_Bool) var_7)) ? (arr_30 [i_1] [i_1] [i_1] [i_1] [i_8] [i_8 - 3]) : (arr_30 [i_1] [i_7] [i_7] [i_7] [i_8] [i_8 - 2]));
                            var_38 = (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_9 [i_8] [i_7] [i_1]))))));
                            var_39 = ((/* implicit */unsigned short) arr_20 [i_8]);
                        }
                    } 
                } 
            }
            var_40 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_30 [i_0] [i_1] [i_0] [i_0] [i_1] [i_1])) ? (((var_5) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_18 [i_1])))) : ((+(((/* implicit */int) arr_2 [i_0]))))));
        }
        for (unsigned short i_10 = 4; i_10 < 19; i_10 += 1) 
        {
            arr_34 [i_10] [(short)2] [i_0] = var_8;
            var_41 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_5 [i_0] [18]))));
        }
        for (short i_11 = 0; i_11 < 21; i_11 += 3) 
        {
            var_42 += ((/* implicit */short) (((!(((/* implicit */_Bool) (unsigned short)11207)))) ? (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)240))) + (-6101168777963389319LL))) : (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1)))))));
            var_43 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_11] [i_0])) ^ (((/* implicit */int) var_10))))) ? (((/* implicit */int) arr_17 [i_0] [i_0] [(signed char)6] [i_11] [i_11] [i_11])) : ((~(((/* implicit */int) (signed char)8))))));
            var_44 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) arr_27 [i_0] [i_11])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_36 [i_0] [i_11]))))));
            var_45 -= ((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))));
        }
    }
    for (unsigned short i_12 = 0; i_12 < 24; i_12 += 1) 
    {
        var_46 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_37 [i_12]))));
        arr_41 [i_12] [(signed char)5] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+((+(((/* implicit */int) (unsigned char)2))))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (short)4436))))) : (((((/* implicit */_Bool) (unsigned short)54307)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_39 [i_12]))) : (4294967295U)))));
    }
    for (short i_13 = 1; i_13 < 12; i_13 += 3) 
    {
        var_47 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_21 [i_13 - 1] [(_Bool)1] [i_13] [i_13] [i_13] [i_13] [i_13])) ? ((+(((/* implicit */int) arr_21 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13] [i_13])))) : (((/* implicit */int) (unsigned short)64005))));
        var_48 = ((((((/* implicit */int) arr_4 [i_13] [i_13] [i_13])) << (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)11216)) || (((/* implicit */_Bool) (signed char)64))))))) ^ (((/* implicit */int) arr_22 [i_13] [i_13 + 1] [i_13] [i_13])));
    }
}
