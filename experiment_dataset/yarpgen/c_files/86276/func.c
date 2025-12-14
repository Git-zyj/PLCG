/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86276
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86276 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86276
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
    var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) (((!(((/* implicit */_Bool) var_14)))) || ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (2854709750U)))))))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */short) min((max((arr_1 [i_0]), (arr_1 [i_0]))), (((((arr_0 [i_0]) ? (arr_1 [i_0]) : (((/* implicit */int) arr_0 [i_0])))) * (((((/* implicit */int) (unsigned char)186)) / (arr_1 [i_0])))))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 2; i_1 < 19; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    arr_8 [i_1] [i_1 - 2] [i_1 + 3] [i_1 + 1] = ((/* implicit */short) ((((/* implicit */_Bool) min((max(((unsigned short)7936), ((unsigned short)59060))), (max((((/* implicit */unsigned short) (short)(-32767 - 1))), ((unsigned short)7940)))))) ? ((~(((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_2]))) / (1455220647U))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)36330))) : (arr_4 [i_0] [i_0]))) != (((/* implicit */unsigned int) (+(((/* implicit */int) arr_2 [i_2])))))))))));
                    arr_9 [i_1] [(short)2] [i_1] = ((/* implicit */unsigned int) max((arr_5 [i_0] [i_1] [i_1]), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)44240))) % (-5555215576234810170LL)))) < (((unsigned long long int) arr_2 [i_2])))))));
                    arr_10 [i_0] [i_1] = ((/* implicit */unsigned int) ((int) (unsigned short)44237));
                    var_20 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) ((short) arr_5 [i_0] [8] [i_1]))) ? (((/* implicit */int) max((((/* implicit */signed char) arr_7 [i_1] [i_1] [i_1] [i_1])), (arr_5 [i_0] [i_0] [i_1])))) : ((-(((/* implicit */int) arr_2 [i_1]))))))));
                }
            } 
        } 
        var_21 = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned char) (signed char)57))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0])))))));
    }
}
