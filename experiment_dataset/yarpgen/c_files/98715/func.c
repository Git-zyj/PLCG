/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98715
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98715 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98715
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
    var_12 = ((/* implicit */signed char) var_11);
    var_13 = ((/* implicit */unsigned long long int) var_4);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned int i_2 = 0; i_2 < 25; i_2 += 3) /* same iter space */
                {
                    arr_9 [i_1] [(_Bool)1] = ((/* implicit */unsigned short) max(((+(((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_2])) || (((/* implicit */_Bool) arr_5 [i_0]))))))), (((((/* implicit */_Bool) (unsigned short)12958)) ? (((/* implicit */int) (unsigned short)27090)) : (((/* implicit */int) (signed char)0))))));
                    var_14 = ((/* implicit */short) var_11);
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 25; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) var_10))));
                                var_16 ^= ((/* implicit */int) ((((((_Bool) (short)2032)) ? (((arr_7 [i_3] [i_3] [i_3]) - (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0]))))) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [(_Bool)1]))))) == (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_3] [i_0])) ? (7ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_4] [i_4] [i_4])))))) ? (((((/* implicit */_Bool) arr_8 [i_3])) ? (((/* implicit */int) arr_3 [i_0] [(signed char)14] [i_4])) : (((/* implicit */int) arr_6 [i_1])))) : (((/* implicit */int) arr_13 [i_0] [i_1] [i_0] [i_3] [i_4] [i_3] [i_2])))))));
                                var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (unsigned short)4254)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_2))), (((/* implicit */long long int) ((((/* implicit */int) var_11)) << (((((/* implicit */int) arr_4 [i_1])) - (30501))))))))) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-290))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_5 = 1; i_5 < 24; i_5 += 4) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 25; i_6 += 2) 
                        {
                            {
                                arr_19 [i_0] [10] [i_2] [i_5] [i_6] = ((/* implicit */unsigned long long int) (+(((((arr_7 [i_0] [i_1] [i_1]) & (arr_18 [i_2] [(short)19] [(unsigned short)1] [i_2] [i_2] [i_2] [(short)22]))) | (((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_6])) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (arr_18 [i_0] [i_0] [(short)6] [i_0] [i_0] [i_0] [i_0])))))));
                                arr_20 [i_0] [i_1] [i_2] [i_5 - 1] [i_6] = ((/* implicit */long long int) ((((((/* implicit */_Bool) (signed char)14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)2032))) : (((((/* implicit */_Bool) (short)29720)) ? (1ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))))) / (((/* implicit */unsigned long long int) var_8))));
                            }
                        } 
                    } 
                }
                for (unsigned int i_7 = 0; i_7 < 25; i_7 += 3) /* same iter space */
                {
                    var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) (~(((((/* implicit */int) (unsigned short)16383)) | (((/* implicit */int) arr_3 [i_0] [i_0] [i_0])))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_8 = 0; i_8 < 25; i_8 += 1) 
                    {
                        for (unsigned short i_9 = 0; i_9 < 25; i_9 += 2) 
                        {
                            {
                                arr_29 [i_0] [i_0] [(short)0] [i_7] [i_0] [i_8] [i_9] &= arr_18 [i_0] [i_0] [(short)12] [i_0] [(unsigned short)4] [i_0] [i_0];
                                var_19 = ((/* implicit */unsigned short) 16204856007799831509ULL);
                                arr_30 [i_8] [i_0] [i_1] [(_Bool)1] [(_Bool)1] [(unsigned short)24] [0] = ((/* implicit */short) ((((arr_17 [i_0] [i_1] [i_0] [i_1] [i_9]) ? (((((/* implicit */int) arr_24 [i_9] [i_8] [i_8] [i_0])) | (((/* implicit */int) var_4)))) : (((/* implicit */int) var_5)))) >> (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) & (arr_14 [i_0] [i_0] [i_0])))));
                                var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) arr_14 [i_1] [i_1] [i_7]))));
                                arr_31 [i_7] [i_8] [(signed char)20] [(signed char)20] [i_7] [i_8] [(signed char)20] = ((/* implicit */signed char) arr_11 [i_0] [i_1] [i_7] [i_9]);
                            }
                        } 
                    } 
                }
                var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */short) arr_6 [i_1])), (arr_8 [i_0])))) ? ((~(8167680285480128595LL))) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_16 [i_0] [i_0] [i_0] [i_1])), (var_4)))))))) + (((unsigned long long int) arr_8 [i_0])))))));
            }
        } 
    } 
    var_22 = ((/* implicit */short) ((((/* implicit */_Bool) var_5)) ? (((unsigned long long int) (~(3111190423U)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))));
}
