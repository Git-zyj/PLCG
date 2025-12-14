/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69861
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69861 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69861
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
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (signed char i_2 = 2; i_2 < 13; i_2 += 3) 
            {
                {
                    arr_10 [i_1] = ((/* implicit */_Bool) var_5);
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_15 [(unsigned short)9] [i_1] [i_2] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) (~(((/* implicit */int) (signed char)-56)))))) ? ((~(((/* implicit */int) var_3)))) : (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_0 [i_3])) ? (3921049327U) : (598271616U)))))));
                                arr_16 [12LL] [i_1] [i_1] [i_2] [i_3] [i_1] [i_4] = ((/* implicit */_Bool) ((max((var_6), (((/* implicit */long long int) arr_13 [i_4] [i_3] [i_2 - 2] [i_2 - 1] [i_2])))) ^ (((/* implicit */long long int) min((arr_8 [i_0] [i_1] [i_2 + 1]), (arr_8 [i_3] [i_1] [i_2 - 1]))))));
                            }
                        } 
                    } 
                    arr_17 [i_0] [i_1] [i_1] = ((/* implicit */long long int) max((9U), (((/* implicit */unsigned int) (signed char)13))));
                }
            } 
        } 
    } 
    var_10 = ((/* implicit */unsigned char) var_0);
}
