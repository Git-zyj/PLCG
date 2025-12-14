/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60986
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60986 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60986
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
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 21; i_1 += 2) 
        {
            {
                var_17 &= ((/* implicit */unsigned short) (~(var_3)));
                arr_5 [i_0] [i_0] = ((unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_3 [i_1 - 1] [i_1 + 3]) : (arr_3 [i_1 + 3] [i_0])));
                var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_7))))) ? (var_8) : (((/* implicit */unsigned long long int) max((arr_1 [i_1]), (((/* implicit */int) (short)23347)))))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))) : (max((max((var_5), (((/* implicit */long long int) arr_3 [i_1] [i_0])))), (((/* implicit */long long int) (signed char)125))))));
                var_19 = ((/* implicit */int) (unsigned short)65530);
            }
        } 
    } 
    var_20 = ((/* implicit */_Bool) var_4);
    var_21 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) (short)-21))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)65530))))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) var_0)) : (var_5))) : (var_3))) : (((/* implicit */long long int) ((/* implicit */int) var_12)))));
    /* LoopSeq 1 */
    for (short i_2 = 2; i_2 < 12; i_2 += 3) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned short i_3 = 0; i_3 < 13; i_3 += 4) /* same iter space */
        {
            arr_11 [i_2] [i_3] = ((/* implicit */short) (!(((/* implicit */_Bool) ((arr_8 [i_2]) / (((/* implicit */long long int) ((/* implicit */int) var_10))))))));
            var_22 = ((/* implicit */int) (unsigned short)65518);
        }
        /* vectorizable */
        for (unsigned short i_4 = 0; i_4 < 13; i_4 += 4) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 13; i_5 += 4) 
            {
                for (unsigned short i_6 = 0; i_6 < 13; i_6 += 3) 
                {
                    {
                        arr_19 [i_6] [i_2] [i_5] [i_5] [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1)) ? (((/* implicit */unsigned long long int) -1613294251)) : (var_8)))) ? (2147483636) : (((/* implicit */int) (unsigned short)65530))));
                        var_23 = var_3;
                        var_24 &= (~((+(8555586620660541484LL))));
                        /* LoopSeq 1 */
                        for (int i_7 = 0; i_7 < 13; i_7 += 1) 
                        {
                            var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) var_6))));
                            var_26 = ((/* implicit */unsigned int) arr_14 [i_2]);
                            var_27 = ((/* implicit */short) ((((/* implicit */_Bool) arr_16 [i_2] [i_4] [i_5] [i_7])) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (arr_12 [i_7] [i_5])));
                        }
                    }
                } 
            } 
            var_28 ^= ((/* implicit */short) (-(((/* implicit */int) var_12))));
            arr_24 [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 5107430591014982502ULL)) ? (2147483643) : (((/* implicit */int) (unsigned short)13))))) : (((((/* implicit */_Bool) arr_4 [i_4] [i_4] [i_2])) ? (var_8) : (((/* implicit */unsigned long long int) (-2147483647 - 1)))))));
            var_29 = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) (unsigned char)124)) ? (var_0) : (((/* implicit */unsigned int) arr_6 [i_4])))));
        }
        for (unsigned short i_8 = 0; i_8 < 13; i_8 += 4) /* same iter space */
        {
            var_30 ^= ((/* implicit */unsigned short) arr_9 [i_8]);
            arr_27 [i_2] = ((/* implicit */int) max((arr_0 [i_8]), (arr_23 [i_2 + 1] [i_2] [i_2] [i_2 - 2] [i_2 - 1] [i_2 - 1] [i_2])));
            /* LoopNest 3 */
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                for (signed char i_10 = 0; i_10 < 13; i_10 += 1) 
                {
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        {
                            var_31 = ((/* implicit */int) var_10);
                            var_32 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) var_3)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_7)) | (arr_2 [i_2])))))))) : (var_5)));
                        }
                    } 
                } 
            } 
        }
        arr_40 [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) -6625557549177883343LL))) ? (((/* implicit */long long int) -807937840)) : (((((/* implicit */long long int) var_0)) ^ (arr_37 [i_2] [i_2] [i_2] [i_2] [i_2 - 1])))))) ? (arr_10 [i_2 - 2]) : (((/* implicit */long long int) ((4227725326U) * (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_2 - 1]))))))));
        arr_41 [i_2] [i_2] = ((/* implicit */int) (~(arr_10 [i_2])));
    }
}
