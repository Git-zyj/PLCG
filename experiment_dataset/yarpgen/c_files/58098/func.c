/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58098
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58098 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58098
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
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                {
                    var_20 -= ((/* implicit */unsigned char) (((!((!(var_5))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_15))))) : (((/* implicit */int) arr_1 [i_0] [i_0]))));
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_21 = ((/* implicit */signed char) (short)12990);
                        arr_11 [i_1] [i_2] = ((/* implicit */unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) min((var_11), (((/* implicit */int) var_10))))))))));
                    }
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) max((((/* implicit */int) ((signed char) ((((/* implicit */int) var_10)) == (((/* implicit */int) var_13)))))), (((((/* implicit */_Bool) min((106147758), (((/* implicit */int) (unsigned char)155))))) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_4)))))))));
}
