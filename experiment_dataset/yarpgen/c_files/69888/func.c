/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69888
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69888 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69888
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
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */signed char) (~(min((((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)66))))), (207111350U)))));
                    var_19 = ((((/* implicit */_Bool) ((signed char) (unsigned char)220))) ? (((var_7) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (var_3))) : (((/* implicit */long long int) (~(((/* implicit */int) var_6))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 23; i_4 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned short) ((((((/* implicit */int) (signed char)-1)) == (((/* implicit */int) var_7)))) ? (((/* implicit */int) max((((unsigned short) arr_1 [14LL])), (((/* implicit */unsigned short) ((((/* implicit */int) (signed char)0)) == (((/* implicit */int) arr_1 [17U])))))))) : ((+(((/* implicit */int) ((var_10) == (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))))));
                                var_21 = (signed char)-51;
                                var_22 += ((/* implicit */short) 2373613609588356699LL);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 23; i_5 += 1) 
                    {
                        for (signed char i_6 = 1; i_6 < 20; i_6 += 1) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned short) arr_7 [(unsigned short)16] [(short)2] [(_Bool)1] [i_2] [5U]);
                                arr_15 [(signed char)3] [(short)16] [i_2] [9LL] = ((/* implicit */unsigned int) min((max(((~(var_2))), (((/* implicit */unsigned long long int) (~(arr_11 [13LL] [(signed char)11] [(short)14] [15ULL] [4ULL])))))), (((/* implicit */unsigned long long int) (_Bool)1))));
                                var_24 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) arr_3 [i_0] [2LL] [(_Bool)1])) == (((/* implicit */int) arr_3 [(_Bool)1] [(_Bool)1] [i_1]))))) <= (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)1)))))));
                                var_25 = var_12;
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_26 = ((/* implicit */short) var_2);
    var_27 -= ((/* implicit */unsigned short) min((var_1), (((/* implicit */short) ((((/* implicit */unsigned long long int) (-(var_13)))) <= (var_2))))));
}
