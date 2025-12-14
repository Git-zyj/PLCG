/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78297
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78297 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78297
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
    var_16 = ((/* implicit */signed char) var_8);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 23; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) arr_2 [i_0] [i_1]))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) (+(((/* implicit */int) var_3)))))));
                            arr_11 [(short)7] [i_0] [i_2] [(short)7] = ((/* implicit */unsigned short) (!(((arr_2 [i_0] [i_3]) != ((-2147483647 - 1))))));
                            var_19 = ((/* implicit */unsigned int) arr_7 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_3] [i_2]);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_4 = 0; i_4 < 24; i_4 += 4) 
                {
                    for (unsigned short i_5 = 0; i_5 < 24; i_5 += 3) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) min((((arr_9 [i_1] [i_4] [i_5]) - (((/* implicit */long long int) ((arr_14 [i_5] [i_4] [6LL] [i_0]) + (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_5])))))))), (arr_3 [17U] [i_1] [i_4]))))));
                            var_21 = ((/* implicit */unsigned long long int) var_9);
                            var_22 ^= ((/* implicit */unsigned char) (((-2147483647 - 1)) / (-1307933444)));
                        }
                    } 
                } 
                var_23 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((18446744073709551615ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))))))));
                /* LoopNest 3 */
                for (unsigned short i_6 = 4; i_6 < 23; i_6 += 4) 
                {
                    for (long long int i_7 = 1; i_7 < 20; i_7 += 3) 
                    {
                        for (long long int i_8 = 0; i_8 < 24; i_8 += 1) 
                        {
                            {
                                var_24 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned short)40620)), (arr_25 [i_7] [i_7] [i_7] [i_7 - 1] [i_8] [i_7] [i_1])))) ? (((/* implicit */int) (unsigned char)205)) : (((/* implicit */int) (unsigned char)2))))), (max((((((/* implicit */_Bool) arr_10 [i_1])) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) -1351611670)))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_0)))))))));
                                var_25 = ((/* implicit */signed char) (~((-(((var_3) ? (((/* implicit */int) arr_17 [i_0] [i_0] [i_6 - 1] [i_7] [i_8])) : (((/* implicit */int) arr_17 [i_0] [i_0] [i_6] [i_0] [i_8]))))))));
                                arr_26 [i_8] [i_7] [i_7] [(unsigned char)20] = ((/* implicit */signed char) (-((-(2996596781610319065ULL)))));
                                arr_27 [i_1] [i_7] [i_7] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)20)) ? (0ULL) : (((18446744073709551615ULL) - (((/* implicit */unsigned long long int) min((-259772336), (((/* implicit */int) (unsigned short)53005)))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_26 = ((/* implicit */unsigned long long int) (_Bool)1);
    var_27 = ((/* implicit */unsigned int) min((24ULL), (((/* implicit */unsigned long long int) (signed char)8))));
}
