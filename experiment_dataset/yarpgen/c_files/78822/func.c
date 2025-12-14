/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78822
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78822 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78822
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
    for (int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (unsigned int i_1 = 3; i_1 < 9; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_1 - 3] = ((int) ((int) ((((/* implicit */_Bool) (unsigned char)15)) ? (arr_0 [i_1]) : (arr_2 [i_0] [i_1]))));
                arr_7 [i_0] [i_0] [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1 + 2] [i_1 - 3] [i_1])) ? (((((/* implicit */_Bool) var_5)) ? (arr_5 [i_1] [7] [i_1 - 3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0]))))) : (((/* implicit */unsigned long long int) arr_1 [i_1 - 1])))))));
                /* LoopSeq 2 */
                for (int i_2 = 0; i_2 < 11; i_2 += 3) 
                {
                    arr_10 [i_0] [i_0] = 91868352;
                    arr_11 [9ULL] [i_1] [4ULL] = ((/* implicit */unsigned long long int) var_1);
                    arr_12 [i_2] [4ULL] [(unsigned char)10] = ((/* implicit */unsigned char) arr_2 [i_1] [i_0]);
                }
                for (unsigned long long int i_3 = 3; i_3 < 9; i_3 += 2) 
                {
                    arr_16 [i_1] [i_1] [i_3] [i_3] = ((/* implicit */unsigned int) arr_0 [i_3 - 2]);
                    arr_17 [3] [i_1] [i_1 + 1] [i_1] = ((unsigned char) (-(min((arr_15 [i_3]), (-91868352)))));
                    /* LoopSeq 1 */
                    for (unsigned char i_4 = 0; i_4 < 11; i_4 += 4) 
                    {
                        arr_22 [i_1 - 1] [i_1 - 1] [10] [9U] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (arr_15 [8]) : (arr_2 [i_0] [i_4])))) ? (91868352) : ((-(((/* implicit */int) var_19)))))) / (((((/* implicit */_Bool) arr_20 [i_0] [i_1 - 1])) ? (((arr_15 [10U]) - (var_14))) : (max((var_7), (arr_14 [i_4] [i_4] [i_3 - 3] [(unsigned char)9])))))));
                        /* LoopSeq 1 */
                        for (unsigned char i_5 = 1; i_5 < 10; i_5 += 4) 
                        {
                            arr_27 [i_4] [i_4] [i_4] [i_4] [2U] = var_18;
                            arr_28 [i_0] [i_4] [i_3 + 2] [i_0] [3] = ((/* implicit */int) min(((~(arr_18 [i_0] [i_1 + 2] [7] [i_5 - 1]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_5 [i_0] [5] [i_0]) - (((/* implicit */unsigned long long int) arr_4 [i_0] [i_1 + 2] [i_5 - 1]))))) ? (min((arr_20 [i_3] [i_4]), (((/* implicit */unsigned int) 1263005019)))) : (((/* implicit */unsigned int) max((arr_4 [i_0] [i_1 - 3] [i_5]), (((/* implicit */int) arr_13 [2ULL] [5U] [3]))))))))));
                        }
                        arr_29 [i_1] [i_3 + 2] [i_1] [6] [i_1] [2ULL] = ((/* implicit */int) ((((/* implicit */_Bool) (~(arr_14 [i_1 - 2] [i_1 + 1] [i_3 - 1] [i_4])))) || (((/* implicit */_Bool) min((((((/* implicit */_Bool) -1)) ? (arr_5 [i_4] [i_4] [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)33))))), (((/* implicit */unsigned long long int) arr_13 [i_0] [i_1] [i_3 + 2])))))));
                    }
                }
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((var_10), (var_13))))));
}
