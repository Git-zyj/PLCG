/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55700
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55700 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55700
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
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned int i_2 = 1; i_2 < 17; i_2 += 2) 
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 4) 
                        {
                            {
                                var_12 = ((/* implicit */short) ((((/* implicit */_Bool) (short)29680)) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) % (2191355775U)))) : (((((/* implicit */_Bool) (+(((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1]))) : (max((var_8), (((/* implicit */unsigned long long int) 2147483634))))))));
                                arr_14 [i_0] [i_1] [i_3] [11U] [i_1] [i_3] = ((/* implicit */unsigned short) arr_5 [i_1]);
                                arr_15 [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)36725))) : (7294297148267553296LL)))) ? (((/* implicit */long long int) max((1827794956), (((/* implicit */int) (short)-7675))))) : (max((arr_13 [i_0] [i_2 + 3]), (arr_13 [i_3] [i_2 + 3])))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 21; i_5 += 2) 
                    {
                        for (signed char i_6 = 0; i_6 < 21; i_6 += 2) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned long long int) (+(((683701417) / (1309795402)))));
                                var_14 = ((/* implicit */short) ((_Bool) ((((/* implicit */long long int) ((int) (unsigned char)118))) ^ ((((((((-9223372036854775807LL - 1LL)) + (9223372036854775807LL))) + (9223372036854775807LL))) >> (((((/* implicit */int) (unsigned short)26398)) - (26393))))))));
                                var_15 = (+(min((((/* implicit */unsigned long long int) 255)), (((((/* implicit */_Bool) arr_3 [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)78))) : (11616883396090968931ULL))))));
                                arr_22 [(_Bool)1] [i_1] [i_1] [i_5] [i_5] [i_1] [i_0] = ((((((/* implicit */_Bool) arr_8 [i_0] [i_2 + 4] [i_0] [i_1])) ? ((+(var_4))) : (((/* implicit */unsigned long long int) var_7)))) - (((/* implicit */unsigned long long int) -9188666639499528173LL)));
                                var_16 = ((/* implicit */signed char) var_5);
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */long long int) ((max((705306656U), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)0)) || (((/* implicit */_Bool) (short)-9697))))))) != (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_2 - 1])))));
                }
                /* LoopNest 2 */
                for (unsigned long long int i_7 = 2; i_7 < 18; i_7 += 2) 
                {
                    for (short i_8 = 3; i_8 < 18; i_8 += 3) 
                    {
                        {
                            arr_27 [(_Bool)1] [i_1] [i_7] [(_Bool)1] [i_1] = ((/* implicit */unsigned char) (+(min(((+(((/* implicit */int) var_3)))), (((/* implicit */int) arr_12 [(_Bool)1] [i_8 + 2] [i_8] [i_1] [i_8 + 2] [i_8 + 1] [i_8]))))));
                            arr_28 [i_1] [i_1] [i_7] [i_8] = ((/* implicit */signed char) (_Bool)1);
                        }
                    } 
                } 
                var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)40)) ? (((/* implicit */int) (unsigned short)29448)) : (-1)));
                arr_29 [i_1] [i_1] = ((/* implicit */unsigned long long int) var_7);
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned int) (+((-9223372036854775807LL - 1LL))));
}
