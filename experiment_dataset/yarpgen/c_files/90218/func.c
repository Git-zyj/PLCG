/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90218
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90218 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90218
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
    var_15 = ((/* implicit */long long int) var_3);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)18))))) : (var_6)));
                    var_17 = ((/* implicit */unsigned char) ((((/* implicit */int) var_9)) + (((/* implicit */int) (unsigned char)8))));
                    arr_6 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */int) var_12);
                }
            } 
        } 
        arr_7 [i_0] = ((/* implicit */short) ((long long int) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (unsigned char)8)) : (((/* implicit */int) (unsigned char)17)))));
        var_18 = ((/* implicit */_Bool) ((((_Bool) var_4)) ? (((((/* implicit */_Bool) (unsigned char)0)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_14))))) : (((/* implicit */long long int) (-(((/* implicit */int) var_9)))))));
        arr_8 [i_0] = ((/* implicit */long long int) ((((_Bool) (unsigned char)247)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_14))));
    }
    for (int i_3 = 4; i_3 < 17; i_3 += 2) 
    {
        var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)251)) % ((~(((/* implicit */int) (unsigned char)17)))))))));
        var_20 = ((/* implicit */short) max((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)23)) + (((/* implicit */int) var_4))))), (((((/* implicit */_Bool) ((var_9) ? (((/* implicit */int) (unsigned char)232)) : (((/* implicit */int) var_7))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned char)230), (var_12))))) : (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (var_6)))))));
        /* LoopSeq 2 */
        for (short i_4 = 0; i_4 < 21; i_4 += 2) 
        {
            var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) (unsigned char)248))));
            var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (unsigned char)233)) : (((/* implicit */int) (unsigned char)20))));
        }
        for (short i_5 = 3; i_5 < 20; i_5 += 4) 
        {
            var_23 *= ((/* implicit */_Bool) (unsigned char)232);
            arr_17 [i_5 - 3] [i_3 + 4] [i_3 + 4] &= ((/* implicit */long long int) ((((_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned char)247)) : (((/* implicit */int) (unsigned char)20))))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned char)8)))) : (((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned char)3)) : (((/* implicit */int) (unsigned char)236)))) >> (((((/* implicit */int) (unsigned char)232)) - (204)))))));
            var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) min((var_1), (((/* implicit */long long int) ((((((/* implicit */int) (unsigned char)234)) + (((/* implicit */int) (unsigned char)17)))) - (((/* implicit */int) var_14))))))))));
            /* LoopSeq 1 */
            for (int i_6 = 0; i_6 < 21; i_6 += 4) 
            {
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 21; i_7 += 2) 
                {
                    for (signed char i_8 = 1; i_8 < 20; i_8 += 4) 
                    {
                        {
                            arr_25 [i_8] [i_8] = ((/* implicit */unsigned int) ((((/* implicit */int) ((var_11) <= (((/* implicit */int) (unsigned char)247))))) >> (((((/* implicit */int) (unsigned char)247)) - (226)))));
                            arr_26 [i_7] [i_7] [i_8] [i_3 - 4] = ((((/* implicit */int) (unsigned char)229)) >> (((((/* implicit */int) (unsigned char)230)) - (199))));
                            var_25 = ((/* implicit */_Bool) max((var_5), (var_5)));
                            var_26 &= var_8;
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) 
                    {
                        {
                            var_27 = (unsigned char)242;
                            var_28 = ((/* implicit */_Bool) max((var_28), (((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)0))))) ? (var_0) : (((/* implicit */int) ((unsigned char) ((((/* implicit */int) (unsigned char)24)) == (var_0))))))))));
                            var_29 = ((/* implicit */unsigned long long int) max((var_29), (((/* implicit */unsigned long long int) var_1))));
                            var_30 = ((/* implicit */_Bool) max((var_30), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */short) var_12)), (var_3)))) ? ((~(((/* implicit */int) (unsigned char)17)))) : (((/* implicit */int) ((_Bool) (unsigned char)247)))))) ? (((((/* implicit */_Bool) ((unsigned int) (unsigned char)8))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_12)))) : (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned char)23)))))))));
                            var_31 = ((/* implicit */int) min((var_31), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) max(((unsigned char)33), (((/* implicit */unsigned char) var_13))))) + (((/* implicit */int) ((((/* implicit */int) (unsigned char)255)) == (var_0))))))) ? (min((var_8), (((((/* implicit */_Bool) var_4)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)232))))))) : (min((((/* implicit */long long int) ((var_11) / (((/* implicit */int) var_14))))), (((((/* implicit */_Bool) var_10)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_10))))))))))));
                        }
                    } 
                } 
                var_32 = ((/* implicit */unsigned short) var_2);
                var_33 = ((/* implicit */unsigned short) max((var_33), (((/* implicit */unsigned short) ((_Bool) (~(((/* implicit */int) var_9))))))));
            }
            var_34 = ((/* implicit */long long int) ((_Bool) (unsigned char)0));
        }
    }
    /* vectorizable */
    for (short i_11 = 0; i_11 < 11; i_11 += 2) 
    {
        arr_35 [i_11] = ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) ((_Bool) (unsigned char)12))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned char)233)) : (((/* implicit */int) var_4)))));
        var_35 = ((/* implicit */unsigned long long int) min((var_35), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_2) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (var_1)))))))));
        arr_36 [i_11] = ((/* implicit */long long int) ((var_13) ? ((-(((/* implicit */int) (unsigned char)250)))) : (((/* implicit */int) ((_Bool) var_5)))));
    }
}
