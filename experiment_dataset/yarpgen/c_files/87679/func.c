/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87679
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87679 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87679
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
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        /* LoopSeq 3 */
        for (unsigned char i_1 = 2; i_1 < 10; i_1 += 1) 
        {
            arr_4 [i_0] [i_1] = ((/* implicit */short) ((((var_5) ? (var_7) : (((/* implicit */long long int) var_2)))) | (((/* implicit */long long int) var_2))));
            var_10 ^= ((/* implicit */short) (+(((/* implicit */int) var_5))));
            var_11 = ((/* implicit */unsigned char) min((var_11), (((/* implicit */unsigned char) 1129446653))));
        }
        for (int i_2 = 1; i_2 < 10; i_2 += 2) /* same iter space */
        {
            var_12 += ((((1546746348260258120LL) / (-8066639117818038005LL))) % (((/* implicit */long long int) ((/* implicit */int) var_4))));
            var_13 = ((/* implicit */short) (+(((/* implicit */int) var_5))));
            arr_9 [i_2] = ((/* implicit */signed char) -8066639117818038000LL);
            var_14 = ((/* implicit */short) (+(((/* implicit */int) (short)24586))));
        }
        for (int i_3 = 1; i_3 < 10; i_3 += 2) /* same iter space */
        {
            arr_13 [i_3] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) var_9)) ? (var_9) : (var_6)));
            var_15 = ((/* implicit */unsigned char) -7029035498943666414LL);
            arr_14 [i_3] [i_3] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 8066639117818038010LL)) ? (((/* implicit */int) (unsigned char)45)) : (((/* implicit */int) (short)24586)))) / (((/* implicit */int) var_4))));
            var_16 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) <= (var_1)));
        }
        /* LoopNest 3 */
        for (unsigned long long int i_4 = 3; i_4 < 9; i_4 += 2) 
        {
            for (unsigned char i_5 = 1; i_5 < 9; i_5 += 3) 
            {
                for (short i_6 = 4; i_6 < 9; i_6 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (long long int i_7 = 2; i_7 < 9; i_7 += 2) 
                        {
                            var_17 = ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_4)))) - (((/* implicit */int) var_0)));
                            arr_24 [i_4] [i_4] [(short)7] [i_4] [i_4] = ((/* implicit */long long int) ((var_2) % (((/* implicit */unsigned int) ((/* implicit */int) var_4)))));
                        }
                        var_18 = ((/* implicit */long long int) ((var_0) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (_Bool)1))));
                        /* LoopSeq 1 */
                        for (long long int i_8 = 3; i_8 < 10; i_8 += 2) 
                        {
                            var_19 = ((/* implicit */short) (~(((/* implicit */int) var_4))));
                            var_20 = ((short) (short)4095);
                            arr_29 [(_Bool)1] [i_4 - 3] [i_4] [i_4] [(unsigned char)9] [i_4] = ((/* implicit */int) ((_Bool) (~(((/* implicit */int) (_Bool)1)))));
                        }
                    }
                } 
            } 
        } 
        var_21 = ((/* implicit */short) ((var_5) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))));
        var_22 = ((var_1) < (((/* implicit */unsigned int) ((/* implicit */int) var_4))));
        var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) ((((/* implicit */_Bool) -8066639117818038000LL)) ? (((unsigned int) -1546746348260258121LL)) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))));
    }
    for (short i_9 = 0; i_9 < 18; i_9 += 4) 
    {
        var_24 ^= ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_3))))) ? (((((/* implicit */_Bool) -8066639117818038005LL)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (short)-24598)))) : (((/* implicit */int) ((short) 1719804338U)))));
        var_25 = ((/* implicit */int) ((((/* implicit */long long int) var_2)) ^ (max((var_9), (((/* implicit */long long int) var_0))))));
        var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_8))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))) : (min((var_1), (((/* implicit */unsigned int) (short)32229))))));
        arr_32 [(unsigned char)7] = ((/* implicit */short) ((((((/* implicit */int) var_4)) + (2147483647))) >> (((min((max((-1546746348260258121LL), (((/* implicit */long long int) (short)24581)))), (((/* implicit */long long int) var_8)))) - (98LL)))));
    }
    var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -8066639117818038009LL)) ? (((/* implicit */int) (short)25374)) : (552188640)));
    var_28 -= ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_3))))) && (((/* implicit */_Bool) var_1))));
}
