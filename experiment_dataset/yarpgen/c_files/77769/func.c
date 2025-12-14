/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77769
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77769 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77769
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
    var_15 = ((/* implicit */long long int) var_13);
    /* LoopSeq 2 */
    for (long long int i_0 = 1; i_0 < 14; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (signed char i_1 = 1; i_1 < 17; i_1 += 3) /* same iter space */
        {
            arr_6 [2ULL] &= ((/* implicit */long long int) 18371570793189018813ULL);
            var_16 = ((/* implicit */unsigned short) ((min((arr_2 [i_0 - 1]), (arr_2 [i_0 + 3]))) % (((/* implicit */unsigned long long int) arr_4 [i_0 + 4] [i_0 + 2]))));
            var_17 -= ((/* implicit */int) ((8820988808795644077ULL) & (((/* implicit */unsigned long long int) ((arr_4 [i_0 + 4] [i_0 + 3]) ^ (((/* implicit */int) min((arr_5 [i_0 + 1] [i_1 + 1]), (arr_5 [i_1 - 1] [i_0 - 1])))))))));
            var_18 -= ((/* implicit */_Bool) (((+((-(((/* implicit */int) arr_5 [i_0 + 4] [i_1 + 1])))))) | (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1 + 1] [i_0 + 3]))) <= (4237998076U))))));
        }
        for (signed char i_2 = 1; i_2 < 17; i_2 += 3) /* same iter space */
        {
            arr_9 [i_2] = ((((/* implicit */int) arr_8 [i_0 + 1] [i_0 + 2] [i_2])) & (((/* implicit */int) max((arr_8 [i_0 + 3] [i_2 + 1] [i_2]), (arr_8 [i_0 + 2] [i_2 - 1] [i_2])))));
            /* LoopSeq 2 */
            for (unsigned short i_3 = 0; i_3 < 18; i_3 += 4) 
            {
                arr_13 [i_0 - 1] [i_2] = ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)170))));
                var_19 += ((/* implicit */unsigned short) (-(((/* implicit */int) arr_8 [i_0 + 1] [i_2 - 1] [i_3]))));
            }
            for (unsigned long long int i_4 = 4; i_4 < 16; i_4 += 2) 
            {
                arr_16 [i_2] [i_2 - 1] [i_2] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_15 [i_4 + 2] [i_0 + 2] [i_0 + 1])) ? (((/* implicit */unsigned int) (+(((/* implicit */int) arr_5 [i_0 - 1] [i_0 + 1]))))) : (56969220U))), (((/* implicit */unsigned int) var_14))));
                arr_17 [i_0 + 3] [i_0 + 4] [i_2] [i_0 + 4] = arr_0 [i_2 - 1] [i_4 + 1];
            }
            var_20 ^= ((/* implicit */long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [8U] [i_0 + 2] [8U]))) <= (500856983U))) ? (((/* implicit */int) max((arr_8 [10] [i_0 + 2] [10]), (arr_8 [2] [i_0 + 2] [2])))) : (((((/* implicit */int) arr_8 [(unsigned char)16] [i_0 + 2] [(unsigned char)16])) * (((/* implicit */int) arr_7 [(signed char)6]))))));
        }
        arr_18 [i_0 + 1] = ((/* implicit */unsigned long long int) max((((arr_4 [i_0 + 4] [i_0 + 2]) / (arr_4 [i_0 + 2] [i_0 + 3]))), (arr_4 [i_0 - 1] [i_0 - 1])));
        var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) arr_11 [i_0 + 3] [i_0 - 1] [i_0 + 2] [i_0 + 4]))));
        var_22 &= ((/* implicit */unsigned char) (+(max((((arr_1 [i_0 + 4]) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)236))))), (arr_1 [i_0 + 4])))));
        var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) min((((/* implicit */long long int) min((((/* implicit */unsigned int) (signed char)-77)), (176389505U)))), ((-(arr_15 [i_0 + 2] [i_0 + 2] [i_0 + 1]))))))));
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_20 [i_5]))))))))));
        arr_21 [i_5] = ((/* implicit */long long int) ((((/* implicit */int) var_13)) >= (((/* implicit */int) arr_19 [i_5]))));
        var_25 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_20 [i_5]))));
        arr_22 [i_5] [i_5] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_19 [i_5])) ? (((/* implicit */int) arr_20 [i_5])) : (((/* implicit */int) arr_19 [i_5]))))));
    }
}
