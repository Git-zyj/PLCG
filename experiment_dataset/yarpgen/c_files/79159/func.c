/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79159
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79159 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79159
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
    for (unsigned short i_0 = 3; i_0 < 19; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) min((((unsigned short) arr_1 [i_0 - 2])), (((/* implicit */unsigned short) min((arr_1 [i_0 + 1]), (arr_1 [i_0 + 2]))))));
        arr_3 [i_0] [i_0 + 2] = ((/* implicit */unsigned int) min((((/* implicit */unsigned short) (signed char)113)), ((unsigned short)16966)));
        arr_4 [i_0] = ((((/* implicit */int) max((arr_1 [i_0]), (max((var_2), (var_1)))))) / ((-(((/* implicit */int) arr_1 [i_0 - 1])))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 3; i_1 < 19; i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned char i_2 = 1; i_2 < 18; i_2 += 2) 
        {
            for (signed char i_3 = 0; i_3 < 21; i_3 += 2) 
            {
                {
                    /* LoopSeq 4 */
                    for (short i_4 = 0; i_4 < 21; i_4 += 4) 
                    {
                        arr_15 [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) (+(var_15)))) || (((((/* implicit */unsigned int) arr_6 [i_1])) != (arr_11 [i_2])))));
                        arr_16 [i_2] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((var_11) >= (((/* implicit */int) arr_1 [i_1 - 1])))))) | (var_9)));
                        arr_17 [i_1] [(unsigned short)2] [i_3] [i_4] [i_2] [0U] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_14 [i_1 + 2] [i_1 + 2] [i_2 + 2] [i_2] [i_3] [(unsigned short)3])) >> (((((/* implicit */int) arr_13 [i_1 - 3] [i_1 - 2] [i_1 - 3] [i_2 + 2])) - (1570)))));
                    }
                    for (unsigned int i_5 = 2; i_5 < 20; i_5 += 2) 
                    {
                        var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 829119157966308121ULL)) ? (17617624915743243500ULL) : (829119157966308118ULL)));
                        var_20 = ((/* implicit */signed char) var_9);
                        arr_21 [i_1 + 1] [i_2] [i_2] [i_5 + 1] = ((/* implicit */signed char) ((int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)80))) <= (arr_0 [17]))));
                        var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) ((arr_0 [i_5 + 1]) + (((/* implicit */unsigned long long int) arr_6 [i_1 + 1])))))));
                        var_22 = var_6;
                    }
                    for (unsigned short i_6 = 2; i_6 < 20; i_6 += 2) 
                    {
                        arr_24 [i_6] [i_2] [i_2] [i_1] = var_10;
                        var_23 = ((((/* implicit */_Bool) ((4294967290U) & (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) || (((/* implicit */_Bool) (~(825723249U)))));
                    }
                    for (int i_7 = 3; i_7 < 20; i_7 += 1) 
                    {
                        var_24 = ((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) var_2))) ^ (var_3))) - (((/* implicit */long long int) arr_25 [i_7] [i_1] [14LL] [i_3] [i_2]))));
                        var_25 = ((/* implicit */int) var_14);
                    }
                    /* LoopSeq 2 */
                    for (int i_8 = 1; i_8 < 20; i_8 += 4) 
                    {
                        var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) 4294967286U)) < (9198412089042018987ULL))))));
                        arr_29 [i_8] [i_2] [i_2] [i_2] [(_Bool)0] = ((/* implicit */short) (+(((((/* implicit */int) (short)3711)) / (((/* implicit */int) (unsigned short)19))))));
                    }
                    for (unsigned short i_9 = 0; i_9 < 21; i_9 += 1) 
                    {
                        arr_33 [i_9] [i_2] [i_3] [9LL] [i_2] [12ULL] = ((/* implicit */unsigned long long int) ((arr_23 [i_1] [i_1] [(signed char)13] [i_1 - 3]) || (((/* implicit */_Bool) var_5))));
                        /* LoopSeq 2 */
                        for (unsigned short i_10 = 0; i_10 < 21; i_10 += 2) 
                        {
                            arr_36 [i_2] = ((/* implicit */signed char) arr_13 [15] [19U] [i_2 + 1] [i_2 + 2]);
                            var_27 = ((/* implicit */signed char) min((var_27), ((signed char)115)));
                        }
                        for (int i_11 = 2; i_11 < 19; i_11 += 4) 
                        {
                            var_28 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */unsigned long long int) arr_35 [i_1 + 2] [i_2] [17] [i_9] [i_11])) <= (arr_18 [i_11])))) & (((/* implicit */int) ((signed char) 9198412089042018987ULL)))));
                            arr_40 [1ULL] [i_2] [i_3] [i_2] [i_3] [i_9] [(_Bool)1] = ((/* implicit */unsigned char) arr_31 [i_1] [i_2] [i_3] [i_3]);
                            var_29 = ((/* implicit */unsigned char) max((var_29), (((/* implicit */unsigned char) (-(((arr_28 [i_1] [i_11] [i_3]) / (((/* implicit */unsigned int) arr_12 [(unsigned char)6] [i_11] [i_3] [i_3])))))))));
                        }
                        var_30 = ((/* implicit */int) min((var_30), (((/* implicit */int) (signed char)115))));
                        arr_41 [i_9] [i_2] [i_2] [i_1] = ((/* implicit */unsigned short) ((2147483647) >> (((((/* implicit */int) (unsigned short)43195)) - (43177)))));
                    }
                    arr_42 [i_2] = ((/* implicit */unsigned int) var_1);
                }
            } 
        } 
        var_31 = ((/* implicit */unsigned short) min((var_31), (((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned char)20)))))));
        arr_43 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_9) : (((/* implicit */long long int) arr_28 [i_1] [16ULL] [(_Bool)1]))))) ? (arr_20 [i_1] [4U] [i_1 - 1] [i_1 - 1]) : (((/* implicit */int) arr_38 [i_1] [i_1] [i_1] [i_1] [i_1 - 1]))));
        var_32 = ((/* implicit */long long int) 9248331984667532601ULL);
    }
    var_33 = ((/* implicit */signed char) ((max((((/* implicit */long long int) min((var_10), (var_1)))), (8382951987660175892LL))) / (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
    var_34 = ((/* implicit */short) max((var_34), (((/* implicit */short) var_4))));
}
