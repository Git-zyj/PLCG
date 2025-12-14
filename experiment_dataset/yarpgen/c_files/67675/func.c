/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67675
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67675 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67675
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
    var_16 = ((/* implicit */_Bool) (~(min((((/* implicit */unsigned long long int) (_Bool)1)), (var_6)))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) arr_0 [8ULL])), (min((236716412U), (((/* implicit */unsigned int) ((_Bool) 0LL)))))));
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            var_17 &= ((/* implicit */unsigned short) (-((~(((int) arr_1 [i_0] [i_0]))))));
            var_18 = ((/* implicit */_Bool) -231197949);
            var_19 = ((/* implicit */unsigned int) ((((/* implicit */long long int) min((((int) arr_3 [6ULL] [i_1])), (((/* implicit */int) arr_1 [i_0] [i_0]))))) ^ (arr_3 [i_0] [i_0])));
            var_20 = ((/* implicit */unsigned char) min((((/* implicit */long long int) min((((/* implicit */int) arr_0 [i_0])), (((int) 22U))))), (min((((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (arr_3 [i_0] [(unsigned short)9]) : (-7372427709262964151LL))), (((/* implicit */long long int) ((int) arr_0 [i_0])))))));
            arr_5 [i_1] [i_0] = ((/* implicit */unsigned long long int) arr_4 [i_1] [i_1] [i_1]);
        }
        for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
        {
            var_21 = ((/* implicit */unsigned long long int) var_5);
            /* LoopSeq 1 */
            for (int i_3 = 0; i_3 < 10; i_3 += 1) 
            {
                var_22 = ((/* implicit */_Bool) arr_4 [i_0] [(short)5] [(_Bool)1]);
                var_23 = ((unsigned short) 14207297732823282851ULL);
                var_24 = ((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) (signed char)-25)) ? (((/* implicit */int) arr_1 [i_2 + 1] [i_2 + 1])) : (((/* implicit */int) arr_1 [i_2 + 1] [i_2 + 1])))));
            }
            var_25 ^= ((/* implicit */unsigned short) (((!((!((_Bool)1))))) ? ((-((-(((/* implicit */int) arr_4 [i_2] [5LL] [(short)3])))))) : (((/* implicit */int) min(((_Bool)1), ((!(((/* implicit */_Bool) arr_9 [i_2] [2LL] [i_2])))))))));
            var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) min((((/* implicit */signed char) (_Bool)0)), (arr_0 [2])))) * (((/* implicit */int) (signed char)-40))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((arr_3 [i_2] [i_0]) < (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)48371))))))))));
        }
    }
    /* LoopSeq 1 */
    for (short i_4 = 0; i_4 < 11; i_4 += 2) 
    {
        var_27 = ((/* implicit */int) min((min((((((/* implicit */_Bool) var_10)) ? (arr_13 [i_4] [i_4]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)17136))))), (((/* implicit */long long int) arr_14 [i_4] [i_4])))), (min((((/* implicit */long long int) (!(((/* implicit */_Bool) 8841546987165016387ULL))))), ((((_Bool)1) ? (arr_13 [i_4] [(_Bool)1]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-107)))))))));
        /* LoopSeq 1 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            var_28 &= ((/* implicit */unsigned int) (_Bool)1);
            var_29 = ((/* implicit */int) min((((unsigned short) (_Bool)1)), ((unsigned short)48367)));
            var_30 -= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (((~(((/* implicit */int) (_Bool)1)))) & (((/* implicit */int) min((arr_15 [i_5] [i_4]), (((/* implicit */unsigned short) var_11)))))))), (var_6)));
            var_31 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) -25)) + (((((/* implicit */_Bool) ((signed char) var_13))) ? (((unsigned int) (unsigned short)758)) : (((/* implicit */unsigned int) ((/* implicit */int) min((arr_17 [0ULL]), (((/* implicit */signed char) arr_16 [i_4] [i_5]))))))))));
        }
        var_32 = ((/* implicit */unsigned char) (~(((unsigned int) arr_15 [i_4] [i_4]))));
        arr_18 [i_4] [i_4] = ((/* implicit */_Bool) ((1259832869) ^ (((/* implicit */int) (signed char)40))));
    }
    var_33 = ((/* implicit */unsigned long long int) min((var_33), (8841546987165016384ULL)));
    var_34 = ((/* implicit */unsigned long long int) ((min((var_0), (((/* implicit */unsigned long long int) var_5)))) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_13))))));
}
