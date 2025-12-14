/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85349
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85349 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85349
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
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 6; i_1 += 1) 
        {
            {
                var_15 += ((/* implicit */_Bool) ((long long int) min((-8120039412381650823LL), (-1694729174012141333LL))));
                /* LoopSeq 2 */
                for (unsigned char i_2 = 1; i_2 < 9; i_2 += 1) 
                {
                    var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)206)) ? (11877508491764916908ULL) : (((/* implicit */unsigned long long int) min((-8120039412381650821LL), (((/* implicit */long long int) (_Bool)0)))))));
                    arr_10 [i_0] [i_1] [i_2] [i_2] = ((unsigned char) arr_3 [i_1 + 1] [i_1 - 4]);
                    var_17 = (short)-32751;
                }
                for (unsigned int i_3 = 2; i_3 < 8; i_3 += 4) 
                {
                    var_18 = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_0 [i_0])), (arr_5 [i_1] [i_1])))) ? (arr_5 [(unsigned char)3] [i_1]) : (((/* implicit */unsigned long long int) max((arr_11 [i_0] [i_0] [(short)8]), (-1LL)))))));
                    arr_13 [i_1] [i_1 - 4] [i_3 - 2] = ((/* implicit */_Bool) ((long long int) var_1));
                }
                var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) min((((((/* implicit */_Bool) arr_4 [0U] [0U])) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)251))))), (((/* implicit */unsigned long long int) var_8)))))));
            }
        } 
    } 
    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_14)))));
}
