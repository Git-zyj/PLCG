/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74242
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74242 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74242
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
    var_16 = ((/* implicit */unsigned int) var_13);
    /* LoopSeq 4 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        var_17 = ((/* implicit */int) max((((arr_0 [i_0]) + (arr_1 [i_0]))), (min((arr_0 [i_0]), (arr_1 [i_0])))));
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) (short)6768);
    }
    for (signed char i_1 = 1; i_1 < 14; i_1 += 2) 
    {
        var_18 -= ((/* implicit */short) (!(((/* implicit */_Bool) min((min((arr_3 [i_1]), (arr_3 [i_1]))), (((/* implicit */unsigned long long int) arr_4 [i_1 + 1] [i_1])))))));
        /* LoopNest 2 */
        for (long long int i_2 = 0; i_2 < 15; i_2 += 2) 
        {
            for (unsigned int i_3 = 0; i_3 < 15; i_3 += 4) 
            {
                {
                    arr_9 [i_1 - 1] [i_1 + 1] [i_1 + 1] = ((/* implicit */signed char) (_Bool)1);
                    arr_10 [i_3] [i_3] [i_2] [i_1] = ((/* implicit */short) ((((/* implicit */int) arr_6 [i_1 + 1] [i_1 - 1])) == (((/* implicit */int) (signed char)114))));
                }
            } 
        } 
        arr_11 [i_1] = ((/* implicit */_Bool) min((((arr_7 [i_1 - 1] [i_1 + 1] [i_1] [i_1 + 1]) ^ (((/* implicit */unsigned long long int) arr_0 [i_1 + 1])))), (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_0 [i_1 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)118))) : (arr_0 [i_1]))), (((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (arr_0 [i_1]) : (var_12))))))));
        arr_12 [i_1 + 1] = ((/* implicit */unsigned int) arr_7 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1]);
    }
    for (unsigned int i_4 = 0; i_4 < 24; i_4 += 4) 
    {
        arr_17 [i_4] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_13 [i_4])) || (((/* implicit */_Bool) min((((/* implicit */int) arr_15 [i_4] [i_4])), (-1277035504)))))) || (((/* implicit */_Bool) arr_13 [i_4]))));
        var_19 -= ((/* implicit */_Bool) var_3);
        arr_18 [i_4] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((arr_14 [i_4]) < (min((arr_14 [i_4]), (((/* implicit */long long int) arr_15 [i_4] [i_4]))))))), (4363488205624031686ULL)));
    }
    for (short i_5 = 0; i_5 < 14; i_5 += 1) 
    {
        arr_21 [i_5] = ((/* implicit */_Bool) (signed char)-102);
        arr_22 [i_5] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-19844))) - (max(((+(arr_4 [i_5] [i_5]))), (((/* implicit */unsigned int) var_9))))));
        var_20 = ((/* implicit */short) arr_14 [i_5]);
    }
}
