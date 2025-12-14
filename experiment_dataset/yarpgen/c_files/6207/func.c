/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6207
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6207 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6207
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
    for (signed char i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (unsigned short i_1 = 2; i_1 < 16; i_1 += 4) 
        {
            {
                var_18 -= ((/* implicit */int) (-(21U)));
                var_19 = ((/* implicit */unsigned int) var_1);
                var_20 = (+(((((((/* implicit */unsigned int) var_4)) | (var_16))) | (((/* implicit */unsigned int) var_9)))));
            }
        } 
    } 
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_2 = 0; i_2 < 14; i_2 += 4) /* same iter space */
    {
        var_21 *= ((/* implicit */signed char) (~(((((/* implicit */unsigned int) ((/* implicit */int) var_10))) * (var_14)))));
        arr_6 [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_2 [i_2] [i_2])) == (((/* implicit */int) (unsigned char)255))));
        var_22 *= var_5;
        arr_7 [(short)12] = ((/* implicit */unsigned long long int) 4294967274U);
        var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) ((4294967274U) | (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_2]))))))));
    }
    for (signed char i_3 = 0; i_3 < 14; i_3 += 4) /* same iter space */
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned int i_4 = 0; i_4 < 14; i_4 += 4) /* same iter space */
        {
            var_24 = ((/* implicit */unsigned int) arr_12 [i_3]);
            var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) (-(((/* implicit */int) var_10)))))));
            /* LoopSeq 3 */
            for (unsigned long long int i_5 = 1; i_5 < 13; i_5 += 4) 
            {
                arr_15 [i_5 - 1] [i_4] [i_5] [(signed char)9] = ((/* implicit */unsigned char) (-((+(((/* implicit */int) var_8))))));
                var_26 = (~(arr_14 [i_5 - 1] [i_5] [i_5]));
            }
            for (unsigned int i_6 = 1; i_6 < 11; i_6 += 3) 
            {
                var_27 = ((/* implicit */int) max((var_27), (((/* implicit */int) (~(arr_5 [i_4]))))));
                var_28 = ((/* implicit */signed char) (~(((/* implicit */int) var_8))));
                /* LoopNest 2 */
                for (int i_7 = 1; i_7 < 12; i_7 += 3) 
                {
                    for (signed char i_8 = 0; i_8 < 14; i_8 += 4) 
                    {
                        {
                            var_29 = ((/* implicit */unsigned int) ((unsigned char) arr_0 [i_7]));
                            var_30 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 4294967270U)) ? (arr_14 [i_6 - 1] [i_7] [i_7 + 2]) : (((/* implicit */int) var_2))));
                            var_31 = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) 4294967272U)) ? (903007455U) : (var_14))));
                            var_32 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) & (var_15)));
                            arr_22 [i_3] [i_6] [i_3] [i_8] = var_4;
                        }
                    } 
                } 
                arr_23 [(short)11] [i_6] [(short)11] [i_6] = ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)65535))));
                /* LoopNest 2 */
                for (unsigned long long int i_9 = 0; i_9 < 14; i_9 += 2) 
                {
                    for (unsigned short i_10 = 3; i_10 < 11; i_10 += 4) 
                    {
                        {
                            arr_29 [i_3] [i_4] [i_6] [12U] [i_10] = ((/* implicit */unsigned int) ((((/* implicit */int) (short)1023)) + (((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))));
                            var_33 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_9))));
                        }
                    } 
                } 
            }
            for (unsigned int i_11 = 0; i_11 < 14; i_11 += 3) 
            {
                var_34 = ((/* implicit */unsigned int) (~(var_4)));
                var_35 = ((/* implicit */unsigned short) min((var_35), (((/* implicit */unsigned short) (+(451275914U))))));
                /* LoopSeq 2 */
                for (unsigned int i_12 = 2; i_12 < 13; i_12 += 4) 
                {
                    var_36 -= ((/* implicit */unsigned char) (~(((/* implicit */int) ((unsigned short) var_9)))));
                    var_37 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_10))));
                }
                for (unsigned int i_13 = 3; i_13 < 11; i_13 += 3) 
                {
                    var_38 -= ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_13))));
                    var_39 ^= ((/* implicit */unsigned short) var_9);
                    arr_38 [i_3] [i_3] [i_4] [i_11] [i_3] = ((/* implicit */int) ((unsigned short) ((4294967275U) + (((/* implicit */unsigned int) ((/* implicit */int) var_1))))));
                    var_40 = (-(var_12));
                }
                arr_39 [i_11] = arr_3 [i_11] [i_4];
            }
        }
        /* vectorizable */
        for (unsigned int i_14 = 0; i_14 < 14; i_14 += 4) /* same iter space */
        {
            arr_43 [i_14] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) var_1))));
            var_41 -= ((/* implicit */signed char) ((arr_4 [i_3] [i_14]) / (arr_4 [i_3] [i_14])));
            var_42 = ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)1))))) ? (((/* implicit */int) (unsigned char)14)) : ((-(((/* implicit */int) (unsigned char)67)))));
        }
        for (unsigned short i_15 = 1; i_15 < 11; i_15 += 4) 
        {
            var_43 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (short)-1024))));
            arr_47 [i_15] [i_15] = ((int) arr_21 [i_3] [i_3] [i_3] [i_15]);
            arr_48 [i_3] [i_15] [i_3] = ((/* implicit */unsigned int) var_7);
            arr_49 [i_15] [i_15] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_0))));
        }
        var_44 = ((/* implicit */unsigned char) var_15);
    }
    for (signed char i_16 = 0; i_16 < 14; i_16 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned int i_17 = 1; i_17 < 11; i_17 += 3) 
        {
            for (unsigned int i_18 = 0; i_18 < 14; i_18 += 3) 
            {
                {
                    var_45 = ((/* implicit */short) ((((/* implicit */long long int) min((((/* implicit */unsigned int) ((unsigned short) arr_8 [i_18]))), ((+(var_6)))))) / (min((((/* implicit */long long int) arr_45 [i_16] [i_17 + 1])), (var_17)))));
                    /* LoopNest 2 */
                    for (unsigned int i_19 = 0; i_19 < 14; i_19 += 1) 
                    {
                        for (unsigned char i_20 = 0; i_20 < 14; i_20 += 4) 
                        {
                            {
                                var_46 = ((/* implicit */unsigned int) (+(((long long int) arr_31 [i_17 + 2] [i_17 + 3] [i_17 - 1] [i_17 + 2]))));
                                var_47 = ((/* implicit */unsigned char) min((((int) min((((/* implicit */long long int) (short)26707)), (var_3)))), (((/* implicit */int) ((((/* implicit */_Bool) arr_41 [i_16] [i_16] [i_20])) || (((/* implicit */_Bool) (~(var_9)))))))));
                                var_48 *= ((/* implicit */unsigned int) min((min((((/* implicit */long long int) arr_16 [i_17 + 2] [i_20] [i_20] [i_20])), ((~(var_3))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)70))))))))));
                            }
                        } 
                    } 
                    var_49 = (-(((((unsigned int) var_14)) - (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_17] [i_17 + 1]))))));
                }
            } 
        } 
        var_50 = ((/* implicit */unsigned int) (~(max((((/* implicit */long long int) min((((/* implicit */unsigned int) var_13)), (var_14)))), (var_3)))));
        var_51 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) * (((unsigned int) (~(72057594037927935ULL))))));
        var_52 *= ((/* implicit */short) (((~(((((/* implicit */_Bool) 10257194057147084982ULL)) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))) % (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)18)))));
    }
    var_53 = ((/* implicit */unsigned int) (unsigned char)255);
}
