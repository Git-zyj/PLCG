/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5930
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5930 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5930
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
    var_12 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) var_1)) ? (((var_6) - (var_7))) : ((-(var_4))))), (((/* implicit */int) var_0))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned char i_2 = 1; i_2 < 9; i_2 += 2) 
                {
                    var_13 = ((/* implicit */int) arr_1 [i_0]);
                    arr_9 [i_0] [i_1] [i_2 + 2] = ((/* implicit */_Bool) var_10);
                }
                arr_10 [i_1] = ((/* implicit */unsigned short) 49692167);
                arr_11 [1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) ((_Bool) (_Bool)0)))))) ? (((/* implicit */long long int) (-(((/* implicit */int) var_11))))) : (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) / ((-(-7691451613572869839LL)))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned char i_3 = 2; i_3 < 12; i_3 += 3) /* same iter space */
    {
        arr_14 [i_3] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_12 [i_3 + 1])) : (var_9)))));
        /* LoopSeq 2 */
        for (unsigned int i_4 = 0; i_4 < 14; i_4 += 2) 
        {
            var_14 = ((/* implicit */int) ((((/* implicit */long long int) (((_Bool)1) ? ((-2147483647 - 1)) : (((/* implicit */int) (_Bool)1))))) >= (((min((arr_13 [i_4] [i_4]), (((/* implicit */long long int) arr_12 [i_4])))) / (var_8)))));
            var_15 = ((/* implicit */unsigned short) var_8);
            /* LoopNest 2 */
            for (long long int i_5 = 1; i_5 < 11; i_5 += 2) 
            {
                for (short i_6 = 1; i_6 < 11; i_6 += 2) 
                {
                    {
                        var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) var_0))));
                        var_17 = ((/* implicit */_Bool) min((var_17), ((!(((/* implicit */_Bool) 4294967287U))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (int i_7 = 1; i_7 < 13; i_7 += 3) 
                        {
                            arr_25 [i_3 - 1] [i_3] [i_5] [i_6 - 1] [i_6 - 1] [i_5] [i_6] = ((/* implicit */_Bool) arr_23 [i_4] [i_4] [i_5] [i_6] [12]);
                            arr_26 [i_3] [i_3] [(unsigned char)12] [i_5] [i_5] [i_3] = ((((/* implicit */_Bool) ((unsigned char) 7691451613572869817LL))) ? (((/* implicit */int) arr_16 [i_7] [(short)4] [i_5])) : ((~(((/* implicit */int) arr_23 [i_3] [i_3] [i_3] [i_3] [i_3])))));
                        }
                    }
                } 
            } 
            arr_27 [i_3] = ((/* implicit */_Bool) (+(min(((-(arr_17 [i_4]))), (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) arr_15 [i_3])))))))));
        }
        for (unsigned int i_8 = 2; i_8 < 13; i_8 += 2) 
        {
            var_18 = ((/* implicit */short) ((((/* implicit */_Bool) (+(max((var_7), (((/* implicit */int) (unsigned short)0))))))) ? (var_4) : (((/* implicit */int) var_2))));
            var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) (-(var_9))))));
        }
        /* LoopNest 3 */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            for (int i_10 = 0; i_10 < 14; i_10 += 2) 
            {
                for (unsigned char i_11 = 0; i_11 < 14; i_11 += 3) 
                {
                    {
                        var_20 = arr_22 [i_3] [i_9] [i_9] [i_10] [i_9] [i_11];
                        arr_37 [i_3] [i_9] [i_10] [i_9] = (~(((/* implicit */int) arr_32 [i_3 + 2] [i_9] [i_10] [i_11])));
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (long long int i_12 = 1; i_12 < 11; i_12 += 2) 
        {
            for (unsigned short i_13 = 0; i_13 < 14; i_13 += 3) 
            {
                for (unsigned int i_14 = 0; i_14 < 14; i_14 += 3) 
                {
                    {
                        arr_46 [i_12 - 1] [i_14] = ((/* implicit */unsigned short) var_0);
                        var_21 ^= ((/* implicit */unsigned short) min((((((/* implicit */int) arr_42 [(unsigned short)4] [i_12 - 1] [i_12 + 3] [i_3 + 1])) | (((/* implicit */int) arr_42 [i_3 + 2] [i_13] [i_12 + 2] [i_3 + 2])))), ((~(arr_44 [i_3] [i_3 - 1] [i_12] [i_12 + 2])))));
                        var_22 = ((/* implicit */unsigned short) max((arr_17 [i_14]), (((/* implicit */int) ((var_8) == (((((/* implicit */_Bool) arr_40 [i_14] [i_13])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)46896))) : (arr_13 [i_3 + 2] [i_13]))))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned char i_15 = 2; i_15 < 12; i_15 += 3) /* same iter space */
    {
        arr_50 [(short)10] = ((/* implicit */short) min(((~(((arr_18 [i_15 + 2] [i_15] [i_15] [i_15]) ? (1760061501U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_47 [i_15]))))))), (((/* implicit */unsigned int) max((((((/* implicit */unsigned int) ((/* implicit */int) arr_32 [(short)3] [(short)3] [i_15 - 2] [i_15 - 2]))) >= (arr_43 [i_15] [i_15] [i_15] [i_15]))), (((((/* implicit */int) arr_18 [i_15] [i_15] [i_15] [i_15])) == (((/* implicit */int) arr_18 [i_15] [i_15 + 1] [i_15] [i_15 + 2])))))))));
        var_23 = ((/* implicit */unsigned short) max((((/* implicit */int) ((_Bool) (unsigned short)65505))), (arr_17 [(unsigned short)10])));
        /* LoopSeq 1 */
        for (unsigned char i_16 = 1; i_16 < 10; i_16 += 3) 
        {
            var_24 = arr_29 [i_15] [i_16] [i_16];
            var_25 = ((/* implicit */_Bool) min((arr_48 [i_16 + 4] [i_15 - 1]), (arr_48 [i_16 + 1] [i_15 - 1])));
        }
        var_26 = ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) (unsigned short)3949)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)65534))))))) ? (((/* implicit */int) (unsigned char)7)) : ((-(max((arr_17 [(_Bool)1]), (var_4))))));
    }
}
