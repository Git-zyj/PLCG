/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94954
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94954 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94954
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
    var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? (min((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) var_9)) : (var_0))), (((/* implicit */unsigned long long int) (short)-7498)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))));
    var_13 = ((unsigned int) (unsigned short)25754);
    var_14 = ((/* implicit */int) var_8);
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        var_15 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) (short)-7527)))) ? (((((/* implicit */_Bool) max((((/* implicit */long long int) arr_0 [i_0])), (arr_3 [i_0])))) ? (((/* implicit */long long int) var_9)) : (((((/* implicit */_Bool) -2248089161280809856LL)) ? (arr_3 [i_0]) : (((/* implicit */long long int) var_5)))))) : (((/* implicit */long long int) min((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (unsigned short)38834)) : (((/* implicit */int) arr_2 [7] [7])))), (arr_0 [i_0]))))));
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        for (int i_4 = 0; i_4 < 24; i_4 += 3) 
                        {
                            {
                                var_16 |= ((/* implicit */unsigned int) (unsigned short)64436);
                                arr_13 [i_1] = ((/* implicit */_Bool) 3195592181337632596LL);
                                var_17 = ((/* implicit */unsigned long long int) 1581801968);
                                arr_14 [i_1] [i_1] [i_2] [i_1] [i_1] [17U] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (_Bool)1)), (((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_2] [i_0] [i_4] [i_2] [(signed char)23])) ? (var_9) : (((/* implicit */unsigned int) var_1))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_3 [i_2])))) : (16383U)));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 1; i_5 < 21; i_5 += 1) 
                    {
                        for (short i_6 = 0; i_6 < 24; i_6 += 4) 
                        {
                            {
                                arr_19 [i_5] [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) (!(((/* implicit */_Bool) arr_5 [i_2] [i_1])))))) || ((!((!(((/* implicit */_Bool) arr_10 [i_5] [i_0] [i_5] [i_2] [i_1] [i_1] [i_0]))))))));
                                var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_1] [12LL] [(unsigned short)1] [i_5] [i_1])) ? (((/* implicit */int) ((unsigned short) var_0))) : (((/* implicit */int) (short)-24933))))) ? (((/* implicit */int) ((short) arr_16 [i_2] [i_6] [i_2] [i_0] [i_6] [i_6]))) : (((/* implicit */int) arr_16 [i_0] [i_0] [i_2] [i_5] [i_2] [(signed char)1]))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */unsigned char) min(((-(((/* implicit */int) (signed char)7)))), (min((((((/* implicit */_Bool) arr_17 [i_2] [i_1] [i_1] [i_1] [i_1] [i_0] [i_0])) ? (arr_0 [i_0]) : (((/* implicit */int) arr_11 [i_2] [i_1] [i_0])))), (((/* implicit */int) (short)7532))))));
                    var_20 -= ((/* implicit */short) (~(var_4)));
                }
            } 
        } 
    }
    var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (short)22843)) ? (1330950111) : (((/* implicit */int) (unsigned short)40824)))), (((((/* implicit */_Bool) 1324691119)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (signed char)(-127 - 1)))))))) ? (var_8) : (((/* implicit */unsigned long long int) var_2))));
}
