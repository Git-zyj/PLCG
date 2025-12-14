/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8376
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8376 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8376
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
    for (signed char i_0 = 1; i_0 < 11; i_0 += 2) 
    {
        var_12 = max((((/* implicit */short) ((((/* implicit */int) (unsigned char)177)) < (((/* implicit */int) (_Bool)0))))), (arr_2 [i_0]));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 10; i_1 += 2) 
        {
            for (signed char i_2 = 3; i_2 < 10; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_0] = ((/* implicit */signed char) ((long long int) (((_Bool)1) ? (((/* implicit */int) arr_0 [i_1 + 2])) : (((/* implicit */int) arr_0 [i_1 - 2])))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 9; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 4; i_4 < 11; i_4 += 1) 
                        {
                            {
                                var_13 = ((/* implicit */short) var_9);
                                var_14 *= ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (-2045952982)));
                                var_15 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-2))))) ? (min((((/* implicit */unsigned long long int) (_Bool)1)), (4074810765938500377ULL))) : (((/* implicit */unsigned long long int) ((var_11) ? (((/* implicit */int) arr_12 [(signed char)2] [i_0] [i_0] [i_3] [(short)10])) : (((/* implicit */int) (short)14596))))))) < (min((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) arr_10 [i_0] [i_0] [i_0]))))), (var_7)))));
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */long long int) arr_3 [i_0]);
                }
            } 
        } 
    }
    var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((max((var_2), (((/* implicit */int) (signed char)-1)))), (var_5)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */int) (short)28672)), (265182115))))))) : (((/* implicit */int) var_0))));
}
