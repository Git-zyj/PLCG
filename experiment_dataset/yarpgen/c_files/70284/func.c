/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70284
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70284 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70284
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
    var_17 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) var_15)), (((unsigned int) (unsigned char)29)))))));
    var_18 = ((/* implicit */unsigned char) min((((short) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_0))))), (((/* implicit */short) ((((/* implicit */int) (signed char)(-127 - 1))) <= (((/* implicit */int) (short)-28745)))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 12; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned char i_2 = 0; i_2 < 15; i_2 += 1) 
                {
                    arr_9 [(unsigned short)2] |= ((/* implicit */long long int) (~((+(((/* implicit */int) (unsigned char)226))))));
                    arr_10 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((unsigned short) arr_3 [i_2]));
                    var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) (-((+(((/* implicit */int) var_2)))))))));
                }
                /* LoopSeq 2 */
                for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 4) 
                {
                    var_20 -= ((/* implicit */unsigned int) ((long long int) (~(((((/* implicit */_Bool) (signed char)-17)) ? (((/* implicit */int) (unsigned char)50)) : (((/* implicit */int) (unsigned char)205)))))));
                    var_21 *= ((/* implicit */unsigned char) ((unsigned short) var_16));
                }
                /* vectorizable */
                for (unsigned long long int i_4 = 1; i_4 < 14; i_4 += 1) 
                {
                    var_22 = ((/* implicit */unsigned short) (((+(((/* implicit */int) var_5)))) <= (((((/* implicit */_Bool) 3648464645U)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (unsigned short)57960))))));
                    var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) (!(((/* implicit */_Bool) arr_11 [i_4 + 1] [i_1 + 3] [i_1 + 3])))))));
                    var_24 -= ((/* implicit */short) var_11);
                }
                arr_16 [i_0] = ((/* implicit */unsigned long long int) (((((!(((/* implicit */_Bool) -4597438010078025145LL)))) ? (((/* implicit */int) min((((/* implicit */short) var_1)), (arr_5 [i_0] [i_0] [i_0])))) : (((/* implicit */int) var_7)))) | (((/* implicit */int) max((((unsigned short) var_6)), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)67))) == (9704586048871591541ULL)))))))));
            }
        } 
    } 
}
