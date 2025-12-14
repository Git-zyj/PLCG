/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79058
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79058 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79058
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
    var_13 = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_3)), (var_2))))))) << (((var_2) - (4608464572713410189ULL)))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 1; i_0 < 12; i_0 += 2) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0 - 1])) || (((/* implicit */_Bool) arr_0 [i_0 - 1]))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_0 - 1] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 - 1]))) : (var_5)));
        arr_4 [i_0] = ((/* implicit */long long int) arr_1 [i_0] [i_0]);
    }
    /* vectorizable */
    for (unsigned short i_1 = 1; i_1 < 12; i_1 += 2) /* same iter space */
    {
        arr_7 [i_1 + 1] [6] = arr_6 [i_1];
        /* LoopSeq 1 */
        for (unsigned int i_2 = 2; i_2 < 12; i_2 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_3 = 2; i_3 < 11; i_3 += 1) 
            {
                for (unsigned int i_4 = 0; i_4 < 13; i_4 += 2) 
                {
                    {
                        var_14 = ((/* implicit */unsigned short) ((arr_10 [i_1 + 1]) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_1] [i_1 + 1])))));
                        arr_17 [i_2] = ((/* implicit */int) ((((/* implicit */int) arr_5 [i_3 + 2])) != (((/* implicit */int) (unsigned short)13386))));
                        arr_18 [i_1] [i_1] [i_3] [i_4] [i_2] [i_3] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)13386))));
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (unsigned char i_5 = 0; i_5 < 13; i_5 += 3) 
            {
                arr_22 [i_1] [i_2] [(short)6] = ((/* implicit */unsigned short) arr_16 [(unsigned char)2] [(unsigned char)2]);
                arr_23 [i_2] = ((/* implicit */unsigned int) arr_5 [i_5]);
                arr_24 [i_5] [i_5] [i_5] [8U] = ((/* implicit */long long int) (unsigned char)195);
                /* LoopSeq 2 */
                for (signed char i_6 = 0; i_6 < 13; i_6 += 3) /* same iter space */
                {
                    var_15 = ((((/* implicit */_Bool) ((arr_27 [12ULL]) & (((/* implicit */int) var_4))))) ? (((((/* implicit */_Bool) var_7)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) : (((/* implicit */unsigned long long int) var_10)));
                    arr_28 [i_2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_14 [i_1 + 1] [2]))));
                    arr_29 [i_6] [i_5] [i_1] [i_2] [i_1] = ((/* implicit */signed char) ((unsigned long long int) ((-134217728) != (((/* implicit */int) (unsigned short)7)))));
                }
                for (signed char i_7 = 0; i_7 < 13; i_7 += 3) /* same iter space */
                {
                    arr_32 [i_1 + 1] [i_2] [(unsigned short)8] [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) (~(arr_8 [i_1] [5U] [5U])))) ? (((/* implicit */unsigned long long int) (-(arr_30 [i_1])))) : ((+(var_2)))));
                    arr_33 [i_1] [i_1 - 1] [i_1] [i_1] [i_1 - 1] [i_1] = ((/* implicit */unsigned short) (((+(((/* implicit */int) var_0)))) - (((/* implicit */int) ((unsigned char) var_0)))));
                    arr_34 [i_5] = (unsigned char)0;
                }
                arr_35 [i_1] [(unsigned short)9] [i_2 + 1] [i_5] = ((/* implicit */signed char) (-(((arr_15 [i_1] [i_2 + 1] [i_5] [i_5] [i_1]) ? (arr_26 [i_1] [i_1] [i_1 + 1]) : (((/* implicit */unsigned long long int) var_3))))));
            }
        }
        var_16 = ((/* implicit */signed char) arr_5 [i_1 - 1]);
    }
    var_17 = ((/* implicit */int) (unsigned short)65509);
    /* LoopNest 2 */
    for (unsigned long long int i_8 = 2; i_8 < 21; i_8 += 3) 
    {
        for (unsigned char i_9 = 0; i_9 < 24; i_9 += 4) 
        {
            {
                arr_42 [i_8] [i_8] [i_8 - 1] = ((/* implicit */unsigned int) 12289941468968099864ULL);
                arr_43 [i_8 + 1] [21U] [3] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_36 [i_8 + 1])) | (((/* implicit */int) arr_36 [i_8 + 3]))))) ? (((((/* implicit */int) arr_36 [i_8 + 3])) | (((/* implicit */int) arr_36 [i_8 + 3])))) : ((~(((/* implicit */int) arr_41 [i_8 + 1] [22]))))));
                arr_44 [i_8] [i_9] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_36 [i_8 + 3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_36 [i_8]))) : (4779936617052711872ULL)))) ? (((/* implicit */int) arr_36 [i_9])) : (((/* implicit */int) min((arr_36 [i_9]), (arr_36 [i_8 + 3])))));
                arr_45 [i_8] [i_9] = ((/* implicit */short) ((((/* implicit */_Bool) min((((unsigned int) var_2)), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_38 [i_8 + 2] [i_8])))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_39 [i_9] [2] [i_8])) ? (3970550651U) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_40 [i_8] [i_8 + 3] [i_8])), (arr_38 [i_8] [i_9])))))))) : (((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)70))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)31289)) << (((((/* implicit */int) arr_38 [3U] [3U])) - (21701)))))) : (max((var_2), (10564988351625145757ULL)))))));
                arr_46 [i_8] [i_8] = ((((/* implicit */unsigned int) (+(((/* implicit */int) arr_37 [i_8 + 3] [i_8 + 3]))))) > (((unsigned int) arr_41 [i_8 - 2] [i_8 - 2])));
            }
        } 
    } 
}
