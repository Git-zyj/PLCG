/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69716
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69716 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69716
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
    for (unsigned long long int i_0 = 1; i_0 < 11; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_2 = 2; i_2 < 12; i_2 += 3) 
                {
                    for (unsigned int i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 4; i_4 < 12; i_4 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)0)) ? (4211546238238747325LL) : (((/* implicit */long long int) ((/* implicit */int) (short)10)))))) ? (max((((/* implicit */long long int) arr_6 [i_0 - 1] [i_0] [i_0] [i_0])), (arr_13 [i_0 + 1] [i_2 + 1] [i_3] [i_4 - 1] [(signed char)4]))) : (((/* implicit */long long int) ((((-2096015673) & (((/* implicit */int) arr_3 [i_0] [i_0])))) ^ (((((/* implicit */int) (_Bool)1)) | (2096015673))))))));
                                var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_0] [i_2 - 2] [i_0])) ^ (((/* implicit */int) arr_4 [i_0] [i_2 - 1] [i_2 - 1]))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_4 [i_0] [i_2 - 2] [i_2 + 1])) + (((/* implicit */int) arr_4 [i_4] [i_2 - 2] [(unsigned short)1]))))) : (((((/* implicit */_Bool) arr_4 [i_0] [i_2 + 1] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_2 - 2] [12LL]))) : (var_5))))))));
                            }
                        } 
                    } 
                } 
                var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) arr_6 [(short)3] [i_0 + 2] [i_0] [i_0 + 2])) : (((/* implicit */int) (unsigned short)27697))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_14))))) ? ((~(((/* implicit */int) (signed char)-1)))) : (((((/* implicit */int) var_3)) ^ (((/* implicit */int) (signed char)1)))))))));
                arr_15 [i_0] = ((/* implicit */unsigned short) ((((int) arr_3 [i_0 - 1] [2ULL])) + (((/* implicit */int) arr_3 [i_0 + 1] [i_1]))));
            }
        } 
    } 
    var_20 = ((/* implicit */short) max((((/* implicit */long long int) var_1)), (((((/* implicit */_Bool) (unsigned char)23)) ? (-1887251386799730705LL) : (((/* implicit */long long int) (~(-784664189))))))));
    var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */int) (unsigned short)384)) > (((/* implicit */int) var_8)))) ? (((/* implicit */int) ((6789420839288493105LL) > (((/* implicit */long long int) ((/* implicit */int) var_3)))))) : (min((((/* implicit */int) var_3)), (15872)))))) ? (15892) : (((/* implicit */int) ((unsigned short) var_6)))));
    var_22 = var_2;
    var_23 = ((/* implicit */unsigned int) var_2);
}
