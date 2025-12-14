/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77904
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77904 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77904
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
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 6; i_1 += 4) 
        {
            {
                arr_4 [i_1 + 2] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_1 [i_1])) ? (1573559993) : (var_4))))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 10; i_2 += 4) 
                {
                    for (unsigned short i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 10; i_4 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */int) ((((((/* implicit */_Bool) (+(((/* implicit */int) arr_8 [i_0]))))) ? (max((-1573559993), (arr_1 [6]))) : (((/* implicit */int) max((var_9), (arr_5 [2] [i_1 + 1] [i_0])))))) < (arr_6 [i_2])));
                                var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned short)65535)) && (((/* implicit */_Bool) var_5)))) ? (((int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */int) (unsigned short)3756)) : (((/* implicit */int) (unsigned short)24836))))) : ((+((~(((/* implicit */int) var_15)))))))))));
                            }
                        } 
                    } 
                } 
                var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-((-(((/* implicit */int) arr_11 [i_0] [i_1] [i_1]))))))) ? ((-(var_4))) : ((-(var_16)))));
                var_21 = ((/* implicit */int) min((var_21), (((((((/* implicit */int) (unsigned short)43183)) - (1142115576))) + (((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_10))))))))))));
            }
        } 
    } 
    var_22 = max((((/* implicit */int) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_9))))), (min(((unsigned short)16682), (var_15)))))), (((((/* implicit */int) var_3)) ^ (((/* implicit */int) var_7)))));
}
