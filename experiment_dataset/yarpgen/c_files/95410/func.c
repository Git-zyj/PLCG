/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95410
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95410 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95410
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
    var_15 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) var_1)) ^ (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) % (((4954048144911261907ULL) >> (((var_3) + (1266574273)))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                arr_8 [i_0] [i_1] [i_0] = ((/* implicit */long long int) ((_Bool) (+((+(((/* implicit */int) (_Bool)1)))))));
                var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (_Bool)1)))))));
                var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (((_Bool)1) && ((_Bool)1)))) >> (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (867645835))))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_0] [i_0])) * (((/* implicit */int) arr_1 [i_0] [i_0]))))) ? (((/* implicit */int) max((((/* implicit */unsigned char) var_7)), (var_9)))) : (min((var_3), (((/* implicit */int) var_10)))))) : (arr_3 [i_1])));
                arr_9 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_0 [i_0])) ? (var_0) : (arr_0 [i_0]))), (arr_3 [i_0])));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned char i_2 = 2; i_2 < 18; i_2 += 1) 
    {
        arr_12 [i_2] = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) var_6)) : (var_14))));
        var_18 &= ((/* implicit */unsigned long long int) ((var_14) + ((((!((_Bool)1))) ? (((/* implicit */long long int) ((/* implicit */int) (!((_Bool)1))))) : (5460836528249355376LL)))));
        arr_13 [i_2] = ((/* implicit */unsigned long long int) ((int) (_Bool)1));
        var_19 = ((/* implicit */short) arr_10 [i_2 + 2] [16]);
        /* LoopNest 3 */
        for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 3) 
        {
            for (long long int i_4 = 1; i_4 < 17; i_4 += 1) 
            {
                for (unsigned char i_5 = 1; i_5 < 18; i_5 += 1) 
                {
                    {
                        arr_23 [i_2 - 1] [i_3] [i_3] [i_3] [i_3] = var_2;
                        /* LoopSeq 1 */
                        for (int i_6 = 1; i_6 < 19; i_6 += 1) 
                        {
                            arr_27 [(unsigned short)9] [i_2 - 2] [i_4] [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) == (var_11))) ? (arr_24 [i_4 + 3] [i_5 - 1]) : (((((/* implicit */int) var_12)) << (((var_1) - (1553660959)))))))) ? (max((((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (_Bool)1))))), (-5460836528249355376LL))) : (((/* implicit */long long int) arr_26 [i_2] [i_2] [i_2] [i_3] [16] [16]))));
                            arr_28 [i_2] [i_2] [i_3] [i_4] [i_3] [i_6 - 1] = ((/* implicit */unsigned long long int) var_13);
                            var_20 = ((/* implicit */long long int) var_11);
                        }
                        arr_29 [i_2] [i_2] [i_4] [i_3] [i_4] = ((/* implicit */int) ((unsigned long long int) var_13));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (long long int i_7 = 1; i_7 < 14; i_7 += 1) 
    {
        arr_32 [i_7] = ((/* implicit */unsigned char) arr_6 [i_7] [i_7 + 1] [i_7 - 1]);
        var_21 = ((/* implicit */unsigned short) ((var_0) & ((+(((/* implicit */int) var_12))))));
        var_22 = ((/* implicit */long long int) ((_Bool) (_Bool)1));
        var_23 = ((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (arr_20 [i_7] [i_7 + 1]));
        var_24 = (!((_Bool)1));
    }
    for (int i_8 = 0; i_8 < 23; i_8 += 1) 
    {
        arr_36 [i_8] [i_8] = ((/* implicit */unsigned long long int) (~(var_3)));
        var_25 = ((/* implicit */unsigned int) (+(((/* implicit */int) max((arr_34 [10]), (arr_34 [i_8]))))));
        var_26 &= arr_33 [i_8];
        arr_37 [i_8] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_34 [i_8])) : (((/* implicit */int) arr_33 [i_8]))))) >= (max((max((var_11), (((/* implicit */unsigned long long int) -5460836528249355377LL)))), (((/* implicit */unsigned long long int) max((var_0), (((/* implicit */int) arr_33 [i_8])))))))));
        var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */long long int) 867645835)) > (-5460836528249355385LL))) ? (((/* implicit */unsigned long long int) ((arr_35 [i_8] [i_8]) ? (((/* implicit */long long int) 6)) : (var_14)))) : (var_5)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_34 [i_8])) ? (((/* implicit */int) arr_33 [i_8])) : (((/* implicit */int) arr_34 [i_8]))))) : (((unsigned long long int) ((unsigned long long int) (_Bool)1)))));
    }
}
