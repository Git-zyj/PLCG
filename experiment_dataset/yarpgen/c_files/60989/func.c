/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60989
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60989 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60989
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
    var_14 = ((/* implicit */unsigned int) (-(((/* implicit */int) var_9))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (int i_1 = 3; i_1 < 12; i_1 += 4) 
        {
            for (unsigned int i_2 = 1; i_2 < 14; i_2 += 4) 
            {
                {
                    var_15 = ((/* implicit */unsigned int) ((max((var_0), (var_9))) ? (((/* implicit */int) min((var_5), (var_1)))) : (max((var_4), (((/* implicit */int) var_5))))));
                    var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) (-(((/* implicit */int) max((var_12), (((/* implicit */unsigned char) var_0)))))))) : (max((var_10), (((/* implicit */unsigned int) var_11))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 1; i_3 < 14; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 3; i_4 < 15; i_4 += 4) 
                        {
                            {
                                var_17 = ((signed char) ((var_13) ? (var_3) : (((/* implicit */int) var_12))));
                                var_18 &= ((/* implicit */unsigned short) max(((((!(((/* implicit */_Bool) var_3)))) ? ((~(var_2))) : (((/* implicit */unsigned int) min((var_4), (((/* implicit */int) var_13))))))), (((((/* implicit */_Bool) (-(((/* implicit */int) var_8))))) ? (((unsigned int) var_4)) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_8)))))))));
                                arr_12 [9LL] [i_1] = ((/* implicit */long long int) (+(((/* implicit */int) ((_Bool) var_10)))));
                            }
                        } 
                    } 
                    var_19 = (~(((/* implicit */int) ((signed char) ((unsigned short) var_13)))));
                    /* LoopSeq 1 */
                    for (unsigned int i_5 = 3; i_5 < 13; i_5 += 3) 
                    {
                        var_20 &= ((/* implicit */unsigned short) var_2);
                        arr_16 [i_1] = ((/* implicit */unsigned int) var_1);
                    }
                }
            } 
        } 
    } 
}
