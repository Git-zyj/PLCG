/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86950
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86950 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86950
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_11 = ((/* implicit */long long int) ((3852473163261331098ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))));
        arr_2 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)21772)) ? (arr_0 [i_0]) : (arr_0 [i_0])));
    }
    for (signed char i_1 = 2; i_1 < 12; i_1 += 1) 
    {
        /* LoopNest 3 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (unsigned long long int i_3 = 4; i_3 < 13; i_3 += 2) 
            {
                for (short i_4 = 0; i_4 < 14; i_4 += 3) 
                {
                    {
                        var_12 = ((/* implicit */_Bool) 1554053658U);
                        var_13 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) arr_4 [i_1])) : (max(((-2147483647 - 1)), (((/* implicit */int) arr_6 [i_3])))))))));
                        arr_13 [i_3 - 1] [i_3 - 1] [i_1] [i_3 - 1] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) ((((/* implicit */unsigned int) arr_7 [5U] [i_2])) % (arr_8 [i_1] [i_1] [i_1])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (short)-11982))))) : (8966210856781421069ULL)))));
                        var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) ((((/* implicit */_Bool) 2546072969209628202ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-12522))) : (-7693640671679525174LL))))));
                    }
                } 
            } 
        } 
        var_15 ^= ((/* implicit */long long int) ((unsigned int) arr_5 [i_1]));
        var_16 = ((/* implicit */unsigned long long int) 2145062475U);
        arr_14 [i_1] = ((/* implicit */unsigned char) max((max((((/* implicit */long long int) 1025054512)), (7138878725778578132LL))), (((/* implicit */long long int) max((((/* implicit */unsigned int) arr_7 [i_1] [i_1])), (((arr_9 [(signed char)6] [i_1] [i_1]) + (((/* implicit */unsigned int) ((/* implicit */int) (short)-4143))))))))));
    }
    var_17 *= ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (short)32743)))))))) / (((/* implicit */int) (_Bool)1))));
    var_18 = ((/* implicit */unsigned int) -7649939146791031671LL);
}
