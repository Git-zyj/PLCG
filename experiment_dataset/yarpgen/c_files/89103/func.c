/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89103
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89103 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89103
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
        for (unsigned char i_1 = 2; i_1 < 20; i_1 += 3) 
        {
            {
                var_14 |= ((/* implicit */_Bool) (unsigned short)531);
                /* LoopNest 3 */
                for (unsigned char i_2 = 1; i_2 < 19; i_2 += 2) 
                {
                    for (unsigned short i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 22; i_4 += 3) 
                        {
                            {
                                arr_11 [i_1] = ((unsigned short) arr_7 [i_1 + 2] [i_2 + 1] [i_4] [i_2 + 1] [i_2 + 1] [i_1]);
                                arr_12 [6ULL] [i_1] [i_4] = ((((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_1] [i_4]))))) == ((-(((/* implicit */int) (_Bool)1)))));
                            }
                        } 
                    } 
                } 
                var_15 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((int) (_Bool)1))), (var_11)));
                arr_13 [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) != (((/* implicit */int) ((unsigned char) min((((/* implicit */unsigned short) (short)29797)), (arr_2 [i_0])))))));
                /* LoopNest 2 */
                for (unsigned int i_5 = 2; i_5 < 21; i_5 += 2) 
                {
                    for (short i_6 = 0; i_6 < 22; i_6 += 2) 
                    {
                        {
                            arr_18 [i_6] [i_1] [i_1] [i_0] = (+(((((/* implicit */_Bool) arr_9 [i_1 + 1] [17] [i_1] [i_1 + 1] [(unsigned char)14] [(unsigned short)11] [i_0])) ? (((/* implicit */int) arr_9 [i_1 + 2] [i_0] [3ULL] [i_0] [(unsigned char)4] [(unsigned char)8] [i_0])) : (((/* implicit */int) arr_9 [i_1 + 2] [i_1] [i_1 - 1] [17] [13U] [i_1] [i_1])))));
                            var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)252)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)32))) : (3715715063U)));
                            arr_19 [i_1] [(short)5] = ((/* implicit */unsigned short) ((((/* implicit */int) ((_Bool) arr_7 [i_1] [i_1] [i_1 + 1] [11ULL] [i_1 - 2] [i_1]))) >> ((((~(((/* implicit */int) var_2)))) + (10)))));
                            arr_20 [i_1] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_0] [i_0] [(short)10] [21U] [21U] [i_1])) + (((/* implicit */int) (unsigned char)253))))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_5 + 1]))) : (579252222U))) : (((/* implicit */unsigned int) 2147483625))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) ((((/* implicit */int) var_5)) / (((/* implicit */int) var_8)))))));
    var_18 = ((/* implicit */unsigned int) var_9);
    /* LoopNest 2 */
    for (unsigned int i_7 = 0; i_7 < 17; i_7 += 4) 
    {
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            {
                arr_25 [i_8] [0U] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_8 [i_7] [i_8] [i_7] [i_7] [i_7]), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1)))))))) ? (var_9) : (((/* implicit */unsigned long long int) ((((var_5) ? (((/* implicit */int) (unsigned char)243)) : (((/* implicit */int) var_8)))) - (((/* implicit */int) (_Bool)1)))))));
                arr_26 [i_7] [i_7] [i_7] = (+(arr_23 [i_7] [i_7] [i_7]));
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_9 = 0; i_9 < 13; i_9 += 3) 
    {
        for (unsigned char i_10 = 0; i_10 < 13; i_10 += 2) 
        {
            {
                arr_31 [(unsigned char)5] = ((/* implicit */unsigned char) var_13);
                var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) (+(max((max((((/* implicit */long long int) var_8)), (arr_28 [i_9]))), (((/* implicit */long long int) 2147483634)))))))));
            }
        } 
    } 
}
