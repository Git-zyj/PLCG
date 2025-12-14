/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64124
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64124 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64124
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
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 3; i_2 < 23; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 25; i_3 += 3) 
                    {
                        {
                            arr_11 [i_1] = ((/* implicit */unsigned long long int) max(((unsigned short)6294), (((/* implicit */unsigned short) (short)-15350))));
                            var_15 *= arr_9 [10ULL] [i_1] [i_1 - 1] [i_3] [i_1 - 1];
                        }
                    } 
                } 
                var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) arr_2 [i_0]))) ? (18446744073709551605ULL) : (((unsigned long long int) var_11)))))));
                arr_12 [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)202)) ? (arr_2 [i_1 - 1]) : (((/* implicit */int) (unsigned char)202))));
                var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)196)) ? (4279764339U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)53)))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) var_1);
    /* LoopNest 2 */
    for (unsigned long long int i_4 = 2; i_4 < 23; i_4 += 3) 
    {
        for (unsigned char i_5 = 1; i_5 < 22; i_5 += 3) 
        {
            {
                var_19 = ((/* implicit */unsigned long long int) arr_15 [i_5 + 3]);
                arr_19 [i_4] [i_4] [i_4] = ((((/* implicit */_Bool) ((signed char) (signed char)-14))) ? (arr_4 [i_4 + 2] [0]) : (((/* implicit */int) arr_5 [i_4 + 1] [i_4 + 2])));
                var_20 += ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) max((((/* implicit */unsigned char) arr_7 [i_4 - 2] [i_5 + 3] [14ULL])), (arr_8 [i_5] [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_5 - 1])))) : ((+(((/* implicit */int) arr_8 [i_5] [i_5 + 3] [i_5] [i_5 + 2] [i_5 - 1]))))));
            }
        } 
    } 
    var_21 &= ((/* implicit */unsigned int) var_10);
}
