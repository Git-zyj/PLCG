/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63399
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63399 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63399
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                arr_4 [i_0] [i_1] [3] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) (short)7))) || (((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_2 [i_1] [i_1])) ? (var_11) : (((/* implicit */int) arr_1 [i_0] [i_1])))), (var_11))))));
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 25; i_2 += 2) 
                {
                    for (unsigned short i_3 = 2; i_3 < 22; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 25; i_4 += 1) 
                        {
                            {
                                var_12 = ((/* implicit */int) var_0);
                                arr_14 [i_0] [i_0] [i_0] [i_0] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-118)) | (((/* implicit */int) (unsigned char)80)))) * (((/* implicit */int) ((((/* implicit */_Bool) arr_11 [(unsigned short)11] [i_1] [i_2] [i_1] [i_1])) || (((/* implicit */_Bool) -1)))))))) ? (((/* implicit */int) ((unsigned short) ((((/* implicit */int) (unsigned short)65535)) ^ (((/* implicit */int) (short)1023)))))) : (((/* implicit */int) (!((!((_Bool)1))))))));
                                var_13 = ((/* implicit */unsigned short) arr_12 [i_0] [(signed char)14] [i_2] [i_1] [(signed char)14] [i_4] [i_1]);
                            }
                        } 
                    } 
                } 
                arr_15 [(unsigned short)13] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-1024)) ? (((/* implicit */int) (unsigned char)62)) : (((/* implicit */int) (unsigned short)37439)))))));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (short i_5 = 0; i_5 < 19; i_5 += 2) 
    {
        /* LoopSeq 3 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            var_14 = ((/* implicit */int) arr_21 [i_5] [i_6] [i_6]);
            arr_22 [i_5] [i_5] &= ((/* implicit */_Bool) (-(1026837810)));
            /* LoopNest 3 */
            for (int i_7 = 4; i_7 < 16; i_7 += 1) 
            {
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    for (unsigned short i_9 = 0; i_9 < 19; i_9 += 4) 
                    {
                        {
                            arr_33 [i_7] [i_8] [i_7] [i_5] [i_7] [i_6] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)28096)) % (((/* implicit */int) (unsigned char)255))));
                            var_15 ^= ((/* implicit */signed char) (~(((/* implicit */int) min((var_0), (((/* implicit */short) arr_27 [i_5] [i_7 - 4] [i_7 - 1] [i_7 - 1])))))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned short i_10 = 0; i_10 < 19; i_10 += 4) 
        {
            arr_37 [i_5] [1] [i_10] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((int) (unsigned char)31)))));
            var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) (!(((/* implicit */_Bool) arr_30 [i_10] [i_10] [i_5] [i_5] [i_5])))))) ? (((/* implicit */int) max((((/* implicit */unsigned short) arr_2 [3] [3])), (((unsigned short) var_8))))) : (((/* implicit */int) ((((/* implicit */_Bool) (short)-1035)) && (((/* implicit */_Bool) (unsigned short)28096))))))))));
            var_17 = ((/* implicit */short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (unsigned short)37440)) ? (var_2) : (((/* implicit */int) (unsigned char)240)))), (((/* implicit */int) arr_10 [i_5] [i_10] [i_10]))))) ? (((((arr_29 [i_10] [i_5]) >= (var_9))) ? (min((((/* implicit */unsigned int) arr_12 [i_10] [20U] [i_5] [i_5] [i_5] [i_5] [i_5])), (arr_36 [i_5] [i_5] [i_5]))) : (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) arr_13 [i_5] [i_5])) - (54350)))))))) : (((arr_28 [i_5] [i_10] [i_10] [i_10]) << (((((/* implicit */int) (unsigned char)255)) - (238)))))));
            var_18 = ((/* implicit */signed char) max((((/* implicit */unsigned int) arr_32 [i_5] [i_5] [i_5] [i_5])), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)25)) ? (((/* implicit */unsigned long long int) arr_9 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5])) : (2305843009213693951ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_1 [(signed char)14] [(signed char)14])))) : (max((3222617732U), (((/* implicit */unsigned int) var_3))))))));
            arr_38 [i_10] [i_5] = max((((/* implicit */unsigned short) arr_31 [8] [i_10] [8] [8] [i_5] [i_5] [i_5])), (((unsigned short) arr_27 [i_5] [i_10] [(_Bool)1] [i_10])));
        }
        for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
        {
            var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_5] [i_11 - 1]))))) ? (((((/* implicit */_Bool) arr_7 [i_5])) ? ((-(-1097553398))) : (arr_19 [i_5] [i_11 - 1] [i_11 - 1]))) : (((/* implicit */int) ((_Bool) arr_2 [20] [i_11 - 1])))));
            arr_41 [i_5] [i_5] [i_11] = ((/* implicit */short) (unsigned char)14);
        }
        arr_42 [(short)0] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_29 [i_5] [i_5])) ? (((((/* implicit */_Bool) arr_21 [i_5] [i_5] [i_5])) ? (((/* implicit */int) arr_3 [i_5] [i_5] [i_5])) : (-1))) : ((-(((/* implicit */int) var_0)))))) + (max(((-(((/* implicit */int) arr_27 [i_5] [i_5] [i_5] [i_5])))), (((((/* implicit */_Bool) (short)14670)) ? (((/* implicit */int) (unsigned short)6)) : (((/* implicit */int) (unsigned char)31))))))));
    }
    for (unsigned char i_12 = 0; i_12 < 14; i_12 += 2) 
    {
        var_20 = ((/* implicit */int) (!(((/* implicit */_Bool) var_2))));
        arr_46 [i_12] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)13898)) ^ (((/* implicit */int) (unsigned short)44320))));
        arr_47 [i_12] = ((/* implicit */_Bool) var_11);
        var_21 ^= ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)37439)) >> (((117746185) - (117746162)))));
    }
    for (unsigned char i_13 = 0; i_13 < 19; i_13 += 4) 
    {
        var_22 = ((/* implicit */unsigned short) (((-(971064437))) <= (((/* implicit */int) ((arr_17 [i_13]) || (((/* implicit */_Bool) (unsigned short)65529)))))));
        arr_50 [i_13] = ((/* implicit */short) 2);
        var_23 = ((/* implicit */int) min((var_23), (((((/* implicit */_Bool) ((((/* implicit */int) min((arr_0 [i_13] [i_13]), ((short)-12102)))) % (679445382)))) ? (((((/* implicit */int) arr_49 [i_13])) << (((((/* implicit */int) arr_49 [i_13])) - (12950))))) : (1026837826)))));
    }
}
