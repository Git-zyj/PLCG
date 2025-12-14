/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65580
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65580 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65580
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~((-2147483647 - 1))))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) < (((((/* implicit */_Bool) var_10)) ? (arr_0 [i_0] [i_0]) : (((/* implicit */int) var_0)))))))));
        var_13 &= (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_0]))))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        var_14 = ((/* implicit */signed char) arr_0 [i_1] [i_1]);
        /* LoopNest 3 */
        for (signed char i_2 = 0; i_2 < 22; i_2 += 3) 
        {
            for (signed char i_3 = 0; i_3 < 22; i_3 += 2) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    {
                        arr_14 [i_1] [i_1] [i_3] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [(_Bool)1] [(signed char)14])) ? (((/* implicit */int) arr_5 [i_1] [i_1])) : (((/* implicit */int) arr_12 [i_1] [i_2] [i_3] [i_1]))));
                        var_15 = ((/* implicit */int) arr_6 [(signed char)10] [i_4]);
                    }
                } 
            } 
        } 
    }
    var_16 = ((/* implicit */int) var_7);
    var_17 = ((/* implicit */int) var_11);
    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)15)) && ((_Bool)1)));
    var_19 = ((/* implicit */signed char) (~(((((/* implicit */int) var_7)) | (((/* implicit */int) var_3))))));
}
