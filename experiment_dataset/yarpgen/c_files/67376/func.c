/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67376
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67376 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67376
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
    for (long long int i_0 = 4; i_0 < 10; i_0 += 4) 
    {
        for (unsigned int i_1 = 2; i_1 < 10; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        for (int i_4 = 0; i_4 < 12; i_4 += 4) 
                        {
                            {
                                var_18 = ((/* implicit */long long int) ((min((var_9), (((((/* implicit */_Bool) -26)) && ((_Bool)1))))) ? (-21) : (((/* implicit */int) var_2))));
                                var_19 = ((/* implicit */long long int) ((min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) 25)), (var_8)))), (((((/* implicit */_Bool) 10360755225033441533ULL)) ? (arr_11 [i_1 + 2] [6LL] [6LL] [i_1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))))) << (((/* implicit */int) ((4860161487990281873LL) <= (((/* implicit */long long int) ((0U) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)41815)))))))))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) arr_3 [i_1 + 1] [i_1] [i_1 + 1])) ? (((long long int) arr_3 [i_1] [i_1] [i_1 - 1])) : (min((((/* implicit */long long int) (short)-26153)), (-7935657631077277366LL)))));
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 2; i_5 < 9; i_5 += 2) 
                    {
                        for (long long int i_6 = 1; i_6 < 9; i_6 += 4) 
                        {
                            {
                                arr_18 [i_0] [i_2] [i_0] [i_0] [i_0 - 4] = ((/* implicit */_Bool) (+(var_8)));
                                arr_19 [i_6 + 2] [i_6 + 2] [i_2] [i_2] [i_6 + 2] [i_0] [i_6 + 2] = ((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) 8085988848676110082ULL)) ? (((/* implicit */int) min(((unsigned short)7168), (((/* implicit */unsigned short) (short)-21912))))) : (19))));
                                var_21 = (+(arr_7 [i_0]));
                                var_22 &= ((/* implicit */_Bool) ((signed char) arr_4 [i_0 + 1] [i_2]));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) 25))));
                    var_24 = ((/* implicit */int) arr_16 [i_0] [i_2]);
                }
                /* LoopNest 2 */
                for (unsigned short i_7 = 0; i_7 < 12; i_7 += 1) 
                {
                    for (unsigned int i_8 = 0; i_8 < 12; i_8 += 1) 
                    {
                        {
                            arr_27 [i_0] [i_0] [i_8] = ((/* implicit */_Bool) (short)-27);
                            /* LoopSeq 1 */
                            for (long long int i_9 = 0; i_9 < 12; i_9 += 3) 
                            {
                                arr_30 [i_8] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_8])) ? (arr_13 [i_0 - 4] [i_8] [(_Bool)1] [i_1 - 2] [i_9]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)18)))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_8]))) * (16070933624902603991ULL)))));
                                var_25 = ((/* implicit */unsigned int) var_14);
                                arr_31 [i_8] = ((((/* implicit */int) (_Bool)1)) ^ ((+(((/* implicit */int) var_6)))));
                            }
                            var_26 = ((/* implicit */unsigned short) min((((((/* implicit */int) (!(var_9)))) < (((/* implicit */int) ((arr_16 [i_0 - 4] [i_0 - 4]) && (var_2)))))), (((((/* implicit */_Bool) min(((unsigned short)14031), (((/* implicit */unsigned short) (short)-9418))))) && (((/* implicit */_Bool) (unsigned short)14015))))));
                            arr_32 [i_8] [8LL] [i_7] [i_8] = min((((((unsigned int) var_5)) & (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 317415333029339265ULL)) ? (((/* implicit */int) (signed char)18)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) var_17)) : (((/* implicit */int) (signed char)-1))))));
                            var_27 = ((/* implicit */unsigned long long int) var_8);
                        }
                    } 
                } 
            }
        } 
    } 
    var_28 = ((/* implicit */_Bool) ((((var_0) + (9223372036854775807LL))) >> (((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_9)), ((unsigned short)2047)))) ? (((((/* implicit */int) var_16)) % (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_5))))))));
}
