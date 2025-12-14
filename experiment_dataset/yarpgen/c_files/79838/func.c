/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79838
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
    var_13 = ((/* implicit */unsigned short) ((signed char) ((unsigned short) ((((/* implicit */_Bool) (short)8321)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))) : (var_8)))));
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        var_14 -= ((/* implicit */unsigned short) arr_0 [i_0] [i_0]);
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_0] [i_0] [i_0] &= ((/* implicit */unsigned long long int) arr_4 [i_0] [i_0]);
                    arr_9 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */unsigned long long int) (unsigned char)8);
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        var_15 ^= ((/* implicit */short) (+(((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))));
                        var_16 ^= ((/* implicit */int) 0LL);
                        /* LoopSeq 1 */
                        for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 2) 
                        {
                            arr_17 [i_0] [i_4] = ((/* implicit */unsigned int) ((arr_11 [i_0] [i_0]) != (((/* implicit */unsigned long long int) arr_14 [i_0] [i_1] [i_2] [i_2] [i_4]))));
                            arr_18 [i_3] [i_3] [i_4] [i_3] [i_1] [i_4] [i_4] = ((int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) & (-3397518432967971319LL)));
                            arr_19 [i_0] [i_0] [i_2] [i_0] [i_3] [i_4] = ((/* implicit */unsigned int) arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] [i_1]);
                            var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -155290615)) ? (((/* implicit */int) (unsigned short)60160)) : (arr_1 [i_0])))) ? ((-(((/* implicit */int) (_Bool)0)))) : ((-(((/* implicit */int) (unsigned short)0))))));
                        }
                        /* LoopSeq 1 */
                        for (long long int i_5 = 2; i_5 < 19; i_5 += 3) 
                        {
                            var_18 = ((/* implicit */unsigned char) arr_3 [i_3] [i_3] [i_3]);
                            var_19 = ((/* implicit */unsigned char) arr_11 [i_1] [i_1]);
                        }
                    }
                    for (unsigned long long int i_6 = 2; i_6 < 21; i_6 += 3) 
                    {
                        arr_26 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((unsigned short) arr_3 [i_0] [i_6 + 2] [i_2]);
                        var_20 = arr_24 [i_1] [i_1] [13LL] [i_2] [i_2] [i_0];
                        var_21 = ((/* implicit */unsigned long long int) arr_6 [(signed char)2] [(signed char)2] [i_2] [i_6]);
                        var_22 = ((/* implicit */signed char) var_8);
                    }
                    for (int i_7 = 0; i_7 < 23; i_7 += 2) 
                    {
                        var_23 = ((/* implicit */int) ((short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_7] [(signed char)0] [i_1] [i_0]))) : (arr_22 [i_2] [i_2] [i_2]))));
                        arr_29 [i_7] [i_2] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) 2147483645)) ? (0) : (((/* implicit */int) ((2072988515U) >= (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
                        arr_30 [i_0] [i_0] [i_2] [i_7] [3ULL] = ((/* implicit */short) (+(((/* implicit */int) arr_13 [i_0] [i_0] [i_0]))));
                        var_24 = ((/* implicit */unsigned char) ((short) arr_28 [i_0] [i_0] [i_0] [i_7]));
                    }
                    for (long long int i_8 = 0; i_8 < 23; i_8 += 3) 
                    {
                        var_25 = (_Bool)1;
                        var_26 = ((/* implicit */unsigned short) 15872136040667061572ULL);
                    }
                    arr_33 [i_0] [i_0] [i_0] [(unsigned char)7] &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [i_0] [14ULL] [i_1]))))) ? (((/* implicit */int) var_1)) : ((~(arr_1 [i_0])))))) ? ((~((~(((/* implicit */int) (unsigned short)15)))))) : (((/* implicit */int) var_1))));
                    arr_34 [i_2] [i_0] [i_0] = ((/* implicit */unsigned int) arr_3 [i_0] [i_0] [i_0]);
                }
            } 
        } 
    }
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_10 = 1; i_10 < 20; i_10 += 4) 
        {
            var_27 -= ((/* implicit */signed char) arr_23 [i_9] [i_9] [i_9] [i_10]);
            arr_40 [i_10 + 1] [i_10] [i_9] = ((/* implicit */short) (-(((((/* implicit */_Bool) (+(((/* implicit */int) arr_32 [i_9]))))) ? (((((/* implicit */long long int) ((/* implicit */int) var_5))) + (arr_24 [i_10 - 1] [i_10 - 1] [i_10] [i_10 - 1] [(short)18] [i_10 - 1]))) : (arr_36 [i_9])))));
        }
        for (unsigned short i_11 = 2; i_11 < 19; i_11 += 1) 
        {
            var_28 = ((/* implicit */short) (unsigned short)65507);
            var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_9] [i_11])) ? ((+(var_4))) : (((/* implicit */long long int) ((/* implicit */int) arr_37 [i_9] [i_11 - 1])))));
        }
        var_30 = ((/* implicit */unsigned char) arr_27 [i_9] [i_9] [i_9] [i_9]);
    }
    for (unsigned short i_12 = 0; i_12 < 20; i_12 += 4) 
    {
        var_31 = ((/* implicit */unsigned short) arr_25 [i_12] [i_12] [i_12]);
        arr_46 [i_12] [i_12] = 524287ULL;
        /* LoopNest 3 */
        for (unsigned short i_13 = 0; i_13 < 20; i_13 += 3) 
        {
            for (signed char i_14 = 0; i_14 < 20; i_14 += 3) 
            {
                for (unsigned char i_15 = 2; i_15 < 18; i_15 += 4) 
                {
                    {
                        arr_55 [i_12] [i_13] [i_14] [i_13] = ((/* implicit */short) (+((+((+(-5997851702196022269LL)))))));
                        var_32 = ((/* implicit */long long int) max((var_32), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((arr_32 [i_14]) ? (arr_39 [i_15]) : (arr_39 [i_15]))) << ((((-(arr_42 [i_12] [i_15]))) - (614432804U)))))) ? (((((/* implicit */_Bool) arr_24 [i_12] [i_12] [i_12] [i_12] [i_12] [i_12])) ? (((/* implicit */unsigned long long int) (+(arr_42 [i_13] [i_12])))) : (((arr_22 [i_12] [i_12] [i_12]) % (((/* implicit */unsigned long long int) 9223372036854775807LL)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_12] [i_12] [i_12]))))))));
                        arr_56 [i_12] [i_15 + 2] [i_15] = ((/* implicit */int) arr_0 [i_12] [i_12]);
                    }
                } 
            } 
        } 
    }
    var_33 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */_Bool) ((1125897759358976ULL) ^ (((/* implicit */unsigned long long int) -609772839))))) && (((/* implicit */_Bool) 18446744073709551615ULL)))))));
}
