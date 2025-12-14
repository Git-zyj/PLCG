/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98207
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98207 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98207
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
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        var_19 = ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))));
        var_20 &= ((/* implicit */short) (-(((((/* implicit */_Bool) var_16)) ? (var_10) : (arr_1 [i_0])))));
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                for (unsigned char i_3 = 1; i_3 < 22; i_3 += 4) 
                {
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            arr_16 [i_0] [i_2] [i_0] [i_0] [i_2] = ((/* implicit */signed char) (((+(((/* implicit */int) var_8)))) <= (((/* implicit */int) var_0))));
                            var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_0]))) | (var_18)));
                            var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) var_15))));
                            var_23 = ((/* implicit */int) (!(((/* implicit */_Bool) var_7))));
                            arr_17 [i_4] [i_0] [i_2] [i_0] [(unsigned short)10] |= ((((/* implicit */_Bool) arr_14 [i_3 + 1] [i_3] [i_3] [i_4] [(signed char)15] [(short)9] [i_4])) ? (arr_14 [i_3 - 1] [i_3] [i_3] [i_3] [i_3] [(short)3] [i_3]) : (arr_14 [i_3 - 1] [(short)19] [i_3 - 1] [i_3 - 1] [i_4] [i_4] [(signed char)7]));
                        }
                        for (unsigned int i_5 = 4; i_5 < 22; i_5 += 2) 
                        {
                            var_24 = ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) ((signed char) 8302065991365082587ULL))));
                            arr_20 [i_2] [7U] [19LL] [i_0] [(unsigned char)16] = ((/* implicit */short) -1090040186);
                            var_25 = ((/* implicit */unsigned int) 6890981290512903257LL);
                        }
                        var_26 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_18 [i_1 + 1] [7U] [14ULL] [i_3 + 1] [i_1])) ? (((/* implicit */int) arr_18 [i_1 + 1] [i_2] [i_2] [i_3 + 1] [i_2])) : (((/* implicit */int) var_8))));
                        var_27 = ((/* implicit */long long int) (+(((/* implicit */int) ((unsigned char) (signed char)-60)))));
                        arr_21 [i_0] &= ((/* implicit */unsigned int) (+(var_10)));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned int i_6 = 3; i_6 < 22; i_6 += 1) 
        {
            for (unsigned int i_7 = 0; i_7 < 23; i_7 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_8 = 0; i_8 < 23; i_8 += 2) 
                    {
                        var_28 = ((/* implicit */signed char) ((long long int) ((((/* implicit */int) arr_15 [i_6] [i_6] [i_6 - 1] [i_6] [i_6])) > (((/* implicit */int) (_Bool)1)))));
                        arr_30 [(unsigned char)13] [(unsigned char)13] [i_7] [i_8] = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)52)) - (1090040184)));
                    }
                    for (unsigned short i_9 = 0; i_9 < 23; i_9 += 4) 
                    {
                        arr_34 [i_9] [i_6] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_0] [i_0])) ? ((-(-1090040186))) : (arr_23 [i_6 - 2])));
                        var_29 = ((/* implicit */short) ((unsigned int) (_Bool)1));
                    }
                    arr_35 [i_0] [i_0] = var_8;
                    /* LoopNest 2 */
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        for (signed char i_11 = 1; i_11 < 20; i_11 += 4) 
                        {
                            {
                                arr_41 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10] = ((/* implicit */unsigned char) ((short) arr_26 [i_11 + 1] [i_11 + 1] [i_6 + 1] [i_6 - 3]));
                                arr_42 [i_10] [i_10] [i_7] [i_7] [i_11 - 1] = var_3;
                                var_30 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)44)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) arr_39 [16ULL] [i_11] [i_11 + 3] [i_11] [i_11 + 3] [20U] [i_11]))));
                            }
                        } 
                    } 
                    arr_43 [i_0] = ((/* implicit */unsigned short) ((short) var_14));
                    arr_44 [i_6 + 1] [(unsigned char)19] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) (unsigned short)52255)))) ? ((+(var_18))) : (((/* implicit */long long int) (+(((/* implicit */int) var_13)))))));
                }
            } 
        } 
    }
    for (short i_12 = 2; i_12 < 12; i_12 += 4) 
    {
        var_31 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((((/* implicit */int) (signed char)108)) + (((/* implicit */int) var_11))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_26 [i_12] [i_12] [1ULL] [i_12])) != (((/* implicit */int) (short)-16967)))))) : (arr_11 [i_12] [i_12] [i_12] [i_12]))), (((/* implicit */long long int) min(((signed char)59), (var_13))))));
        var_32 -= var_0;
    }
    for (unsigned long long int i_13 = 0; i_13 < 20; i_13 += 1) 
    {
        arr_53 [i_13] = ((/* implicit */unsigned short) arr_19 [21] [(unsigned short)22] [(unsigned short)22] [i_13] [(unsigned short)22]);
        var_33 = min((((/* implicit */long long int) ((((/* implicit */_Bool) (-(-6890981290512903257LL)))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)-108))))) : (((((/* implicit */_Bool) -8707455598424275742LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (733061986U)))))), ((+(var_10))));
    }
    var_34 = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) ((var_3) <= (var_18)))) : ((~(((/* implicit */int) (signed char)-108)))))) - ((+(((/* implicit */int) var_13))))));
}
