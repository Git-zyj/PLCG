/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79091
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79091 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79091
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
    var_13 = ((/* implicit */unsigned short) var_3);
    var_14 = ((/* implicit */int) var_11);
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) var_2))));
                    /* LoopSeq 1 */
                    for (int i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        arr_11 [i_0] [i_1] [i_1] [i_2] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(var_5)))) ? (((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) (signed char)-71)) ? (((/* implicit */int) var_0)) : (var_5))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) arr_6 [(signed char)7] [i_2] [i_1] [i_0])))))) : (((/* implicit */int) var_12))));
                        arr_12 [i_1] [i_1] = ((((/* implicit */_Bool) 47360194341919541LL)) || (((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_2 [i_2] [i_1])), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (arr_1 [i_3])))))));
                    }
                    var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_2] [i_1] [i_1] [i_0])) ? (((/* implicit */int) arr_6 [i_0] [i_0] [i_1] [(signed char)8])) : (((/* implicit */int) arr_6 [i_0] [6ULL] [i_0] [i_0]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) -449690284)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1] [i_0]))) : (arr_5 [i_0] [i_0] [i_1] [(unsigned short)6]))))))) : (((/* implicit */int) var_1))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_4 = 0; i_4 < 11; i_4 += 4) 
    {
        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
        {
            for (unsigned short i_6 = 0; i_6 < 11; i_6 += 3) 
            {
                {
                    arr_22 [i_6] [i_6] = ((/* implicit */long long int) max(((~(arr_16 [i_5 - 1] [i_5 - 1] [i_5 - 1]))), (((/* implicit */unsigned int) arr_13 [i_5]))));
                    /* LoopSeq 1 */
                    for (unsigned short i_7 = 1; i_7 < 7; i_7 += 1) 
                    {
                        arr_27 [i_6] [i_6] [i_7] = ((/* implicit */long long int) max(((-(arr_3 [i_7 - 1] [i_7 + 1] [i_7]))), (((/* implicit */unsigned long long int) arr_13 [(short)0]))));
                        var_17 = ((/* implicit */signed char) max((((/* implicit */long long int) 3423678227U)), (4354668963643146398LL)));
                        arr_28 [i_6] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) arr_26 [i_7 + 3] [i_6] [i_5 - 1] [i_5] [i_6] [i_4])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_26 [i_7 + 3] [i_6] [i_5 - 1] [i_6] [i_6] [i_4])) || (((/* implicit */_Bool) arr_26 [i_7 + 1] [i_6] [i_5 - 1] [i_4] [i_6] [i_4])))))) : (arr_26 [i_7 + 2] [i_6] [i_5 - 1] [0LL] [i_6] [i_5])));
                        var_18 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_9))));
                    }
                }
            } 
        } 
    } 
    var_19 = min((((/* implicit */int) var_12)), (((((/* implicit */int) var_7)) - (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)47)))))));
}
