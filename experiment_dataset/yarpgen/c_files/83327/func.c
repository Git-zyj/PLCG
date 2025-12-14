/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83327
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83327 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83327
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
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                {
                    var_20 *= ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) -861581535)) ? (7794742273831566183LL) : (7794742273831566183LL))) - (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_1])))))), (((((((/* implicit */unsigned long long int) var_2)) ^ (var_15))) ^ (((/* implicit */unsigned long long int) var_10))))));
                    var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) min((((((/* implicit */_Bool) arr_3 [i_0])) ? (arr_3 [i_2]) : (((/* implicit */long long int) 861581514)))), (((/* implicit */long long int) ((((/* implicit */_Bool) -861581535)) ? (1631359942) : (((/* implicit */int) (signed char)11))))))))));
                    /* LoopNest 2 */
                    for (short i_3 = 1; i_3 < 12; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 2; i_4 < 10; i_4 += 4) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((max((9398062953911661115ULL), (((/* implicit */unsigned long long int) arr_9 [i_0] [i_0] [i_1] [i_1] [i_2] [i_3] [i_4])))) | (((/* implicit */unsigned long long int) max((((/* implicit */int) var_7)), (861581503))))))) && ((!(((/* implicit */_Bool) max((var_1), (((/* implicit */unsigned char) arr_6 [i_0] [i_1] [i_1] [i_3 + 2] [i_4])))))))));
                                arr_10 [i_4] [i_1] [i_2] [i_1] [i_0] = ((/* implicit */unsigned char) ((unsigned long long int) max((max((arr_2 [i_1] [i_2] [i_3]), (arr_2 [i_0] [i_1] [i_2]))), (((/* implicit */int) arr_0 [i_0])))));
                            }
                        } 
                    } 
                    var_23 -= ((/* implicit */short) (+(((9048681119797890492ULL) - (((/* implicit */unsigned long long int) arr_3 [i_0]))))));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */unsigned short) var_9);
    var_25 &= max(((unsigned char)8), (var_0));
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 11; i_5 += 4) 
    {
        for (unsigned long long int i_6 = 0; i_6 < 11; i_6 += 4) 
        {
            for (unsigned short i_7 = 0; i_7 < 11; i_7 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_8 = 4; i_8 < 9; i_8 += 4) 
                    {
                        for (int i_9 = 0; i_9 < 11; i_9 += 4) 
                        {
                            {
                                var_26 *= ((/* implicit */_Bool) ((min((422212465065984ULL), (((/* implicit */unsigned long long int) arr_15 [i_5] [i_5] [i_8 - 3])))) - (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [i_8 + 1] [i_6] [i_6] [i_8]))))))));
                                var_27 = ((/* implicit */unsigned char) max(((~((+(18446321861244485632ULL))))), (max(((+(var_6))), (((var_13) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_5] [i_6] [i_7] [i_8] [i_9])))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_10 = 1; i_10 < 10; i_10 += 2) 
                    {
                        for (short i_11 = 0; i_11 < 11; i_11 += 2) 
                        {
                            {
                                var_28 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) 422212465065983ULL)) ? (7U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-88))))), (((/* implicit */unsigned int) var_5))));
                                var_29 = ((/* implicit */unsigned long long int) ((unsigned char) max((((/* implicit */short) arr_19 [i_5] [i_6] [i_10 + 1])), (var_3))));
                                var_30 -= ((/* implicit */int) (!(((/* implicit */_Bool) min((max((((/* implicit */unsigned long long int) 139623252U)), (15090932918214873758ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) arr_17 [i_6] [i_10] [i_11])) & (var_10)))))))));
                            }
                        } 
                    } 
                    arr_31 [i_7] [i_7] [i_6] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_22 [i_5] [i_5] [i_6] [i_7])), (arr_15 [i_5] [i_6] [i_7])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (max((var_12), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (signed char)122)) : (arr_25 [i_5] [i_5] [i_5] [i_6] [i_6] [i_6] [i_7]))))))));
                    arr_32 [i_7] [i_6] [i_5] [i_5] = ((/* implicit */long long int) var_8);
                }
            } 
        } 
    } 
    var_31 = ((/* implicit */unsigned char) var_6);
}
