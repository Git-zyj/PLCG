/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99798
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99798 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99798
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */short) min((((((/* implicit */_Bool) arr_2 [i_0])) ? ((~(arr_2 [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0])))))))), (((/* implicit */long long int) arr_1 [i_0] [i_0]))));
        arr_5 [i_0] [i_0] = arr_2 [i_0];
    }
    var_10 = ((/* implicit */int) var_1);
    var_11 = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) var_7)) < (var_8)))), (max((((/* implicit */unsigned long long int) var_9)), (max((((/* implicit */unsigned long long int) var_8)), (var_6)))))));
    var_12 *= ((/* implicit */unsigned char) var_8);
    /* LoopNest 2 */
    for (unsigned char i_1 = 0; i_1 < 18; i_1 += 3) 
    {
        for (unsigned int i_2 = 0; i_2 < 18; i_2 += 3) 
        {
            {
                arr_10 [i_1] [i_2] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(((arr_6 [i_2]) & (arr_6 [i_1]))))))));
                /* LoopSeq 1 */
                for (unsigned int i_3 = 0; i_3 < 18; i_3 += 4) 
                {
                    arr_14 [i_1] [3ULL] [(unsigned short)10] [i_1] = ((/* implicit */unsigned short) arr_7 [i_1]);
                    arr_15 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) ((((/* implicit */int) arr_7 [i_1])) < (((/* implicit */int) arr_12 [i_3] [(unsigned char)5] [i_3]))))), (arr_13 [8LL] [i_2] [i_2] [i_2])))) ? (((((/* implicit */_Bool) arr_8 [i_1] [i_1] [i_1])) ? (arr_8 [i_1] [i_1] [i_1]) : (arr_8 [i_2] [i_2] [i_2]))) : (((((arr_6 [i_1]) + (((/* implicit */int) arr_7 [i_1])))) - (((/* implicit */int) arr_12 [i_1] [i_1] [i_3]))))));
                }
                var_13 = arr_8 [i_1] [i_2] [i_2];
                /* LoopNest 2 */
                for (unsigned char i_4 = 0; i_4 < 18; i_4 += 4) 
                {
                    for (unsigned char i_5 = 0; i_5 < 18; i_5 += 3) 
                    {
                        {
                            var_14 = ((/* implicit */int) ((((/* implicit */_Bool) arr_19 [i_4])) ? (arr_20 [i_1] [i_4] [i_4] [i_4] [i_4]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_4] [i_1] [i_1])) ? (arr_8 [0ULL] [i_2] [i_4]) : (arr_8 [i_1] [i_1] [i_1]))))));
                            var_15 = ((/* implicit */long long int) (+(((/* implicit */int) arr_17 [i_1]))));
                            arr_23 [i_1] [i_2] [i_4] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_6 [i_1])) ? ((((-(arr_8 [i_2] [i_4] [i_5]))) ^ (((/* implicit */int) arr_22 [i_1] [i_1] [i_2] [i_2] [i_4] [i_5])))) : (arr_8 [i_1] [(unsigned short)4] [i_5])));
                        }
                    } 
                } 
            }
        } 
    } 
}
