/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86407
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86407 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86407
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
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 16; i_1 += 2) 
        {
            {
                arr_5 [(short)14] [3U] = ((/* implicit */unsigned short) var_3);
                var_12 = ((/* implicit */_Bool) max((((/* implicit */long long int) var_9)), (((((/* implicit */_Bool) min((((/* implicit */signed char) (_Bool)0)), (arr_4 [i_1] [i_1] [i_0])))) ? (((/* implicit */long long int) (+(((/* implicit */int) (signed char)(-127 - 1)))))) : (9223372036854775807LL)))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (int i_3 = 3; i_3 < 19; i_3 += 4) 
        {
            {
                var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) arr_6 [12] [i_3]))));
                /* LoopSeq 3 */
                for (unsigned char i_4 = 0; i_4 < 22; i_4 += 4) /* same iter space */
                {
                    var_14 = ((/* implicit */signed char) (!(((/* implicit */_Bool) 5785667564456541164ULL))));
                    var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) ((max(((+(721084554U))), (((/* implicit */unsigned int) (unsigned char)255)))) & (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)50389))))) ? (((/* implicit */int) (unsigned short)59924)) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_12 [i_3]))))))))))));
                }
                for (unsigned char i_5 = 0; i_5 < 22; i_5 += 4) /* same iter space */
                {
                    arr_18 [9ULL] [1ULL] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_2])) ^ (((/* implicit */int) var_0))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_16 [i_3] [(unsigned char)9] [1ULL] [i_3])))) : (8507390886286024256ULL))) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))));
                    var_16 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_9 [18U])), (min((((/* implicit */long long int) max((var_11), (var_11)))), (min((-6546145612440496262LL), (((/* implicit */long long int) arr_16 [(unsigned char)2] [(_Bool)1] [i_3] [i_3]))))))));
                }
                for (unsigned char i_6 = 0; i_6 < 22; i_6 += 4) 
                {
                    arr_21 [i_2] [i_3] [i_6] [14] = ((/* implicit */short) var_11);
                    arr_22 [4U] [i_3] [(unsigned char)21] [1U] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_8 [5]))));
                    var_17 = ((/* implicit */short) max(((-(((((/* implicit */_Bool) (unsigned char)170)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))))), (max((((((/* implicit */_Bool) arr_8 [i_6])) ? (17301295723724258218ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_6]))))), (((/* implicit */unsigned long long int) arr_12 [i_3 - 1]))))));
                    /* LoopSeq 1 */
                    for (int i_7 = 2; i_7 < 18; i_7 += 3) 
                    {
                        arr_26 [i_7] [i_7] [(_Bool)1] [11] [11] = ((/* implicit */unsigned short) (-(((int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) / (var_4))))));
                        var_18 = (+(((((/* implicit */_Bool) ((arr_25 [16LL] [i_3] [i_6] [(unsigned char)13]) ? (((/* implicit */int) arr_25 [16] [8ULL] [8ULL] [8ULL])) : (((/* implicit */int) var_3))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (unsigned short)64)), (var_7)))) : (min((((/* implicit */unsigned long long int) arr_17 [i_2] [i_2] [i_2])), (var_10))))));
                        arr_27 [i_7] = ((/* implicit */short) (_Bool)1);
                    }
                    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((arr_16 [i_3] [i_3 - 2] [i_6] [i_3 + 1]) + (2147483647))) << (((/* implicit */int) var_6))))) ? (((((/* implicit */_Bool) var_11)) ? (var_4) : (((/* implicit */unsigned long long int) arr_16 [i_6] [i_6] [8] [i_3 + 1])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_20 [i_2] [(unsigned char)2] [i_6])) ? (((/* implicit */int) arr_20 [i_3] [1U] [i_6])) : (((/* implicit */int) arr_23 [i_3] [i_3] [i_2] [i_3 + 1] [i_3])))))));
                }
                var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_11))) ^ (((((/* implicit */_Bool) (unsigned short)51971)) ? (((/* implicit */long long int) ((/* implicit */int) arr_24 [(short)14]))) : ((-9223372036854775807LL - 1LL))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)251))) : (var_8)));
            }
        } 
    } 
}
