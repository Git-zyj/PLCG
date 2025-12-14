/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9216
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
    var_18 = var_1;
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 20; i_2 += 1) 
                {
                    for (signed char i_3 = 4; i_3 < 19; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 20; i_4 += 1) 
                        {
                            {
                                arr_12 [(unsigned short)0] [1] [0] [8U] [i_0] = (short)1113;
                                var_19 = ((/* implicit */unsigned int) var_1);
                            }
                        } 
                    } 
                } 
                var_20 *= ((/* implicit */signed char) max((((/* implicit */unsigned long long int) arr_9 [(unsigned char)13] [(short)0] [9ULL] [(signed char)5] [15U] [9ULL] [(signed char)16])), ((+((-(15650399514114525254ULL)))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_5 = 0; i_5 < 10; i_5 += 2) 
    {
        for (signed char i_6 = 1; i_6 < 8; i_6 += 1) 
        {
            for (unsigned long long int i_7 = 0; i_7 < 10; i_7 += 1) 
            {
                {
                    arr_23 [5] [i_6] [i_6] [(_Bool)1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_3) : (max((max((((/* implicit */unsigned long long int) (_Bool)1)), (10454733772301780302ULL))), (min((((/* implicit */unsigned long long int) var_10)), (var_14)))))));
                    arr_24 [i_6] [7U] [(signed char)0] [5U] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) ((((/* implicit */int) arr_22 [6U] [i_6 - 1])) >= (((/* implicit */int) arr_22 [5ULL] [i_6 + 2]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [(unsigned char)6] [(signed char)6] [i_6 + 1])))))));
                }
            } 
        } 
    } 
}
