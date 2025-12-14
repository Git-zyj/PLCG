/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6246
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6246 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6246
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
    for (short i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        var_16 |= ((/* implicit */signed char) ((int) (unsigned char)182));
        var_17 &= ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) (_Bool)1))));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    arr_9 [i_1] [i_1] [i_1] [(short)2] = ((/* implicit */signed char) (~(((/* implicit */int) (short)0))));
                    var_18 = ((/* implicit */signed char) (-(((/* implicit */int) arr_2 [i_0]))));
                    /* LoopSeq 3 */
                    for (long long int i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        var_19 *= ((/* implicit */_Bool) ((short) arr_5 [i_0] [i_1] [i_3]));
                        arr_12 [7LL] [i_1] [i_3] = ((/* implicit */_Bool) var_8);
                    }
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
                    {
                        arr_15 [i_0] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)159)) ? (((/* implicit */int) (unsigned short)49174)) : (((/* implicit */int) ((((/* implicit */_Bool) -1708551399)) && (((/* implicit */_Bool) 3167018242752937624ULL)))))));
                        arr_16 [i_0] [(signed char)2] [i_2] [i_2] [i_1] [i_4] = ((/* implicit */_Bool) (signed char)127);
                        arr_17 [i_4] [i_1] [i_1] [11LL] = ((/* implicit */_Bool) arr_1 [i_2]);
                        var_20 = ((/* implicit */unsigned short) arr_2 [i_0]);
                        var_21 = ((/* implicit */long long int) var_15);
                    }
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (int i_6 = 1; i_6 < 8; i_6 += 3) 
                        {
                            var_22 = (-(((-6LL) * (((/* implicit */long long int) ((/* implicit */int) (signed char)116))))));
                            var_23 += ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_2] [i_2])) ? (((/* implicit */int) (signed char)3)) : (-62929803)));
                        }
                        /* LoopSeq 2 */
                        for (long long int i_7 = 0; i_7 < 12; i_7 += 3) 
                        {
                            arr_24 [i_0] [i_1] = ((/* implicit */_Bool) ((long long int) -142715771));
                            var_24 = ((/* implicit */int) (-(((((/* implicit */long long int) ((/* implicit */int) (signed char)127))) - (var_9)))));
                        }
                        for (unsigned char i_8 = 3; i_8 < 10; i_8 += 3) 
                        {
                            var_25 = ((/* implicit */signed char) var_5);
                            var_26 *= (+(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (5)))));
                        }
                        var_27 = (_Bool)1;
                    }
                    /* LoopNest 2 */
                    for (signed char i_9 = 2; i_9 < 8; i_9 += 3) 
                    {
                        for (unsigned short i_10 = 0; i_10 < 12; i_10 += 3) 
                        {
                            {
                                var_28 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_11))));
                                arr_33 [i_1] [i_9] [i_2] [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)96)) ? (((/* implicit */int) (unsigned short)127)) : (5)));
                                var_29 ^= ((/* implicit */unsigned short) ((_Bool) 1152921435887370240LL));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_30 += min((((/* implicit */long long int) var_15)), (var_9));
}
