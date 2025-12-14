/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84526
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84526 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84526
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
    var_10 = ((/* implicit */signed char) (-(((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_7)))))));
    var_11 = ((/* implicit */unsigned char) (-((-((-(((/* implicit */int) (unsigned short)31))))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((arr_1 [i_0]) * (((/* implicit */unsigned long long int) var_9))))) ? (max(((-(6561179038237979539LL))), (((((/* implicit */_Bool) (unsigned short)41)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))) : (4467570830351532032LL))))) : ((+(-4467570830351532033LL)))));
        arr_3 [i_0] = ((/* implicit */unsigned char) ((unsigned short) min((((/* implicit */int) ((_Bool) arr_0 [i_0]))), ((-(((/* implicit */int) var_5)))))));
    }
    /* LoopSeq 3 */
    for (unsigned long long int i_1 = 1; i_1 < 16; i_1 += 4) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (signed char i_2 = 0; i_2 < 19; i_2 += 4) /* same iter space */
        {
            var_12 = arr_7 [i_1 - 1] [i_1 + 1] [i_1 - 1];
            arr_10 [i_1 - 1] [i_1] = ((/* implicit */unsigned short) arr_7 [i_1 - 1] [i_2] [i_1 - 1]);
            /* LoopNest 2 */
            for (signed char i_3 = 0; i_3 < 19; i_3 += 3) 
            {
                for (unsigned char i_4 = 0; i_4 < 19; i_4 += 4) 
                {
                    {
                        arr_15 [i_1] [i_1 + 1] [i_2] [i_3] [i_3] [i_4] = (((~(var_9))) ^ (((/* implicit */int) arr_11 [i_3] [i_1 + 1] [i_3])));
                        arr_16 [i_4] [i_4] [i_1] [i_1] [i_1 + 2] [i_1] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_14 [i_1] [i_1 + 1] [i_3] [i_1]))));
                        /* LoopSeq 2 */
                        for (int i_5 = 1; i_5 < 17; i_5 += 1) /* same iter space */
                        {
                            var_13 += ((/* implicit */short) ((long long int) ((var_9) & (((/* implicit */int) var_8)))));
                            var_14 *= ((/* implicit */signed char) ((int) 975816206));
                            var_15 = ((/* implicit */int) ((unsigned short) (~(((/* implicit */int) arr_6 [i_4] [i_2])))));
                        }
                        for (int i_6 = 1; i_6 < 17; i_6 += 1) /* same iter space */
                        {
                            var_16 = -573296302;
                            var_17 = ((/* implicit */unsigned int) max((var_17), ((~(((unsigned int) arr_14 [i_6 - 1] [i_2] [i_3] [i_4]))))));
                            arr_21 [i_1 + 2] [i_2] [i_4] [i_1] [i_6 - 1] = ((/* implicit */unsigned char) ((_Bool) ((var_0) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65534))))));
                        }
                        arr_22 [i_4] [i_1] [i_3] [i_1] [i_1 - 1] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_14 [i_1 + 2] [i_1 + 1] [i_3] [i_1]))));
                    }
                } 
            } 
            arr_23 [i_1] [i_1] = ((unsigned short) ((unsigned char) arr_7 [i_1] [i_1] [i_2]));
            arr_24 [i_2] [i_1 + 1] [i_1] = ((/* implicit */int) arr_6 [i_1 + 1] [i_2]);
        }
        for (signed char i_7 = 0; i_7 < 19; i_7 += 4) /* same iter space */
        {
            /* LoopNest 2 */
            for (long long int i_8 = 0; i_8 < 19; i_8 += 2) 
            {
                for (int i_9 = 0; i_9 < 19; i_9 += 2) 
                {
                    {
                        arr_33 [i_7] [i_8] [i_1] = ((/* implicit */_Bool) min((((/* implicit */int) arr_11 [i_1 + 2] [i_1 + 3] [i_1 + 2])), (((((/* implicit */int) var_1)) / (((/* implicit */int) arr_6 [i_1 + 1] [i_1 - 1]))))));
                        arr_34 [i_1 + 1] [i_1] [i_7] [i_7] [i_8] [i_1] = ((/* implicit */unsigned char) ((int) (unsigned short)56966));
                        var_18 -= ((/* implicit */unsigned short) (_Bool)1);
                    }
                } 
            } 
            var_19 = ((((/* implicit */unsigned int) ((/* implicit */int) max((arr_8 [i_7] [i_1]), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_14 [i_1 + 1] [i_7] [i_1 - 1] [i_1]))))))))) >= (((unsigned int) ((long long int) arr_20 [i_1 + 3] [i_1] [i_1 + 2] [i_7] [i_1] [i_7]))));
        }
        for (signed char i_10 = 0; i_10 < 19; i_10 += 4) /* same iter space */
        {
            arr_37 [i_1] [i_10] [i_10] = ((/* implicit */long long int) arr_18 [i_10] [i_1 + 1] [i_1]);
            var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_19 [i_1] [i_10] [i_10])) & (((((/* implicit */_Bool) -7216247170522903646LL)) ? (((/* implicit */int) (unsigned short)8570)) : (((/* implicit */int) (unsigned short)8570))))));
        }
        /* LoopNest 2 */
        for (long long int i_11 = 0; i_11 < 19; i_11 += 2) 
        {
            for (unsigned char i_12 = 2; i_12 < 18; i_12 += 4) 
            {
                {
                    arr_46 [i_1] = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)38039)) | (((/* implicit */int) (signed char)123))));
                    var_21 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_32 [i_1 + 1] [i_11] [i_11] [i_12 - 2])) & (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_38 [i_1])) : (var_9))))))));
                }
            } 
        } 
        var_22 = ((/* implicit */int) max((var_22), (max((((/* implicit */int) ((unsigned char) ((arr_44 [i_1] [16U] [i_1 + 1]) < (arr_20 [i_1] [6ULL] [i_1 - 1] [i_1 + 3] [6ULL] [i_1 + 1]))))), (0)))));
    }
    for (signed char i_13 = 3; i_13 < 20; i_13 += 1) 
    {
        var_23 = ((/* implicit */short) ((((/* implicit */long long int) ((unsigned int) arr_48 [i_13 - 1] [i_13 - 2]))) < (((((/* implicit */_Bool) ((int) arr_47 [i_13 - 3]))) ? (((/* implicit */long long int) var_4)) : (min((var_0), (((/* implicit */long long int) arr_48 [i_13] [i_13 - 3]))))))));
        var_24 = ((/* implicit */unsigned int) min((var_24), (((((/* implicit */_Bool) ((unsigned short) 4294967295U))) ? (((/* implicit */unsigned int) min((((/* implicit */int) ((short) arr_49 [i_13]))), ((-(((/* implicit */int) var_3))))))) : (((((/* implicit */_Bool) ((unsigned char) var_3))) ? (var_4) : (((/* implicit */unsigned int) ((int) arr_47 [i_13])))))))));
    }
    for (unsigned int i_14 = 4; i_14 < 22; i_14 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned int i_15 = 1; i_15 < 23; i_15 += 1) 
        {
            for (unsigned long long int i_16 = 4; i_16 < 23; i_16 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_17 = 0; i_17 < 24; i_17 += 4) 
                    {
                        for (int i_18 = 0; i_18 < 24; i_18 += 4) 
                        {
                            {
                                var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) ((unsigned char) ((unsigned int) arr_56 [i_15 + 1]))))));
                                arr_62 [i_14] [i_15 + 1] [i_16 - 1] [i_17] [i_14] = ((/* implicit */unsigned char) (~((+(arr_53 [i_14 + 1] [i_18] [i_14])))));
                                arr_63 [i_14 - 4] [i_14] [i_16 - 1] = var_5;
                                var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) min((-311213993), (((/* implicit */int) (signed char)0)))))));
                                arr_64 [i_14] [i_18] = ((/* implicit */short) ((((arr_61 [i_16 - 4] [i_14] [i_16] [i_17] [i_18] [i_15 - 1] [i_17]) - (arr_61 [i_16 - 3] [i_14] [i_16 - 3] [i_17] [i_18] [i_14 - 2] [i_18]))) == (arr_61 [i_16 - 4] [i_14] [i_18] [i_17] [i_18] [i_14] [i_16])));
                            }
                        } 
                    } 
                    arr_65 [i_15 - 1] [i_15] [i_14] [i_15 + 1] = ((/* implicit */long long int) arr_52 [i_15 - 1]);
                }
            } 
        } 
        var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) ((((/* implicit */int) ((_Bool) arr_55 [i_14 + 1] [i_14 + 1] [i_14 - 4]))) & ((~(arr_61 [i_14 - 4] [14ULL] [i_14 - 3] [i_14 + 2] [i_14 - 3] [i_14 - 1] [i_14 + 2]))))))));
    }
}
