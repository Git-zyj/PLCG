/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6515
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6515 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6515
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
    var_18 = ((/* implicit */unsigned int) ((unsigned short) (-(((((/* implicit */_Bool) var_2)) ? (6488116730380294624LL) : (((/* implicit */long long int) ((/* implicit */int) var_14))))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 3; i_0 < 22; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */long long int) arr_0 [i_0 - 3] [i_0 - 1]);
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned short) ((long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */long long int) (-(((/* implicit */int) var_11))))) : (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (arr_2 [i_0]) : (var_8))))));
    }
    /* LoopNest 3 */
    for (short i_1 = 0; i_1 < 20; i_1 += 1) 
    {
        for (long long int i_2 = 0; i_2 < 20; i_2 += 2) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    var_19 -= ((/* implicit */_Bool) (((!(((/* implicit */_Bool) ((short) arr_2 [i_1]))))) ? (((/* implicit */int) ((short) (~(((/* implicit */int) arr_8 [i_1] [i_2])))))) : ((~(((/* implicit */int) arr_6 [i_1]))))));
                    /* LoopNest 2 */
                    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                    {
                        for (unsigned char i_5 = 0; i_5 < 20; i_5 += 4) 
                        {
                            {
                                var_20 += ((/* implicit */_Bool) arr_17 [i_5] [i_4] [i_5] [i_5] [i_2] [i_1]);
                                var_21 = ((/* implicit */unsigned int) ((long long int) var_12));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) ((unsigned int) ((unsigned int) var_14))))));
    var_23 = ((/* implicit */_Bool) var_1);
}
