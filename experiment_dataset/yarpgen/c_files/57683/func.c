/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57683
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57683 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57683
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
    var_12 = var_0;
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) 4294967289U);
        var_13 = ((/* implicit */unsigned char) ((int) (+(((arr_2 [i_0] [i_0]) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_1)))))));
    }
    for (unsigned char i_1 = 1; i_1 < 10; i_1 += 3) 
    {
        var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)23))))) || (((/* implicit */_Bool) arr_5 [i_1]))));
        arr_7 [i_1] = (-((+(((/* implicit */int) (short)-23)))));
        /* LoopSeq 1 */
        for (short i_2 = 3; i_2 < 11; i_2 += 4) 
        {
            var_15 = (+(((/* implicit */int) arr_9 [i_1] [i_1] [i_2 - 1])));
            var_16 = ((/* implicit */int) ((_Bool) (!(((/* implicit */_Bool) max((var_8), (((/* implicit */unsigned long long int) arr_5 [i_1]))))))));
            /* LoopNest 2 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (unsigned int i_4 = 1; i_4 < 12; i_4 += 4) 
                {
                    {
                        arr_18 [i_1] [i_2 - 2] [i_3] [i_1] = ((/* implicit */short) ((((/* implicit */int) (short)-18)) * (((/* implicit */int) ((((((/* implicit */_Bool) arr_12 [i_1] [i_4 + 1])) ? (1516531015U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)0))))) <= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)163)) <= (((/* implicit */int) (signed char)127)))))))))));
                        arr_19 [i_1] = var_5;
                        var_17 = ((/* implicit */short) ((((/* implicit */_Bool) max((((1516531015U) | (((/* implicit */unsigned int) ((/* implicit */int) (signed char)15))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)15)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (short)0)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max(((short)28427), (((/* implicit */short) arr_15 [i_1 + 2] [(signed char)9] [i_1] [i_1])))))) : (max((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_1] [i_2] [i_4]))) ^ (var_6))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)35756)) / (((/* implicit */int) (short)42)))))))));
                        arr_20 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)31)) ? (var_2) : (((/* implicit */int) arr_10 [i_1] [i_1]))))) - (max((((/* implicit */unsigned long long int) (unsigned char)56)), (var_8)))))) ? (((max((1216032300U), (((/* implicit */unsigned int) arr_8 [i_1] [i_2])))) >> (((/* implicit */int) ((((/* implicit */_Bool) 281457796841472ULL)) && (((/* implicit */_Bool) 3951981809U))))))) : (((/* implicit */unsigned int) max((((((/* implicit */int) (unsigned short)11269)) & (((/* implicit */int) var_11)))), (((/* implicit */int) ((((/* implicit */int) arr_9 [(short)1] [i_3] [i_3])) == (((/* implicit */int) arr_9 [i_4 + 1] [i_3] [i_1]))))))))));
                        var_18 = ((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */int) ((_Bool) (short)6))) == (((/* implicit */int) var_11)))))));
                    }
                } 
            } 
            var_19 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_9 [i_2] [i_2 + 1] [i_2 - 1])) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_1] [i_1] [i_1] [10ULL]))))), (((((/* implicit */_Bool) arr_12 [i_1] [i_2 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)61577))) : (0ULL)))));
            var_20 = ((/* implicit */unsigned short) max((1218481242160271413ULL), (((/* implicit */unsigned long long int) max((((((/* implicit */int) (unsigned char)224)) | (((/* implicit */int) var_0)))), (((((/* implicit */_Bool) arr_6 [i_1 + 3])) ? (((/* implicit */int) (unsigned char)126)) : (((/* implicit */int) arr_5 [i_1])))))))));
        }
        /* LoopSeq 1 */
        for (signed char i_5 = 0; i_5 < 13; i_5 += 2) 
        {
            var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)255))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_5] [i_5] [i_1]))) <= (var_3))))) : (((((/* implicit */long long int) ((/* implicit */int) ((var_5) <= (1622178537U))))) / (-2713823748373132842LL)))));
            /* LoopSeq 1 */
            for (unsigned long long int i_6 = 0; i_6 < 13; i_6 += 4) 
            {
                var_22 = ((/* implicit */_Bool) ((signed char) max((((/* implicit */unsigned long long int) arr_8 [i_1] [i_1])), (17515603608832664080ULL))));
                var_23 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)38241)) / ((+(((((/* implicit */_Bool) (unsigned char)126)) ? (((/* implicit */int) (unsigned short)65037)) : (((/* implicit */int) (unsigned char)27))))))));
                arr_26 [i_1] [i_1] [i_5] [i_1] = ((/* implicit */unsigned int) (signed char)99);
            }
        }
    }
}
