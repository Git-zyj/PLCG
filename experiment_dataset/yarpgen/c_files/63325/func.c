/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63325
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
    for (int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (long long int i_2 = 0; i_2 < 11; i_2 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 3) 
                        {
                            {
                                arr_13 [i_0] [i_0] [i_2] [i_0] [i_4] = ((/* implicit */unsigned short) 0);
                                var_20 = min((max((((((/* implicit */_Bool) -1)) ? (((/* implicit */int) var_2)) : (-1))), (1))), (((/* implicit */int) ((((/* implicit */int) ((short) arr_12 [i_0] [i_1] [i_2] [i_3] [i_4]))) >= (((((/* implicit */_Bool) arr_1 [i_0] [i_2])) ? (arr_9 [i_0] [i_1] [i_2] [i_3]) : (1)))))));
                                var_21 ^= ((/* implicit */short) ((129024U) << (((((/* implicit */int) (unsigned char)203)) - (201)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 0; i_5 < 11; i_5 += 4) 
                    {
                        for (int i_6 = 0; i_6 < 11; i_6 += 3) 
                        {
                            {
                                arr_19 [i_0] [4LL] [(signed char)5] [i_5] [i_6] = ((/* implicit */short) (unsigned short)35435);
                                arr_20 [(signed char)1] [i_1] [i_1] [i_5] [i_5] [i_5] [i_6] = ((/* implicit */signed char) ((unsigned short) ((((((/* implicit */_Bool) var_19)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)18))) : (arr_0 [i_1]))) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_0 [i_5]) < (((/* implicit */unsigned long long int) arr_8 [i_0] [i_0] [i_2] [i_6])))))))));
                                var_22 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_1] [i_5] [i_6])) ? (((/* implicit */int) (unsigned char)47)) : (arr_10 [i_0] [(short)1] [i_0] [i_5] [i_6])))) ? (max((((/* implicit */int) var_7)), (20))) : (((/* implicit */int) (unsigned char)47))))), (((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-41))))) ? (((arr_3 [i_6]) - (((/* implicit */unsigned long long int) 13)))) : (((/* implicit */unsigned long long int) ((783876013U) % (4294967295U))))))));
                            }
                        } 
                    } 
                    arr_21 [i_0] [i_1] [i_0] &= ((/* implicit */_Bool) -8);
                }
                arr_22 [i_0] = ((/* implicit */_Bool) (((((-(12876757988283719249ULL))) << (((((((/* implicit */_Bool) arr_12 [i_1] [i_1] [i_1] [i_0] [i_0])) ? (arr_2 [i_0]) : (arr_10 [(signed char)0] [i_0] [i_0] [i_0] [i_0]))) + (508066722))))) ^ (((((/* implicit */_Bool) (+(((/* implicit */int) var_18))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_1] [i_1] [10ULL] [i_0] [i_0])))))) : (((((/* implicit */_Bool) 1)) ? (arr_3 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)84)))))))));
                arr_23 [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((1), (((/* implicit */int) (unsigned short)37836))))) ? (((((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_16 [i_0] [i_1] [i_0] [i_1] [i_0])) : (arr_8 [i_0] [(_Bool)1] [i_1] [i_1]))) : ((~(((/* implicit */int) (signed char)62))))));
                /* LoopNest 2 */
                for (signed char i_7 = 1; i_7 < 10; i_7 += 4) 
                {
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        {
                            arr_29 [(unsigned short)7] [i_1] [i_1] [i_7] [i_1] [7] = ((/* implicit */int) arr_5 [i_7 + 1] [i_7 + 1] [i_7 + 1]);
                            var_23 = max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [9ULL] [i_0] [(short)7] [i_7] [i_8])) ? (-13) : (((/* implicit */int) arr_4 [i_8] [i_7] [i_1]))))) ? (arr_0 [i_7]) : (((/* implicit */unsigned long long int) (-(arr_2 [i_0])))))), (((/* implicit */unsigned long long int) arr_14 [i_0] [i_1] [i_7] [(unsigned short)9] [i_7] [(unsigned short)7])));
                            var_24 ^= ((/* implicit */_Bool) min(((-(max((((/* implicit */unsigned long long int) 4294967295U)), (arr_17 [i_7] [i_0] [i_7]))))), (((/* implicit */unsigned long long int) ((((((/* implicit */unsigned long long int) var_6)) ^ (0ULL))) >= (((((/* implicit */_Bool) 1)) ? (((/* implicit */unsigned long long int) -1)) : (10546096480509159081ULL))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 11; i_9 += 1) 
                {
                    for (signed char i_10 = 1; i_10 < 8; i_10 += 2) 
                    {
                        {
                            var_25 ^= (unsigned char)51;
                            arr_37 [9U] [i_10] [9U] [i_9] [i_1] [i_0] = ((/* implicit */int) ((((unsigned long long int) (+(arr_11 [i_0] [i_0] [i_0] [i_0] [i_0])))) < (((((/* implicit */_Bool) ((short) var_2))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_16 [i_0] [i_1] [i_0] [i_10] [i_1]), (((/* implicit */unsigned short) var_7)))))) : (arr_3 [i_9])))));
                            var_26 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) var_19)) ? (arr_11 [i_0] [i_1] [i_0] [i_10] [i_10]) : (arr_9 [7] [i_9] [i_0] [i_0]))))), (((unsigned int) ((unsigned long long int) var_4)))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_27 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_19))));
    var_28 -= ((/* implicit */long long int) min((7900647593200392534ULL), (((/* implicit */unsigned long long int) (signed char)-53))));
}
