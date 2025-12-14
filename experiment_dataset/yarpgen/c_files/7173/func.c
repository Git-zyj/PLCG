/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7173
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7173 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7173
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
    var_16 = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) var_6)), (-20LL))))))) ^ (var_10)));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        for (unsigned short i_1 = 2; i_1 < 12; i_1 += 2) 
        {
            {
                var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) ((long long int) (unsigned short)63488)))));
                var_18 = ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_2 [i_0] [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)2047)))))) ? ((-(((/* implicit */int) (unsigned short)63488)))) : (((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) var_5))))))) <= ((-((~(((/* implicit */int) arr_0 [i_0]))))))));
                /* LoopSeq 4 */
                /* vectorizable */
                for (int i_2 = 3; i_2 < 13; i_2 += 2) 
                {
                    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) arr_4 [i_0] [i_0 + 1] [i_0])) ? (5264888475762516575LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-30058)))));
                    var_20 = ((/* implicit */short) ((((((/* implicit */_Bool) (signed char)-114)) ? (arr_2 [i_0] [i_1] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)4))))) > (((((/* implicit */_Bool) (signed char)4)) ? (arr_2 [i_0] [i_1] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_2])))))));
                    arr_6 [i_0] [i_0] = ((/* implicit */unsigned short) (-(((/* implicit */int) (signed char)-123))));
                }
                for (int i_3 = 0; i_3 < 14; i_3 += 2) /* same iter space */
                {
                    var_21 = ((short) (+((+(2725223183U)))));
                    arr_9 [i_0] [i_1] = ((/* implicit */unsigned int) (unsigned short)34207);
                    arr_10 [i_0] [i_0] [i_3] [6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((max((var_11), (((/* implicit */unsigned short) arr_4 [i_0] [i_1] [i_0])))), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) (signed char)35)))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)2050)) | (((/* implicit */int) arr_3 [i_0 + 1] [i_0])))))))));
                    var_22 = ((/* implicit */short) ((((((((/* implicit */_Bool) arr_5 [i_0] [i_1 - 2] [i_1] [i_1])) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)63488))))) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)255))))) * (((/* implicit */unsigned int) min((((/* implicit */int) arr_0 [i_0])), (arr_8 [i_0]))))));
                }
                for (int i_4 = 0; i_4 < 14; i_4 += 2) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (short i_5 = 2; i_5 < 11; i_5 += 4) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 14; i_6 += 2) 
                        {
                            {
                                var_23 -= ((/* implicit */signed char) var_9);
                                var_24 = ((/* implicit */signed char) var_0);
                                var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) (-((-(((/* implicit */int) (signed char)-21)))))))));
                            }
                        } 
                    } 
                    var_26 = ((/* implicit */short) (+(((((/* implicit */int) arr_16 [i_0 + 1] [i_0] [i_0] [i_0] [5LL] [i_0])) + (((/* implicit */int) arr_16 [i_0] [i_1 + 2] [i_1 + 2] [i_1] [i_4] [i_4]))))));
                }
                for (int i_7 = 0; i_7 < 14; i_7 += 2) /* same iter space */
                {
                    arr_23 [i_7] [i_0] [i_0] [i_0] = ((/* implicit */short) ((signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)62107))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_0]))))))));
                    var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_4 [i_0 + 2] [i_1 - 1] [i_7])) ? (((/* implicit */int) arr_4 [i_0 - 1] [i_1 - 1] [i_7])) : (((/* implicit */int) var_2)))) * ((+(((/* implicit */int) (unsigned short)2023)))))))));
                    var_28 = (unsigned short)34205;
                }
            }
        } 
    } 
}
