/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89204
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89204 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89204
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
    for (unsigned long long int i_0 = 1; i_0 < 14; i_0 += 1) 
    {
        for (short i_1 = 3; i_1 < 13; i_1 += 2) 
        {
            {
                var_13 |= ((/* implicit */long long int) (+(min((((/* implicit */int) arr_3 [i_1 - 2] [i_0 - 1])), (1313362666)))));
                /* LoopSeq 3 */
                for (int i_2 = 1; i_2 < 14; i_2 += 2) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 12; i_3 += 1) 
                    {
                        for (signed char i_4 = 3; i_4 < 12; i_4 += 4) 
                        {
                            {
                                var_14 = var_6;
                                var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) 15199763999885525876ULL))));
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-5))));
                }
                for (int i_5 = 1; i_5 < 14; i_5 += 2) /* same iter space */
                {
                    var_17 = ((/* implicit */unsigned short) arr_1 [i_5 + 2]);
                    var_18 = ((((/* implicit */_Bool) 1910167705)) ? (((long long int) (unsigned char)236)) : (((/* implicit */long long int) ((/* implicit */int) var_2))));
                }
                for (int i_6 = 1; i_6 < 14; i_6 += 2) /* same iter space */
                {
                    var_19 = ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((int) (unsigned short)31260)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) max((arr_6 [i_0] [i_0]), (((/* implicit */unsigned short) (_Bool)1)))))))));
                    arr_20 [0LL] [i_0] [i_0] [i_0] = ((/* implicit */long long int) max(((~(((/* implicit */int) arr_16 [i_0])))), (((/* implicit */int) ((_Bool) arr_16 [i_0])))));
                    /* LoopNest 2 */
                    for (unsigned char i_7 = 2; i_7 < 15; i_7 += 1) 
                    {
                        for (int i_8 = 3; i_8 < 15; i_8 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_8 [i_1 + 2] [i_0 + 2] [i_1 + 2] [i_8 + 1]), (((/* implicit */long long int) arr_13 [i_1 + 3] [i_1] [i_8 - 2] [i_7] [i_0 - 1]))))) ? (((((/* implicit */_Bool) 1544890709)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)111))) : (448U))) : (((/* implicit */unsigned int) arr_17 [i_0] [i_6] [i_0] [i_0]))));
                                var_21 = ((((/* implicit */_Bool) (~(arr_11 [i_6 + 2] [i_0 + 1] [i_8 - 2] [i_1 - 1])))) ? (((/* implicit */unsigned int) max((arr_7 [i_6 + 2] [i_0 - 1] [i_8 + 1] [i_1 + 1]), (arr_7 [i_6 - 1] [i_0 + 1] [i_8 - 2] [i_1 + 3])))) : (((arr_11 [i_6 + 2] [i_0 + 2] [i_8 - 1] [i_1 - 1]) / (((/* implicit */unsigned int) arr_7 [i_6 + 2] [i_0 - 1] [i_8 - 2] [i_1 + 3])))));
                                arr_26 [i_0] [i_7] [i_7] [i_7] [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((signed char) (_Bool)0))) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) : (arr_5 [i_0] [(signed char)7] [i_8]))) != (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_0])))));
                            }
                        } 
                    } 
                }
                var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) (unsigned short)17774)) ? (-1375670140) : (var_8))), (((/* implicit */int) arr_22 [i_0] [i_0 + 2] [i_1 + 2] [i_1] [i_1]))))))))));
                arr_27 [i_0] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)0)) - (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_1)))))))));
            }
        } 
    } 
    var_23 = ((/* implicit */short) var_4);
}
