/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67165
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67165 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67165
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
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 11; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 3; i_3 < 12; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 14; i_4 += 1) 
                        {
                            {
                                var_11 = ((/* implicit */unsigned char) max((var_11), (((/* implicit */unsigned char) min((((((/* implicit */_Bool) var_7)) ? (arr_4 [i_0]) : (((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) arr_10 [i_0 + 3] [i_0] [i_0] [8LL])) : (((/* implicit */int) arr_9 [(signed char)11] [i_1] [i_1] [i_1])))))), (var_7))))));
                                arr_13 [i_4] = ((((/* implicit */_Bool) (-(((/* implicit */int) arr_8 [i_0 + 1]))))) ? (((((/* implicit */_Bool) 790446078879774463ULL)) ? (((/* implicit */int) arr_8 [i_0 + 1])) : (((/* implicit */int) arr_8 [i_0 + 1])))) : (((/* implicit */int) (!(((/* implicit */_Bool) 16647175994874825961ULL))))));
                            }
                        } 
                    } 
                    arr_14 [i_0] [i_0 - 1] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 562949953421311ULL)) ? (817338431) : (((/* implicit */int) (signed char)-1)))))));
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 0; i_5 < 14; i_5 += 3) 
                    {
                        for (unsigned long long int i_6 = 2; i_6 < 13; i_6 += 1) 
                        {
                            {
                                arr_21 [i_0] [i_0] [i_0] [i_0 - 2] [i_5] = var_0;
                                var_12 = ((/* implicit */int) max((var_12), (((/* implicit */int) ((unsigned char) (~(((/* implicit */int) arr_1 [i_0 - 1] [i_0]))))))));
                                var_13 = ((/* implicit */signed char) ((int) var_5));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 14; i_7 += 4) 
                    {
                        arr_26 [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned char)56))));
                        arr_27 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 16647175994874825948ULL)) ? (817338445) : (-817338429)));
                    }
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */signed char) var_7);
    var_15 = ((/* implicit */unsigned long long int) var_1);
    var_16 = ((/* implicit */int) ((signed char) var_6));
}
