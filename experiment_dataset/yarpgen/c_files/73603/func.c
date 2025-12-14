/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73603
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73603 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73603
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
    var_10 = ((/* implicit */_Bool) max((var_10), (((/* implicit */_Bool) min((((((/* implicit */_Bool) ((unsigned short) 5439676933806030206ULL))) ? (((/* implicit */int) var_5)) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned char)76)) : (var_2))))), (var_0))))));
    /* LoopSeq 2 */
    for (short i_0 = 3; i_0 < 13; i_0 += 3) 
    {
        var_11 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_0 [i_0 + 2])) ? (((arr_1 [i_0]) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (short)25102)))) : (((/* implicit */int) arr_1 [i_0]))))));
        arr_2 [i_0] = ((/* implicit */signed char) (~((-((+(((/* implicit */int) arr_1 [i_0]))))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 3) 
    {
        var_12 *= ((((/* implicit */int) (_Bool)0)) << (((((/* implicit */int) (unsigned short)448)) - (444))));
        /* LoopSeq 2 */
        for (unsigned char i_2 = 0; i_2 < 20; i_2 += 3) /* same iter space */
        {
            var_13 = ((/* implicit */signed char) min((arr_5 [i_2]), (arr_5 [i_1])));
            arr_7 [i_1] [i_1] [i_2] = (i_1 % 2 == zero) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (short)26137)), (((arr_3 [i_1] [i_1]) << (((arr_3 [i_2] [i_1]) - (4038639785443904319LL)))))))) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (short)26137)), (((arr_3 [i_1] [i_1]) << (((((arr_3 [i_2] [i_1]) - (4038639785443904319LL))) - (1375557379800319585LL))))))));
            var_14 = ((/* implicit */short) min((((/* implicit */long long int) (+((-(arr_4 [i_1])))))), (arr_3 [i_1] [i_1])));
            var_15 = max((arr_3 [i_2] [i_1]), (((/* implicit */long long int) ((((/* implicit */int) arr_6 [i_1] [i_1])) | (((/* implicit */int) arr_6 [i_1] [i_1]))))));
            var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)26137)) ? (((/* implicit */int) ((unsigned char) arr_6 [i_1] [i_1]))) : (((/* implicit */int) (unsigned char)126))));
        }
        /* vectorizable */
        for (unsigned char i_3 = 0; i_3 < 20; i_3 += 3) /* same iter space */
        {
            arr_11 [i_1] [i_3] [i_1] = ((/* implicit */_Bool) var_8);
            /* LoopSeq 3 */
            for (long long int i_4 = 0; i_4 < 20; i_4 += 3) 
            {
                var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) (unsigned char)252))));
                var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(var_8)))) ? (((/* implicit */int) arr_12 [i_1] [i_3] [i_4])) : (var_8)));
                var_19 &= ((/* implicit */unsigned char) ((((((/* implicit */int) arr_8 [i_4] [i_3] [i_1])) + (2147483647))) >> (((var_6) - (1409079429U)))));
            }
            for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
            {
                arr_17 [i_1] [i_3] [15U] = ((/* implicit */long long int) var_6);
                var_20 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_9 [i_5 + 1] [16U] [i_5 + 1]))));
                var_21 |= ((/* implicit */int) arr_6 [i_1] [(unsigned short)0]);
                var_22 = ((/* implicit */long long int) ((unsigned char) var_9));
                var_23 = ((/* implicit */long long int) ((((/* implicit */int) var_3)) < (((/* implicit */int) arr_10 [i_1] [i_1] [13U]))));
            }
            for (signed char i_6 = 0; i_6 < 20; i_6 += 3) 
            {
                var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) ? (arr_3 [(unsigned char)7] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) var_9)))));
                arr_22 [(unsigned char)6] [i_1] [i_6] = ((((/* implicit */_Bool) (+(((/* implicit */int) arr_15 [i_1] [i_3] [i_1]))))) || (((/* implicit */_Bool) var_8)));
                var_25 = arr_3 [i_1] [i_1];
            }
        }
        var_26 = ((/* implicit */long long int) (short)-30297);
    }
    var_27 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)193)) ? (((/* implicit */int) var_3)) : (var_8)))) ? (var_7) : (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) ^ (var_0))))))) ? (((((/* implicit */long long int) var_6)) + (((((/* implicit */_Bool) var_9)) ? (4025976698491552375LL) : (((/* implicit */long long int) var_0)))))) : (5946317283364459342LL)));
    var_28 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)26112)) ? (min((var_7), (((/* implicit */unsigned int) (_Bool)1)))) : (((/* implicit */unsigned int) var_8))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) max(((unsigned char)252), (var_4)))))) : (((long long int) var_4))));
}
