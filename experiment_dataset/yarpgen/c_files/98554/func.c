/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98554
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98554 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98554
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
    /* LoopSeq 3 */
    for (short i_0 = 2; i_0 < 12; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_1 [3ULL])))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)20))) : (-1LL)))) ? ((((~(((/* implicit */int) arr_1 [i_0])))) - (((/* implicit */int) ((((/* implicit */int) arr_0 [8U] [i_0 + 2])) <= (((/* implicit */int) (signed char)-114))))))) : (((/* implicit */int) ((((/* implicit */int) arr_0 [i_0] [6ULL])) >= (((/* implicit */int) (short)-13611)))))));
        arr_4 [i_0] = ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */int) arr_0 [i_0 - 1] [i_0 + 1])) >= (((/* implicit */int) arr_0 [i_0 + 1] [i_0 + 1])))))));
        var_16 = ((/* implicit */unsigned long long int) min((var_16), (arr_2 [i_0] [i_0 - 2])));
    }
    for (short i_1 = 0; i_1 < 12; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_2 = 0; i_2 < 12; i_2 += 3) 
        {
            for (unsigned int i_3 = 3; i_3 < 11; i_3 += 4) 
            {
                {
                    var_17 = arr_7 [i_1];
                    arr_12 [7LL] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_11 [i_1] [i_1] [i_3 - 2])) / (((/* implicit */int) (short)13611)))))));
                    var_18 += ((/* implicit */signed char) ((unsigned int) 4609434218613702656ULL));
                }
            } 
        } 
        /* LoopSeq 4 */
        for (unsigned short i_4 = 0; i_4 < 12; i_4 += 3) 
        {
            var_19 = ((/* implicit */unsigned int) ((unsigned long long int) min((((((/* implicit */_Bool) arr_13 [i_4] [i_1] [i_1])) ? (((/* implicit */int) arr_5 [i_1] [i_4])) : (((/* implicit */int) arr_11 [i_4] [9LL] [i_1])))), (((/* implicit */int) arr_1 [i_4])))));
            arr_16 [i_1] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_9 [i_1] [i_4]) << ((((+(((/* implicit */int) arr_5 [i_1] [i_1])))) - (87)))))) ? ((+((+(((/* implicit */int) arr_15 [i_4])))))) : ((+(((/* implicit */int) ((13837309855095848960ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1] [i_4]))))))))));
            var_20 = ((/* implicit */unsigned long long int) max((830667213U), (((/* implicit */unsigned int) (unsigned char)99))));
            arr_17 [i_4] [i_4] = ((max((((/* implicit */unsigned long long int) arr_1 [i_1])), (min((arr_9 [i_1] [(unsigned short)9]), (arr_14 [i_1] [i_4]))))) - (((((/* implicit */unsigned long long int) ((arr_7 [i_1]) - (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_4])))))) - (max((((/* implicit */unsigned long long int) (short)13611)), (arr_14 [i_4] [i_4]))))));
            arr_18 [i_1] [i_4] [i_4] = ((/* implicit */unsigned int) ((((arr_2 [i_1] [i_1]) ^ (((/* implicit */unsigned long long int) -7LL)))) >> (((/* implicit */int) ((max((13837309855095848960ULL), (((/* implicit */unsigned long long int) arr_10 [i_4] [i_1] [i_1] [i_1])))) <= (((arr_14 [i_1] [i_1]) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_4]))))))))));
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 12; i_5 += 4) /* same iter space */
        {
            /* LoopSeq 1 */
            for (short i_6 = 0; i_6 < 12; i_6 += 2) 
            {
                var_21 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_11 [i_1] [i_5] [i_6]))));
                arr_25 [i_5] = ((/* implicit */long long int) ((unsigned short) 11428889445987681911ULL));
            }
            var_22 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((9934921997970106541ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)5))))))));
            arr_26 [i_1] [i_1] [i_5] = ((/* implicit */unsigned long long int) ((arr_8 [i_1] [i_5] [i_5]) <= (((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_5] [i_5] [i_5] [i_1])) ? (((/* implicit */int) arr_24 [i_1] [i_1] [i_1])) : (((/* implicit */int) arr_1 [i_1])))))));
        }
        for (int i_7 = 0; i_7 < 12; i_7 += 4) /* same iter space */
        {
            var_23 = ((/* implicit */unsigned long long int) arr_15 [i_1]);
            var_24 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((long long int) arr_2 [i_1] [i_7])))));
            var_25 = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_22 [i_1] [i_7] [i_1])) ? (((/* implicit */int) arr_0 [i_1] [i_1])) : (arr_22 [i_1] [i_1] [i_1])))) + (((((((/* implicit */unsigned long long int) arr_22 [(unsigned char)2] [i_7] [i_1])) ^ (8511822075739445065ULL))) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_27 [10LL] [i_7] [10LL])) ? (((/* implicit */int) arr_24 [i_1] [i_1] [i_7])) : (((/* implicit */int) arr_11 [i_1] [i_7] [(unsigned short)10]))))))));
        }
        for (int i_8 = 0; i_8 < 12; i_8 += 4) /* same iter space */
        {
            arr_33 [i_8] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_28 [i_1] [i_1])) + (((/* implicit */int) arr_28 [i_1] [i_8])))))));
            /* LoopSeq 1 */
            for (unsigned long long int i_9 = 0; i_9 < 12; i_9 += 2) 
            {
                var_26 = ((/* implicit */unsigned long long int) ((unsigned int) ((long long int) (~(((/* implicit */int) arr_23 [i_1] [i_1] [i_1]))))));
                var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((-1LL) + (((/* implicit */long long int) ((/* implicit */int) (short)13614)))))) && (((((/* implicit */_Bool) (~(((/* implicit */int) (short)-13599))))) && (((/* implicit */_Bool) ((((/* implicit */int) (short)13622)) >> (((1577119877) - (1577119859))))))))));
            }
        }
        arr_36 [i_1] = ((/* implicit */short) ((((((/* implicit */int) arr_5 [i_1] [i_1])) + ((-(((/* implicit */int) arr_1 [i_1])))))) != (((((/* implicit */_Bool) ((21) ^ (((/* implicit */int) arr_6 [(short)7]))))) ? (((/* implicit */int) max(((short)13612), ((short)-1)))) : (((/* implicit */int) arr_28 [i_1] [i_1]))))));
        arr_37 [i_1] = ((/* implicit */unsigned int) max((((((13837309855095848946ULL) & (((/* implicit */unsigned long long int) 1433097526)))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (short)13614))))), (((/* implicit */unsigned long long int) arr_29 [i_1] [5ULL] [i_1]))));
    }
    /* vectorizable */
    for (int i_10 = 0; i_10 < 15; i_10 += 2) 
    {
        var_28 = ((/* implicit */unsigned short) arr_38 [i_10]);
        arr_40 [i_10] = ((/* implicit */unsigned long long int) ((unsigned short) 13837309855095848969ULL));
    }
    var_29 *= ((/* implicit */unsigned int) (+(288229276640083968ULL)));
}
