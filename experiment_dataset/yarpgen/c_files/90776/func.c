/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90776
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90776 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90776
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
    var_10 = ((/* implicit */int) (+(((((((/* implicit */int) (short)2047)) == (var_2))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_3)))) : (min((var_3), (var_3)))))));
    var_11 ^= var_1;
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                {
                    var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) var_7)) ? (var_5) : (((/* implicit */int) (signed char)61)))))) ? (min((min((6409818648670446407LL), (-6409818648670446402LL))), (((/* implicit */long long int) var_2)))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) min(((short)13231), (((/* implicit */short) (unsigned char)12)))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 2; i_3 < 23; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 24; i_4 += 3) 
                        {
                            {
                                var_13 &= ((/* implicit */int) (-(-4020915640165820412LL)));
                                var_14 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((var_9) << (((((var_5) + (2005359387))) - (24))))), (((/* implicit */int) (short)32749)))))));
                                var_15 ^= ((/* implicit */unsigned long long int) arr_5 [i_1] [(signed char)16] [i_3 - 1] [i_4]);
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */short) max((min((3927857927U), (((/* implicit */unsigned int) (unsigned short)8621)))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_1 [i_0] [i_2])) : (((/* implicit */int) ((_Bool) var_6))))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) (!(((/* implicit */_Bool) var_7)))))));
    /* LoopSeq 1 */
    for (signed char i_5 = 0; i_5 < 16; i_5 += 1) 
    {
        /* LoopNest 3 */
        for (signed char i_6 = 1; i_6 < 13; i_6 += 1) 
        {
            for (int i_7 = 0; i_7 < 16; i_7 += 1) 
            {
                for (unsigned short i_8 = 0; i_8 < 16; i_8 += 3) 
                {
                    {
                        var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) 16383))));
                        /* LoopSeq 2 */
                        for (int i_9 = 0; i_9 < 16; i_9 += 3) 
                        {
                            var_19 -= ((/* implicit */unsigned char) ((unsigned short) max((((var_6) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_5] [i_6] [i_7] [i_8] [i_9] [i_9]))))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) (signed char)93)), ((unsigned char)52)))))));
                            var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) min((4294967295U), (((/* implicit */unsigned int) ((((/* implicit */int) (short)2875)) << (((3927857928U) - (3927857921U)))))))))));
                            var_21 = ((/* implicit */unsigned short) min((max((3927857931U), (((/* implicit */unsigned int) (short)21110)))), (((/* implicit */unsigned int) (unsigned char)114))));
                            arr_24 [i_5] [i_5] [i_6 + 1] [i_7] [(unsigned short)5] [i_9] [i_7] = ((/* implicit */int) ((((/* implicit */_Bool) 367109365U)) ? (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (1875355548U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_8])))))), (min((((/* implicit */unsigned long long int) 2823240804U)), (var_8))))) : (min((((/* implicit */unsigned long long int) min((((/* implicit */int) arr_18 [i_5] [i_5] [i_5])), (var_5)))), (max((((/* implicit */unsigned long long int) var_4)), (var_8)))))));
                        }
                        for (int i_10 = 0; i_10 < 16; i_10 += 1) 
                        {
                            var_22 = ((/* implicit */unsigned short) max((((long long int) (unsigned char)124)), (min((max((var_0), (((/* implicit */long long int) var_4)))), (((/* implicit */long long int) ((-233510210) - (-776704823))))))));
                            var_23 = ((/* implicit */unsigned long long int) var_2);
                            var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) ((unsigned int) ((unsigned short) (-(1471726500U))))))));
                        }
                        /* LoopSeq 1 */
                        for (unsigned long long int i_11 = 0; i_11 < 16; i_11 += 4) 
                        {
                            arr_31 [i_8] [i_8] [i_8] [i_8] [i_11] = 233510210;
                            var_25 = ((/* implicit */unsigned short) ((signed char) ((int) arr_20 [i_6] [i_6 + 1] [6] [i_6] [i_6 - 1] [7U])));
                        }
                        arr_32 [i_5] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((unsigned char) 233510210)), (((/* implicit */unsigned char) ((_Bool) 367109365U)))))) ? (min((((/* implicit */unsigned long long int) arr_18 [i_5] [i_6 - 1] [i_7])), ((-(var_8))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_22 [i_5] [i_6 + 2] [(unsigned char)2] [i_6 + 1] [i_7] [(_Bool)1]), (arr_22 [i_6 + 2] [i_6 - 1] [(short)12] [i_7] [i_7] [(short)12])))))));
                    }
                } 
            } 
        } 
        var_26 = ((/* implicit */short) min((((/* implicit */unsigned long long int) max((min((((/* implicit */int) (unsigned short)39758)), (406884873))), (((/* implicit */int) ((unsigned char) (unsigned short)0)))))), (var_3)));
    }
}
