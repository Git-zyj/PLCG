/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71750
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71750 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71750
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
    var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) ((((/* implicit */_Bool) max((var_15), (var_9)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (max((max((var_6), (2926673785U))), (((/* implicit */unsigned int) (~(((/* implicit */int) var_2))))))))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        var_20 ^= ((/* implicit */_Bool) (+(min((((int) var_7)), (((/* implicit */int) ((_Bool) 2926673794U)))))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 2; i_1 < 21; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    var_21 ^= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) 2926673794U)) ? (var_15) : (((/* implicit */int) var_18))))) ^ (((268435200U) | (((/* implicit */unsigned int) -349340260))))))) || (((/* implicit */_Bool) (-(((/* implicit */int) var_5)))))));
                    var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(min((((/* implicit */int) var_5)), (65535)))))) ? (((var_12) + (((((/* implicit */_Bool) var_8)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_14))))))) : (max((((/* implicit */unsigned int) ((3736037925U) >= (3736037925U)))), (((var_0) >> (((var_15) + (2125511603)))))))));
                }
            } 
        } 
        var_23 = ((/* implicit */_Bool) ((3736037924U) >> (((/* implicit */int) (_Bool)1))));
        arr_7 [i_0] = ((/* implicit */unsigned int) var_2);
    }
    /* vectorizable */
    for (int i_3 = 2; i_3 < 10; i_3 += 2) 
    {
        var_24 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) 68157628)) / (((((/* implicit */unsigned int) ((/* implicit */int) var_2))) | (var_3)))));
        var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_16)) ? ((-(558929366U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) 1807411599)) <= (818891751U)))))));
    }
    /* LoopNest 2 */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
        {
            {
                arr_18 [(_Bool)1] [(_Bool)1] [i_4] = ((/* implicit */unsigned int) -1055132322);
                var_26 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) -349340262)) ? (1050721470) : (((/* implicit */int) (_Bool)0)))), (((/* implicit */int) ((_Bool) 818891763U)))));
                var_27 = ((/* implicit */int) (_Bool)1);
            }
        } 
    } 
    var_28 = ((/* implicit */int) max((var_28), (((/* implicit */int) min((((/* implicit */unsigned int) (_Bool)1)), (1368293486U))))));
    var_29 &= ((/* implicit */_Bool) ((var_14) ? (((/* implicit */unsigned int) var_9)) : (((((/* implicit */_Bool) ((unsigned short) var_15))) ? (((/* implicit */unsigned int) var_8)) : (var_1)))));
}
