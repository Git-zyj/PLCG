/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75250
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75250 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75250
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 2; i_0 < 9; i_0 += 2) 
    {
        var_10 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_9)))) ? (((/* implicit */int) arr_0 [i_0 - 2])) : (((var_9) >> (((arr_1 [i_0]) - (12719734245450986706ULL)))))))) ? (((unsigned long long int) (!(((/* implicit */_Bool) var_9))))) : ((((-(arr_1 [i_0]))) | (arr_1 [i_0 - 1])))));
        var_11 = ((/* implicit */unsigned long long int) arr_0 [i_0 - 2]);
        arr_2 [9LL] [9LL] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */signed char) (!(((/* implicit */_Bool) 2693161473660044110LL))))), (arr_0 [i_0 + 1]))))) + (max((((/* implicit */unsigned long long int) max(((unsigned short)65535), (((/* implicit */unsigned short) arr_0 [i_0 - 1]))))), (max((((/* implicit */unsigned long long int) var_7)), (arr_1 [i_0])))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 1) 
    {
        arr_5 [i_1] = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)22))) : (arr_3 [i_1] [i_1]))), (((/* implicit */unsigned int) max((((arr_3 [i_1] [i_1]) <= (arr_4 [i_1]))), (((((/* implicit */long long int) arr_4 [16LL])) != (var_0))))))));
        var_12 = ((/* implicit */unsigned char) ((signed char) arr_4 [2ULL]));
    }
    /* LoopSeq 1 */
    for (long long int i_2 = 3; i_2 < 15; i_2 += 3) 
    {
        /* LoopNest 3 */
        for (int i_3 = 1; i_3 < 16; i_3 += 2) 
        {
            for (unsigned short i_4 = 0; i_4 < 17; i_4 += 2) 
            {
                for (int i_5 = 0; i_5 < 17; i_5 += 3) 
                {
                    {
                        var_13 = ((((/* implicit */_Bool) var_9)) && (((((/* implicit */_Bool) arr_11 [i_3 + 1] [i_3 + 1] [i_3 + 1])) || (((/* implicit */_Bool) ((long long int) arr_8 [i_2] [i_3 + 1] [i_2]))))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_6 = 0; i_6 < 17; i_6 += 2) 
                        {
                            arr_19 [i_5] [i_6] = ((/* implicit */unsigned short) ((arr_13 [i_2] [i_3] [i_4] [i_6] [2] [i_5]) ? (((/* implicit */int) ((((/* implicit */_Bool) ((long long int) arr_17 [i_2] [i_3] [i_4] [i_5] [i_6]))) && (((/* implicit */_Bool) arr_11 [i_2 - 3] [i_3] [i_4]))))) : (((/* implicit */int) (unsigned short)1))));
                            var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) (~(arr_8 [i_2 + 1] [i_3 + 1] [10LL]))))));
                            var_15 = ((/* implicit */unsigned int) arr_7 [(unsigned short)11] [(unsigned short)11]);
                        }
                        arr_20 [i_2] [i_3] [2] [i_5] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((arr_10 [i_2] [15ULL] [i_4]) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_2] [i_2] [i_2] [i_2])))))) ? (((/* implicit */int) arr_18 [i_2] [i_3] [i_4] [i_5])) : (((/* implicit */int) var_2)))), (arr_9 [i_2] [i_2 - 3])));
                    }
                } 
            } 
        } 
        var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) max((((/* implicit */unsigned int) ((((((/* implicit */int) (signed char)117)) + (((/* implicit */int) var_8)))) * ((-(((/* implicit */int) var_4))))))), (max((((/* implicit */unsigned int) (-(var_9)))), (arr_4 [i_2]))))))));
        var_17 = var_4;
        arr_21 [(_Bool)1] = ((/* implicit */unsigned long long int) (-(max((((/* implicit */long long int) var_1)), (var_5)))));
    }
    var_18 = ((/* implicit */unsigned int) ((long long int) (-(((((/* implicit */int) var_2)) / (((/* implicit */int) (unsigned short)65534)))))));
}
