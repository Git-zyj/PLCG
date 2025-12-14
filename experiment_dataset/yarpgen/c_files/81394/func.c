/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81394
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81394 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81394
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        arr_2 [(unsigned char)23] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned char)39))));
        var_13 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)53)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))) : (0LL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)59))))) : ((~(((/* implicit */int) arr_0 [i_0]))))));
        var_14 = ((/* implicit */int) (unsigned char)51);
        /* LoopSeq 2 */
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            var_15 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) -121609801753230650LL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)66))))));
            arr_5 [i_1] = ((/* implicit */signed char) -121609801753230650LL);
            arr_6 [i_0] [i_1] = ((/* implicit */_Bool) var_1);
        }
        for (unsigned char i_2 = 1; i_2 < 24; i_2 += 2) 
        {
            var_16 = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)190))));
            arr_9 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) arr_0 [11LL]);
            var_17 = ((/* implicit */short) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_5))) % (var_9))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
            arr_10 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) (unsigned char)178)) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)188))))));
        }
    }
    for (long long int i_3 = 0; i_3 < 19; i_3 += 2) 
    {
        var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) (unsigned char)133))));
        /* LoopSeq 1 */
        for (long long int i_4 = 0; i_4 < 19; i_4 += 2) 
        {
            arr_16 [i_3] [i_4] [i_3] = ((/* implicit */long long int) (((+(min((((/* implicit */int) (unsigned char)161)), (-1466438581))))) | (min((((/* implicit */int) (short)1860)), (((((/* implicit */_Bool) (unsigned char)95)) ? (((/* implicit */int) (unsigned char)67)) : (((/* implicit */int) (unsigned char)194))))))));
            var_19 = ((/* implicit */long long int) (~(((/* implicit */int) ((_Bool) (unsigned char)84)))));
            arr_17 [i_3] = ((/* implicit */short) var_9);
            var_20 = ((/* implicit */long long int) var_10);
        }
    }
    for (long long int i_5 = 1; i_5 < 24; i_5 += 4) 
    {
        var_21 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) ((long long int) (_Bool)0))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (((var_10) - (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))))));
        var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) ((((/* implicit */int) var_2)) & ((-(((((/* implicit */_Bool) 6158247703618178064LL)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_7)))))))))));
        arr_22 [i_5] = ((/* implicit */signed char) min((max((((((/* implicit */_Bool) (unsigned char)67)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_5)))), (((/* implicit */int) (unsigned char)80)))), ((+(((((/* implicit */int) (unsigned char)84)) | (((/* implicit */int) var_0))))))));
    }
    var_23 ^= ((/* implicit */unsigned int) min((((/* implicit */int) (!(((/* implicit */_Bool) var_9))))), ((~(((/* implicit */int) var_7))))));
    var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~((~(((/* implicit */int) var_12))))))) ? (((/* implicit */int) min((var_3), (((/* implicit */unsigned char) (_Bool)1))))) : (min(((~(((/* implicit */int) var_6)))), (134217664)))));
    var_25 = ((/* implicit */signed char) ((unsigned char) (unsigned char)192));
}
