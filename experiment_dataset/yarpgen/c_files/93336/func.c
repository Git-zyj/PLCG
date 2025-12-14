/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93336
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93336 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93336
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
    for (signed char i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (signed char i_2 = 0; i_2 < 22; i_2 += 1) 
                {
                    var_12 = ((/* implicit */unsigned long long int) arr_8 [i_0 - 1]);
                    /* LoopSeq 1 */
                    for (signed char i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        arr_12 [i_0 + 3] [i_1] [i_0 + 3] [i_0] [i_3] [(unsigned char)18] = ((/* implicit */unsigned char) 6906607326763412015ULL);
                        var_13 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)24017)) > (((/* implicit */int) (unsigned char)8))));
                        var_14 = ((/* implicit */signed char) max((((((var_9) + (9223372036854775807LL))) << (((arr_0 [i_0 - 1]) - (8043516929521152103LL))))), (((arr_0 [i_0 + 1]) >> (((((/* implicit */int) (signed char)-76)) + (137)))))));
                        var_15 = ((/* implicit */unsigned int) (unsigned char)9);
                        arr_13 [i_0 + 1] [i_1] [i_2] [i_0] [i_0 + 1] [i_1] = max((arr_0 [i_0 + 1]), (((((/* implicit */long long int) 288898567)) - (((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0 - 1]))) + (arr_0 [(signed char)12]))))));
                    }
                }
                var_16 += ((/* implicit */int) (!(((/* implicit */_Bool) var_1))));
                /* LoopNest 2 */
                for (unsigned char i_4 = 1; i_4 < 21; i_4 += 2) 
                {
                    for (int i_5 = 0; i_5 < 22; i_5 += 1) 
                    {
                        {
                            var_17 = ((/* implicit */long long int) arr_3 [i_0 - 1]);
                            var_18 = (unsigned char)235;
                            var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) max((0LL), (min((6873989441166269858LL), (((/* implicit */long long int) (unsigned char)12)))))))));
                            var_20 += ((/* implicit */long long int) ((((/* implicit */int) var_0)) >> (((((182052464U) * (((/* implicit */unsigned int) ((/* implicit */int) (signed char)127))))) - (1645826438U)))));
                            var_21 = ((/* implicit */short) max((((/* implicit */unsigned short) (short)15040)), ((unsigned short)960)));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 20; i_6 += 4) 
    {
        for (unsigned short i_7 = 0; i_7 < 20; i_7 += 3) 
        {
            {
                var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) max((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)0)) <= (((/* implicit */int) (short)-30149))))), (arr_22 [i_6] [i_7]))))));
                arr_23 [i_7] [i_6] [i_7] = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) min((arr_2 [i_6]), (((/* implicit */unsigned int) (unsigned char)207))))) == (min((arr_11 [12U] [(signed char)5] [12U] [12U] [(signed char)5] [4]), (((/* implicit */unsigned long long int) arr_1 [i_7]))))))), (max((((/* implicit */unsigned long long int) arr_14 [i_7] [i_7] [i_6] [i_7])), (max((18446744073709551615ULL), (((/* implicit */unsigned long long int) var_8))))))));
                var_23 = ((/* implicit */int) (~(min((min((((/* implicit */unsigned long long int) var_8)), (var_4))), (((/* implicit */unsigned long long int) max(((unsigned short)31), (arr_18 [i_6] [i_6] [i_7] [i_6]))))))));
            }
        } 
    } 
}
