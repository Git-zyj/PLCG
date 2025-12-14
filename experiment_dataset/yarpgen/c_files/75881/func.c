/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75881
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75881 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75881
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
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (short i_1 = 2; i_1 < 9; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 12; i_2 += 4) 
                {
                    for (long long int i_3 = 2; i_3 < 10; i_3 += 2) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (short i_4 = 0; i_4 < 12; i_4 += 4) 
                            {
                                var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) ((short) min((5437735453871385407LL), ((~(-7635693878773168LL)))))))));
                                arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((short) (short)-21064));
                                var_21 = ((/* implicit */long long int) min((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_14))) == (var_16)))), ((+(((/* implicit */int) ((((/* implicit */int) (short)21082)) > (((/* implicit */int) (short)-1236)))))))));
                                var_22 ^= ((((min((var_11), (var_19))) + (9223372036854775807LL))) >> (((long long int) ((var_0) == (-7599081411562951964LL)))));
                            }
                            for (long long int i_5 = 0; i_5 < 12; i_5 += 2) 
                            {
                                var_23 = ((/* implicit */short) max((3230163060861015993LL), (((/* implicit */long long int) (short)7769))));
                                var_24 = ((((/* implicit */_Bool) -3305411815090319518LL)) ? (821149954499284737LL) : (((/* implicit */long long int) ((/* implicit */int) (short)21044))));
                                arr_20 [i_0] [i_0] [i_0] [i_3 + 2] [i_5] = ((((/* implicit */_Bool) -8928222438643292396LL)) ? (((((((/* implicit */long long int) ((/* implicit */int) (short)-7748))) > (6578175856437523426LL))) ? (((/* implicit */long long int) (~(((/* implicit */int) (short)32767))))) : (((((/* implicit */long long int) ((/* implicit */int) var_14))) / (26LL))))) : (((((/* implicit */long long int) ((/* implicit */int) (short)-21064))) + (((((/* implicit */_Bool) 5444432522268631529LL)) ? (var_17) : (((/* implicit */long long int) ((/* implicit */int) (short)21064))))))));
                            }
                            var_25 = ((/* implicit */short) (-(((((long long int) 2336316620186018780LL)) % (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 7599081411562951964LL)) && (((/* implicit */_Bool) var_13))))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_6 = 0; i_6 < 12; i_6 += 1) 
                {
                    for (short i_7 = 0; i_7 < 12; i_7 += 4) 
                    {
                        {
                            var_26 = ((/* implicit */short) (~(((/* implicit */int) ((9007199254708224LL) > (((/* implicit */long long int) ((/* implicit */int) (short)21064))))))));
                            var_27 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 7599081411562951964LL)) ? (-1LL) : (-9223372036854775799LL)))) ? ((-(((((/* implicit */_Bool) 1LL)) ? (var_4) : (var_16))))) : (((/* implicit */long long int) ((/* implicit */int) (short)-9369))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (short i_8 = 2; i_8 < 19; i_8 += 1) 
    {
        for (short i_9 = 0; i_9 < 23; i_9 += 2) 
        {
            for (long long int i_10 = 0; i_10 < 23; i_10 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (long long int i_11 = 1; i_11 < 19; i_11 += 2) 
                    {
                        var_28 = ((/* implicit */short) (~(((/* implicit */int) ((short) 7311545539587310291LL)))));
                        var_29 = ((/* implicit */short) ((((min((-756373397287550853LL), (144106391982833664LL))) != (((((/* implicit */_Bool) var_7)) ? (var_6) : (var_0))))) ? ((-((~(-144106391982833674LL))))) : (((((/* implicit */_Bool) var_19)) ? (-756373397287550853LL) : (-4749638440250366631LL)))));
                    }
                    arr_34 [1LL] [i_9] [i_10] = ((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))));
                    var_30 = 9223372036854775798LL;
                }
            } 
        } 
    } 
}
