/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62459
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62459 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62459
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
    var_16 = ((/* implicit */long long int) ((max((((var_12) >> (((var_5) - (18559994U))))), (var_12))) >> (((((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_5)), (var_7)))) / (max((var_6), (((/* implicit */unsigned long long int) var_2))))))));
    var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */int) var_3)) / (((/* implicit */int) var_13))))) * (((((/* implicit */long long int) ((/* implicit */int) var_13))) / (var_7)))))) ? (min((var_10), (((/* implicit */unsigned long long int) ((var_7) < (((/* implicit */long long int) ((/* implicit */int) var_11)))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_14))) / (var_7)))) && (((/* implicit */_Bool) min((var_6), (((/* implicit */unsigned long long int) var_11))))))))))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */unsigned long long int) ((-6LL) & (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))) & (((var_6) + (((/* implicit */unsigned long long int) var_9)))))) : (((((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) / (var_15)))) & (min((var_10), (((/* implicit */unsigned long long int) var_3))))))));
                    arr_9 [i_2] = ((/* implicit */unsigned long long int) max((((((/* implicit */int) (_Bool)0)) != (((/* implicit */int) (_Bool)1)))), (((((((/* implicit */long long int) ((/* implicit */int) var_2))) + (var_4))) > (((/* implicit */long long int) ((var_15) - (var_15))))))));
                    var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((((var_6) - (((/* implicit */unsigned long long int) var_4)))) / (((/* implicit */unsigned long long int) ((var_15) + (((/* implicit */int) var_8))))))))));
                }
            } 
        } 
        var_20 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_7)), (((var_0) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)497)) + (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */unsigned long long int) var_7)) + (var_12)))))));
    }
    for (long long int i_3 = 0; i_3 < 17; i_3 += 4) 
    {
        var_21 = ((/* implicit */unsigned long long int) ((((var_7) + (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_13)) != (((/* implicit */int) var_3)))))))) * (((/* implicit */long long int) ((((/* implicit */int) max((var_14), (var_14)))) * (((((/* implicit */int) var_3)) & (((/* implicit */int) var_8)))))))));
        var_22 = ((/* implicit */_Bool) ((((var_5) - (((/* implicit */unsigned int) ((/* implicit */int) var_2))))) / (((/* implicit */unsigned int) ((/* implicit */int) var_14)))));
        var_23 = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) > (((var_9) & (var_5)))))), (((((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) % (((/* implicit */int) var_2))))) & (((var_12) + (((/* implicit */unsigned long long int) var_9))))))));
    }
    /* LoopNest 2 */
    for (long long int i_4 = 0; i_4 < 10; i_4 += 4) 
    {
        for (long long int i_5 = 3; i_5 < 8; i_5 += 1) 
        {
            {
                var_24 = ((/* implicit */_Bool) var_9);
                var_25 = ((/* implicit */_Bool) ((((((/* implicit */int) var_0)) >> (((/* implicit */int) min((var_11), (((/* implicit */unsigned char) var_3))))))) ^ (((((/* implicit */_Bool) ((var_10) << (((((/* implicit */int) var_11)) - (167)))))) ? (((/* implicit */int) min((var_8), (((/* implicit */unsigned short) var_11))))) : (((((/* implicit */int) var_8)) | (((/* implicit */int) var_3))))))));
                arr_17 [i_5] [i_5] = ((/* implicit */unsigned short) var_5);
            }
        } 
    } 
}
