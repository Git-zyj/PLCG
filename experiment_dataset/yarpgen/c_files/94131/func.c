/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94131
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94131 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94131
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
    var_19 = ((/* implicit */unsigned char) min((var_9), (((/* implicit */long long int) ((499766653) > (((/* implicit */int) min(((unsigned char)57), (((/* implicit */unsigned char) (signed char)-1))))))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 12; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 1; i_3 < 11; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) || (((/* implicit */_Bool) min((((/* implicit */int) (_Bool)1)), (var_2))))))), (((arr_4 [i_0] [i_1 - 1] [i_0]) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_3 + 2] [i_2]))) : (var_10)))));
                                var_21 = ((((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)0)) | (((/* implicit */int) (unsigned char)5))))) | (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)251))) ^ (-1807020881579139274LL)))))) ? (3816971849878573142LL) : (min((((((/* implicit */_Bool) var_0)) ? (2101361519249546118LL) : (var_10))), (((/* implicit */long long int) var_6)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_5 = 4; i_5 < 11; i_5 += 3) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 13; i_6 += 4) 
                        {
                            {
                                var_22 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_17 [i_0] [i_0] [i_1] [i_5] [i_6]))) & (arr_0 [i_1 - 1] [i_5 - 2])))), (((max((var_3), (((/* implicit */unsigned long long int) (_Bool)1)))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) var_5))))))))));
                                arr_19 [i_0 + 1] [i_5] [i_2] = ((/* implicit */signed char) ((long long int) max((((/* implicit */int) ((((/* implicit */int) arr_5 [i_2] [i_5] [i_6])) <= (((/* implicit */int) (unsigned short)60702))))), ((-(var_2))))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */long long int) min((((((/* implicit */_Bool) 6632285096617034468LL)) ? (((/* implicit */int) arr_12 [i_1 + 1] [i_1 + 1] [i_2] [i_1] [i_0] [i_1 + 1] [i_0 + 1])) : (((/* implicit */int) arr_18 [i_1 + 1] [i_1 - 1] [i_1 + 1] [i_1] [i_1] [i_0 + 1] [i_0 + 1])))), (min((((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) arr_12 [i_0] [i_0] [i_1] [i_1] [i_1] [i_1] [i_1])))), (((((/* implicit */int) (signed char)-42)) ^ (((/* implicit */int) (unsigned char)155))))))));
                }
            } 
        } 
    } 
    var_24 -= ((/* implicit */signed char) ((var_18) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (min((((var_15) | (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned long long int) ((51280133) | (1476220401))))))));
    var_25 = ((/* implicit */unsigned char) (unsigned short)1023);
}
