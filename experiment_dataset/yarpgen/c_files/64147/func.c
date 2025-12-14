/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64147
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64147 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64147
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
    var_11 ^= ((/* implicit */short) 18446744073709551615ULL);
    /* LoopSeq 3 */
    for (unsigned char i_0 = 2; i_0 < 9; i_0 += 4) 
    {
        arr_2 [i_0 - 2] = ((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_1 [i_0 + 2]))))) + (((unsigned long long int) arr_1 [i_0 + 2])));
        var_12 = ((/* implicit */short) (((+(var_10))) & (max((arr_0 [i_0 + 3]), ((~(((/* implicit */int) (_Bool)0))))))));
    }
    for (int i_1 = 0; i_1 < 16; i_1 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned int i_2 = 2; i_2 < 15; i_2 += 1) 
        {
            for (unsigned long long int i_3 = 2; i_3 < 13; i_3 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 0; i_4 < 16; i_4 += 4) 
                    {
                        for (int i_5 = 3; i_5 < 14; i_5 += 3) 
                        {
                            {
                                var_13 += ((/* implicit */short) ((((/* implicit */int) arr_3 [i_1] [i_1])) & (((/* implicit */int) arr_7 [15] [i_1] [i_3]))));
                                var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) ((((/* implicit */_Bool) 2044882296170870257LL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-32275))) : (min(((~(2044882296170870252LL))), (((/* implicit */long long int) (unsigned char)1)))))))));
                                var_15 *= ((/* implicit */short) (((+(arr_10 [i_1] [i_3 + 3] [i_3] [i_3 - 2]))) <= (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -2044882296170870263LL))))))));
                                var_16 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) max((arr_9 [i_1] [i_2 - 2] [i_3 - 2]), (((/* implicit */unsigned long long int) ((arr_10 [i_1] [i_2 - 1] [i_1] [i_5]) % (((/* implicit */long long int) ((/* implicit */int) (unsigned char)49)))))))))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */int) ((17524325259220829807ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))));
                    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_3 - 2] [i_2 + 1] [i_3 - 1] [i_3 + 2] [i_2 + 1] [i_3 + 3] [i_2])) ? (((/* implicit */unsigned long long int) (~(11)))) : (min((arr_13 [i_1] [i_1] [i_3]), (arr_12 [i_1] [(signed char)12] [i_2] [i_3])))))) || (((/* implicit */_Bool) (-(((((/* implicit */int) var_2)) << (((9223372036854775807LL) - (9223372036854775806LL))))))))));
                    var_19 = ((/* implicit */unsigned char) (+(((/* implicit */int) (short)18163))));
                    var_20 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)188)) | (((((/* implicit */int) (short)-18123)) + (((/* implicit */int) (unsigned char)192))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_8 [i_2 - 1])))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_4 [i_3 - 2])) == (((/* implicit */int) arr_11 [i_3] [i_3] [i_2] [i_1] [i_1])))))) | (arr_9 [i_2 - 1] [i_2] [i_3 + 2])))));
                }
            } 
        } 
        var_21 = ((/* implicit */unsigned long long int) ((arr_10 [i_1] [i_1] [i_1] [i_1]) < (((/* implicit */long long int) ((((/* implicit */_Bool) (+(var_8)))) ? (((/* implicit */int) arr_11 [i_1] [i_1] [i_1] [i_1] [i_1])) : (((/* implicit */int) arr_14 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])))))));
    }
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        var_22 = ((/* implicit */unsigned short) arr_15 [i_6] [i_6]);
        var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? ((~(((/* implicit */int) (!(var_5)))))) : (((/* implicit */int) var_5))));
        var_24 += ((/* implicit */int) var_5);
    }
    var_25 ^= ((/* implicit */unsigned long long int) var_6);
}
