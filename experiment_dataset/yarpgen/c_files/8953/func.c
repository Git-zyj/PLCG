/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8953
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8953 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8953
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
    var_18 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) var_10)), (max((var_6), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) var_15)), (var_3))))))));
    var_19 = ((/* implicit */unsigned short) ((var_5) - (((/* implicit */unsigned int) ((/* implicit */int) var_10)))));
    /* LoopNest 2 */
    for (short i_0 = 3; i_0 < 9; i_0 += 3) 
    {
        for (signed char i_1 = 3; i_1 < 9; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */unsigned char) var_11);
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 1; i_2 < 9; i_2 += 4) 
                {
                    for (short i_3 = 4; i_3 < 8; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */short) var_9);
                                var_22 -= ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) var_12)))) && (((/* implicit */_Bool) min((arr_15 [(short)8]), (arr_15 [4ULL]))))));
                                var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) arr_6 [2ULL] [i_1] [i_1]))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_5 = 0; i_5 < 10; i_5 += 3) 
                {
                    for (unsigned long long int i_6 = 3; i_6 < 7; i_6 += 4) 
                    {
                        {
                            var_24 = ((/* implicit */_Bool) var_15);
                            arr_20 [i_0] = ((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)255)), (((unsigned short) (unsigned char)17))));
                            arr_21 [i_0] [i_1] [(unsigned short)9] [i_1] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_15)))))) != (((arr_14 [i_1 + 1] [i_6 + 2] [i_5] [i_5] [i_0]) & (((/* implicit */unsigned long long int) -1644553800))))));
                            arr_22 [i_0] [i_1] [i_6] = ((/* implicit */unsigned long long int) (signed char)-122);
                        }
                    } 
                } 
                arr_23 [i_0] [(signed char)0] = ((/* implicit */long long int) (-(((/* implicit */int) ((_Bool) (unsigned char)239)))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_7 = 3; i_7 < 22; i_7 += 3) 
    {
        for (unsigned long long int i_8 = 1; i_8 < 21; i_8 += 3) 
        {
            {
                var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) arr_26 [4LL]))));
                arr_30 [(unsigned short)17] [i_7] = ((((/* implicit */int) (!(((/* implicit */_Bool) arr_29 [i_7]))))) - (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127))) > (18446744073709551587ULL)))));
            }
        } 
    } 
}
