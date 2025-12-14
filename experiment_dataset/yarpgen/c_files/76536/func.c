/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76536
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76536 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76536
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
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */short) (((+(min((arr_1 [i_0]), (arr_1 [i_0]))))) & (((/* implicit */unsigned int) ((/* implicit */int) ((short) max((arr_1 [i_0]), (((/* implicit */unsigned int) (signed char)122)))))))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) (+(max((arr_1 [i_0]), (arr_1 [i_0])))));
        var_11 = ((/* implicit */int) min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) arr_0 [i_0])), ((unsigned char)50)))), (((var_8) & (((/* implicit */unsigned long long int) var_0))))));
    }
    for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
    {
        var_12 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) max((((/* implicit */int) max(((_Bool)1), (arr_0 [(signed char)3])))), (((((/* implicit */int) (signed char)-109)) & (((/* implicit */int) (unsigned short)36627))))))), (((unsigned long long int) ((10206350605773414809ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1]))))))));
        arr_8 [i_1 + 1] [i_1] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)245))) & (arr_1 [i_1 + 1])))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) & (var_8)))));
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 13; i_2 += 4) 
    {
        for (unsigned char i_3 = 0; i_3 < 13; i_3 += 2) 
        {
            {
                var_13 = ((/* implicit */unsigned int) max((((/* implicit */unsigned short) ((short) arr_12 [i_2]))), (max((max((var_5), (((/* implicit */unsigned short) (_Bool)1)))), (((/* implicit */unsigned short) ((_Bool) var_9)))))));
                arr_13 [i_2] = ((max((((/* implicit */int) (signed char)-123)), (var_10))) & ((~(((/* implicit */int) var_2)))));
            }
        } 
    } 
}
