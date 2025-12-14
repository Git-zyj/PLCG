/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58374
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58374 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58374
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
    var_11 = ((unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) * (((8ULL) >> (((4857827778607395850ULL) - (4857827778607395796ULL)))))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)26158)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-39))));
        var_13 = ((/* implicit */_Bool) min((4857827778607395877ULL), (((/* implicit */unsigned long long int) (short)-8517))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    var_14 -= ((/* implicit */unsigned short) ((((arr_4 [i_2]) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_0] [i_2])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_10))))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) << (((arr_4 [i_1]) - (6383249437679016353ULL)))))) : (arr_1 [i_1] [i_1])));
                    var_15 *= ((arr_3 [18U]) <= (((/* implicit */unsigned long long int) min((var_6), (((/* implicit */unsigned int) var_8))))));
                    arr_9 [i_0] = ((/* implicit */unsigned short) var_4);
                    var_16 = ((/* implicit */short) ((var_0) || ((!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 3434954374U)), (4857827778607395857ULL))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 2; i_3 < 22; i_3 += 3) 
                    {
                        for (long long int i_4 = 3; i_4 < 21; i_4 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_2] [i_3] [8])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0])) ? (min((arr_8 [6U] [i_1] [(_Bool)1] [(_Bool)1]), (var_7))) : (((/* implicit */unsigned long long int) arr_0 [i_0])))))));
                                arr_14 [(_Bool)1] [i_1] [(_Bool)1] [i_3 - 1] [i_0] = ((/* implicit */signed char) arr_6 [i_0] [i_2]);
                            }
                        } 
                    } 
                }
            } 
        } 
        var_18 *= ((/* implicit */unsigned int) var_4);
    }
    var_19 = ((/* implicit */signed char) var_9);
    var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((((/* implicit */int) ((((((/* implicit */_Bool) var_9)) ? (var_9) : (var_9))) == (max((17149589548228123942ULL), (((/* implicit */unsigned long long int) 1969414789))))))) - (((/* implicit */int) var_10)))))));
}
