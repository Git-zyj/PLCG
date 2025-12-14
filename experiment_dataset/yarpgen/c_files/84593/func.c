/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84593
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84593 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84593
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
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)21562)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) max((min(((short)-14696), ((short)14695))), (((/* implicit */short) ((((/* implicit */int) (short)14695)) != (((/* implicit */int) (short)-14695)))))))))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 14; i_0 += 2) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 16; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 1; i_3 < 14; i_3 += 2) 
                    {
                        for (short i_4 = 2; i_4 < 15; i_4 += 1) 
                        {
                            {
                                var_16 = ((short) ((((/* implicit */int) arr_5 [i_0] [i_0 + 1] [i_0] [i_0 - 2])) % (((/* implicit */int) (short)21052))));
                                arr_10 [i_2] [i_1] = (short)14695;
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_5 = 2; i_5 < 17; i_5 += 2) 
                    {
                        for (unsigned int i_6 = 4; i_6 < 17; i_6 += 3) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_15 [i_6] [i_0] [i_0]))));
                                arr_16 [i_2] [i_1] [i_2] [i_2] [i_5] [(_Bool)1] [i_6 - 2] = ((/* implicit */unsigned int) 2072026334);
                                arr_17 [i_1] [i_0] [i_2] [i_2] [i_6] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((-1), (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) || (((/* implicit */_Bool) arr_2 [i_0] [i_0])))))) : (min((arr_8 [i_0] [i_2]), (arr_8 [i_2] [i_2])))))), (((((/* implicit */_Bool) min((arr_9 [i_0] [i_2] [i_6]), (((/* implicit */short) arr_5 [i_6] [i_6] [i_6] [i_6]))))) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned short)38927), (arr_11 [i_2] [i_1] [i_1] [i_1] [11U] [i_1])))))))));
                                var_18 = ((/* implicit */_Bool) (unsigned short)22315);
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */unsigned short) 2072026334);
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned int) var_12);
    var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) max((((/* implicit */short) var_0)), (var_13))))) ? (-1) : ((((~(-244150729))) >> ((((~(((/* implicit */int) (short)3027)))) + (3032)))))));
}
