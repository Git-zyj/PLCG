/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73870
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73870 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73870
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
    var_16 = ((/* implicit */short) 699472664);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                arr_4 [i_0] [i_1] [i_0] = ((int) ((((/* implicit */_Bool) var_3)) ? (max((((/* implicit */unsigned int) var_11)), (612556833U))) : (arr_2 [i_0])));
                /* LoopSeq 2 */
                for (unsigned int i_2 = 0; i_2 < 14; i_2 += 4) 
                {
                    arr_7 [i_0] [(short)8] [i_0] [i_2] = ((/* implicit */int) max((((short) ((-1228628145) - (((/* implicit */int) (signed char)-31))))), (((/* implicit */short) ((1948694054) == (((/* implicit */int) (signed char)-111)))))));
                    var_17 = ((/* implicit */int) 6454239324696187065LL);
                    var_18 = (i_0 % 2 == 0) ? (((/* implicit */signed char) ((((/* implicit */_Bool) ((var_0) >> ((((+(arr_2 [i_0]))) - (3403033191U)))))) ? (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_5 [i_0])) || (((/* implicit */_Bool) -526996334)))))) : (((((/* implicit */_Bool) (+(-615198876)))) ? (((/* implicit */int) ((short) arr_0 [(signed char)6]))) : (((/* implicit */int) (short)17427))))))) : (((/* implicit */signed char) ((((/* implicit */_Bool) ((var_0) >> ((((((+(arr_2 [i_0]))) - (3403033191U))) - (3881327832U)))))) ? (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_5 [i_0])) || (((/* implicit */_Bool) -526996334)))))) : (((((/* implicit */_Bool) (+(-615198876)))) ? (((/* implicit */int) ((short) arr_0 [(signed char)6]))) : (((/* implicit */int) (short)17427)))))));
                    var_19 = ((/* implicit */signed char) (+(((/* implicit */int) ((signed char) 1794898354U)))));
                    arr_8 [i_0] [i_1] [i_0] = ((((/* implicit */_Bool) max((-526996345), (((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : (((long long int) arr_1 [i_1])));
                }
                for (int i_3 = 0; i_3 < 14; i_3 += 1) 
                {
                    var_20 = ((/* implicit */short) ((526996333) << (((((/* implicit */int) (signed char)122)) - (121)))));
                    var_21 = ((/* implicit */int) max((var_21), ((+(((/* implicit */int) max(((signed char)-110), ((signed char)-112))))))));
                }
                arr_11 [i_0] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_5 [10LL])) / (((/* implicit */int) arr_5 [i_0]))))) && (((/* implicit */_Bool) arr_5 [i_0]))));
                arr_12 [i_0] [i_0] [i_0] = ((/* implicit */int) (short)(-32767 - 1));
            }
        } 
    } 
}
