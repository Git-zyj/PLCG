/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93985
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93985 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93985
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
    for (signed char i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 18; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (short i_2 = 2; i_2 < 19; i_2 += 2) 
                {
                    var_14 = ((/* implicit */int) ((3117677343690726742LL) - (3117677343690726750LL)));
                    var_15 = ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) var_9))) ? (max((((/* implicit */int) ((signed char) 829577596))), (((((/* implicit */_Bool) (short)-5741)) ? (var_6) : (arr_0 [(short)0]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((short) 3117677343690726713LL))))))));
                    arr_6 [i_1] [i_1] [i_0] [i_1] = ((/* implicit */signed char) ((arr_5 [i_1] [i_0] [i_1] [i_2]) <= (((/* implicit */unsigned long long int) -3117677343690726743LL))));
                    arr_7 [i_1] [i_1] [i_1] = ((/* implicit */int) (short)21435);
                }
                for (unsigned int i_3 = 0; i_3 < 20; i_3 += 4) 
                {
                    var_16 = ((/* implicit */unsigned long long int) max((var_16), ((((~(arr_5 [i_3] [(signed char)8] [i_1 + 1] [i_1 + 1]))) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) var_2))) ? (max((arr_0 [i_3]), (((/* implicit */int) var_5)))) : ((+(((/* implicit */int) var_9)))))))))));
                    var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_1 - 1] [i_1 + 1]))))), (((((/* implicit */int) (short)-21444)) - (((/* implicit */int) (_Bool)1)))))))));
                }
                arr_10 [i_0] [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1 + 1] [i_1 + 2])) ? (((/* implicit */int) (short)-21444)) : (arr_3 [i_1 + 1] [i_1 + 1]))))));
            }
        } 
    } 
    var_18 = ((/* implicit */signed char) var_3);
    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_8))))) ? (((/* implicit */int) ((short) -3117677343690726767LL))) : ((~(((/* implicit */int) var_10))))));
    var_20 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)17))))))) && (((/* implicit */_Bool) max((min((((/* implicit */unsigned long long int) var_9)), (var_0))), (((/* implicit */unsigned long long int) (-(var_13)))))))));
}
