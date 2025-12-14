/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84566
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84566 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84566
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
    /* LoopSeq 2 */
    for (int i_0 = 2; i_0 < 17; i_0 += 3) 
    {
        var_17 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_3 [i_0 - 1]) ? (min((((/* implicit */int) var_10)), (1350203329))) : (((arr_3 [i_0]) ? (((/* implicit */int) arr_3 [i_0])) : (arr_1 [i_0])))))) ? (((/* implicit */int) min(((signed char)31), (((/* implicit */signed char) arr_3 [i_0]))))) : (((arr_1 [i_0]) & (((/* implicit */int) (!(arr_3 [i_0]))))))));
        var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) -1350203330))));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 15; i_1 += 2) 
        {
            for (signed char i_2 = 4; i_2 < 17; i_2 += 2) 
            {
                {
                    var_19 = ((/* implicit */_Bool) max((var_19), ((((~(((/* implicit */int) ((((/* implicit */_Bool) (signed char)-32)) || (((/* implicit */_Bool) (signed char)-97))))))) != ((((!(((/* implicit */_Bool) -1350203326)))) ? (arr_1 [i_0]) : (((/* implicit */int) ((_Bool) (_Bool)1)))))))));
                    var_20 = ((/* implicit */_Bool) max((var_20), ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_1) / (((/* implicit */int) var_6))))) ? (0) : (((((/* implicit */int) arr_0 [i_0] [i_0])) + (var_8))))))))));
                    var_21 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0 - 1])) ? (arr_6 [i_0] [i_0] [i_0] [i_1 - 1]) : (arr_6 [i_0] [i_1] [i_1] [i_1 - 1])))) ? (((/* implicit */int) ((_Bool) (_Bool)1))) : (arr_6 [i_1] [i_1] [i_1] [i_1 + 3]));
                    var_22 = ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_3 [i_2 - 2])) : (((/* implicit */int) var_0)));
                    var_23 = ((((/* implicit */int) (_Bool)0)) > (((/* implicit */int) (signed char)99)));
                }
            } 
        } 
        var_24 += ((/* implicit */signed char) (!(((/* implicit */_Bool) 1350203329))));
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        arr_11 [i_3] = ((/* implicit */signed char) (!(arr_8 [i_3] [i_3])));
        var_25 |= var_5;
    }
    var_26 = (signed char)-3;
}
