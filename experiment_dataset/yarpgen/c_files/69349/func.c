/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69349
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69349 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69349
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
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) ? (max(((~(((/* implicit */int) var_5)))), (((/* implicit */int) (short)-24799)))) : (((/* implicit */int) (_Bool)1))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) arr_0 [i_0]))));
        var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) ((((((/* implicit */int) (unsigned short)3232)) >= (((/* implicit */int) (unsigned char)0)))) && (((/* implicit */_Bool) ((unsigned char) (unsigned char)177))))))));
        var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0]))) : (arr_1 [(unsigned char)1] [(unsigned char)1]))))));
        /* LoopNest 2 */
        for (signed char i_1 = 3; i_1 < 9; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_9 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */signed char) (_Bool)1);
                    arr_10 [i_1] [i_0] [i_1] [i_2] = ((/* implicit */unsigned char) ((arr_1 [i_1 + 1] [i_2]) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)2340)))));
                }
            } 
        } 
        arr_11 [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_6 [i_0] [(unsigned short)3] [(_Bool)1] [i_0])) : (((/* implicit */int) var_13)))) - (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0] [i_0])))))));
    }
    for (unsigned short i_3 = 0; i_3 < 19; i_3 += 1) 
    {
        var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((arr_13 [i_3]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_13 [i_3])))), (((/* implicit */int) arr_12 [i_3] [i_3]))))) ? ((-(((((/* implicit */_Bool) (unsigned char)42)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_14 [i_3] [i_3])))))) : (max((((/* implicit */int) max((((/* implicit */short) (unsigned char)230)), ((short)-18)))), (((((/* implicit */_Bool) (unsigned char)245)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_13 [i_3])))))))))));
        arr_15 [i_3] [i_3] |= ((/* implicit */unsigned short) max((((/* implicit */int) min((min((var_6), ((unsigned char)233))), (((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)184)) <= (((/* implicit */int) arr_14 [(signed char)13] [i_3])))))))), ((-(((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), (arr_14 [(unsigned short)10] [i_3]))))))));
    }
    var_19 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) (unsigned short)65524)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0)))))));
}
