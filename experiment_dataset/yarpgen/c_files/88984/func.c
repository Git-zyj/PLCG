/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88984
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88984 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88984
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
    var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_0) * (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))) || (((/* implicit */_Bool) ((((((/* implicit */_Bool) var_10)) && (var_3))) ? (((/* implicit */int) ((var_13) >= (((/* implicit */long long int) ((/* implicit */int) var_4)))))) : (((/* implicit */int) ((unsigned short) (unsigned short)46251))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (unsigned int i_2 = 3; i_2 < 8; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 11; i_4 += 1) 
                        {
                            {
                                arr_14 [i_1] = ((/* implicit */_Bool) ((((/* implicit */long long int) var_10)) * (((((/* implicit */_Bool) 6090715361734251687LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (6090715361734251691LL)))));
                                arr_15 [i_1] [i_4] = ((/* implicit */short) max((((/* implicit */unsigned int) max((((unsigned short) var_5)), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_5)))))))), ((~(min((arr_13 [i_1]), (((/* implicit */unsigned int) var_11))))))));
                            }
                        } 
                    } 
                    arr_16 [i_0] [i_1] [i_1] = ((/* implicit */signed char) ((unsigned long long int) var_14));
                    var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) ((_Bool) ((_Bool) arr_2 [i_0] [i_2 - 1] [i_2 - 2]))))));
                }
            } 
        } 
    } 
    var_17 |= var_1;
}
