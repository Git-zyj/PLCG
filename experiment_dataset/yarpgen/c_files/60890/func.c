/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60890
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60890 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60890
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
    var_14 = ((/* implicit */unsigned long long int) var_9);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 20; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                arr_5 [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((arr_2 [i_1]) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)216)))))) ? ((-(-1438416717616489187LL))) : (((/* implicit */long long int) ((/* implicit */int) var_4))))) != (((/* implicit */long long int) max((((/* implicit */int) var_7)), (min((((/* implicit */int) (unsigned char)11)), (arr_1 [i_1]))))))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 2) 
                {
                    for (unsigned char i_3 = 2; i_3 < 18; i_3 += 2) 
                    {
                        {
                            var_15 = var_13;
                            arr_10 [i_0 + 1] [i_1] [i_0 + 1] [i_2] [0U] = ((/* implicit */unsigned char) min((var_3), (((/* implicit */unsigned long long int) min((((/* implicit */int) var_4)), (arr_9 [i_3 + 3] [i_3 + 3] [i_3 + 3] [7U]))))));
                        }
                    } 
                } 
                var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) min((var_4), (((/* implicit */unsigned char) (signed char)-118)))))) > (max((arr_8 [i_1] [i_1] [i_1] [i_1] [(unsigned char)20]), (((/* implicit */unsigned int) (signed char)-120))))))), (max((arr_2 [i_1]), (((/* implicit */unsigned long long int) max((arr_7 [i_0 + 2] [1U] [15LL]), (((/* implicit */unsigned short) var_10))))))))))));
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 3) 
                {
                    for (short i_5 = 0; i_5 < 22; i_5 += 1) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (unsigned long long int i_6 = 0; i_6 < 22; i_6 += 1) /* same iter space */
                            {
                                arr_18 [i_0 - 1] [i_1] [i_0 - 1] [i_5] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_0 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0 + 2]))) : (3760810696U)))) <= (max((((/* implicit */long long int) arr_11 [i_0 + 1])), (var_13)))));
                                arr_19 [i_1] [i_1] [i_1] [i_4] [i_5] [5] [i_6] = (i_1 % 2 == 0) ? (((/* implicit */unsigned int) min((((((((/* implicit */long long int) arr_4 [2] [i_0])) & (var_13))) * (((/* implicit */long long int) arr_8 [i_0 + 1] [i_1] [0] [i_6] [i_6])))), (((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_0 + 2] [i_4]))) & (((((arr_12 [(unsigned short)20] [i_1] [(unsigned short)20] [(short)19]) + (9223372036854775807LL))) << (((((/* implicit */int) var_6)) - (30)))))))))) : (((/* implicit */unsigned int) min((((((((/* implicit */long long int) arr_4 [2] [i_0])) & (var_13))) * (((/* implicit */long long int) arr_8 [i_0 + 1] [i_1] [0] [i_6] [i_6])))), (((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_0 + 2] [i_4]))) & (((((((arr_12 [(unsigned short)20] [i_1] [(unsigned short)20] [(short)19]) - (9223372036854775807LL))) + (9223372036854775807LL))) << (((((/* implicit */int) var_6)) - (30))))))))));
                                var_17 = ((/* implicit */unsigned int) min(((+(var_13))), (((/* implicit */long long int) (-(((/* implicit */int) arr_13 [i_6] [(unsigned short)15] [i_4] [(unsigned short)15] [6ULL] [(unsigned short)15])))))));
                                var_18 = ((/* implicit */unsigned short) max((max((arr_2 [i_0]), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) / (2147483647)))))), (((/* implicit */unsigned long long int) ((((((arr_1 [i_5]) + (2147483647))) << (((arr_2 [i_0]) - (4560932313772192651ULL))))) >> (((arr_2 [i_0 - 1]) - (4560932313772192626ULL))))))));
                            }
                            for (unsigned long long int i_7 = 0; i_7 < 22; i_7 += 1) /* same iter space */
                            {
                                var_19 = ((/* implicit */unsigned int) max((arr_17 [i_7]), (((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))));
                                arr_23 [i_1] [13U] = ((/* implicit */unsigned short) arr_8 [i_7] [i_1] [i_7] [i_5] [i_7]);
                                arr_24 [i_0] [i_0 - 1] [i_0] [i_4] [i_1] [1] = ((/* implicit */short) (+(min((((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [(unsigned char)16]))) : (arr_4 [i_4] [i_4]))), (((/* implicit */unsigned int) arr_14 [i_0] [(unsigned char)18] [i_7]))))));
                            }
                            arr_25 [i_1] = ((/* implicit */int) max((((/* implicit */unsigned long long int) max((((arr_20 [i_5] [i_1] [i_1] [i_0 + 2] [i_0 + 2]) >> (((((/* implicit */int) (unsigned short)65535)) - (65476))))), (((/* implicit */long long int) ((short) (unsigned short)65529)))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)32)))))) / (arr_2 [i_0 + 1])))));
                            var_20 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_13 [i_0] [i_0] [i_0] [i_0 - 1] [(short)20] [i_0])), (var_3)))) ? (((/* implicit */int) arr_7 [i_0 - 1] [i_0 - 1] [i_0])) : (((/* implicit */int) arr_22 [15] [i_0 - 2] [(unsigned char)0] [i_0 - 2] [i_5] [i_0 - 2])))) == ((~((+(((/* implicit */int) arr_0 [i_0]))))))));
                        }
                    } 
                } 
                var_21 = min((7U), (((/* implicit */unsigned int) (unsigned char)84)));
            }
        } 
    } 
}
