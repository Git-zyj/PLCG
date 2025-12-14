/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94355
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94355 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94355
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
    var_10 = (((+(((/* implicit */int) (_Bool)1)))) <= (((/* implicit */int) ((unsigned char) var_5))));
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) (_Bool)1);
        var_11 *= ((/* implicit */unsigned char) var_3);
        var_12 = ((/* implicit */long long int) min((var_12), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((long long int) ((_Bool) (_Bool)1)))))))));
        arr_4 [i_0] = ((/* implicit */long long int) (signed char)98);
    }
    for (short i_1 = 0; i_1 < 22; i_1 += 3) 
    {
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 19; i_2 += 4) 
        {
            for (unsigned short i_3 = 0; i_3 < 22; i_3 += 4) 
            {
                {
                    var_13 = ((/* implicit */short) arr_8 [16U] [i_2 - 2]);
                    var_14 = ((/* implicit */unsigned short) (_Bool)1);
                }
            } 
        } 
        arr_12 [i_1] = ((/* implicit */short) max((((((/* implicit */_Bool) arr_8 [i_1] [i_1])) ? (((/* implicit */int) arr_8 [i_1] [i_1])) : (((/* implicit */int) (unsigned short)28345)))), (((/* implicit */int) (signed char)98))));
        arr_13 [i_1] = ((/* implicit */long long int) ((unsigned short) min((((/* implicit */unsigned int) var_8)), (arr_5 [i_1]))));
        var_15 = ((/* implicit */short) ((((/* implicit */int) ((16935091357018116702ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) - (((/* implicit */int) arr_11 [i_1] [i_1] [i_1]))));
    }
    for (long long int i_4 = 0; i_4 < 16; i_4 += 2) 
    {
        arr_17 [i_4] [i_4] = ((/* implicit */_Bool) (~(arr_15 [i_4])));
        arr_18 [i_4] = ((/* implicit */short) min(((+(((/* implicit */int) arr_6 [i_4])))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_4])))))));
        arr_19 [i_4] = ((/* implicit */_Bool) var_3);
    }
    var_16 = ((/* implicit */long long int) var_5);
}
