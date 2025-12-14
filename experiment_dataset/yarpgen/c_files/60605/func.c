/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60605
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60605 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60605
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
    var_14 = ((/* implicit */_Bool) var_9);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) ((((/* implicit */int) arr_1 [i_0] [i_0])) * (((/* implicit */int) (!(((/* implicit */_Bool) max((-6966103007775344185LL), (((/* implicit */long long int) (_Bool)1)))))))))))));
                /* LoopSeq 3 */
                for (long long int i_2 = 0; i_2 < 17; i_2 += 2) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 3; i_3 < 15; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 17; i_4 += 2) 
                        {
                            {
                                var_16 = ((/* implicit */_Bool) (~(((/* implicit */int) var_3))));
                                arr_13 [i_0] = ((((/* implicit */long long int) ((/* implicit */int) var_13))) % (-6LL));
                                arr_14 [i_4] [i_3] [i_0] [10LL] [i_0] = ((/* implicit */unsigned short) var_13);
                                var_17 *= ((/* implicit */long long int) arr_11 [(_Bool)1] [i_1] [i_1] [(unsigned short)16] [i_1] [i_1] [i_2]);
                            }
                        } 
                    } 
                    arr_15 [i_0] [i_1] = arr_12 [i_0] [i_0] [i_0] [i_0] [i_0];
                }
                for (long long int i_5 = 0; i_5 < 17; i_5 += 2) /* same iter space */
                {
                    var_18 = ((((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_4))) / (-31LL)))) ? (((((/* implicit */long long int) ((/* implicit */int) var_1))) - (-6966103007775344185LL))) : (((/* implicit */long long int) (~(((/* implicit */int) arr_1 [i_5] [i_1]))))))) / (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_5] [i_0] [i_0] [i_0]))));
                    var_19 = ((((/* implicit */_Bool) (unsigned short)58671)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_5] [9LL]))) : ((~((+(arr_10 [i_0] [i_0] [(_Bool)1] [i_0] [i_0] [i_0]))))));
                }
                for (long long int i_6 = 0; i_6 < 17; i_6 += 1) 
                {
                    var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) (~(((/* implicit */int) var_6)))))));
                    arr_21 [i_0] [i_0] [i_6] = ((/* implicit */long long int) ((((/* implicit */long long int) (~(((/* implicit */int) var_1))))) > (-36LL)));
                }
                /* LoopNest 2 */
                for (unsigned short i_7 = 0; i_7 < 17; i_7 += 4) 
                {
                    for (unsigned short i_8 = 1; i_8 < 15; i_8 += 2) 
                    {
                        {
                            var_21 = ((/* implicit */_Bool) min((((/* implicit */long long int) var_5)), (arr_8 [i_0] [i_1] [i_7])));
                            arr_28 [i_0] [i_7] [i_8 - 1] = ((/* implicit */_Bool) arr_7 [i_8] [i_8 - 1] [i_8 - 1] [i_0]);
                        }
                    } 
                } 
            }
        } 
    } 
    var_22 += ((/* implicit */_Bool) var_6);
}
