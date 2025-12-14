/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94953
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94953 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94953
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
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_1] [i_1] = ((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))))), (((9223372036854775792LL) / (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0])))))));
                /* LoopSeq 1 */
                for (unsigned int i_2 = 2; i_2 < 10; i_2 += 2) 
                {
                    var_16 = ((/* implicit */unsigned int) max((max((max((((/* implicit */long long int) arr_3 [i_1])), (arr_4 [i_0]))), (((/* implicit */long long int) ((((/* implicit */int) arr_6 [i_1] [i_0] [(signed char)3])) << (((((/* implicit */int) var_11)) + (25800)))))))), (((/* implicit */long long int) max((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)3))) > (var_8)))), (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (_Bool)1)) : (arr_2 [i_2]))))))));
                    var_17 = var_7;
                }
                /* LoopNest 3 */
                for (int i_3 = 4; i_3 < 7; i_3 += 3) 
                {
                    for (int i_4 = 1; i_4 < 9; i_4 += 2) 
                    {
                        for (unsigned short i_5 = 0; i_5 < 11; i_5 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */short) (!((_Bool)0)));
                                arr_18 [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */int) (short)-5768)) * (((/* implicit */int) (unsigned char)0))));
                                arr_19 [i_1] [i_4] = ((/* implicit */short) arr_15 [i_0] [i_1] [i_3] [i_4] [i_1] [i_1]);
                                var_19 = ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_14 [i_0] [i_3] [(_Bool)1] [i_4]) > (((int) arr_4 [i_0])))))) : (((long long int) arr_9 [i_1]))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (short i_6 = 1; i_6 < 10; i_6 += 1) 
                {
                    for (unsigned short i_7 = 1; i_7 < 10; i_7 += 1) 
                    {
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            {
                                var_20 = (((_Bool)1) && ((!(((/* implicit */_Bool) 9223372036854775792LL)))));
                                var_21 = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) >> (((-11LL) + (11LL)))));
                                arr_28 [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-122)) ? (((/* implicit */int) (unsigned short)25390)) : (((/* implicit */int) (_Bool)1))));
                            }
                        } 
                    } 
                } 
                var_22 = ((/* implicit */signed char) (((+(((/* implicit */int) (!(((/* implicit */_Bool) 7932838109613654135ULL))))))) & (((/* implicit */int) (_Bool)1))));
            }
        } 
    } 
    var_23 = ((/* implicit */int) (short)-17959);
}
