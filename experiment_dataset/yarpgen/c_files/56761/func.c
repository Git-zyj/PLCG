/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56761
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56761 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56761
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (signed char i_1 = 1; i_1 < 9; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    var_14 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 14776207317730235671ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_8 [i_1 - 1] [i_1] [i_1]))) < (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((int) (_Bool)1)))))))));
                    var_15 &= ((/* implicit */signed char) (_Bool)0);
                    var_16 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 6793792547929924177ULL)) ? (((/* implicit */int) (short)-18148)) : (((/* implicit */int) (_Bool)1))))) ? (min((((/* implicit */unsigned long long int) arr_6 [i_1 - 1] [i_1 + 1])), (arr_9 [i_0]))) : (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1))))), (max((18446744073709551615ULL), (((/* implicit */unsigned long long int) var_3)))))));
                    var_17 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)3))))) ? ((~(((((/* implicit */_Bool) 1024U)) ? (((/* implicit */int) (_Bool)1)) : (arr_3 [i_2] [i_2] [i_0]))))) : (max((arr_3 [i_0] [i_2] [i_2]), (((/* implicit */int) min((((/* implicit */unsigned char) var_8)), (arr_2 [i_0] [i_2]))))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned int i_3 = 3; i_3 < 10; i_3 += 4) 
        {
            for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 4) 
            {
                {
                    var_18 *= ((/* implicit */int) (_Bool)1);
                    var_19 = ((/* implicit */_Bool) ((((var_3) != (((/* implicit */unsigned int) ((/* implicit */int) var_8))))) ? (((/* implicit */unsigned int) ((int) min((((/* implicit */unsigned int) arr_10 [i_0] [i_0] [i_0])), (arr_1 [i_4]))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1000U)) ? (var_7) : (arr_13 [i_0] [i_3 - 2] [i_4])))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (((unsigned int) arr_9 [i_0]))))));
                    var_20 = ((/* implicit */int) 3670536755979315936ULL);
                    var_21 = ((/* implicit */unsigned char) var_6);
                }
            } 
        } 
    }
    /* vectorizable */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
    {
        var_22 += ((/* implicit */signed char) ((((/* implicit */_Bool) -1642190709)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */unsigned long long int) var_3)) / (arr_15 [i_5] [i_5])))));
        var_23 += ((/* implicit */unsigned char) var_10);
    }
    var_24 |= ((/* implicit */short) (-(((/* implicit */int) var_8))));
    var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) min((((/* implicit */short) (unsigned char)120)), (var_1))))));
    var_26 -= ((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((((/* implicit */int) ((var_4) > (((/* implicit */long long int) ((/* implicit */int) (unsigned short)20431)))))) ^ (((/* implicit */int) var_1))))), (var_3)));
    var_27 = ((((/* implicit */_Bool) (unsigned short)9432)) || (((/* implicit */_Bool) var_11)));
}
