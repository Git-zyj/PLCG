/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7184
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7184 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7184
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) max((max((min((12982575760712677243ULL), (12982575760712677243ULL))), (((/* implicit */unsigned long long int) max((0U), (((/* implicit */unsigned int) arr_1 [i_0] [i_0]))))))), (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) -740004748568413724LL)) ? (-2122548361562029155LL) : (((/* implicit */long long int) 4294967287U)))), (((long long int) var_13))))))))));
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 13; i_2 += 2) 
                {
                    for (short i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 14; i_4 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned long long int) ((int) (unsigned short)30846));
                                arr_15 [i_0] [i_1] [i_1] [i_1] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_11 [i_2] [i_1] [i_4] [i_2] [i_1])), (((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */unsigned int) var_2)) : (arr_10 [(_Bool)1] [i_1] [i_1] [3] [i_4] [i_4])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (min((((/* implicit */unsigned long long int) -635324668)), (14ULL)))));
                                arr_16 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((3225365154455247207ULL), (((/* implicit */unsigned long long int) 4294967295U))))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0]))) : (arr_7 [i_2 - 2] [i_1] [i_2 + 1] [i_2 - 2]))) : (((/* implicit */long long int) ((/* implicit */int) min(((unsigned short)511), (((/* implicit */unsigned short) min((arr_2 [i_0] [i_0] [i_0]), (((/* implicit */short) var_6)))))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_5 = 0; i_5 < 14; i_5 += 3) 
                {
                    for (signed char i_6 = 0; i_6 < 14; i_6 += 1) 
                    {
                        {
                            arr_21 [i_6] [i_0] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */long long int) max(((short)-28611), ((short)-28611)));
                            arr_22 [(signed char)4] [i_6] [4] [4] &= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (+(arr_8 [i_0] [i_1])))), ((~(9ULL))))))));
                            var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) max((min((arr_3 [(_Bool)1]), (((/* implicit */unsigned long long int) var_14)))), (((arr_17 [i_0] [i_0] [(_Bool)1] [(_Bool)1]) >> (((/* implicit */int) ((((/* implicit */int) (signed char)71)) != (((/* implicit */int) arr_2 [7ULL] [1] [6LL]))))))))))));
                        }
                    } 
                } 
                arr_23 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) var_15);
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */int) var_15))));
}
