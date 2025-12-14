/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92099
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92099 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92099
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
    var_14 &= ((/* implicit */unsigned short) var_3);
    var_15 = ((/* implicit */long long int) var_3);
    var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) ? (((unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (-2595276834951010112LL) : (var_4)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned char i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        var_17 = ((/* implicit */int) (~(((long long int) 2814938325U))));
                        arr_10 [i_2] [(signed char)9] = ((/* implicit */unsigned int) (signed char)26);
                        arr_11 [i_0] [i_0] = ((/* implicit */short) ((unsigned char) arr_9 [i_0] [14ULL] [i_3]));
                        arr_12 [i_0] [11LL] [i_2] [i_0] [i_0] = ((/* implicit */unsigned char) ((signed char) ((signed char) 14228051433011546984ULL)));
                        var_18 *= ((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0]);
                    }
                    /* vectorizable */
                    for (short i_4 = 4; i_4 < 18; i_4 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (signed char i_5 = 4; i_5 < 17; i_5 += 2) 
                        {
                            arr_17 [i_0] [i_0] = ((/* implicit */unsigned char) ((long long int) arr_16 [i_4 - 2] [i_4 + 1] [i_4] [i_4 + 2] [i_4] [i_4 + 1]));
                            var_19 = ((/* implicit */signed char) ((int) (unsigned short)65511));
                            arr_18 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_0])) ? (arr_1 [i_0]) : (((((/* implicit */_Bool) arr_7 [i_5] [1ULL] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_0] [i_1] [i_2] [i_4] [i_5] [i_0]))) : (8310599326605655055LL)))));
                            arr_19 [i_0] [i_0] = ((/* implicit */unsigned short) (~(arr_4 [i_0] [i_1] [i_1])));
                        }
                        arr_20 [i_0] [i_0] [(_Bool)1] [i_0] [(_Bool)1] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_16 [14LL] [(unsigned short)10] [i_2] [i_1] [(unsigned short)7] [i_0])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)62)) ? (((/* implicit */int) (unsigned short)24)) : (((/* implicit */int) (unsigned short)32768))))) : (((((/* implicit */_Bool) arr_2 [3ULL])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)30))) : (arr_15 [i_0] [i_1] [i_2])))));
                        arr_21 [7LL] [i_1] [(signed char)18] [(unsigned char)14] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 4218692640698004631ULL)) ? (((/* implicit */int) (unsigned short)38)) : (((/* implicit */int) (unsigned char)210))));
                    }
                    /* LoopNest 2 */
                    for (short i_6 = 1; i_6 < 18; i_6 += 3) 
                    {
                        for (long long int i_7 = 0; i_7 < 20; i_7 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65511)) ? (((14228051433011546999ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [(unsigned short)2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_28 [i_0] [i_1] [i_6] [i_6] [i_7]))) : (arr_9 [i_0] [9LL] [i_7]))))))) ? (min((((/* implicit */unsigned long long int) arr_22 [i_0] [i_1] [i_0] [i_6] [i_7] [i_0])), (4218692640698004638ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((min((arr_28 [i_0] [i_1] [i_6] [i_6 + 1] [i_7]), (((/* implicit */short) (_Bool)1)))), (((/* implicit */short) (unsigned char)7))))))));
                                arr_30 [i_0] [i_0] [i_0] [i_0] [i_0] [i_6] = ((/* implicit */unsigned int) max(((short)-32739), (((/* implicit */short) (signed char)0))));
                                var_21 *= ((unsigned long long int) ((long long int) (~(((/* implicit */int) arr_3 [(_Bool)1] [i_1])))));
                            }
                        } 
                    } 
                    arr_31 [(short)12] [(signed char)15] [(short)12] [i_0] = ((/* implicit */int) ((signed char) (signed char)(-127 - 1)));
                    var_22 ^= ((/* implicit */_Bool) (+(max((((/* implicit */long long int) ((int) arr_25 [i_0] [i_0] [i_0] [i_0]))), ((+(arr_29 [i_2])))))));
                }
            } 
        } 
    } 
}
