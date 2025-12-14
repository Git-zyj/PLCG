/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81410
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81410 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81410
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
    var_11 = ((/* implicit */unsigned short) var_8);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 23; i_2 += 1) 
                {
                    for (signed char i_3 = 1; i_3 < 21; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 23; i_4 += 1) 
                        {
                            {
                                arr_11 [i_2] [22LL] [i_2] [(short)11] [(short)11] [i_4] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((var_3), (((/* implicit */long long int) var_9))))))))) & (var_7)));
                                arr_12 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */short) min(((+(var_0))), (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) 3746126671261838947ULL))))) >> (((/* implicit */int) var_10)))))));
                                arr_13 [22U] [i_2] = ((/* implicit */unsigned short) (-(((/* implicit */int) (signed char)-38))));
                                arr_14 [i_0] [19U] [19U] [i_2] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_6 [i_2])) & ((~(((((/* implicit */_Bool) 9409725434963808695ULL)) ? (((/* implicit */int) arr_6 [i_2])) : (1586412441)))))));
                            }
                        } 
                    } 
                } 
                arr_15 [i_1] = ((/* implicit */unsigned int) (_Bool)1);
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned short) var_3);
}
