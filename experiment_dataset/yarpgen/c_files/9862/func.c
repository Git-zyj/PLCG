/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9862
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9862 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9862
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
    var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) (unsigned short)24270))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) ((((((/* implicit */int) ((unsigned char) arr_4 [2ULL]))) != (((/* implicit */int) (unsigned short)41249)))) ? (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_3 [(_Bool)1])))) ? (((/* implicit */int) (unsigned short)202)) : (((/* implicit */int) ((signed char) (unsigned short)41259)))))) : (((((((/* implicit */_Bool) arr_3 [0])) ? (((/* implicit */unsigned long long int) arr_0 [i_0] [i_1])) : (arr_3 [(signed char)8]))) + (5355433951688985681ULL))))))));
                /* LoopNest 2 */
                for (signed char i_2 = 1; i_2 < 11; i_2 += 3) 
                {
                    for (unsigned char i_3 = 2; i_3 < 11; i_3 += 1) 
                    {
                        {
                            var_15 -= ((/* implicit */_Bool) max((((long long int) (+(((/* implicit */int) (unsigned short)21875))))), (min((-5015737808814227618LL), (((/* implicit */long long int) 622662157U))))));
                            var_16 = ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)47))))) >> (((((((((/* implicit */_Bool) arr_7 [i_1] [i_2] [i_1] [i_1])) ? ((-2147483647 - 1)) : (((/* implicit */int) arr_1 [i_0])))) - (-2147483639))) + (37)))))) & (((((((((/* implicit */_Bool) (signed char)127)) ? (-3439876953208010293LL) : (((/* implicit */long long int) ((/* implicit */int) var_7))))) + (9223372036854775807LL))) >> ((((+(-1LL))) + (55LL)))))));
                        }
                    } 
                } 
                var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_7 [4U] [i_1] [i_1] [i_1])) ? (3439876953208010306LL) : (((/* implicit */long long int) arr_7 [4U] [i_0] [i_1] [i_1])))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [8ULL] [(unsigned char)4] [i_0] [i_0])) ? (arr_2 [i_0]) : (arr_2 [i_0])))))))));
                var_18 &= ((/* implicit */unsigned long long int) ((arr_0 [(unsigned char)4] [(unsigned char)4]) >> (((((((/* implicit */_Bool) -8LL)) ? (1567733216U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)47))))) - (1567733212U)))));
                arr_10 [i_0] [i_1] [i_1] = ((/* implicit */long long int) min(((~(arr_7 [i_1] [i_1] [i_1] [i_1]))), (((/* implicit */int) ((((/* implicit */long long int) (+(1126378357U)))) != (((((/* implicit */_Bool) var_5)) ? (5LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))))));
            }
        } 
    } 
    var_19 = ((/* implicit */long long int) var_6);
    var_20 = (((((!(((/* implicit */_Bool) var_4)))) && (((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)122))) : (9223372036854775807LL)))))) ? (((/* implicit */unsigned long long int) 3544389264U)) : (18446744073709551596ULL));
}
