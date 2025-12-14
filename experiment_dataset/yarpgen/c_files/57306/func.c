/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57306
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57306 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57306
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
    for (short i_0 = 4; i_0 < 21; i_0 += 1) 
    {
        var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) var_8))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_19 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((short) ((_Bool) var_12)))) ? (min(((+(((/* implicit */int) arr_0 [i_1])))), ((~(((/* implicit */int) var_12)))))) : (((/* implicit */int) arr_5 [i_1] [i_2]))));
                    var_20 = ((/* implicit */_Bool) min((((short) (-(((/* implicit */int) (short)9955))))), (((/* implicit */short) ((((/* implicit */int) arr_4 [i_0 + 1] [i_1 + 1] [i_1 + 1])) <= (((/* implicit */int) (short)16293)))))));
                    var_21 = min((max((((/* implicit */short) ((((/* implicit */int) (short)-22781)) == (((/* implicit */int) (short)4611))))), (((short) (short)-15566)))), (arr_0 [i_1]));
                }
            } 
        } 
        arr_6 [(_Bool)1] [i_0] = ((/* implicit */short) (~(((/* implicit */int) (short)22766))));
    }
    for (short i_3 = 0; i_3 < 19; i_3 += 1) 
    {
        /* LoopNest 3 */
        for (short i_4 = 0; i_4 < 19; i_4 += 4) 
        {
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    {
                        arr_16 [i_6] [i_4] [i_3] [i_3] = ((_Bool) ((_Bool) arr_3 [i_3] [i_3] [i_3]));
                        arr_17 [i_3] [i_4] [i_4] [i_3] [i_6] [i_6] = ((_Bool) (short)-22744);
                        arr_18 [i_6] [i_3] [i_3] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~((-(((/* implicit */int) (short)-14972))))))) ? (((((/* implicit */_Bool) (short)18)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-32749)))) : (((/* implicit */int) min(((_Bool)1), ((_Bool)1))))));
                    }
                } 
            } 
        } 
        arr_19 [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_3] [i_3] [i_3])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_12 [i_3] [i_3] [i_3]))))) ? (((/* implicit */int) min((arr_3 [i_3] [i_3] [i_3]), (((/* implicit */short) var_12))))) : (((/* implicit */int) max((var_12), (arr_12 [(short)6] [i_3] [i_3]))))));
        var_22 += (_Bool)1;
    }
    var_23 = var_3;
}
