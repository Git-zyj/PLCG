/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92338
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92338 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92338
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
    var_14 -= ((/* implicit */_Bool) var_7);
    var_15 -= ((/* implicit */long long int) var_2);
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_0 - 1] [i_0] = ((((((_Bool) (_Bool)1)) ? (((/* implicit */long long int) ((/* implicit */int) ((-2143408047177261872LL) <= (((/* implicit */long long int) ((/* implicit */int) var_13))))))) : (arr_2 [i_0] [i_0 - 1]))) != (((/* implicit */long long int) ((/* implicit */int) min(((_Bool)1), ((_Bool)0))))));
                /* LoopNest 2 */
                for (long long int i_2 = 2; i_2 < 10; i_2 += 3) 
                {
                    for (long long int i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        {
                            arr_11 [i_0] [i_3] [i_3] [i_3] [i_2] [i_0] = ((/* implicit */long long int) var_10);
                            /* LoopSeq 3 */
                            for (long long int i_4 = 0; i_4 < 12; i_4 += 2) 
                            {
                                arr_14 [i_4] [i_3] [i_4] [i_1] [i_0 - 1] |= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((max((var_12), (arr_7 [i_3] [i_3] [i_3] [i_3]))) ? (((/* implicit */int) (!(((/* implicit */_Bool) -7525662302610748576LL))))) : (((/* implicit */int) arr_4 [i_4] [i_0 - 1])))))));
                                var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) ((var_13) ? (((long long int) var_6)) : (((/* implicit */long long int) ((/* implicit */int) var_5))))))));
                                arr_15 [i_4] &= ((/* implicit */_Bool) max((((/* implicit */long long int) (_Bool)1)), (5263797680349755986LL)));
                                var_17 = ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) >= (max((arr_2 [i_0] [i_0]), (((/* implicit */long long int) (_Bool)0)))));
                            }
                            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                            {
                                arr_19 [i_0] [i_2] [i_3] [i_5] = ((/* implicit */_Bool) (((~(((/* implicit */int) arr_0 [i_0 - 1])))) % (((((/* implicit */_Bool) -5263797680349756004LL)) ? (((/* implicit */int) arr_0 [i_0 - 1])) : (((/* implicit */int) arr_0 [i_0 - 1]))))));
                                arr_20 [i_0] [i_3] = ((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) var_12))) < (-5263797680349755981LL)))), (((((((/* implicit */long long int) ((/* implicit */int) var_11))) >= (arr_2 [i_0] [i_5]))) ? (min((6697412457539863215LL), (3227158022213694839LL))) : (((/* implicit */long long int) ((var_5) ? (((/* implicit */int) arr_7 [i_0] [i_2 - 2] [i_3] [i_5])) : (((/* implicit */int) var_5)))))))));
                            }
                            for (long long int i_6 = 0; i_6 < 12; i_6 += 1) 
                            {
                                var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_3] [i_0 - 1] [i_1] [i_2 + 1]))) : (arr_21 [i_0 - 1] [i_1] [i_2 - 2] [i_3] [i_6]))) < (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_4)))))))));
                                arr_23 [i_6] [i_3] [i_0] [i_0] [i_1] [i_0 - 1] = (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (-5115929571979076057LL));
                                arr_24 [i_0 - 1] [i_1] [i_0] [i_3] [i_6] = ((/* implicit */_Bool) ((var_3) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (_Bool)1)))) : (max((arr_3 [i_0] [i_0]), (var_7)))));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
}
