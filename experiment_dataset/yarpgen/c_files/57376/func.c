/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57376
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57376 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57376
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
    for (unsigned short i_0 = 2; i_0 < 18; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    var_11 = ((/* implicit */long long int) var_9);
                    var_12 ^= ((/* implicit */long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) -601194135))))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_4)) : (((((/* implicit */int) (unsigned char)0)) & (var_3)))))));
                }
            } 
        } 
        var_13 = ((/* implicit */int) arr_6 [i_0 + 1]);
        var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */int) arr_8 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1])) : (((((/* implicit */_Bool) arr_1 [i_0] [i_0 - 2])) ? (((/* implicit */int) var_4)) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (_Bool)0)) : (var_8)))))));
        /* LoopNest 3 */
        for (unsigned int i_3 = 1; i_3 < 15; i_3 += 3) 
        {
            for (unsigned long long int i_4 = 0; i_4 < 19; i_4 += 3) 
            {
                for (unsigned long long int i_5 = 1; i_5 < 18; i_5 += 1) 
                {
                    {
                        var_15 = ((/* implicit */unsigned long long int) (_Bool)1);
                        arr_17 [i_0] [i_0] [i_3] [i_4] [i_0] [i_5 - 1] = ((/* implicit */long long int) 601194135);
                    }
                } 
            } 
        } 
    }
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_7 = 3; i_7 < 19; i_7 += 4) 
        {
            for (unsigned int i_8 = 0; i_8 < 21; i_8 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_9 = 2; i_9 < 20; i_9 += 2) 
                    {
                        for (unsigned char i_10 = 0; i_10 < 21; i_10 += 1) 
                        {
                            {
                                arr_33 [i_6] = ((/* implicit */_Bool) var_1);
                                arr_34 [i_7 - 3] [i_9 - 2] [i_6] [i_7 - 3] [i_6] = ((/* implicit */unsigned long long int) (~(var_3)));
                                arr_35 [i_6] [i_7 - 1] [i_8] [i_9 + 1] [i_6] = ((/* implicit */unsigned char) arr_24 [i_6] [i_10]);
                            }
                        } 
                    } 
                    arr_36 [i_6] [i_6] [i_8] [i_6] = ((/* implicit */unsigned char) 0LL);
                    var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_6])) ? (arr_19 [i_6]) : (((/* implicit */unsigned long long int) -601194135))))) ? (((/* implicit */unsigned long long int) arr_27 [i_6] [i_8] [i_6] [i_6])) : (max((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) -601194135)) : (var_9))), (((/* implicit */unsigned long long int) (-(var_7))))))));
                    arr_37 [i_6] [i_6] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_4)) * (((((/* implicit */_Bool) 14378632954553414488ULL)) ? (var_8) : (var_3)))))) : (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) 0LL)) ? (-601194135) : (((/* implicit */int) arr_30 [i_6] [i_6] [i_6] [i_6] [i_8] [i_6]))))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)128))) : (var_6)))))));
                    var_17 = 6629850930681967517LL;
                }
            } 
        } 
        arr_38 [i_6] = (unsigned char)127;
    }
    var_18 = ((/* implicit */short) (~(var_7)));
    /* LoopNest 2 */
    for (int i_11 = 0; i_11 < 23; i_11 += 4) 
    {
        for (unsigned char i_12 = 0; i_12 < 23; i_12 += 2) 
        {
            {
                arr_44 [i_11] [i_11] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_43 [i_11])) && (((/* implicit */_Bool) var_1)))))));
                var_19 -= (-(((/* implicit */int) arr_40 [i_11])));
                var_20 = ((/* implicit */unsigned long long int) (!(((_Bool) var_9))));
                /* LoopNest 2 */
                for (_Bool i_13 = 0; i_13 < 0; i_13 += 1) 
                {
                    for (unsigned char i_14 = 0; i_14 < 23; i_14 += 2) 
                    {
                        {
                            arr_50 [i_13] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 34359738304ULL)) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_41 [i_11])) : (((/* implicit */int) arr_40 [i_12])))) : (((((/* implicit */int) arr_40 [i_13 + 1])) ^ (var_2)))));
                            arr_51 [i_11] [i_11] [i_11] [i_11] [i_12] [i_14] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_41 [i_11])) ? (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_47 [i_12] [i_11] [i_11])) : (-351230862)))), (4068111119156137128ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((18446744039349813312ULL), (((/* implicit */unsigned long long int) -7438962254344488331LL))))) ? (((/* implicit */unsigned int) min((((/* implicit */int) (unsigned char)125)), (arr_45 [i_14])))) : (4025493280U))))));
                            var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) ((((/* implicit */_Bool) min((var_7), (((/* implicit */int) arr_43 [i_13 + 1]))))) ? (((/* implicit */int) ((unsigned char) var_0))) : (((/* implicit */int) arr_43 [i_13 + 1])))))));
                            var_22 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_47 [i_13 + 1] [i_13] [i_13])) : (1534339940)))) ? (var_10) : (((/* implicit */int) var_1))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
