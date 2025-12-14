/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86661
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86661 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86661
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
    var_11 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) -541150275948478564LL)) ? (((/* implicit */int) ((signed char) var_4))) : ((-(((/* implicit */int) min(((short)-17766), ((short)17765))))))));
    var_12 ^= ((/* implicit */long long int) ((min((((/* implicit */unsigned long long int) max((((/* implicit */short) (signed char)39)), ((short)19560)))), (var_1))) / (max((((((/* implicit */_Bool) var_1)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-17766))))), (((/* implicit */unsigned long long int) ((long long int) var_10)))))));
    var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -1771508562)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)82))) : (8446552860285051867LL)));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 1; i_0 < 22; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (unsigned int i_2 = 1; i_2 < 22; i_2 += 3) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_14 = ((/* implicit */unsigned short) arr_0 [i_2 + 3]);
                        /* LoopSeq 1 */
                        for (unsigned int i_4 = 1; i_4 < 22; i_4 += 4) 
                        {
                            arr_13 [i_0] [i_1] [i_4] = ((/* implicit */int) ((signed char) arr_6 [i_2 + 3] [i_1] [i_2] [i_3]));
                            var_15 = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_3 [i_1] [i_2 + 1])) + (2147483647))) >> (((arr_11 [i_4] [i_4] [i_3] [i_2 + 2]) + (533596304)))));
                            var_16 = var_7;
                        }
                    }
                } 
            } 
        } 
        arr_14 [i_0] = ((/* implicit */long long int) ((_Bool) (~(arr_11 [i_0] [i_0] [i_0] [i_0]))));
        var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0] [i_0])) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) var_3))))) ? (((/* implicit */int) arr_7 [i_0 + 1] [6] [i_0] [i_0])) : (((/* implicit */int) arr_4 [(unsigned short)12] [i_0] [i_0 + 2])))))));
    }
    for (unsigned int i_5 = 0; i_5 < 22; i_5 += 3) 
    {
        var_18 ^= ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -180149961)) ? (((/* implicit */int) (unsigned char)213)) : (((/* implicit */int) (!(((/* implicit */_Bool) 939001812)))))))), (((((/* implicit */_Bool) max((arr_9 [2] [i_5] [i_5] [i_5] [2]), (((/* implicit */int) arr_10 [i_5] [14U] [i_5] [14U] [i_5]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)1077))) ^ (1481545542026248045LL)))) : ((((_Bool)1) ? (8122405049320556671ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))))));
        var_19 ^= ((/* implicit */long long int) max(((((_Bool)1) ? (((/* implicit */int) (unsigned short)64458)) : (((/* implicit */int) (_Bool)0)))), (((((/* implicit */int) arr_16 [i_5])) / (((/* implicit */int) arr_16 [i_5]))))));
        arr_17 [i_5] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)34521)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-43))));
        arr_18 [i_5] [i_5] = ((/* implicit */long long int) min((min((arr_0 [i_5]), (((/* implicit */unsigned long long int) arr_4 [(unsigned char)8] [i_5] [i_5])))), (((/* implicit */unsigned long long int) max(((signed char)48), (((/* implicit */signed char) (_Bool)1)))))));
    }
}
