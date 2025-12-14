/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6444
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
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (int i_1 = 3; i_1 < 14; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                {
                    var_12 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 9ULL)) || (((/* implicit */_Bool) arr_2 [i_0] [i_1 + 1] [i_0])))))) : (7793073767436496807LL)))), (((unsigned long long int) var_0))));
                    var_13 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) arr_5 [i_1 - 3] [i_1 - 3] [0LL] [i_1 - 3]))) ? (((/* implicit */int) max((arr_5 [i_1 - 3] [(unsigned char)10] [i_1 - 3] [i_1]), (var_1)))) : (((((/* implicit */_Bool) arr_0 [i_1 - 2])) ? (((/* implicit */int) (unsigned char)117)) : (((/* implicit */int) arr_5 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_2]))))));
                    arr_6 [i_2] [i_1] [(signed char)12] = ((/* implicit */signed char) ((((/* implicit */int) min((arr_4 [i_1 - 3] [i_1]), (arr_2 [i_1 - 3] [i_1] [i_1 - 1])))) != (((((/* implicit */int) arr_4 [i_1 - 1] [(unsigned char)11])) >> (((((/* implicit */int) arr_2 [i_1 - 3] [i_1] [i_1 - 2])) - (45)))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (short i_3 = 0; i_3 < 22; i_3 += 3) 
    {
        for (short i_4 = 0; i_4 < 22; i_4 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (long long int i_5 = 0; i_5 < 22; i_5 += 3) 
                {
                    /* LoopSeq 1 */
                    for (int i_6 = 1; i_6 < 20; i_6 += 4) 
                    {
                        var_14 = ((/* implicit */int) (+(var_3)));
                        arr_21 [i_4] [i_4] [i_3] [i_6 + 1] [i_5] [i_3] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */int) ((unsigned short) arr_11 [i_3] [i_3] [i_3]))) <= (((/* implicit */int) arr_10 [i_6 - 1])))))));
                        var_15 = ((/* implicit */signed char) (+((-9223372036854775807LL - 1LL))));
                    }
                    arr_22 [i_3] [i_4] [(signed char)3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 7793073767436496807LL)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-9311))) : (-2222682312609885548LL)))) : (9ULL)))) ? (((/* implicit */int) (unsigned char)7)) : (((/* implicit */int) (_Bool)1))));
                }
                var_16 -= ((/* implicit */long long int) (((~(4198930828U))) == (((/* implicit */unsigned int) ((/* implicit */int) var_7)))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((-2017748848) | (((/* implicit */int) (signed char)-44))))), (var_0)));
    var_18 = ((/* implicit */unsigned int) max((((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)173)) + (((/* implicit */int) var_4)))))))), (((((/* implicit */_Bool) ((signed char) var_0))) ? (((/* implicit */int) var_8)) : ((+(((/* implicit */int) (signed char)65))))))));
}
