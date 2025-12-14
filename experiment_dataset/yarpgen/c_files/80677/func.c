/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80677
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80677 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80677
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
    var_11 = ((/* implicit */short) var_8);
    /* LoopSeq 2 */
    for (int i_0 = 1; i_0 < 15; i_0 += 4) 
    {
        var_12 ^= ((/* implicit */long long int) (!((((!(((/* implicit */_Bool) arr_0 [i_0] [i_0])))) && (((/* implicit */_Bool) ((short) 549755551744ULL)))))));
        arr_4 [i_0] = ((/* implicit */unsigned long long int) (~(min((arr_3 [i_0 + 1]), (((/* implicit */long long int) ((((/* implicit */unsigned int) -942524693)) > (var_10))))))));
        var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_2 [i_0 + 1]) : (((/* implicit */int) var_1))))))))));
    }
    for (unsigned int i_1 = 0; i_1 < 17; i_1 += 1) 
    {
        arr_7 [i_1] = ((/* implicit */unsigned int) max(((+(((/* implicit */int) (short)27769)))), (((/* implicit */int) (!(((/* implicit */_Bool) 3893109562U)))))));
        var_14 -= ((/* implicit */unsigned short) (-(((/* implicit */int) arr_6 [i_1] [(_Bool)1]))));
        /* LoopNest 3 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (short i_3 = 4; i_3 < 16; i_3 += 3) 
            {
                for (long long int i_4 = 3; i_4 < 16; i_4 += 4) 
                {
                    {
                        var_15 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) 401857734U)) ? (-3633551955662257668LL) : (((/* implicit */long long int) arr_10 [i_2] [i_1]))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned int i_5 = 2; i_5 < 15; i_5 += 4) 
                        {
                            var_16 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_7)) ? (3893109562U) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))) / (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_5] [i_5] [i_1])))));
                            arr_19 [4] [i_2] [i_1] = ((/* implicit */unsigned int) ((-3633551955662257684LL) - (((/* implicit */long long int) ((/* implicit */int) (short)-13620)))));
                        }
                    }
                } 
            } 
        } 
    }
}
