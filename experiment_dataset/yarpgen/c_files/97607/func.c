/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97607
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97607 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97607
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
    for (short i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */short) (-(((/* implicit */int) var_1))));
                arr_6 [i_0] [i_0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) (short)3801)) > (((/* implicit */int) ((unsigned char) ((((/* implicit */int) (unsigned short)8191)) * (((/* implicit */int) (signed char)18))))))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 1; i_2 < 19; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 3 */
                            for (int i_4 = 3; i_4 < 17; i_4 += 3) 
                            {
                                var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) ((((/* implicit */int) var_7)) | (-1709096534))))));
                                var_17 ^= ((/* implicit */long long int) max((((((/* implicit */_Bool) max((arr_8 [i_0] [18] [(unsigned short)18] [i_4]), (((/* implicit */long long int) (unsigned char)37))))) ? (((/* implicit */int) min((var_14), (var_11)))) : (var_4))), (((((/* implicit */_Bool) max(((unsigned char)42), ((unsigned char)24)))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_13 [i_4] [i_3] [i_1] [i_1] [i_0])) : (((/* implicit */int) var_14)))) : (((/* implicit */int) ((unsigned char) var_11)))))));
                            }
                            for (long long int i_5 = 0; i_5 < 21; i_5 += 2) 
                            {
                                var_18 -= ((/* implicit */_Bool) ((unsigned short) (-(arr_14 [19LL] [i_1] [i_1] [i_2] [i_2] [i_3] [i_1]))));
                                var_19 += ((/* implicit */short) (unsigned char)200);
                                var_20 = ((/* implicit */unsigned int) max(((unsigned char)218), ((unsigned char)230)));
                                arr_16 [i_0] [(unsigned char)18] [i_2] [i_3] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) 8625093697079307795LL)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) ((_Bool) min(((unsigned char)41), ((unsigned char)239)))))));
                            }
                            for (int i_6 = 1; i_6 < 17; i_6 += 3) 
                            {
                                var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) var_8))));
                                var_22 &= 2088960U;
                                var_23 = ((/* implicit */short) min((var_23), (((short) max(((unsigned char)201), (((/* implicit */unsigned char) (signed char)57)))))));
                                arr_21 [i_0 + 1] [i_0] [i_6] [i_0 + 1] [i_1] |= ((/* implicit */unsigned long long int) (_Bool)1);
                            }
                            /* LoopSeq 2 */
                            for (long long int i_7 = 0; i_7 < 21; i_7 += 2) /* same iter space */
                            {
                                var_24 = ((/* implicit */long long int) 3U);
                                arr_25 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) -6079878286548383108LL))) ? (((/* implicit */unsigned int) arr_5 [i_0])) : (((((/* implicit */_Bool) var_6)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))));
                                var_25 = ((/* implicit */short) ((((/* implicit */_Bool) (-(arr_8 [i_1] [i_2] [i_1] [i_2 - 1])))) ? (((unsigned long long int) var_5)) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_2] [i_2] [i_2] [i_2 - 1])))));
                                var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((var_8), (((/* implicit */unsigned char) (_Bool)1))))) ? (max((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_20 [(_Bool)0] [i_3] [i_2] [i_1] [i_0 - 1])) : (((/* implicit */int) var_12)))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)226)))))) : (((/* implicit */int) arr_17 [i_0] [i_0 - 1] [i_2] [i_0] [i_2] [i_0]))));
                                var_27 += ((/* implicit */unsigned short) (+(arr_4 [i_1] [i_0])));
                            }
                            for (long long int i_8 = 0; i_8 < 21; i_8 += 2) /* same iter space */
                            {
                                var_28 = ((/* implicit */_Bool) 11431349571828632000ULL);
                                var_29 |= ((/* implicit */unsigned int) (unsigned char)59);
                            }
                            var_30 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0 + 1] [i_0] [i_2 + 1] [i_3])) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_27 [i_0] [i_3] [i_0] [i_1] [i_1] [i_0])) : (((/* implicit */int) var_11)))) : (((/* implicit */int) max((var_9), (((/* implicit */unsigned short) var_6)))))))) ? (((((/* implicit */_Bool) max((((/* implicit */long long int) var_7)), (-8625093697079307796LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_0 - 1] [(unsigned char)16] [i_0] [i_2] [i_2 + 1]))) : (max((((/* implicit */unsigned int) (unsigned short)64512)), (var_2))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_13)))));
                            var_31 = ((/* implicit */long long int) (unsigned char)214);
                            var_32 = ((/* implicit */unsigned short) (unsigned char)172);
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (short i_9 = 0; i_9 < 21; i_9 += 2) 
                {
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        for (unsigned short i_11 = 0; i_11 < 21; i_11 += 4) 
                        {
                            {
                                var_33 ^= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) var_4)) ^ (((((/* implicit */_Bool) (unsigned short)803)) ? (((/* implicit */long long int) ((/* implicit */int) arr_26 [i_0 - 1] [i_0] [i_0] [i_0 - 1] [i_0] [i_0 + 1]))) : (var_5)))));
                                var_34 = ((/* implicit */short) max((var_34), (max((var_0), (var_13)))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_35 = ((/* implicit */long long int) (unsigned char)27);
    var_36 = ((/* implicit */_Bool) ((unsigned int) (unsigned short)64703));
}
