/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94405
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94405 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94405
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
    var_18 = ((/* implicit */unsigned short) var_8);
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 1; i_1 < 15; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        for (long long int i_4 = 3; i_4 < 15; i_4 += 4) 
                        {
                            {
                                var_19 ^= ((/* implicit */int) (unsigned short)18098);
                                arr_12 [i_0] [i_1] [i_3] [i_3] [i_3] [i_2] = ((/* implicit */_Bool) ((signed char) (unsigned char)224));
                                arr_13 [i_3] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) max((max((((/* implicit */int) arr_7 [i_0] [i_1] [i_3] [i_4])), ((+(((/* implicit */int) arr_6 [i_0] [i_1] [i_1] [i_3])))))), (((/* implicit */int) ((arr_0 [i_1 - 1]) <= (((long long int) arr_6 [i_0] [i_0] [i_0] [i_0])))))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */long long int) (~(((((/* implicit */int) arr_7 [i_1 + 1] [i_1 - 1] [i_1 - 1] [i_1 - 1])) ^ (((/* implicit */int) arr_7 [i_1 + 1] [i_1 - 1] [i_2] [i_1 + 1]))))));
                    arr_14 [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_5 [i_0] [i_0] [i_0] [i_0])), ((((-(6354341895944665257LL))) * (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_2] [i_2] [i_2])) || (((/* implicit */_Bool) (unsigned char)31))))))))));
                    arr_15 [i_2] [i_0] [i_0] = ((/* implicit */_Bool) min((((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_1 + 1] [i_1 - 1] [i_1 + 1]))) : (arr_0 [i_1 + 1]))))), (((long long int) arr_7 [i_0] [i_0] [i_0] [i_0]))));
                    /* LoopSeq 2 */
                    for (int i_5 = 0; i_5 < 16; i_5 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_6 = 0; i_6 < 16; i_6 += 1) 
                        {
                            var_21 = ((/* implicit */unsigned long long int) ((long long int) ((int) (unsigned char)224)));
                            var_22 = ((/* implicit */long long int) ((((arr_17 [i_1 + 1] [i_1 - 1] [i_1 + 1]) << (((arr_17 [i_1 - 1] [i_1 - 1] [i_1 - 1]) - (998204285))))) << (((max((arr_17 [i_1 - 1] [i_1 - 1] [i_1 - 1]), (arr_17 [i_1 - 1] [i_1 + 1] [i_1 + 1]))) - (998204285)))));
                            arr_23 [i_6] [i_6] [i_5] [i_6] [i_1] [i_6] = ((/* implicit */int) (-(max((((/* implicit */unsigned long long int) arr_8 [i_1 + 1] [i_6] [i_5] [i_6])), (4502500115742720ULL)))));
                            arr_24 [i_1] [i_1] [i_2] [i_1] [i_5] [i_6] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 4502500115742720ULL))));
                        }
                        arr_25 [i_2] = ((/* implicit */unsigned char) min((min((31525197391593472ULL), (arr_21 [i_1 - 1]))), (((/* implicit */unsigned long long int) ((long long int) max((((/* implicit */long long int) (unsigned char)224)), (arr_0 [i_0])))))));
                        var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) ((unsigned long long int) arr_6 [i_1] [i_1 + 1] [i_1] [i_1 + 1])))));
                        arr_26 [i_5] [i_5] [i_5] [i_5] |= ((/* implicit */int) (!(((/* implicit */_Bool) 18415218876317958164ULL))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_7 = 0; i_7 < 16; i_7 += 1) 
                    {
                        var_24 = ((/* implicit */unsigned long long int) ((arr_11 [i_1] [i_1] [i_1] [i_1 + 1] [i_1 - 1] [i_2] [i_2]) << (((31525197391593472ULL) - (31525197391593450ULL)))));
                        var_25 += ((/* implicit */int) (!(((/* implicit */_Bool) arr_20 [i_7] [i_7] [10ULL] [10ULL] [i_1 - 1] [i_1 - 1]))));
                        var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) ((unsigned short) arr_9 [i_0] [i_1 + 1] [i_1 - 1] [i_7] [i_7])))));
                    }
                }
            } 
        } 
        arr_29 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((((/* implicit */long long int) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0])) > (6354341895944665257LL)))))) * (((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [i_0]))))));
    }
    var_27 = ((/* implicit */int) ((min((((unsigned int) (_Bool)1)), (((/* implicit */unsigned int) var_14)))) >> (((var_10) - (772501480)))));
}
