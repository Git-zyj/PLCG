/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58272
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58272 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58272
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
    var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_5))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))) : (((unsigned long long int) var_11)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_5)) ^ (((/* implicit */int) var_8))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_10)))))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        var_14 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_11)) & (var_7)))) ^ ((-(var_2)))));
        arr_3 [i_0] = ((/* implicit */short) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
        var_15 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((signed char) (unsigned short)49370))) ? ((-(((/* implicit */int) var_9)))) : (((/* implicit */int) ((var_6) < (((/* implicit */long long int) ((/* implicit */int) var_5))))))));
        arr_4 [i_0] = ((/* implicit */unsigned short) ((((unsigned long long int) var_3)) - (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (3242244228U))))));
    }
    /* LoopSeq 1 */
    for (int i_1 = 0; i_1 < 13; i_1 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_2 = 2; i_2 < 11; i_2 += 4) 
        {
            /* LoopSeq 1 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                arr_15 [11U] [i_2] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */int) ((var_12) < (var_0)))), (((((/* implicit */int) var_9)) % (((/* implicit */int) var_11))))))) ? ((~(((var_9) ? (var_6) : (((/* implicit */long long int) var_7)))))) : (((/* implicit */long long int) (+(((/* implicit */int) ((signed char) var_5))))))));
                var_16 = ((/* implicit */unsigned int) ((unsigned short) (~(((((/* implicit */long long int) ((/* implicit */int) var_9))) ^ (var_4))))));
                var_17 = ((/* implicit */short) ((unsigned char) ((int) max(((unsigned short)16165), (((/* implicit */unsigned short) (_Bool)1))))));
            }
            var_18 = ((/* implicit */int) var_8);
            arr_16 [i_1] = ((/* implicit */short) max((((/* implicit */long long int) (_Bool)1)), (max((-8457154446974926023LL), (((/* implicit */long long int) 1628373296U))))));
        }
        var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) var_9)), (var_3))))) : (((unsigned int) var_10))))) ? (max(((+(var_6))), (((/* implicit */long long int) (+(((/* implicit */int) var_9))))))) : ((~(((var_6) ^ (var_4))))))))));
    }
    var_20 ^= ((/* implicit */short) max((((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)26771))) >= (1039191718U))))) - (((unsigned int) var_12)))), (((/* implicit */unsigned int) max((((/* implicit */unsigned short) ((unsigned char) var_4))), (((unsigned short) var_10)))))));
}
