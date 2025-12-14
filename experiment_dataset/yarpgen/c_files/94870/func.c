/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94870
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94870 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94870
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
    for (int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        var_11 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) arr_1 [i_0])) & (arr_2 [i_0]))))));
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 1; i_2 < 12; i_2 += 1) 
            {
                for (signed char i_3 = 2; i_3 < 10; i_3 += 4) 
                {
                    {
                        var_12 = ((/* implicit */_Bool) arr_5 [i_0]);
                        /* LoopSeq 2 */
                        for (unsigned short i_4 = 0; i_4 < 14; i_4 += 4) 
                        {
                            arr_12 [i_1] [i_1] [i_1] |= ((/* implicit */signed char) (unsigned short)21241);
                            var_13 = ((/* implicit */_Bool) min(((+(((/* implicit */int) (unsigned short)2032)))), ((+(((/* implicit */int) (unsigned short)63942))))));
                        }
                        /* vectorizable */
                        for (signed char i_5 = 4; i_5 < 10; i_5 += 2) 
                        {
                            var_14 -= ((/* implicit */unsigned short) arr_5 [i_0]);
                            arr_15 [i_5 + 3] [i_3] [i_1] [i_1] [i_1] [i_1] [4LL] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_8 [i_0] [i_1] [i_3 + 4] [i_5 + 4]))));
                        }
                    }
                } 
            } 
        } 
    }
    var_15 = ((((_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-95))))) : (((/* implicit */int) ((max((var_5), (var_2))) == (((/* implicit */int) ((signed char) var_3)))))));
}
