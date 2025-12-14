/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98447
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98447 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98447
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
    var_14 ^= ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) ((-1803852349) > (((/* implicit */int) (short)14418))))) : (((/* implicit */int) var_6))))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (long long int i_2 = 2; i_2 < 8; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) 750860226);
                    var_15 = (_Bool)1;
                    var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) ((long long int) ((unsigned short) var_5))))));
                    var_17 = ((/* implicit */unsigned long long int) (+(min((((((/* implicit */_Bool) -750860227)) ? (5041564359888633905LL) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_2 - 2] [3] [i_0] [i_0]))))), (((/* implicit */long long int) arr_6 [i_1] [i_2 + 1] [i_2] [i_2]))))));
                    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (!(((/* implicit */_Bool) 1107301714U))))) : (((/* implicit */int) (short)(-32767 - 1)))))) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) arr_4 [i_0]))));
                }
            } 
        } 
        arr_9 [i_0] = ((/* implicit */long long int) (short)511);
        var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((((/* implicit */int) ((_Bool) arr_4 [i_0]))) != ((((!(((/* implicit */_Bool) var_8)))) ? (((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_3)))) : (-750860227))))))));
        var_20 |= ((/* implicit */long long int) var_1);
        var_21 = ((/* implicit */unsigned int) ((long long int) arr_1 [7LL]));
    }
}
