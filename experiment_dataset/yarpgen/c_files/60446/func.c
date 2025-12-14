/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60446
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60446 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60446
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
    /* LoopSeq 3 */
    for (signed char i_0 = 1; i_0 < 16; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) > ((-(((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (_Bool)1))))))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                {
                    var_19 = ((/* implicit */unsigned int) (((_Bool)1) ? ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) min((((/* implicit */unsigned char) arr_0 [i_0 + 2])), (arr_4 [i_0 + 1] [i_0 - 1]))))));
                    arr_9 [i_2] [i_0] = ((/* implicit */long long int) (-((((_Bool)1) ? (((/* implicit */int) ((_Bool) var_15))) : (arr_6 [i_0] [i_1])))));
                    var_20 = ((/* implicit */_Bool) arr_2 [i_1] [i_0]);
                }
            } 
        } 
        arr_10 [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_2 [i_0 + 1] [i_0 + 1])) ? (((/* implicit */int) arr_2 [i_0 + 1] [i_0 + 2])) : (((/* implicit */int) arr_2 [i_0 + 1] [i_0 + 2])))) >> (((/* implicit */int) (_Bool)1))));
        var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0 - 1])) ^ (((/* implicit */int) var_18))))) ? (min((((unsigned long long int) (_Bool)1)), (((/* implicit */unsigned long long int) max(((_Bool)1), ((_Bool)1)))))) : (((/* implicit */unsigned long long int) (~((~(((/* implicit */int) (_Bool)1)))))))));
    }
    for (unsigned int i_3 = 0; i_3 < 18; i_3 += 4) 
    {
        arr_13 [9LL] [i_3] = ((/* implicit */long long int) (+(((/* implicit */int) min((((/* implicit */short) (_Bool)1)), (arr_12 [i_3] [i_3]))))));
        var_22 = ((/* implicit */unsigned int) arr_11 [i_3]);
    }
    /* vectorizable */
    for (long long int i_4 = 1; i_4 < 7; i_4 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned char i_5 = 3; i_5 < 6; i_5 += 4) 
        {
            for (signed char i_6 = 2; i_6 < 6; i_6 += 4) 
            {
                {
                    var_23 = ((/* implicit */signed char) var_4);
                    arr_20 [i_4 + 1] [i_4] [(unsigned char)4] [(signed char)0] = arr_15 [i_5];
                    /* LoopNest 2 */
                    for (unsigned char i_7 = 0; i_7 < 10; i_7 += 4) 
                    {
                        for (unsigned char i_8 = 0; i_8 < 10; i_8 += 4) 
                        {
                            {
                                var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) arr_4 [i_5 + 4] [i_6 - 1]))));
                                arr_27 [i_4] [i_6] [i_7] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_2 [i_5 - 3] [i_5 - 3]))));
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */long long int) ((arr_7 [i_4 + 2] [i_5 + 1] [i_6 + 3]) / (arr_7 [i_4 + 1] [i_5 - 1] [i_6 + 3])));
                }
            } 
        } 
        arr_28 [i_4] = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) var_15))));
    }
    var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) | (((/* implicit */int) var_14))));
    var_27 = (-(max((var_5), (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) var_17)) : (var_11)))))));
    /* LoopNest 2 */
    for (unsigned short i_9 = 0; i_9 < 11; i_9 += 4) 
    {
        for (short i_10 = 1; i_10 < 10; i_10 += 4) 
        {
            {
                arr_37 [i_9] [i_10] [8U] = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) min((((/* implicit */int) var_1)), (arr_6 [i_10 + 1] [i_9])))), (arr_36 [i_9])));
                /* LoopNest 3 */
                for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
                {
                    for (long long int i_12 = 2; i_12 < 8; i_12 += 4) 
                    {
                        for (short i_13 = 1; i_13 < 8; i_13 += 4) 
                        {
                            {
                                arr_46 [i_9] [i_9] [i_9] [i_11] [i_9] = ((signed char) ((min(((_Bool)1), ((_Bool)1))) ? (((/* implicit */int) arr_30 [(short)6])) : (((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), (var_1))))));
                                arr_47 [i_9] [i_10] [i_11] [i_11] [i_13] = ((/* implicit */signed char) (~(((/* implicit */int) (_Bool)1))));
                                var_28 ^= ((/* implicit */int) (!(((/* implicit */_Bool) var_10))));
                                var_29 = ((/* implicit */signed char) (_Bool)1);
                                arr_48 [i_9] [i_11] [7LL] [(_Bool)1] [(_Bool)1] = ((/* implicit */unsigned int) arr_35 [(_Bool)1] [(_Bool)1] [(_Bool)1]);
                            }
                        } 
                    } 
                } 
                var_30 = ((((((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))))) * (((unsigned long long int) (_Bool)1)))) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) (_Bool)1))) ? ((+(arr_44 [i_9] [i_9] [i_9] [i_9] [i_9]))) : (((/* implicit */unsigned int) ((/* implicit */int) min(((_Bool)1), ((_Bool)1)))))))));
                var_31 = ((/* implicit */long long int) max((var_31), (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1)))))));
            }
        } 
    } 
    var_32 = ((/* implicit */long long int) var_17);
}
