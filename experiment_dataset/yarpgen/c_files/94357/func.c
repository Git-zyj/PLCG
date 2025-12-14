/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94357
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94357 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94357
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
    var_14 = ((/* implicit */_Bool) (+(var_8)));
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        arr_2 [(_Bool)1] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) ((var_8) > (((/* implicit */long long int) ((/* implicit */int) var_2)))))) - ((~(((/* implicit */int) var_6)))))))));
        arr_3 [i_0] = ((/* implicit */unsigned short) max((max((((/* implicit */int) var_1)), (((((/* implicit */int) var_5)) ^ (((/* implicit */int) var_13)))))), (((((/* implicit */int) var_5)) & (((((/* implicit */int) (unsigned short)1311)) ^ (((/* implicit */int) (_Bool)1))))))));
        var_15 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (((~(((/* implicit */int) var_9)))) ^ (((((/* implicit */int) (unsigned short)1301)) << (((/* implicit */int) (_Bool)0)))))))));
    }
    for (signed char i_1 = 0; i_1 < 20; i_1 += 2) 
    {
        var_16 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((min((((/* implicit */unsigned long long int) var_3)), (var_7))) >= (((/* implicit */unsigned long long int) ((var_8) * (((/* implicit */long long int) ((/* implicit */int) var_6))))))))), (max((var_7), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_4)), (var_10))))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 3) 
        {
            var_17 = ((/* implicit */long long int) max((((/* implicit */int) (((-(((/* implicit */int) var_1)))) >= (((/* implicit */int) var_0))))), (max((((((/* implicit */int) var_4)) + (((/* implicit */int) var_6)))), (((/* implicit */int) max((var_12), (var_6))))))));
            var_18 = ((/* implicit */unsigned long long int) max((((((/* implicit */unsigned long long int) ((/* implicit */int) min((var_6), (var_6))))) <= (min((var_7), (((/* implicit */unsigned long long int) var_5)))))), (((4294967295U) == (((/* implicit */unsigned int) -829692781))))));
        }
    }
    for (int i_3 = 0; i_3 < 25; i_3 += 1) 
    {
        var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) var_10))));
        arr_11 [i_3] = ((/* implicit */signed char) ((max((((var_10) | (var_10))), (((/* implicit */unsigned int) var_13)))) < (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) min((((/* implicit */short) var_1)), (var_5)))) < (((/* implicit */int) min((var_2), (((/* implicit */short) var_4)))))))))));
        var_20 = ((/* implicit */_Bool) var_5);
        var_21 = ((/* implicit */long long int) max((((/* implicit */short) var_4)), (var_2)));
    }
    for (int i_4 = 0; i_4 < 11; i_4 += 4) 
    {
        arr_14 [i_4] = var_0;
        var_22 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */short) var_12)), (var_13)))))))) != (min((max((((/* implicit */unsigned long long int) var_13)), (var_7))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) var_8)))))))));
        arr_15 [i_4] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) max(((-(var_3))), (((/* implicit */long long int) var_4))))) || (((/* implicit */_Bool) max((min((var_7), (((/* implicit */unsigned long long int) var_5)))), (((/* implicit */unsigned long long int) ((var_3) ^ (((/* implicit */long long int) ((/* implicit */int) var_0)))))))))));
        var_23 = ((/* implicit */_Bool) max((((/* implicit */int) var_6)), (min((((((/* implicit */int) var_0)) | (((/* implicit */int) var_6)))), (((((/* implicit */int) var_0)) & (((/* implicit */int) var_6))))))));
    }
    var_24 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((min((var_9), (var_11))), (min((((/* implicit */signed char) var_1)), (var_0))))))));
    var_25 = ((/* implicit */signed char) max((((/* implicit */long long int) (!(((/* implicit */_Bool) var_8))))), (min((max((var_3), (((/* implicit */long long int) var_6)))), (((/* implicit */long long int) ((((/* implicit */int) var_0)) & (((/* implicit */int) var_1)))))))));
    var_26 = ((/* implicit */signed char) var_13);
}
