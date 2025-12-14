/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79621
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79621 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79621
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
    var_10 |= var_0;
    var_11 = ((/* implicit */unsigned int) (+(((/* implicit */int) var_3))));
    /* LoopSeq 4 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        var_12 = ((/* implicit */signed char) min((var_12), (((/* implicit */signed char) (+(((/* implicit */int) (unsigned char)84)))))));
        arr_4 [(unsigned char)9] = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_1))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 2; i_1 < 17; i_1 += 4) 
        {
            for (unsigned int i_2 = 3; i_2 < 15; i_2 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned char i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        var_13 *= ((/* implicit */signed char) ((max((((/* implicit */long long int) (unsigned char)44)), (max((18014398509481983LL), (((/* implicit */long long int) 3219434078U)))))) * ((+(0LL)))));
                        var_14 += ((/* implicit */short) ((((/* implicit */_Bool) 1075533218U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)120))) : (1075533206U)));
                        var_15 = ((/* implicit */short) ((((/* implicit */int) (unsigned char)191)) == (((/* implicit */int) (short)-5916))));
                    }
                    for (signed char i_4 = 1; i_4 < 15; i_4 += 1) /* same iter space */
                    {
                        arr_15 [i_4] [i_2] [i_1 - 2] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned char)64)))) : (((((/* implicit */_Bool) 3219434092U)) ? (((/* implicit */int) (unsigned char)57)) : (((/* implicit */int) (signed char)20))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-5908))) : (((unsigned int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) var_2)))))));
                        var_16 -= var_6;
                        arr_16 [i_0] [i_1] [i_2] [i_4] [i_1] = ((/* implicit */short) arr_14 [i_0] [i_0] [i_0] [i_1]);
                        var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) max((7538353238537318198LL), (min((((/* implicit */long long int) arr_9 [i_0] [(unsigned char)3] [i_2 - 2])), (max((-6469177777522798581LL), (((/* implicit */long long int) (unsigned char)64)))))))))));
                    }
                    for (signed char i_5 = 1; i_5 < 15; i_5 += 1) /* same iter space */
                    {
                        var_18 = ((/* implicit */long long int) max((var_18), ((+(((((/* implicit */_Bool) ((((/* implicit */int) var_3)) - (((/* implicit */int) (unsigned char)11))))) ? (((((/* implicit */long long int) ((/* implicit */int) var_1))) / (-4545171902365782927LL))) : (((/* implicit */long long int) ((((/* implicit */int) (short)5900)) / (((/* implicit */int) (short)-9965)))))))))));
                        var_19 |= ((/* implicit */long long int) (-(((/* implicit */int) (short)-1))));
                    }
                    /* LoopNest 2 */
                    for (unsigned char i_6 = 1; i_6 < 16; i_6 += 3) 
                    {
                        for (unsigned char i_7 = 2; i_7 < 15; i_7 += 1) 
                        {
                            {
                                var_20 *= ((/* implicit */unsigned int) (((-(((/* implicit */int) (short)32767)))) / (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_24 [i_0] [i_0] [i_2] [i_6 + 2] [i_7] [(unsigned char)0]))))));
                                var_21 &= ((/* implicit */short) 1360414821U);
                                var_22 += ((/* implicit */unsigned char) max((max((((7067592077493140060LL) | (((/* implicit */long long int) var_9)))), (((/* implicit */long long int) arr_7 [i_1 + 1] [i_1 + 1] [i_6 + 1])))), (((/* implicit */long long int) (short)-1))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (long long int i_8 = 0; i_8 < 13; i_8 += 1) 
    {
        var_23 &= (-(9223372036854775788LL));
        arr_29 [i_8] [i_8] = ((/* implicit */unsigned char) min((((min((((/* implicit */unsigned int) (short)5922)), (arr_11 [i_8]))) | (((/* implicit */unsigned int) ((((/* implicit */_Bool) -1281704908536479499LL)) ? (((/* implicit */int) (unsigned char)157)) : (((/* implicit */int) (short)5935))))))), (((((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-7)) ? (((/* implicit */int) (short)-24906)) : (((/* implicit */int) (signed char)69))))) - (((((/* implicit */_Bool) arr_21 [i_8] [i_8] [i_8] [i_8])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (948068555U)))))));
        arr_30 [i_8] [i_8] = ((short) ((((/* implicit */_Bool) arr_24 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8])) ? (((/* implicit */int) arr_9 [(short)17] [i_8] [i_8])) : (((((/* implicit */int) var_1)) & (((/* implicit */int) arr_5 [6LL] [i_8] [i_8]))))));
        arr_31 [4LL] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned char)8)))) + (((/* implicit */int) arr_25 [i_8] [i_8] [i_8]))))) ? (((((/* implicit */_Bool) min((var_0), (((/* implicit */short) (unsigned char)246))))) ? (((/* implicit */int) min((var_8), (var_1)))) : (((/* implicit */int) ((var_5) != (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)55)))))))) : ((-(((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)11)) && (((/* implicit */_Bool) (signed char)51)))))))));
    }
    for (unsigned int i_9 = 4; i_9 < 12; i_9 += 2) 
    {
        arr_34 [i_9] = ((/* implicit */short) ((unsigned char) min((((/* implicit */unsigned int) var_3)), (var_4))));
        /* LoopNest 2 */
        for (unsigned char i_10 = 2; i_10 < 10; i_10 += 1) 
        {
            for (unsigned int i_11 = 3; i_11 < 13; i_11 += 4) 
            {
                {
                    var_24 += ((/* implicit */signed char) var_9);
                    var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */short) var_6)), ((short)28439)))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (!(((/* implicit */_Bool) -975254078890672030LL))))))))));
                    var_26 = ((/* implicit */long long int) (unsigned char)24);
                }
            } 
        } 
    }
    for (short i_12 = 0; i_12 < 19; i_12 += 1) 
    {
        arr_41 [i_12] [i_12] = ((/* implicit */short) max(((+(((/* implicit */int) (unsigned char)192)))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_39 [i_12]))))));
        var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)95)) == (((/* implicit */int) (signed char)47)))))));
        /* LoopSeq 1 */
        for (long long int i_13 = 3; i_13 < 15; i_13 += 1) 
        {
            var_28 *= ((/* implicit */unsigned int) arr_44 [i_13 + 3]);
            var_29 = ((/* implicit */unsigned char) max((((/* implicit */int) arr_44 [i_12])), ((-(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_40 [i_12]))))))));
        }
        arr_45 [i_12] = ((/* implicit */unsigned int) var_2);
    }
    var_30 &= ((/* implicit */short) ((var_9) * (3631510445U)));
}
