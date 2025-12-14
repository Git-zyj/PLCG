/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77512
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77512 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77512
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
    for (short i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (short i_1 = 3; i_1 < 8; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 10; i_2 += 3) 
                {
                    for (unsigned char i_3 = 2; i_3 < 9; i_3 += 4) 
                    {
                        {
                            var_18 += ((/* implicit */signed char) ((((/* implicit */_Bool) (-(arr_7 [i_0] [i_0] [i_0] [i_3 + 1])))) ? (max((((/* implicit */unsigned long long int) var_13)), (arr_7 [i_0] [i_3] [i_0] [i_3 - 2]))) : (arr_7 [i_0] [i_0] [i_3 - 2] [i_3 + 1])));
                            arr_9 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */int) ((((((/* implicit */_Bool) arr_5 [i_3] [i_3 - 1] [i_3] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_3] [i_3 - 1] [i_3 - 1] [i_3]))) : (var_11))) < (((/* implicit */unsigned long long int) max((4U), (((/* implicit */unsigned int) var_13)))))));
                        }
                    } 
                } 
                arr_10 [i_0] |= ((/* implicit */signed char) (+(arr_3 [i_0] [i_0])));
                /* LoopNest 2 */
                for (unsigned int i_4 = 0; i_4 < 10; i_4 += 3) 
                {
                    for (signed char i_5 = 0; i_5 < 10; i_5 += 3) 
                    {
                        {
                            var_19 += ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) var_9))) ? ((~(((/* implicit */int) var_15)))) : (((/* implicit */int) ((var_3) > (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [8LL] [8LL] [(unsigned char)6]))))))))) ? (((unsigned long long int) ((var_0) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_1))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_5 [i_0] [i_1] [i_4] [i_5])))))));
                            var_20 = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */int) arr_12 [(short)8] [(short)2] [i_1 - 1] [i_1 + 2])) - (((/* implicit */int) arr_12 [i_1 + 2] [i_1] [i_1 - 3] [i_1 - 1])))));
                            var_21 = ((/* implicit */short) (-(((((_Bool) var_15)) ? (((/* implicit */long long int) (-(((/* implicit */int) (signed char)1))))) : (((((/* implicit */long long int) var_5)) - (var_2)))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_22 *= ((/* implicit */signed char) ((((/* implicit */int) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (unsigned char)7)))) > (var_5)))) % ((+((+(((/* implicit */int) var_6))))))));
}
