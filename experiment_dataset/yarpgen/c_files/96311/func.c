/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96311
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96311 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96311
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        arr_4 [i_0] = ((/* implicit */signed char) ((min((((/* implicit */unsigned int) var_4)), (arr_3 [i_0]))) << (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) == (18446744073709551615ULL))))));
        arr_5 [i_0] = ((/* implicit */signed char) max((((var_0) & (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))))), (((/* implicit */long long int) ((((/* implicit */int) var_5)) | (((/* implicit */int) (unsigned char)213)))))));
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 23; i_1 += 2) 
        {
            for (unsigned short i_2 = 1; i_2 < 22; i_2 += 4) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_17 |= ((/* implicit */signed char) ((((2097151ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)32767))))) << (((((/* implicit */int) arr_12 [i_1 - 1] [i_2 + 1])) / (((/* implicit */int) arr_6 [i_1 - 3] [i_1 - 2]))))));
                        arr_15 [i_2] [i_1 - 1] = ((/* implicit */int) max((((/* implicit */short) (unsigned char)238)), ((short)16390)));
                    }
                } 
            } 
        } 
        arr_16 [i_0] &= min((((((/* implicit */unsigned long long int) var_11)) + (9429569008306592437ULL))), (((/* implicit */unsigned long long int) ((short) ((((/* implicit */int) arr_11 [i_0] [i_0] [i_0])) / (arr_9 [i_0]))))));
    }
    var_18 = ((/* implicit */int) max((((/* implicit */unsigned char) var_4)), (((unsigned char) ((unsigned short) -1013941619)))));
}
