/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84838
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 2; i_0 < 21; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (int i_2 = 3; i_2 < 18; i_2 += 4) 
            {
                {
                    arr_6 [i_0 - 1] [i_2] = ((/* implicit */_Bool) max((((/* implicit */unsigned char) (!((_Bool)0)))), (arr_0 [i_0] [i_1])));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (signed char i_4 = 3; i_4 < 21; i_4 += 2) 
                        {
                            {
                                arr_12 [8U] [i_2] [5U] [19] [i_2] [(unsigned char)16] [i_4] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((unsigned char) arr_5 [i_2 - 2] [i_1] [i_4 + 1])))));
                                arr_13 [i_0] [i_1] [i_2] [i_0] [i_4 + 1] = ((/* implicit */unsigned int) ((unsigned char) (signed char)103));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 22; i_6 += 4) 
                        {
                            {
                                arr_19 [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (arr_8 [i_0 - 1] [i_0 - 2] [i_2 + 2] [i_2 + 1]) : (arr_8 [3LL] [i_0 - 2] [i_2 + 1] [i_2 + 3])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_0] [i_0 - 1] [i_2 - 2] [i_2 + 2])) ? (arr_8 [i_0] [i_0 - 1] [i_2 - 3] [i_2 - 2]) : (((/* implicit */int) (_Bool)1))))) : (min((10767176734406103839ULL), (((/* implicit */unsigned long long int) arr_8 [i_0] [i_0 + 1] [i_2 - 3] [i_2 - 2]))))));
                                arr_20 [i_0] [i_2] [(signed char)16] = ((/* implicit */long long int) arr_8 [i_0 + 1] [(unsigned short)14] [(_Bool)1] [i_0]);
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (arr_11 [i_2] [i_2] [i_2 - 2] [i_2] [i_2 - 1] [i_0 - 1] [i_2]) : (min((arr_11 [i_2] [2U] [i_2 + 2] [i_2] [i_2 + 3] [i_0 - 2] [i_2]), (arr_11 [i_2] [i_2] [i_2 + 4] [(unsigned char)14] [i_2 - 3] [i_0 - 2] [i_2])))));
                    arr_21 [i_2] [i_2] = ((/* implicit */_Bool) min((((((/* implicit */int) arr_9 [i_1] [i_2 + 1] [4U])) / (((/* implicit */int) (_Bool)1)))), (((((/* implicit */_Bool) arr_14 [i_2] [i_2 + 1] [i_2] [i_2] [i_2])) ? (((/* implicit */int) arr_9 [i_2] [i_2 + 1] [i_2])) : (((/* implicit */int) arr_14 [(unsigned char)5] [i_2 + 1] [i_2 + 1] [i_2] [4U]))))));
                }
            } 
        } 
    } 
    var_19 = max((((/* implicit */long long int) (unsigned char)220)), (var_14));
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_7 = 0; i_7 < 20; i_7 += 3) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned long long int) ((arr_8 [(short)18] [i_7] [i_7] [i_7]) + (((/* implicit */int) (_Bool)1))));
        var_21 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_3))));
    }
    for (short i_8 = 0; i_8 < 20; i_8 += 3) /* same iter space */
    {
        var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) ((long long int) (((~(-6286759329182065617LL))) << (((((var_8) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (_Bool)1)))) - (1)))))))));
        /* LoopNest 2 */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            for (unsigned long long int i_10 = 0; i_10 < 20; i_10 += 1) 
            {
                {
                    var_23 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) % (((((/* implicit */_Bool) (short)(-32767 - 1))) ? ((-(var_1))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_9] [20LL] [20LL])))))));
                    /* LoopNest 2 */
                    for (unsigned short i_11 = 2; i_11 < 17; i_11 += 2) 
                    {
                        for (unsigned short i_12 = 0; i_12 < 20; i_12 += 2) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned int) min(((((_Bool)1) ? (((/* implicit */int) arr_30 [i_11 - 1] [(signed char)0])) : (((/* implicit */int) arr_18 [i_8] [i_8] [i_8] [16U])))), (((/* implicit */int) min((arr_24 [i_8] [(_Bool)1]), (min(((_Bool)1), ((_Bool)1))))))));
                                arr_37 [i_8] [i_8] [i_10] [i_11 + 2] [i_12] = ((/* implicit */unsigned long long int) ((min((((arr_7 [i_8] [i_9] [i_11 + 1] [i_12]) ? (((/* implicit */int) arr_27 [(short)11] [i_10])) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (unsigned short)43274)))) << (((((((/* implicit */_Bool) (short)-24334)) ? (((/* implicit */int) arr_29 [i_11 + 1] [(unsigned char)4])) : (((/* implicit */int) (_Bool)1)))) - (14181)))));
                                arr_38 [i_8] [i_9] [i_10] [i_8] [2U] [i_12] [i_12] = ((/* implicit */signed char) (~((+(((/* implicit */int) ((((/* implicit */_Bool) 7473508572684931800ULL)) || (((/* implicit */_Bool) arr_22 [i_9])))))))));
                                arr_39 [(unsigned char)16] [i_8] [i_8] [(unsigned char)12] = ((/* implicit */unsigned int) ((arr_15 [i_8] [0LL] [16LL] [i_10] [i_11 + 1] [i_12]) || (((/* implicit */_Bool) max((var_15), (((/* implicit */short) arr_17 [i_8] [i_9] [i_10] [i_11] [i_12])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_40 [i_8] = ((/* implicit */unsigned int) ((signed char) ((arr_16 [i_8] [(unsigned char)12]) - (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (_Bool)1)))))));
        var_25 = ((/* implicit */unsigned short) max((((/* implicit */long long int) 1765610022U)), (7504849822777216459LL)));
        var_26 = ((/* implicit */unsigned long long int) max((var_3), (((/* implicit */short) arr_1 [(short)18]))));
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_13 = 1; i_13 < 14; i_13 += 3) 
    {
        arr_43 [i_13] = ((/* implicit */unsigned long long int) (unsigned short)19000);
        var_27 = ((/* implicit */unsigned int) min((var_27), ((-(var_2)))));
        var_28 = ((_Bool) arr_26 [i_13 - 1]);
        var_29 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */_Bool) 1558557004U)) || (((/* implicit */_Bool) arr_27 [i_13] [i_13])))))));
    }
    for (unsigned long long int i_14 = 1; i_14 < 15; i_14 += 3) 
    {
        arr_46 [i_14] = ((/* implicit */signed char) (_Bool)1);
        var_30 = ((/* implicit */int) min(((+(arr_16 [(unsigned short)4] [(unsigned short)4]))), (max((arr_16 [i_14 + 2] [i_14 - 1]), (arr_16 [i_14] [i_14])))));
    }
    var_31 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) 2736410292U)) ? (var_17) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_9)))))))) ? (var_1) : (((/* implicit */unsigned long long int) var_17))));
}
