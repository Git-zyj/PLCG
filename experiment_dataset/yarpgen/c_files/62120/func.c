/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62120
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
    var_11 |= ((_Bool) (signed char)3);
    var_12 ^= ((/* implicit */_Bool) ((((/* implicit */int) ((signed char) var_5))) * (((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        var_13 += ((/* implicit */_Bool) (+(((((_Bool) var_8)) ? (((var_0) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_3 [i_0])))) : (((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) var_7)))))))));
        var_14 = ((/* implicit */_Bool) (~(((/* implicit */int) max((var_7), (((/* implicit */signed char) arr_3 [i_0])))))));
        arr_4 [i_0] [i_0] = ((/* implicit */signed char) max((((((/* implicit */int) arr_0 [i_0])) * (((/* implicit */int) arr_2 [i_0])))), (((/* implicit */int) arr_2 [i_0]))));
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (signed char i_2 = 2; i_2 < 12; i_2 += 3) 
            {
                for (signed char i_3 = 0; i_3 < 13; i_3 += 2) 
                {
                    {
                        var_15 &= ((/* implicit */_Bool) ((signed char) ((((((/* implicit */int) arr_0 [i_2])) + (((/* implicit */int) arr_11 [i_0])))) - ((+(((/* implicit */int) arr_10 [i_0] [i_1] [i_2] [i_3] [i_3])))))));
                        var_16 ^= ((/* implicit */_Bool) ((min((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_5 [i_0] [i_0])) : (((/* implicit */int) var_0)))), (((/* implicit */int) ((_Bool) (signed char)(-127 - 1)))))) * (((((/* implicit */int) ((_Bool) var_5))) & (((/* implicit */int) (signed char)-96))))));
                        /* LoopSeq 1 */
                        for (signed char i_4 = 0; i_4 < 13; i_4 += 2) 
                        {
                            var_17 = ((/* implicit */_Bool) var_8);
                            var_18 += ((((((((/* implicit */int) (signed char)-104)) > (((/* implicit */int) var_8)))) ? ((-(((/* implicit */int) arr_13 [i_1] [i_1] [i_2] [i_4] [i_4] [(_Bool)1] [i_1])))) : (((arr_9 [i_0] [(signed char)0]) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_9)))))) == (((/* implicit */int) (_Bool)0)));
                            var_19 = ((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_8 [i_0] [i_0] [i_2 + 1])) : (((/* implicit */int) arr_15 [i_0] [i_4] [i_2 + 1] [i_4] [i_4])))));
                        }
                    }
                } 
            } 
        } 
    }
}
