/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96164
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96164 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96164
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
    var_20 -= ((/* implicit */signed char) (+(((/* implicit */int) min((max((var_2), (((/* implicit */unsigned short) (_Bool)1)))), (var_4))))));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        for (signed char i_1 = 4; i_1 < 9; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 11; i_2 += 4) 
                {
                    for (int i_3 = 1; i_3 < 10; i_3 += 1) 
                    {
                        {
                            arr_12 [i_0] [i_2] [2] [i_0] [i_3] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) > (13627924331625172782ULL)));
                            var_21 = ((/* implicit */short) max(((~(((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_1] [i_2])) ? (arr_2 [i_3] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_1 - 4] [i_1])) ? (arr_10 [i_1 + 1] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1 - 2] [i_3]))))))));
                            var_22 = ((/* implicit */long long int) (-(((int) arr_11 [i_0]))));
                            /* LoopSeq 3 */
                            /* vectorizable */
                            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                            {
                                var_23 = ((/* implicit */unsigned char) ((arr_3 [i_0]) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_3 [i_0]))));
                                var_24 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_4]))) : (var_5))))));
                                arr_16 [i_0] [i_0] [i_1] [i_2] [i_3] [i_3] [i_4] = ((/* implicit */long long int) (!(arr_3 [i_0])));
                            }
                            for (unsigned long long int i_5 = 4; i_5 < 9; i_5 += 2) 
                            {
                                var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) (((!(((/* implicit */_Bool) arr_5 [i_2] [i_5 + 2])))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) arr_5 [i_5] [i_5]))))) : (((((/* implicit */_Bool) (unsigned char)19)) ? (((/* implicit */int) arr_5 [i_2] [i_1 - 4])) : (((/* implicit */int) arr_5 [i_5] [i_3 - 1])))))))));
                                var_26 -= ((/* implicit */unsigned short) min(((-(var_18))), (((/* implicit */unsigned long long int) min((arr_14 [i_1 - 4] [i_3 + 1] [i_5 - 3]), (arr_14 [i_1 - 4] [i_3 + 1] [i_5 - 3]))))));
                            }
                            for (unsigned char i_6 = 1; i_6 < 10; i_6 += 1) 
                            {
                                var_27 = ((/* implicit */int) (((!(((/* implicit */_Bool) max((((/* implicit */long long int) arr_18 [i_0] [i_1] [i_1] [i_3 + 1] [i_6] [i_0] [i_3])), (arr_0 [3ULL] [i_0])))))) && (((/* implicit */_Bool) min((arr_7 [i_6] [i_3] [i_2]), (arr_0 [i_1 - 1] [i_0]))))));
                                var_28 = ((/* implicit */long long int) min((var_28), (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) arr_6 [i_0] [i_3 - 1] [i_2] [i_1 + 2])) < (var_14)))) >> ((((((_Bool)1) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (_Bool)1)))) & (((/* implicit */int) arr_4 [i_3] [i_3])))))))));
                            }
                        }
                    } 
                } 
                var_29 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_0])) << (((var_17) - (14327508419452400779ULL)))))) ? (((((/* implicit */unsigned long long int) var_1)) - (arr_2 [i_0] [i_1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!((_Bool)1))))))))));
                var_30 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((min((((/* implicit */unsigned long long int) (unsigned char)237)), (arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [i_1] [i_1]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_5 [(signed char)4] [i_1])) : (((/* implicit */int) var_3)))))))) ? (((/* implicit */long long int) ((/* implicit */int) max((var_10), (((/* implicit */short) ((((/* implicit */int) (unsigned char)19)) > (((/* implicit */int) (_Bool)1))))))))) : (((long long int) ((var_7) != (arr_20 [(_Bool)0] [i_1] [i_1] [i_1] [i_1 - 2]))))));
                /* LoopNest 2 */
                for (long long int i_7 = 0; i_7 < 11; i_7 += 1) 
                {
                    for (unsigned long long int i_8 = 0; i_8 < 11; i_8 += 1) 
                    {
                        {
                            var_31 = ((/* implicit */signed char) arr_19 [i_0 - 1] [i_1] [(signed char)10] [i_8]);
                            var_32 = ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_28 [i_0] [i_7] [i_0])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_14 [i_0 - 1] [i_0 + 2] [i_0 + 2]))))) - ((-(arr_28 [i_0] [i_7] [i_8]))));
                            var_33 = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) max((arr_20 [i_0] [i_1] [i_7] [2LL] [i_8]), (((/* implicit */unsigned long long int) arr_4 [i_1] [i_7])))))))) >> (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0 + 2] [i_0])))))));
                            var_34 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_15 [i_0 - 1] [i_1] [i_1] [i_0 - 1] [i_1])) ? (arr_10 [i_0] [i_7]) : (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_8] [i_7] [i_1] [i_0]))))), (((/* implicit */long long int) arr_27 [i_8] [i_7]))))), (arr_19 [i_0] [i_0] [8LL] [8LL])));
                        }
                    } 
                } 
            }
        } 
    } 
}
