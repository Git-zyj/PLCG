/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88156
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88156 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88156
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
    var_12 = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) min((559095140U), (((/* implicit */unsigned int) (unsigned short)6964))))) : (min((var_3), (((/* implicit */long long int) var_8)))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 2; i_0 < 21; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 1; i_1 < 22; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                {
                    arr_9 [i_1] = ((unsigned long long int) arr_4 [i_1] [i_1]);
                    var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (((/* implicit */int) arr_0 [i_0 - 1])) : (((/* implicit */int) arr_0 [i_0 - 1]))))))));
                    var_14 *= ((/* implicit */_Bool) arr_6 [i_0 - 2] [i_1] [i_2]);
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 1) 
        {
            for (short i_4 = 3; i_4 < 20; i_4 += 4) 
            {
                {
                    /* LoopSeq 3 */
                    for (long long int i_5 = 0; i_5 < 23; i_5 += 4) 
                    {
                        var_15 -= ((/* implicit */signed char) arr_12 [i_0 + 2] [i_0 + 2] [i_4 - 3] [i_4]);
                        arr_19 [i_5] [i_5] [i_4] [i_5] = ((short) var_11);
                        var_16 = ((/* implicit */signed char) min((arr_13 [i_0]), (((/* implicit */unsigned char) ((var_0) == (((/* implicit */int) arr_0 [i_0 + 1])))))));
                    }
                    for (long long int i_6 = 2; i_6 < 21; i_6 += 3) 
                    {
                        var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_13 [i_0 - 2])) >= (((/* implicit */int) arr_6 [i_0] [i_3] [i_4])))))));
                        arr_22 [i_0 - 2] [i_0] [(signed char)10] &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0 - 2])) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_4 - 1])))))) ? ((~(1139951713U))) : (((/* implicit */unsigned int) ((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)19760))) >= (var_5))) ? (((/* implicit */int) (unsigned short)29376)) : (((/* implicit */int) (unsigned char)221)))))));
                        var_18 = ((long long int) ((((/* implicit */_Bool) arr_12 [i_0 - 2] [i_6 - 2] [i_0 - 2] [i_6])) ? (((/* implicit */int) arr_12 [i_0 - 1] [i_6 - 2] [i_6 + 1] [i_6])) : (((/* implicit */int) arr_12 [i_0 + 1] [i_6 - 2] [i_6 - 2] [i_6]))));
                    }
                    /* vectorizable */
                    for (unsigned short i_7 = 0; i_7 < 23; i_7 += 3) 
                    {
                        arr_27 [i_0 + 2] [i_3] [i_7] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */long long int) var_6)) | (((((/* implicit */_Bool) -1123780059)) ? (7453072443145537568LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)62710)))))));
                        arr_28 [i_0 + 1] [i_0 + 2] [i_0 + 1] [i_7] = ((/* implicit */unsigned char) arr_17 [i_0 - 2] [i_3] [i_4 - 2]);
                        /* LoopSeq 2 */
                        for (short i_8 = 1; i_8 < 22; i_8 += 1) 
                        {
                            var_19 *= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 683862893378489870ULL)) ? (((/* implicit */int) (unsigned char)175)) : (((/* implicit */int) (unsigned short)8729))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_4])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)32507))))) : (832837357U)));
                            arr_33 [i_0] [i_7] [i_0] [i_0] [i_7] [i_7] [i_8 - 1] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_21 [i_0] [i_0 - 1] [i_0 - 2] [i_0 - 2]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_7])))))) : (arr_1 [i_4])));
                            var_20 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_4 [i_7] [i_8]))));
                            arr_34 [i_7] [i_3] [i_3] [i_3] [i_3] [i_7] = arr_17 [i_8 - 1] [i_7] [i_3];
                        }
                        for (int i_9 = 2; i_9 < 21; i_9 += 3) 
                        {
                            var_21 = ((/* implicit */unsigned int) ((arr_25 [i_9 + 1] [i_4 - 3] [i_4] [i_9 + 2] [i_7]) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_7] [i_4 - 2])))));
                            arr_38 [22] [i_0] |= ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-3152)) ? (180130495) : (((/* implicit */int) (unsigned char)131))));
                        }
                    }
                    var_22 ^= ((/* implicit */unsigned short) arr_1 [i_0 - 2]);
                    /* LoopSeq 2 */
                    for (signed char i_10 = 0; i_10 < 23; i_10 += 3) 
                    {
                        arr_42 [i_0 - 2] [i_0 - 2] = ((/* implicit */unsigned int) arr_0 [i_0 - 2]);
                        arr_43 [i_0] [i_0 + 2] [i_0] [i_0] = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((unsigned short) min((6352336615641375391ULL), (((/* implicit */unsigned long long int) (short)-14644)))))), (((((/* implicit */_Bool) (~(((/* implicit */int) arr_30 [i_10] [14LL] [14LL] [i_0 + 1]))))) ? (((long long int) var_10)) : (((/* implicit */long long int) max((arr_2 [i_3]), (((/* implicit */unsigned int) arr_13 [i_0 - 2])))))))));
                    }
                    for (short i_11 = 1; i_11 < 20; i_11 += 3) 
                    {
                        var_23 = ((/* implicit */short) ((((/* implicit */unsigned int) -1438182528)) == (2571990110U)));
                        var_24 = ((/* implicit */signed char) var_5);
                        var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)19641)) - (-487153924)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_15 [i_3] [i_3] [i_4 - 2])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_15 [i_3] [i_4] [i_4 - 3]))))) : (((((/* implicit */_Bool) ((((/* implicit */int) arr_44 [i_0] [(_Bool)1])) | (((/* implicit */int) var_2))))) ? (((((/* implicit */_Bool) arr_30 [i_0 + 2] [i_0] [(_Bool)0] [i_0 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_11 + 3] [16ULL] [16ULL] [i_0]))) : (arr_2 [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [(short)2] [i_0] [i_0 - 1] [i_0])))))));
                    }
                }
            } 
        } 
        /* LoopNest 3 */
        for (long long int i_12 = 1; i_12 < 20; i_12 += 3) 
        {
            for (signed char i_13 = 1; i_13 < 20; i_13 += 3) 
            {
                for (long long int i_14 = 2; i_14 < 21; i_14 += 3) 
                {
                    {
                        var_26 &= ((/* implicit */int) arr_50 [i_12] [i_12 - 1] [i_14 + 2] [i_14]);
                        var_27 = ((/* implicit */unsigned short) var_10);
                        arr_52 [i_14 + 1] [i_14] [i_14] [i_14 - 1] = ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */int) arr_17 [i_13] [i_13] [i_13 + 2])) & (((/* implicit */int) arr_17 [i_0] [i_0] [i_13 + 2])))) : (((int) arr_17 [i_0] [i_12] [i_13 + 2])));
                        arr_53 [i_0 - 2] [i_12] [i_12] [i_13 + 1] [i_14 - 1] = ((long long int) ((long long int) var_11));
                        var_28 = ((/* implicit */short) min((var_28), (((/* implicit */short) ((((arr_41 [i_13 + 2] [i_13 + 2] [i_13 + 2] [i_13 + 3] [i_13]) & (((/* implicit */long long int) ((/* implicit */int) var_9))))) + (max((arr_41 [i_13 + 1] [i_13] [i_13 + 1] [i_13 + 1] [i_13]), (arr_41 [i_13 + 2] [i_13 + 2] [i_13 + 2] [i_13 + 3] [i_13 + 1]))))))));
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (unsigned long long int i_15 = 0; i_15 < 23; i_15 += 3) 
        {
            for (short i_16 = 1; i_16 < 20; i_16 += 2) 
            {
                for (unsigned char i_17 = 4; i_17 < 19; i_17 += 1) 
                {
                    {
                        arr_63 [i_15] [i_15] = ((/* implicit */signed char) ((((/* implicit */_Bool) -9041161072683720919LL)) ? (-7734785758271472696LL) : (((/* implicit */long long int) ((/* implicit */int) (short)26228)))));
                        /* LoopSeq 2 */
                        for (signed char i_18 = 1; i_18 < 19; i_18 += 3) 
                        {
                            arr_66 [i_15] = ((/* implicit */int) var_2);
                            var_29 = ((/* implicit */signed char) arr_49 [i_0] [i_18 + 3]);
                            var_30 = ((/* implicit */short) (-(max((arr_3 [i_0] [i_15]), (arr_3 [i_17 + 3] [i_17 + 3])))));
                            var_31 = ((/* implicit */long long int) min((var_31), (((/* implicit */long long int) ((arr_39 [i_0] [i_15]) == (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)47401)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-1477))) : (908509994403698422LL)))) ? (((((/* implicit */_Bool) arr_32 [i_0] [(_Bool)1] [(_Bool)1] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_15] [i_16] [i_16] [i_15]))) : (var_11))) : (((/* implicit */long long int) ((/* implicit */int) (!(arr_31 [i_0] [i_16] [i_15] [i_17 - 1] [i_18 + 3] [(signed char)2]))))))))))));
                        }
                        for (int i_19 = 0; i_19 < 23; i_19 += 1) 
                        {
                            arr_69 [i_15] [i_15] [i_16] [i_15] [i_15] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (min((2449719648U), (((/* implicit */unsigned int) (signed char)-123)))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_0 - 1] [i_16 + 2] [i_17 + 1])))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_37 [i_15] [i_15])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_30 [i_19] [i_15] [i_15] [i_0 + 1]))))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (arr_40 [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_0 [i_0])))))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_40 [i_16 + 2]))))));
                            var_32 = ((/* implicit */signed char) min((var_32), (((/* implicit */signed char) ((((/* implicit */_Bool) ((1254194303) / (var_0)))) ? (((/* implicit */long long int) 3342180590U)) : (((long long int) arr_59 [i_15] [i_0 - 1])))))));
                        }
                        var_33 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 6782781322727119035LL)) ? (((/* implicit */int) (unsigned char)157)) : (((/* implicit */int) (unsigned char)249))));
                    }
                } 
            } 
        } 
    }
}
