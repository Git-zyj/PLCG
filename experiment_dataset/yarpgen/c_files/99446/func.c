/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99446
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99446 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99446
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
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        /* LoopSeq 3 */
        for (unsigned long long int i_1 = 2; i_1 < 24; i_1 += 4) 
        {
            var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) (_Bool)0))));
            arr_6 [i_0] [i_0] = ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */unsigned int) arr_0 [i_0] [(unsigned char)22])) <= (arr_1 [i_1]))));
        }
        for (unsigned char i_2 = 2; i_2 < 24; i_2 += 4) 
        {
            arr_9 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((arr_2 [i_0] [i_2] [i_2 - 2]) * (((/* implicit */unsigned int) ((/* implicit */int) var_2)))));
            arr_10 [i_0] &= ((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (unsigned char)104)) : (((/* implicit */int) (signed char)76))));
            arr_11 [i_0] [i_2 - 2] = ((((/* implicit */_Bool) (~(((/* implicit */int) arr_8 [i_0]))))) ? (var_8) : (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)41))))));
            arr_12 [i_0] = ((var_2) ? (var_12) : (((/* implicit */long long int) arr_2 [i_2] [i_2 + 1] [i_2 + 1])));
        }
        for (unsigned int i_3 = 2; i_3 < 24; i_3 += 4) 
        {
            var_15 &= ((/* implicit */unsigned char) ((long long int) (+(arr_13 [i_0]))));
            /* LoopNest 2 */
            for (long long int i_4 = 1; i_4 < 24; i_4 += 4) 
            {
                for (unsigned short i_5 = 1; i_5 < 23; i_5 += 4) 
                {
                    {
                        var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) ((((/* implicit */int) arr_18 [i_0] [i_0] [i_3 - 2] [i_4] [i_5 + 1])) << (((((((/* implicit */_Bool) arr_3 [(unsigned char)9] [(unsigned char)9])) ? (((/* implicit */unsigned long long int) var_1)) : (var_4))) - (3731096465ULL))))))));
                        var_17 = ((/* implicit */signed char) (~(((((/* implicit */int) var_7)) % (((/* implicit */int) (short)-256))))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (long long int i_6 = 0; i_6 < 25; i_6 += 4) 
            {
                for (unsigned char i_7 = 1; i_7 < 24; i_7 += 4) 
                {
                    {
                        var_18 = var_8;
                        arr_27 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) (unsigned char)255))) ? (((((/* implicit */_Bool) var_11)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)229))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_13) > (var_13)))))));
                        arr_28 [i_7 + 1] [i_6] [i_3] [i_0] = ((/* implicit */unsigned int) (~(arr_13 [i_7 + 1])));
                        var_19 = ((/* implicit */unsigned long long int) ((short) (unsigned char)0));
                    }
                } 
            } 
        }
        arr_29 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (signed char)76))));
        arr_30 [i_0] = (unsigned char)255;
        arr_31 [i_0] = ((/* implicit */unsigned char) ((long long int) (!(((/* implicit */_Bool) var_5)))));
    }
    var_20 = ((/* implicit */unsigned char) ((_Bool) max((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) - (var_11))), (((/* implicit */unsigned long long int) var_2)))));
    var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) var_7))));
    var_22 = ((/* implicit */unsigned short) var_3);
    var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) 5749432147084098971LL)))) != (var_4))))));
}
