/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98517
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98517 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98517
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
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_1 = 2; i_1 < 9; i_1 += 1) 
        {
            var_14 = ((/* implicit */unsigned char) min((((long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)442))) == (arr_0 [i_0] [i_1])))), (((/* implicit */long long int) min((((/* implicit */unsigned int) max(((unsigned char)26), ((unsigned char)159)))), (arr_0 [i_1 - 1] [i_1 + 1]))))));
            /* LoopNest 3 */
            for (unsigned short i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                for (unsigned char i_3 = 0; i_3 < 11; i_3 += 1) 
                {
                    for (short i_4 = 0; i_4 < 11; i_4 += 4) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned long long int) (unsigned short)35102);
                            var_16 -= ((/* implicit */unsigned short) (~(max((((/* implicit */unsigned long long int) var_9)), ((-(var_8)))))));
                        }
                    } 
                } 
            } 
            var_17 = ((/* implicit */signed char) (+(((/* implicit */int) ((short) (unsigned short)17172)))));
        }
        for (short i_5 = 4; i_5 < 7; i_5 += 4) 
        {
            /* LoopSeq 2 */
            for (signed char i_6 = 1; i_6 < 10; i_6 += 1) 
            {
                var_18 = ((/* implicit */unsigned short) ((unsigned long long int) (unsigned short)30433));
                var_19 = ((((/* implicit */_Bool) max((((1337234261795642514ULL) >> (((/* implicit */int) (short)14)))), (((/* implicit */unsigned long long int) (signed char)79))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) arr_0 [i_5 - 3] [i_6 - 1]))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_0 [(signed char)6] [i_6])) == (((((/* implicit */_Bool) 1879048192)) ? (arr_10 [i_5] [i_5]) : (((/* implicit */unsigned long long int) arr_1 [i_0] [0U]))))))));
                var_20 = ((/* implicit */short) max((((/* implicit */unsigned int) ((12459784607024049624ULL) != (16212998614118126896ULL)))), (min((arr_0 [i_5 - 4] [i_5 - 4]), (arr_0 [i_5 + 2] [i_5 + 1])))));
            }
            /* vectorizable */
            for (short i_7 = 3; i_7 < 10; i_7 += 1) 
            {
                var_21 = ((/* implicit */signed char) (~(16212998614118126894ULL)));
                var_22 = ((/* implicit */short) (+(((/* implicit */int) (_Bool)1))));
                var_23 += ((/* implicit */unsigned short) (+(arr_7 [i_5 + 2] [i_5] [i_5 + 1] [i_5])));
                var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)17168)) ? (((/* implicit */unsigned long long int) 262016)) : (arr_11 [i_5 - 1] [i_7 - 2])));
                var_25 = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) var_5)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)48345))))));
            }
            var_26 = ((/* implicit */short) min(((-(arr_1 [i_5 + 3] [i_5 - 2]))), (((/* implicit */unsigned int) min((arr_3 [i_5 - 4] [i_5 + 3] [i_5 - 3]), (((/* implicit */short) arr_15 [i_5 + 1] [i_5 + 4] [i_5 - 4] [i_5 - 4])))))));
            var_27 &= ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_18 [i_5 + 3] [i_5 - 4] [i_5] [i_5]))));
        }
        var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)79)) ? (16212998614118126894ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-16824)))));
    }
    var_29 = ((/* implicit */signed char) max((var_29), (((/* implicit */signed char) var_10))));
}
