/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97600
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97600 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97600
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
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) arr_1 [(unsigned char)1]);
        var_18 -= arr_1 [i_0];
        arr_4 [i_0] [i_0] = min((((/* implicit */unsigned int) min((min((arr_2 [i_0] [i_0]), (((/* implicit */int) (short)16465)))), (((/* implicit */int) var_2))))), (min(((-(arr_1 [(short)23]))), (3003105975U))));
    }
    for (int i_1 = 0; i_1 < 22; i_1 += 4) /* same iter space */
    {
        arr_7 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (short)17431)) : (((/* implicit */int) arr_6 [i_1]))))) || (((/* implicit */_Bool) (short)-17431))));
        var_19 = ((/* implicit */unsigned char) (-(((max((arr_0 [i_1]), (((/* implicit */long long int) var_4)))) << ((((~(((/* implicit */int) var_1)))) - (95)))))));
        var_20 = ((/* implicit */signed char) ((min(((+(arr_5 [i_1]))), (((/* implicit */int) (short)-17432)))) / (((/* implicit */int) var_1))));
        var_21 -= (-(((/* implicit */int) ((unsigned short) ((((/* implicit */int) (short)-17434)) / (((/* implicit */int) (short)-17430)))))));
    }
    for (int i_2 = 0; i_2 < 22; i_2 += 4) /* same iter space */
    {
        var_22 = ((/* implicit */signed char) ((int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (short)-17443))))))));
        /* LoopNest 2 */
        for (unsigned short i_3 = 0; i_3 < 22; i_3 += 2) 
        {
            for (int i_4 = 0; i_4 < 22; i_4 += 2) 
            {
                {
                    arr_14 [i_2] = ((/* implicit */_Bool) var_17);
                    arr_15 [i_4] [i_3] [i_2] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (short)17431)), ((-(var_10)))));
                    /* LoopNest 2 */
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                    {
                        for (unsigned int i_6 = 4; i_6 < 18; i_6 += 2) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned int) min((((/* implicit */unsigned short) max(((short)17443), (arr_19 [i_6 + 4] [i_6] [i_6 + 4] [i_5 - 1] [(signed char)1] [i_5 - 1])))), (((unsigned short) arr_19 [i_6 + 3] [i_6] [i_5] [i_5 - 1] [(short)9] [i_5 - 1]))));
                                arr_22 [i_2] [i_4] [i_4] [i_5] [i_6] &= ((min((((/* implicit */unsigned long long int) (short)17431)), (var_10))) + (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)17431)) / (((/* implicit */int) ((short) var_2)))))));
                                arr_23 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_3] &= ((/* implicit */unsigned int) max(((-(var_10))), (((/* implicit */unsigned long long int) min((arr_20 [i_6 + 4] [i_2] [i_4] [i_6 + 4] [i_6 - 2]), (((/* implicit */unsigned short) (short)17443)))))));
                                arr_24 [i_2] [(unsigned char)8] [(short)4] [i_5] [i_6 - 3] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (short)-17419))) >= (((long long int) (short)17431))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-17443)) ? (((/* implicit */int) (short)17443)) : (((/* implicit */int) (short)-17447))));
        arr_25 [i_2] = ((/* implicit */unsigned int) min(((short)-17430), (((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned long long int) var_7))))))));
    }
    var_25 = ((/* implicit */signed char) (short)17424);
    var_26 = ((/* implicit */signed char) (+(((((((/* implicit */int) (short)17443)) > (((/* implicit */int) var_5)))) ? (var_13) : (((/* implicit */long long int) (-(((/* implicit */int) var_1)))))))));
}
