/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78117
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78117 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78117
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
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) max((max((var_9), (var_15))), (max(((unsigned char)0), ((unsigned char)36)))))), (max((((/* implicit */unsigned long long int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)-20)))), (max((((/* implicit */unsigned long long int) 546726773U)), (9622183462154053370ULL)))))));
                var_17 = max((((/* implicit */int) (unsigned char)42)), (max((((/* implicit */int) max((((/* implicit */unsigned short) (short)4596)), ((unsigned short)57451)))), (671068896))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (long long int i_2 = 0; i_2 < 23; i_2 += 1) 
    {
        arr_8 [i_2] [i_2] = ((/* implicit */unsigned short) max((max((((/* implicit */unsigned long long int) max((var_5), (((/* implicit */unsigned char) var_11))))), (max((((/* implicit */unsigned long long int) (short)4573)), (8824560611555498264ULL))))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) max((var_7), (((/* implicit */int) arr_7 [i_2]))))), (max((((/* implicit */unsigned int) arr_6 [i_2])), (1636459113U))))))));
        arr_9 [i_2] = ((/* implicit */unsigned char) max((((/* implicit */int) max((((/* implicit */unsigned short) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)29)))), (max((var_0), (((/* implicit */unsigned short) var_9))))))), (max((max((var_3), (((/* implicit */int) (signed char)10)))), (((/* implicit */int) max((var_4), (((/* implicit */unsigned char) arr_6 [i_2])))))))));
    }
    var_18 += ((/* implicit */signed char) max((max((max((var_12), (((/* implicit */int) var_4)))), (((/* implicit */int) max((var_16), (((/* implicit */short) var_10))))))), (max((((/* implicit */int) max((var_16), (((/* implicit */short) var_2))))), (max((var_3), (var_13)))))));
}
