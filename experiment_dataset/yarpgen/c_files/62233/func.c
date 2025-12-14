/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62233
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62233 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62233
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
    var_14 = ((/* implicit */int) max((-2822585141734194484LL), (((/* implicit */long long int) max((min((var_2), (((/* implicit */int) var_11)))), (var_2))))));
    var_15 = ((/* implicit */unsigned short) 1260840742);
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 23; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                arr_6 [i_0] = arr_2 [i_1] [i_0];
                var_16 = ((/* implicit */short) (~(((((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned char)57)))) * (((((/* implicit */int) (short)-31647)) / (arr_4 [(short)10])))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_2 = 0; i_2 < 24; i_2 += 2) 
    {
        for (unsigned int i_3 = 0; i_3 < 24; i_3 += 1) 
        {
            {
                var_17 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((signed char) arr_10 [i_3] [i_2]))) ? (((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-59)), (var_0)))) : (((/* implicit */int) arr_9 [i_3] [i_2] [i_2])))) >> (((((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)10000)) ? (((/* implicit */int) (unsigned short)48026)) : (((/* implicit */int) (signed char)-1))))) | (((5294659120918462860LL) | (((/* implicit */long long int) ((/* implicit */int) (signed char)-46))))))) + (62LL)))));
                var_18 = ((/* implicit */_Bool) arr_8 [i_2]);
                var_19 -= ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_9 [6] [i_2] [i_3])), (max((arr_5 [i_3] [i_2] [i_2]), (((/* implicit */unsigned short) var_11))))))) ? (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_2])) ? (arr_3 [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_3])))))) - (arr_10 [i_3] [i_3]))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) ((_Bool) arr_2 [i_2] [i_3]))) + (((((/* implicit */_Bool) (signed char)126)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned char)249)))))))));
                /* LoopNest 2 */
                for (unsigned short i_4 = 0; i_4 < 24; i_4 += 4) 
                {
                    for (signed char i_5 = 0; i_5 < 24; i_5 += 4) 
                    {
                        {
                            arr_17 [i_2] [i_5] [i_4] [i_5] = ((/* implicit */unsigned char) ((int) arr_16 [i_2] [i_3] [i_4] [i_5]));
                            var_20 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_13 [i_2] [i_2] [(unsigned char)20] [i_2])), (((((/* implicit */_Bool) var_11)) ? (arr_7 [i_2] [i_3]) : (arr_7 [i_3] [i_2])))));
                            var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((((/* implicit */long long int) arr_4 [i_2])) % (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)17510))) - (((((/* implicit */_Bool) arr_15 [i_2] [i_2] [i_2] [i_2])) ? (arr_2 [(unsigned short)20] [i_3]) : (arr_2 [i_3] [i_3]))))))))));
                            /* LoopSeq 1 */
                            for (signed char i_6 = 0; i_6 < 24; i_6 += 4) 
                            {
                                var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_2] [i_2] [i_2] [i_2]))) <= (max((max((((/* implicit */unsigned long long int) arr_18 [(unsigned char)18] [i_3])), (arr_10 [i_5] [i_4]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) arr_20 [i_2] [i_3] [18U] [i_6]))))))))))));
                                arr_22 [i_6] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-52)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)126)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) : (((/* implicit */int) (short)-21280))))) : (min((((long long int) arr_5 [i_2] [i_3] [(signed char)16])), (((/* implicit */long long int) (-(arr_21 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]))))))));
                                arr_23 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] &= ((/* implicit */signed char) max((((/* implicit */long long int) ((_Bool) arr_1 [i_4]))), (max((9223372036854775807LL), (((/* implicit */long long int) ((unsigned short) arr_1 [i_6])))))));
                                var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) (~(max((arr_3 [i_6]), (arr_3 [i_5]))))))));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
}
