/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65250
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65250 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65250
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
    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) != (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (var_5) : (-4125540509262501965LL)))) ? (((/* implicit */unsigned long long int) 1006632960U)) : (min((var_1), (((/* implicit */unsigned long long int) var_6))))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 1; i_0 < 24; i_0 += 1) 
    {
        arr_2 [i_0] = (-(arr_0 [i_0 + 1]));
        var_20 = (+(arr_1 [i_0] [16ULL]));
    }
    /* LoopNest 2 */
    for (long long int i_1 = 0; i_1 < 10; i_1 += 2) 
    {
        for (short i_2 = 1; i_2 < 7; i_2 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_3 = 0; i_3 < 10; i_3 += 1) 
                {
                    for (unsigned char i_4 = 3; i_4 < 9; i_4 += 1) 
                    {
                        for (short i_5 = 3; i_5 < 7; i_5 += 2) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned char) arr_12 [i_5 + 1] [i_2] [i_2] [i_5 + 3] [i_5 + 1] [6U]);
                                arr_18 [i_1] [i_1] [i_1] [i_3] [i_4] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~((~(3288334336U)))))) ? ((+(((long long int) (short)30990)))) : (((/* implicit */long long int) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_7))))), (1006632956U))))));
                            }
                        } 
                    } 
                } 
                arr_19 [i_1] [i_2] |= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (+(arr_0 [i_2 + 1])))), (((((/* implicit */_Bool) min((((/* implicit */long long int) arr_8 [i_1] [i_2])), (7150589354797154736LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_1] [i_2 + 3]))) : ((~(arr_14 [i_1])))))));
                /* LoopSeq 1 */
                for (long long int i_6 = 0; i_6 < 10; i_6 += 4) 
                {
                    var_22 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)215)) << (((((((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) % (arr_13 [i_6]))) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_6] [i_6]))))) - (7867ULL)))));
                    var_23 = ((/* implicit */unsigned char) max((((((/* implicit */int) arr_11 [i_2 - 1] [5ULL] [5ULL])) < (((/* implicit */int) arr_11 [i_2 - 1] [i_2] [i_2])))), (((((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)40))) : (var_13))) >= (((/* implicit */long long int) (-(((/* implicit */int) arr_22 [5ULL] [i_1])))))))));
                    var_24 = ((/* implicit */unsigned long long int) var_14);
                    var_25 = ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) 4035225266123964416LL)))) | (arr_6 [i_1] [3LL])))) ? (arr_1 [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_1] [i_1]))));
                }
            }
        } 
    } 
}
