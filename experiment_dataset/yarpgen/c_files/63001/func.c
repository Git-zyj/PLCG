/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63001
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63001 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63001
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
    for (signed char i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 17; i_1 += 3) 
        {
            for (int i_2 = 2; i_2 < 18; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 16; i_4 += 2) 
                        {
                            {
                                arr_12 [i_0] [i_0] [i_2] [i_3] = (-(((/* implicit */int) (_Bool)0)));
                                arr_13 [i_4 - 1] [i_0] [i_2 - 2] [i_2] [i_0] [i_0] [i_0] = -4976537754882916394LL;
                                arr_14 [i_0] [i_0] [0LL] [i_3] [(unsigned short)10] [i_2] [i_2] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_2] [i_2] [i_2] [i_2])) ? (((arr_3 [i_0] [i_2] [i_3]) >> (((((/* implicit */int) var_3)) + (12163))))) : (((/* implicit */int) var_15)))))));
                                arr_15 [i_0] [i_3] [i_3] [i_2] [i_2 + 1] [i_1] [i_0] = ((/* implicit */int) ((((max((-2505171265000923058LL), (var_11))) < (((long long int) arr_0 [i_1] [i_2])))) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_5 [i_1 + 2] [i_1 + 1] [i_1 + 1]))))) : (arr_6 [i_0] [i_1] [i_2] [i_3])));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 19; i_6 += 3) 
                        {
                            {
                                arr_21 [i_0] [i_1 + 1] [i_2] [i_0] = ((/* implicit */short) (-(-914031612)));
                                arr_22 [i_6] [(_Bool)1] [i_6] [i_0] [i_6] = ((/* implicit */unsigned char) var_0);
                                arr_23 [i_0] [i_1 + 1] [i_2] [i_5] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_3))))) ? (((/* implicit */long long int) ((/* implicit */int) max((arr_18 [i_0] [i_0] [i_0]), ((_Bool)0))))) : ((((_Bool)1) ? (((/* implicit */long long int) 1759527365U)) : (arr_10 [(short)17] [i_1 + 1] [i_2] [i_5] [i_0])))))) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                                arr_24 [i_2] [i_5] [i_2] [i_1] [i_0] [i_0] [i_2] &= ((/* implicit */unsigned char) ((unsigned int) ((_Bool) ((((/* implicit */int) (unsigned short)12970)) > (arr_16 [i_2] [i_2] [i_2 + 1] [i_6])))));
                            }
                        } 
                    } 
                    arr_25 [9] [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) arr_5 [i_1 + 1] [i_1 + 1] [i_2 - 2]))));
                }
            } 
        } 
    } 
    /* LoopSeq 4 */
    for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
    {
        /* LoopSeq 1 */
        for (long long int i_8 = 0; i_8 < 14; i_8 += 2) 
        {
            arr_32 [i_7 - 1] [i_7] = ((/* implicit */unsigned char) (-((+(((/* implicit */int) arr_26 [i_7]))))));
            arr_33 [i_7] [i_7] [(unsigned short)6] = ((/* implicit */unsigned short) arr_0 [i_8] [i_7]);
        }
        arr_34 [i_7] = ((/* implicit */short) (+(((/* implicit */int) var_0))));
        /* LoopSeq 1 */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            arr_38 [i_7] [i_7] = ((/* implicit */short) (((-(((/* implicit */int) arr_8 [i_7] [i_7] [i_7] [i_7] [i_9] [i_9])))) & (((/* implicit */int) (unsigned short)65535))));
            arr_39 [i_7] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) 16777215LL)) ? (((/* implicit */int) arr_19 [i_7] [i_7])) : (1844927925)))));
        }
    }
    for (unsigned short i_10 = 2; i_10 < 8; i_10 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned short i_11 = 0; i_11 < 10; i_11 += 4) 
        {
            for (short i_12 = 0; i_12 < 10; i_12 += 1) 
            {
                for (long long int i_13 = 1; i_13 < 9; i_13 += 1) 
                {
                    {
                        arr_50 [i_11] [i_12] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (-(((/* implicit */int) arr_18 [i_10] [i_11] [i_12]))))) ? (((/* implicit */int) arr_26 [i_11])) : (((((/* implicit */int) arr_42 [i_10])) & (((/* implicit */int) (signed char)31)))))) < (((/* implicit */int) (!(((/* implicit */_Bool) ((2147483647) - (((/* implicit */int) var_4))))))))));
                        arr_51 [i_10] [i_11] [i_12] [i_13] = ((/* implicit */unsigned short) (~(min((((-1859627185) + (914031612))), (((/* implicit */int) min(((short)32767), (((/* implicit */short) arr_4 [i_10 + 1] [i_10 + 1] [i_13 + 1])))))))));
                    }
                } 
            } 
        } 
        arr_52 [i_10] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)52565)) ? (((/* implicit */int) (unsigned char)66)) : (((/* implicit */int) var_15))))) ? (((((/* implicit */_Bool) arr_3 [i_10] [i_10 + 2] [i_10 - 2])) ? (arr_3 [i_10] [i_10] [i_10]) : (((/* implicit */int) var_15)))) : ((+(arr_3 [i_10 + 1] [i_10 + 1] [i_10])))));
    }
    for (unsigned char i_14 = 0; i_14 < 23; i_14 += 3) 
    {
        arr_56 [i_14] = min(((~(((((/* implicit */_Bool) arr_55 [i_14] [i_14])) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (var_6))))), (((/* implicit */long long int) ((signed char) ((((/* implicit */int) (unsigned short)52566)) | (-1385069482))))));
        arr_57 [i_14] = ((/* implicit */unsigned int) -212483315);
        arr_58 [10] [i_14] = ((short) (~(((/* implicit */int) var_10))));
    }
    /* vectorizable */
    for (long long int i_15 = 0; i_15 < 19; i_15 += 2) 
    {
        arr_63 [i_15] [i_15] = ((/* implicit */unsigned short) arr_61 [i_15]);
        arr_64 [17] [i_15] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) 2388775971U))) && (((_Bool) 1844927925))));
    }
    var_16 = ((/* implicit */unsigned short) 2147483647);
}
