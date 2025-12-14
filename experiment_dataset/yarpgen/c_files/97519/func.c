/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97519
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97519 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97519
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
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        arr_2 [i_0] = max((arr_0 [i_0]), (max(((-(-270871328))), (1240597048))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            for (int i_2 = 1; i_2 < 14; i_2 += 3) 
            {
                {
                    var_19 = arr_0 [i_2];
                    var_20 -= arr_1 [i_0];
                }
            } 
        } 
        /* LoopNest 2 */
        for (int i_3 = 2; i_3 < 11; i_3 += 3) 
        {
            for (int i_4 = 0; i_4 < 15; i_4 += 3) 
            {
                {
                    var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) (-(max((arr_3 [i_3 - 2] [i_3 - 2] [i_3 + 1]), (((/* implicit */unsigned int) -1240597048)))))))));
                    arr_12 [i_4] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_4])) ? (1240597080) : ((~(1240597048)))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1240597047)) ? (-517928715) : ((-2147483647 - 1))))) ? (arr_9 [i_3 + 1] [i_3 + 3] [i_4] [i_3 - 1]) : (1790084197)))) : ((~(1629367340U)))));
                    var_22 = 1237571587U;
                    var_23 = ((/* implicit */int) 4294967287U);
                    var_24 = ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 879097639)) ? (695803883U) : (((/* implicit */unsigned int) arr_8 [i_0] [i_3]))))) || (((/* implicit */_Bool) 1422280174)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_3 + 4] [i_3 + 4])))))) : (min((((/* implicit */unsigned int) 1240597074)), (((((/* implicit */_Bool) 520093696)) ? (3224176210U) : (((/* implicit */unsigned int) -648794021)))))));
                }
            } 
        } 
    }
    var_25 = ((/* implicit */unsigned int) (+(1240597030)));
    var_26 ^= -39631907;
    var_27 = var_1;
}
