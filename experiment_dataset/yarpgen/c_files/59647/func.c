/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59647
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59647 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59647
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
    for (int i_0 = 2; i_0 < 12; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 12; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (int i_3 = 1; i_3 < 12; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 13; i_4 += 1) 
                        {
                            {
                                var_11 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0] [i_3 + 1])) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) (short)13859))))) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0)))));
                                arr_11 [(short)9] [i_0] [12U] [i_2] [i_3 - 1] [i_4] = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [(short)8] [i_2] [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)97))) : (35184372088831LL)))) ? (((/* implicit */long long int) max((((/* implicit */int) arr_8 [(unsigned char)2] [i_3] [i_3] [i_3] [i_3 + 1] [i_3] [i_3])), (arr_2 [i_0] [i_2])))) : (max((-67305125942196662LL), (((/* implicit */long long int) var_10)))))));
                                arr_12 [i_0] [i_0] [i_3] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) (!((_Bool)1)))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((short) 235859044))))))));
                                var_12 = min((((((/* implicit */_Bool) arr_6 [i_0 - 1] [i_3 - 1] [i_3] [i_4])) ? (arr_6 [i_0 - 1] [i_3 + 1] [i_3] [i_3 + 1]) : (arr_6 [i_0 + 1] [i_3 + 1] [(signed char)12] [i_3 - 1]))), ((-(arr_6 [i_0 - 1] [i_3 - 1] [i_4] [i_4]))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned int i_5 = 3; i_5 < 12; i_5 += 3) 
                {
                    for (int i_6 = 0; i_6 < 13; i_6 += 2) 
                    {
                        for (short i_7 = 4; i_7 < 9; i_7 += 3) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned int) (~(max((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)83)) ? (arr_2 [10ULL] [i_1 - 2]) : (((/* implicit */int) (unsigned short)47431))))), (var_9)))));
                                arr_22 [i_0 - 1] [i_1] [i_6] |= ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (unsigned char)159)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_6 [i_1] [i_1 - 1] [i_1 + 1] [i_1]))), (((/* implicit */long long int) (+(((/* implicit */int) (signed char)-99)))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_8 = 3; i_8 < 13; i_8 += 1) 
    {
        for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
        {
            {
                arr_28 [(signed char)1] = ((/* implicit */unsigned long long int) arr_25 [i_9] [i_9] [i_8]);
                var_14 = ((/* implicit */long long int) 4778613984165940378ULL);
                arr_29 [i_9] = ((/* implicit */short) max((max((((((/* implicit */_Bool) 13668130089543611245ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (971259057746060176LL))), (((/* implicit */long long int) arr_26 [i_8 + 1] [i_8 + 3])))), (((((/* implicit */_Bool) ((unsigned short) arr_24 [i_9 + 1]))) ? (arr_25 [13U] [i_9 + 1] [i_9 + 1]) : (var_0)))));
            }
        } 
    } 
    var_15 = ((/* implicit */_Bool) var_8);
}
