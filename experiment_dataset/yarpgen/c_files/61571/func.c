/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61571
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61571 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61571
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
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (unsigned char i_2 = 2; i_2 < 20; i_2 += 2) 
            {
                {
                    var_16 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) arr_2 [i_2 - 2] [i_0])), (((short) arr_2 [i_1] [i_0])))))) / (63U)));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        for (short i_4 = 1; i_4 < 18; i_4 += 4) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) (((+(((/* implicit */int) (!(((/* implicit */_Bool) 3376356901U))))))) < (((((((/* implicit */int) arr_1 [i_1])) | (((/* implicit */int) arr_11 [i_3] [(unsigned char)9])))) * (((/* implicit */int) min((arr_0 [(short)16] [(short)16]), (arr_13 [(unsigned char)7] [(unsigned char)7])))))))))));
                                var_18 = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_10 [i_2 - 1] [i_4] [i_4 + 1] [i_4 + 2])) | (((/* implicit */int) arr_10 [i_2 - 2] [(unsigned char)20] [i_4 + 1] [i_4 + 2]))))), (((arr_3 [i_2 + 1]) + (arr_3 [i_2 - 2])))));
                                arr_14 [i_0] [i_1] [i_2 - 2] [i_2 - 2] [i_4] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) max((3566729616U), (((/* implicit */unsigned int) arr_4 [i_2 - 2]))))))))) - ((((-(0U))) >> (((((/* implicit */int) arr_11 [16U] [i_2])) - (24400)))))));
                                var_19 = max((((/* implicit */short) ((((/* implicit */long long int) -1319825144)) != (arr_8 [i_2 + 1] [i_4 + 2] [i_4 + 3])))), (((short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [(_Bool)1]))) * (4294967295U)))));
                                arr_15 [i_0] [i_0] [i_2 + 1] [i_0] [i_3] [i_4 + 1] [i_4] = ((/* implicit */unsigned char) ((((((/* implicit */int) ((arr_3 [i_2]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_4] [(_Bool)1] [i_2 - 1] [9LL])))))) >= (((/* implicit */int) ((((/* implicit */int) arr_10 [i_0] [i_1] [i_1] [i_0])) <= (((/* implicit */int) arr_1 [i_1]))))))) ? (((((/* implicit */int) ((((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [(unsigned short)1])) < (((/* implicit */int) (_Bool)0))))) & (((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)56)), (arr_1 [i_1])))))) : ((((~(((/* implicit */int) (short)-1)))) << (((/* implicit */int) ((((/* implicit */int) (signed char)78)) == (((/* implicit */int) (_Bool)1)))))))));
                            }
                        } 
                    } 
                    var_20 -= ((/* implicit */signed char) ((unsigned short) ((arr_8 [i_2 - 1] [i_2 - 2] [i_2 + 1]) > (arr_8 [i_2 - 1] [i_2 - 1] [i_2 - 2]))));
                }
            } 
        } 
    } 
    var_21 = min((min((((/* implicit */unsigned int) ((526675849555011918ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))), (((728237679U) >> (((((/* implicit */int) var_15)) - (98))))))), (((/* implicit */unsigned int) var_7)));
    var_22 = ((/* implicit */unsigned long long int) var_12);
}
