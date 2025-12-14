/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95425
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95425 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95425
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
    var_13 = max(((-(524288))), (((((/* implicit */_Bool) 524314)) ? (var_2) : (((/* implicit */int) var_4)))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (signed char i_2 = 2; i_2 < 10; i_2 += 3) 
            {
                {
                    var_14 = ((/* implicit */_Bool) min((max((max((524288), (524314))), (((/* implicit */int) ((_Bool) arr_6 [i_0] [i_0] [i_0]))))), (((/* implicit */int) var_0))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        for (short i_4 = 2; i_4 < 10; i_4 += 2) 
                        {
                            {
                                var_15 = ((/* implicit */short) var_1);
                                var_16 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1681118030075940645LL)) ? (65024U) : (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned short)3968), (((/* implicit */unsigned short) (signed char)127))))))))) ? (arr_2 [i_0]) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) min((((/* implicit */unsigned char) (signed char)15)), ((unsigned char)255)))), (min((((/* implicit */long long int) (unsigned short)0)), (9223372036854775807LL))))))));
                                var_17 = (short)-1;
                                var_18 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-105)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)250))) : (134213632U)));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
