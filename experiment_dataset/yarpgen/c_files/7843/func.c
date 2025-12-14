/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7843
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7843 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7843
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
    var_20 &= ((/* implicit */int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-69)) ? (((/* implicit */int) (signed char)103)) : (-454127178)))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_6))) : (((/* implicit */long long int) ((/* implicit */int) var_18))))), (((/* implicit */long long int) min((var_9), (((/* implicit */short) (_Bool)1)))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        var_21 = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)14))));
        var_22 |= ((/* implicit */long long int) ((int) arr_0 [i_0]));
        var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) (unsigned char)96)) : (((/* implicit */int) (signed char)-126)))))));
    }
    /* vectorizable */
    for (signed char i_1 = 3; i_1 < 14; i_1 += 1) 
    {
        var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_4 [(signed char)8])))))));
        var_25 -= ((/* implicit */int) var_0);
        var_26 -= ((/* implicit */unsigned char) (short)-1);
        /* LoopSeq 1 */
        for (signed char i_2 = 0; i_2 < 15; i_2 += 3) 
        {
            arr_8 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) (+(((/* implicit */int) var_10))));
            var_27 = ((/* implicit */short) (-(((/* implicit */int) arr_3 [i_1] [i_1]))));
            var_28 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(-1133550094717919527LL)))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : ((~(arr_7 [i_2] [i_1])))));
            var_29 = (+(((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_1))))));
        }
        var_30 += (((+(var_14))) >= (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)16543)))))));
    }
    /* LoopSeq 2 */
    for (unsigned short i_3 = 0; i_3 < 15; i_3 += 1) 
    {
        arr_11 [i_3] = ((/* implicit */int) var_17);
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_4 = 1; i_4 < 11; i_4 += 3) 
        {
            var_31 = ((/* implicit */int) min((var_31), ((-(((/* implicit */int) arr_6 [(unsigned short)6] [i_4 + 4] [i_4 + 4]))))));
            var_32 = ((/* implicit */unsigned char) arr_10 [i_3]);
            /* LoopSeq 4 */
            for (unsigned short i_5 = 2; i_5 < 13; i_5 += 3) 
            {
                var_33 = ((/* implicit */short) max((var_33), (((/* implicit */short) ((arr_15 [i_3] [(short)14] [i_5 + 2]) - (arr_15 [i_4] [(unsigned char)10] [i_5 + 2]))))));
                var_34 = ((/* implicit */signed char) max((var_34), (((/* implicit */signed char) arr_3 [i_3] [(unsigned char)12]))));
                var_35 = ((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_5] [i_5 - 1] [i_5]))) >= (var_3));
            }
            for (signed char i_6 = 0; i_6 < 15; i_6 += 1) 
            {
                var_36 -= ((/* implicit */unsigned short) (~(((/* implicit */int) (short)-2449))));
                /* LoopSeq 3 */
                for (long long int i_7 = 1; i_7 < 14; i_7 += 1) /* same iter space */
                {
                    var_37 = ((/* implicit */int) arr_13 [i_3] [i_3]);
                    var_38 = ((/* implicit */long long int) ((((/* implicit */int) arr_6 [(signed char)10] [i_4] [(signed char)10])) >= ((~(((/* implicit */int) var_11))))));
                    arr_21 [i_7 - 1] [i_7 - 1] [i_6] = ((/* implicit */long long int) (~(((/* implicit */int) var_5))));
                }
                for (long long int i_8 = 1; i_8 < 14; i_8 += 1) /* same iter space */
                {
                    var_39 = ((/* implicit */int) (short)7242);
                    var_40 = ((/* implicit */signed char) min((var_40), (((/* implicit */signed char) (~(((/* implicit */int) (signed char)-26)))))));
                    arr_25 [i_8] [i_6] [i_3] [i_3] = ((/* implicit */_Bool) ((((((/* implicit */int) (short)-1)) + (2147483647))) >> (((((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) arr_4 [(unsigned char)4])) : (((/* implicit */int) (short)-21462)))) - (96)))));
                    var_41 = ((/* implicit */_Bool) min((var_41), (((arr_10 [i_6]) && (((/* implicit */_Bool) (~(((/* implicit */int) var_10)))))))));
                }
                for (signed char i_9 = 0; i_9 < 15; i_9 += 3) 
                {
                    var_42 = ((/* implicit */int) max((var_42), ((~(((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_12 [i_4])) : (((/* implicit */int) (_Bool)1))))))));
                    var_43 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (signed char)13)))))));
                    var_44 -= ((/* implicit */long long int) (~((-(((/* implicit */int) var_12))))));
                }
            }
            for (int i_10 = 2; i_10 < 14; i_10 += 1) 
            {
                var_45 = ((/* implicit */int) min((var_45), (((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (short)-28352)) : (16777215)))));
                var_46 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_26 [i_4 + 2] [(signed char)13] [(signed char)13] [(signed char)13] [i_4] [i_4])) : (((/* implicit */int) arr_23 [i_3] [i_4] [i_3] [i_4 + 3]))));
            }
            for (short i_11 = 0; i_11 < 15; i_11 += 4) 
            {
                var_47 = ((/* implicit */_Bool) max((var_47), (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)112)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)127))) : (-1992267013967847482LL))))));
                arr_35 [i_11] [i_11] [i_11] [i_11] = ((/* implicit */signed char) ((_Bool) (unsigned char)0));
                var_48 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) -441410888)) ^ (3883841996U)));
                arr_36 [i_3] [i_3] [i_3] [i_3] = ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (unsigned char)63)) : (((/* implicit */int) var_4)));
            }
            var_49 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_10))))) ? (((/* implicit */int) (signed char)63)) : ((~(((/* implicit */int) var_2))))));
        }
        var_50 &= ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) max((((/* implicit */signed char) (_Bool)1)), (arr_17 [i_3] [i_3] [i_3] [i_3])))) ? (((/* implicit */int) var_17)) : (((/* implicit */int) max((((/* implicit */unsigned char) arr_12 [i_3])), (var_15))))))));
    }
    /* vectorizable */
    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
    {
        var_51 = ((/* implicit */long long int) min((var_51), (((/* implicit */long long int) var_17))));
        var_52 = ((/* implicit */unsigned char) max((var_52), (((/* implicit */unsigned char) (+(((/* implicit */int) (_Bool)1)))))));
    }
}
