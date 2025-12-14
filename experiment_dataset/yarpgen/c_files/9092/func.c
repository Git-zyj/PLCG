/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9092
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9092 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9092
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
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        var_11 = ((((2095260144U) == (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) 2187660038U)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) : (((unsigned int) arr_0 [i_0])));
        /* LoopSeq 2 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) /* same iter space */
        {
            arr_4 [i_0] [i_0] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((_Bool) 2187660027U)) ? (2107307245U) : (((2187660055U) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))) ? (min((((/* implicit */unsigned int) arr_0 [i_1 - 1])), (471914585U))) : (((/* implicit */unsigned int) (-(((/* implicit */int) max(((_Bool)1), (arr_1 [24U])))))))));
            /* LoopNest 2 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_12 = max((((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) 1287923416U)))) ^ (((unsigned int) 4294967295U)))), (((((((/* implicit */_Bool) 2187660050U)) && (((/* implicit */_Bool) 2107307265U)))) ? (2107307270U) : (((unsigned int) 2187660058U)))));
                        arr_11 [i_0] [i_2] [i_0] [i_3 - 1] = min((min((arr_10 [i_3] [i_3] [i_3] [i_3] [i_3 - 1]), (arr_10 [i_3] [i_3 - 1] [9U] [22U] [i_3 - 1]))), (((((/* implicit */_Bool) 256990388U)) ? (10U) : (2560515293U))));
                    }
                } 
            } 
        }
        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) /* same iter space */
        {
            arr_14 [i_0] [i_0] [i_4] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(((((/* implicit */unsigned int) ((/* implicit */int) arr_9 [(_Bool)1] [(_Bool)1]))) / (var_2))))))));
            arr_15 [i_0] [(_Bool)1] [(_Bool)1] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_13 [i_0])), (4294967279U)))) ? (arr_8 [(_Bool)1] [i_4] [i_4] [i_4]) : (2107307246U))), (min((((((/* implicit */_Bool) var_10)) ? (2187660064U) : (arr_3 [i_0] [22U]))), (((var_4) & (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))));
            var_13 = ((/* implicit */_Bool) 2187660062U);
        }
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        var_14 = ((/* implicit */unsigned int) arr_1 [i_5]);
        var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((2187660067U), (arr_2 [i_5])))) ? (((((/* implicit */_Bool) arr_8 [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_5])) ? (1079758709U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((var_9) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_5]))) : (2422221420U))) < (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))));
    }
    /* vectorizable */
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        var_16 = ((/* implicit */unsigned int) ((_Bool) arr_6 [(_Bool)1] [i_6] [i_6]));
        arr_21 [12U] = ((/* implicit */unsigned int) arr_12 [i_6] [(_Bool)1] [i_6]);
    }
    var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) ((((/* implicit */_Bool) max((min((2677425219U), (2677425203U))), (((/* implicit */unsigned int) ((_Bool) 2187660050U)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (((_Bool)1) ? (2107307230U) : (2187660061U)))))))) : (((var_9) ? ((((_Bool)1) ? (var_5) : (2187660065U))) : (var_6))))))));
    var_18 = ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) 2187660040U)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_9))))) * (var_10)))) ? ((+((((_Bool)1) ? (3011079412U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))) : (var_6));
    var_19 = ((((/* implicit */unsigned int) ((/* implicit */int) ((((unsigned int) 2187660069U)) < ((((_Bool)1) ? (474780298U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))))) == (var_6));
}
