/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96058
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96058 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96058
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
        for (unsigned int i_1 = 4; i_1 < 23; i_1 += 4) 
        {
            {
                var_17 = ((/* implicit */unsigned long long int) (((~(arr_1 [i_1 + 2]))) % (((((arr_0 [i_1]) | (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))))) / (((/* implicit */long long int) 4294967295U))))));
                var_18 = ((/* implicit */int) (+(((((/* implicit */_Bool) 16383)) ? (((/* implicit */long long int) max((((/* implicit */unsigned int) var_9)), (var_16)))) : (((long long int) var_9))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_2 = 0; i_2 < 17; i_2 += 3) 
    {
        for (unsigned int i_3 = 3; i_3 < 16; i_3 += 4) 
        {
            for (short i_4 = 4; i_4 < 15; i_4 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 2; i_5 < 16; i_5 += 4) 
                    {
                        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_19 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) var_2))) ? (((/* implicit */unsigned long long int) ((((-510798143163890011LL) + (9223372036854775807LL))) << (((3341767740683744915ULL) - (3341767740683744915ULL)))))) : (((unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))) >= (var_11))))));
                                var_20 = ((/* implicit */unsigned short) ((long long int) -1338402086));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */int) (!((!(((/* implicit */_Bool) var_4))))));
                    var_22 *= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((min((((/* implicit */unsigned int) arr_13 [i_4] [i_4] [i_2] [i_2])), (var_8))) & (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)82)) || (((/* implicit */_Bool) var_3)))))))))));
                }
            } 
        } 
    } 
    var_23 = var_11;
    var_24 |= ((/* implicit */int) var_5);
}
