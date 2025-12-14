/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90328
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90328 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90328
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
    var_17 ^= ((/* implicit */signed char) (-(((/* implicit */int) ((unsigned short) (signed char)-5)))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 13; i_2 += 1) 
                {
                    for (unsigned short i_3 = 1; i_3 < 11; i_3 += 3) 
                    {
                        {
                            arr_11 [i_0] [i_0] [i_0] [i_1] [i_3] = var_15;
                            var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) (signed char)101))));
                            var_19 = ((/* implicit */unsigned short) ((signed char) arr_4 [i_1] [(signed char)8]));
                        }
                    } 
                } 
                arr_12 [i_1] = ((signed char) (+((+(((/* implicit */int) (signed char)-27))))));
                var_20 = ((/* implicit */unsigned short) ((signed char) (unsigned short)33436));
                /* LoopSeq 2 */
                for (unsigned short i_4 = 0; i_4 < 13; i_4 += 1) 
                {
                    var_21 = ((signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_0))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) max((var_9), ((signed char)-56))))));
                    var_22 = ((/* implicit */unsigned short) (signed char)-33);
                    var_23 = var_6;
                }
                for (signed char i_5 = 0; i_5 < 13; i_5 += 1) 
                {
                    arr_17 [i_1] = var_7;
                    var_24 = ((/* implicit */signed char) (-(((/* implicit */int) max((((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)111))))), (min(((signed char)111), (var_15))))))));
                }
            }
        } 
    } 
}
