/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62317
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62317 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62317
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
    for (unsigned char i_0 = 1; i_0 < 16; i_0 += 4) 
    {
        var_16 *= ((/* implicit */unsigned long long int) (~(min((6365541802814001276LL), (((((/* implicit */_Bool) -6365541802814001277LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (4728502864648581046LL)))))));
        var_17 = arr_3 [i_0];
        var_18 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0 + 2])) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (arr_0 [i_0] [i_0]))))) : (((-4728502864648581046LL) - (arr_3 [i_0 + 3]))))))));
        var_19 = ((/* implicit */_Bool) (unsigned char)255);
    }
    /* vectorizable */
    for (unsigned char i_1 = 4; i_1 < 11; i_1 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 1) 
        {
            for (long long int i_3 = 2; i_3 < 11; i_3 += 4) 
            {
                {
                    arr_11 [i_1] [i_2] = ((/* implicit */_Bool) -4728502864648581047LL);
                    arr_12 [i_2] [i_2] = ((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */int) (unsigned char)0)) <= (((/* implicit */int) (unsigned char)0)))))));
                    var_20 = ((/* implicit */unsigned long long int) var_2);
                }
            } 
        } 
        arr_13 [1LL] [i_1 - 1] = (+(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_15)))));
    }
    /* vectorizable */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        /* LoopNest 3 */
        for (signed char i_5 = 0; i_5 < 24; i_5 += 4) 
        {
            for (unsigned long long int i_6 = 0; i_6 < 24; i_6 += 3) 
            {
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (int i_8 = 2; i_8 < 22; i_8 += 4) /* same iter space */
                        {
                            var_21 = ((/* implicit */short) var_15);
                            var_22 = ((/* implicit */signed char) (unsigned short)37780);
                            var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(arr_22 [(_Bool)1] [(_Bool)1] [(short)7])))) ? (((/* implicit */int) arr_27 [i_8] [i_8] [i_7] [i_8 - 1] [i_8 + 1])) : (((/* implicit */int) arr_27 [(_Bool)1] [20LL] [i_7] [i_7] [(unsigned char)13]))));
                        }
                        for (int i_9 = 2; i_9 < 22; i_9 += 4) /* same iter space */
                        {
                            arr_31 [i_4] [i_4] [i_7] [i_4] [i_4] = arr_24 [i_6] [i_7];
                            arr_32 [(unsigned char)3] [21LL] [i_7] = ((/* implicit */unsigned char) (~((-(((/* implicit */int) (signed char)-73))))));
                            var_24 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_21 [i_9 + 2] [i_9 - 2] [i_9 + 2]))));
                        }
                        var_25 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)54)) ? (((/* implicit */long long int) ((/* implicit */int) arr_15 [12LL]))) : (((long long int) arr_21 [i_4] [i_4] [i_6]))));
                        /* LoopSeq 1 */
                        for (int i_10 = 2; i_10 < 23; i_10 += 1) 
                        {
                            var_26 = ((/* implicit */unsigned long long int) arr_25 [i_10] [i_10] [i_10 - 1] [i_10 + 1] [i_10 + 1]);
                            arr_36 [i_7] [i_7] [i_6] [i_7] [i_6] = ((/* implicit */unsigned short) (~(((/* implicit */int) (signed char)8))));
                            var_27 += ((/* implicit */signed char) arr_25 [(_Bool)1] [i_5] [i_10 - 1] [(unsigned short)19] [(unsigned short)4]);
                        }
                        arr_37 [19LL] [i_7] [i_6] [i_7] = (~(((/* implicit */int) arr_28 [i_5] [i_7])));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned short i_11 = 2; i_11 < 23; i_11 += 4) 
        {
            for (int i_12 = 0; i_12 < 24; i_12 += 1) 
            {
                {
                    arr_44 [i_4] [i_4] [5ULL] [i_4] = ((/* implicit */signed char) (-(((/* implicit */int) (short)(-32767 - 1)))));
                    var_28 -= arr_43 [8ULL] [i_11 + 1] [i_4] [i_11];
                }
            } 
        } 
        var_29 = ((/* implicit */short) min((var_29), (((/* implicit */short) ((((/* implicit */int) arr_19 [i_4] [i_4] [i_4])) / ((-(1574579236))))))));
    }
    var_30 = ((/* implicit */signed char) (+(2147483647)));
}
