/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9889
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9889 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9889
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (signed char i_1 = 1; i_1 < 13; i_1 += 2) /* same iter space */
        {
            var_10 = var_5;
            var_11 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_5)))) : ((~(((/* implicit */int) var_6))))));
        }
        for (signed char i_2 = 1; i_2 < 13; i_2 += 2) /* same iter space */
        {
            var_12 = var_7;
            /* LoopSeq 1 */
            for (short i_3 = 3; i_3 < 11; i_3 += 1) 
            {
                arr_13 [7LL] [i_2] [i_3 + 4] = ((/* implicit */unsigned int) var_3);
                var_13 ^= ((/* implicit */_Bool) (+(((((/* implicit */_Bool) (+(((/* implicit */int) var_6))))) ? ((~(var_9))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))));
            }
            var_14 = max((min((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_9))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_0))))))), (((/* implicit */unsigned long long int) max((((/* implicit */int) var_6)), ((~(((/* implicit */int) (short)60))))))));
        }
        for (signed char i_4 = 1; i_4 < 13; i_4 += 2) /* same iter space */
        {
            arr_16 [i_4 + 2] [8ULL] [8ULL] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_4))))) ? (((var_0) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_5)))) : ((~(((/* implicit */int) var_7))))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_7))));
            /* LoopNest 2 */
            for (long long int i_5 = 0; i_5 < 15; i_5 += 2) 
            {
                for (unsigned int i_6 = 0; i_6 < 15; i_6 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_7 = 0; i_7 < 15; i_7 += 1) 
                        {
                            var_15 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_2))))) ? ((-(((/* implicit */int) var_6)))) : (((/* implicit */int) var_8))))), ((+(((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_9)))))));
                            var_16 = ((/* implicit */short) var_8);
                            var_17 = ((/* implicit */signed char) (-((+(((/* implicit */int) max((var_2), (var_3))))))));
                            var_18 -= ((/* implicit */short) ((((/* implicit */_Bool) var_2)) ? (max((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_6))))), (((((/* implicit */_Bool) var_6)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))));
                        }
                        var_19 = var_1;
                    }
                } 
            } 
            arr_24 [i_0] = ((/* implicit */unsigned long long int) min(((+((~(((/* implicit */int) var_8)))))), ((+((-(((/* implicit */int) var_7))))))));
        }
        var_20 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_0)))), ((+(((/* implicit */int) var_5))))))) ? (((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_6)))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_6)))))) : ((+(((/* implicit */int) var_3))))));
    }
    /* vectorizable */
    for (short i_8 = 2; i_8 < 14; i_8 += 3) 
    {
        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_2))))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_6)))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_0))))));
        arr_27 [i_8] [i_8] = ((/* implicit */int) var_6);
        var_22 &= ((/* implicit */signed char) (+(((var_4) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))));
        var_23 = ((/* implicit */short) (~((~(((/* implicit */int) (short)16813))))));
    }
    var_24 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)66)) ? (((/* implicit */int) (short)16806)) : (((/* implicit */int) (signed char)72))));
}
