/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90529
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90529 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90529
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
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        var_19 |= ((/* implicit */signed char) min(((+(arr_0 [i_0]))), (((/* implicit */long long int) ((arr_0 [i_0]) >= (arr_0 [i_0]))))));
        var_20 = ((/* implicit */unsigned char) (+((-(((/* implicit */int) var_13))))));
        /* LoopSeq 3 */
        for (short i_1 = 2; i_1 < 21; i_1 += 1) 
        {
            var_21 += ((((/* implicit */int) (signed char)-46)) | (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_18))) != (arr_1 [i_1 + 2] [i_1 + 2])))));
            var_22 = ((/* implicit */_Bool) (+((+(((((/* implicit */_Bool) var_17)) ? (((/* implicit */long long int) ((/* implicit */int) var_18))) : (var_17)))))));
            var_23 += ((/* implicit */unsigned char) max((var_3), (((/* implicit */short) (_Bool)1))));
            /* LoopNest 2 */
            for (unsigned char i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                for (unsigned long long int i_3 = 3; i_3 < 21; i_3 += 4) 
                {
                    {
                        var_24 = ((/* implicit */long long int) (unsigned char)255);
                        /* LoopSeq 2 */
                        for (signed char i_4 = 4; i_4 < 21; i_4 += 1) 
                        {
                            arr_14 [i_1] [i_1] = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) var_13)), (0U)));
                            var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) (-(min((((/* implicit */long long int) var_3)), (arr_1 [i_2] [i_2]))))))));
                            var_26 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 3U))));
                            var_27 = max(((+(((/* implicit */int) max((var_3), (var_13)))))), (max(((+(((/* implicit */int) var_9)))), (((((/* implicit */_Bool) (unsigned char)241)) ? (((/* implicit */int) (unsigned char)14)) : (((/* implicit */int) var_9)))))));
                        }
                        for (unsigned int i_5 = 0; i_5 < 23; i_5 += 2) 
                        {
                            arr_19 [i_0] [i_1] [i_2] [i_3 + 1] [10] [i_1] [i_5] = ((/* implicit */long long int) arr_5 [i_1] [i_1]);
                            arr_20 [i_5] [i_3] [i_1] [i_1] [i_0] [i_0] = ((/* implicit */_Bool) max((((/* implicit */int) arr_9 [i_0] [(unsigned short)5] [(unsigned short)5] [i_3] [16U])), (-707406946)));
                            arr_21 [i_0] [i_1] [7] [i_3] [i_5] = ((/* implicit */int) ((unsigned int) (unsigned char)241));
                            var_28 ^= ((/* implicit */long long int) ((unsigned long long int) var_2));
                            var_29 *= ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_7 [i_3 - 1] [i_3 + 1]), (arr_7 [i_3] [i_3 - 2])))) ? (((((/* implicit */int) arr_7 [i_3 - 3] [i_3 - 2])) ^ (((/* implicit */int) arr_7 [i_1] [i_3 - 1])))) : (((((/* implicit */_Bool) var_4)) ? (1708671112) : (((/* implicit */int) var_9))))));
                        }
                    }
                } 
            } 
        }
        for (int i_6 = 0; i_6 < 23; i_6 += 1) 
        {
            var_30 = ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) ((short) ((((/* implicit */_Bool) (unsigned char)14)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_2)))))) : ((-(((/* implicit */int) min((var_11), (((/* implicit */unsigned char) (signed char)30))))))));
            /* LoopNest 2 */
            for (long long int i_7 = 0; i_7 < 23; i_7 += 1) 
            {
                for (unsigned char i_8 = 0; i_8 < 23; i_8 += 2) 
                {
                    {
                        arr_29 [i_7] [i_6] [1LL] [(signed char)9] = ((/* implicit */unsigned short) max((((long long int) arr_24 [i_0] [i_7])), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)7801)) / (((/* implicit */int) (_Bool)1))))) ? (max((var_4), (((/* implicit */unsigned int) arr_9 [(short)1] [i_6] [(short)1] [(signed char)4] [(short)1])))) : (((/* implicit */unsigned int) ((/* implicit */int) var_15))))))));
                        arr_30 [i_0] [i_7] [i_8] = ((/* implicit */signed char) (+(max((min((2926642703U), (((/* implicit */unsigned int) var_13)))), (((/* implicit */unsigned int) var_10))))));
                        arr_31 [i_0] [i_0] [i_7] [i_0] = ((unsigned char) max((((/* implicit */short) var_11)), ((short)(-32767 - 1))));
                    }
                } 
            } 
        }
        for (unsigned int i_9 = 0; i_9 < 23; i_9 += 1) 
        {
            var_31 = ((/* implicit */unsigned int) 707406946);
            /* LoopNest 3 */
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    for (long long int i_12 = 0; i_12 < 23; i_12 += 3) 
                    {
                        {
                            arr_42 [i_0] [i_9] [i_10] [i_11] [i_12] [i_10] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((unsigned int) arr_27 [i_12] [i_10] [(unsigned char)17])), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_27 [i_9] [i_10] [7LL])))))))) ? (((/* implicit */int) min(((unsigned char)242), ((unsigned char)14)))) : (((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (unsigned char)160)) : (((/* implicit */int) (unsigned char)19))))));
                            var_32 = ((/* implicit */short) min((var_32), (((/* implicit */short) (-(max(((((_Bool)0) ? (var_17) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_0] [(signed char)10] [i_0]))))), (((/* implicit */long long int) arr_10 [i_0] [(short)11] [i_0] [i_11])))))))));
                        }
                    } 
                } 
            } 
            arr_43 [i_0] |= ((((/* implicit */_Bool) max((((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0] [i_9])), ((+(((/* implicit */int) var_7))))))) ? (((/* implicit */long long int) (-(4294967295U)))) : (min((var_17), (max((var_16), (((/* implicit */long long int) arr_17 [18LL] [18LL])))))));
            var_33 += ((/* implicit */unsigned int) arr_15 [i_0] [i_9] [i_9] [(_Bool)1] [(_Bool)1]);
        }
    }
    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
    {
        var_34 = min((((((((/* implicit */_Bool) arr_34 [i_13] [i_13] [i_13])) ? (((/* implicit */long long int) ((/* implicit */int) arr_35 [i_13] [(_Bool)1] [4LL]))) : (var_12))) & (((/* implicit */long long int) max((((/* implicit */int) (short)(-32767 - 1))), (var_10)))))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_13] [i_13] [i_13] [i_13] [i_13]))) : (704349268U)))) || (((/* implicit */_Bool) ((((/* implicit */int) var_7)) >> (((((/* implicit */int) (unsigned short)65527)) - (65518))))))))));
        var_35 = ((((/* implicit */_Bool) var_13)) ? (((unsigned long long int) min((((/* implicit */int) var_15)), (var_1)))) : (((/* implicit */unsigned long long int) 2946342924U)));
    }
    var_36 = ((/* implicit */short) max((var_36), (max((((/* implicit */short) var_6)), (var_13)))));
    /* LoopSeq 1 */
    for (long long int i_14 = 3; i_14 < 19; i_14 += 2) 
    {
        var_37 = ((/* implicit */unsigned char) min((var_37), (((/* implicit */unsigned char) min((arr_37 [i_14] [i_14] [i_14] [i_14 + 2] [(_Bool)1]), (max((arr_37 [(signed char)6] [i_14 - 2] [i_14 - 3] [i_14 + 1] [(signed char)16]), (arr_37 [(unsigned char)10] [(unsigned char)10] [i_14] [i_14 - 1] [22]))))))));
        arr_50 [(unsigned char)10] &= ((/* implicit */_Bool) (unsigned char)145);
        arr_51 [i_14] = ((/* implicit */_Bool) arr_15 [i_14] [i_14 - 2] [i_14] [i_14 - 2] [i_14]);
        /* LoopNest 2 */
        for (long long int i_15 = 0; i_15 < 21; i_15 += 1) 
        {
            for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
            {
                {
                    var_38 = ((/* implicit */_Bool) arr_53 [i_14]);
                    var_39 = ((/* implicit */int) min((var_39), (((/* implicit */int) max((((/* implicit */unsigned int) max(((unsigned char)19), (((/* implicit */unsigned char) arr_25 [i_14 - 3] [i_14 - 1] [20U]))))), (797322498U))))));
                }
            } 
        } 
    }
}
