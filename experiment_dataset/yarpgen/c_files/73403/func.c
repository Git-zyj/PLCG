/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73403
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73403 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73403
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
    for (signed char i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned short i_2 = 0; i_2 < 16; i_2 += 4) /* same iter space */
                {
                    var_11 = ((/* implicit */signed char) min((((((((/* implicit */int) arr_6 [i_0] [i_1] [i_2])) + (2147483647))) << (((((/* implicit */int) var_4)) - (24698))))), (((((/* implicit */int) arr_6 [i_0] [i_1] [i_0])) * (((/* implicit */int) arr_6 [i_2] [i_2] [i_2]))))));
                    var_12 = ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65535))));
                }
                for (unsigned short i_3 = 0; i_3 < 16; i_3 += 4) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned short i_4 = 0; i_4 < 16; i_4 += 1) 
                    {
                        for (signed char i_5 = 0; i_5 < 16; i_5 += 2) 
                        {
                            {
                                arr_16 [i_1] [i_4] [i_3] [i_1] [i_0] = (-((((!(((/* implicit */_Bool) arr_14 [i_0] [i_1] [i_3] [i_3] [i_4] [i_5] [i_5])))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_9 [i_0] [i_3] [i_5])) : (((/* implicit */int) arr_8 [i_5] [i_4] [i_3])))) : (arr_13 [i_0] [i_1] [i_0] [i_1] [i_5]))));
                                var_13 = ((((/* implicit */_Bool) (unsigned short)65529)) ? (((((/* implicit */_Bool) min((15), (((/* implicit */int) (unsigned short)40990))))) ? (((/* implicit */int) (unsigned short)1)) : (((/* implicit */int) (unsigned char)4)))) : (min((arr_7 [i_0]), (arr_7 [i_1]))));
                            }
                        } 
                    } 
                    arr_17 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) (-((-(-18)))));
                }
                /* LoopNest 2 */
                for (unsigned char i_6 = 0; i_6 < 16; i_6 += 2) 
                {
                    for (unsigned char i_7 = 0; i_7 < 16; i_7 += 2) 
                    {
                        {
                            arr_23 [i_0] [i_1] [i_6] [i_1] = -140937061;
                            var_14 = ((/* implicit */unsigned char) (+(((((/* implicit */int) (unsigned char)19)) % ((+(arr_7 [i_1])))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_15 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)126)) ? (var_7) : (var_5)))) ? ((+(((/* implicit */int) (unsigned short)37248)))) : (((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_8)))))))) ? (min(((-(((/* implicit */int) var_1)))), (((/* implicit */int) max(((unsigned short)65533), ((unsigned short)27496)))))) : (((/* implicit */int) (((((-2147483647 - 1)) < (var_9))) && (((/* implicit */_Bool) var_7))))));
}
