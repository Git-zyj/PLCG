/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87688
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87688 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87688
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
    for (short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 21; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned short) max((arr_5 [i_0]), (min((var_3), (((/* implicit */unsigned int) arr_4 [i_0] [i_1] [i_2] [i_3]))))));
                            arr_10 [i_0] [6] [i_0] [i_0] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_1 [i_0] [i_0]))))));
                            var_20 |= ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1] [12U])) ? (-5923837442642821470LL) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_0])))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 4426034229382121661LL))))) : (max((var_16), (var_17)))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_4 = 0; i_4 < 21; i_4 += 3) 
                {
                    for (unsigned int i_5 = 0; i_5 < 21; i_5 += 4) 
                    {
                        {
                            arr_19 [i_0] [i_0] [i_1] [i_4] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((((/* implicit */int) arr_6 [i_4] [i_0] [i_0])) ^ (((/* implicit */int) arr_12 [i_0] [i_1] [i_4]))))))) ? ((~(((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_0]))))))) : (((/* implicit */int) var_7))));
                            var_21 &= ((((((/* implicit */unsigned int) (-(((/* implicit */int) arr_17 [i_0] [i_0] [i_0] [i_4] [i_4] [i_5]))))) <= (((arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) ? (((/* implicit */unsigned int) arr_0 [i_0] [i_0])) : (973342518U))))) ? (((((/* implicit */_Bool) arr_5 [i_1])) ? (arr_13 [i_4] [i_5]) : (((/* implicit */int) arr_18 [i_0] [i_1] [i_4] [i_1] [i_5] [i_5])))) : (((/* implicit */int) ((unsigned short) arr_7 [i_1] [i_1]))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned int) var_16);
    var_23 = ((/* implicit */_Bool) (+(var_14)));
    var_24 ^= (((!((!(var_12))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) var_4)), (var_8))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_0)) : (var_14)))) ? (((/* implicit */int) ((unsigned char) (unsigned char)16))) : (((/* implicit */int) (_Bool)1)))));
    /* LoopNest 2 */
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        for (signed char i_7 = 0; i_7 < 13; i_7 += 4) 
        {
            {
                arr_25 [i_6] [i_7] = ((/* implicit */unsigned char) arr_1 [i_7] [i_7]);
                /* LoopNest 3 */
                for (signed char i_8 = 0; i_8 < 13; i_8 += 4) 
                {
                    for (unsigned char i_9 = 0; i_9 < 13; i_9 += 4) 
                    {
                        for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
                        {
                            {
                                var_25 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_3)) ? (arr_27 [i_6] [i_7] [i_8] [i_9]) : (arr_0 [i_8] [i_9]))))))));
                                var_26 ^= ((/* implicit */unsigned char) ((_Bool) (-(((/* implicit */int) var_12)))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
