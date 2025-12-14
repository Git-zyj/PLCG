/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8908
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8908 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8908
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
    var_10 += ((/* implicit */unsigned short) ((_Bool) 5388549763185872156ULL));
    var_11 = ((/* implicit */unsigned char) var_7);
    /* LoopSeq 1 */
    for (long long int i_0 = 1; i_0 < 18; i_0 += 4) 
    {
        var_12 = ((/* implicit */_Bool) arr_1 [i_0]);
        var_13 *= ((/* implicit */_Bool) ((short) (unsigned char)174));
        /* LoopNest 2 */
        for (short i_1 = 3; i_1 < 18; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */int) arr_6 [i_0 + 1]);
                    /* LoopNest 2 */
                    for (signed char i_3 = 3; i_3 < 18; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 20; i_4 += 2) 
                        {
                            {
                                arr_13 [i_0] [i_1 - 3] [i_0] [i_3 - 2] [i_4] = ((/* implicit */_Bool) ((signed char) 4294967281U));
                                arr_14 [i_4] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */unsigned int) arr_9 [i_2]);
                                var_15 = ((/* implicit */unsigned int) ((signed char) ((unsigned short) 1330195076U)));
                                var_16 = ((/* implicit */short) 4104622803U);
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (short i_5 = 3; i_5 < 19; i_5 += 1) /* same iter space */
                    {
                        var_17 = ((/* implicit */int) arr_4 [8] [i_1] [i_1] [i_1]);
                        /* LoopSeq 2 */
                        for (unsigned long long int i_6 = 4; i_6 < 19; i_6 += 1) 
                        {
                            var_18 *= ((/* implicit */unsigned int) 13058194310523679481ULL);
                            var_19 = ((/* implicit */unsigned long long int) arr_0 [i_5] [(signed char)19]);
                        }
                        for (signed char i_7 = 0; i_7 < 20; i_7 += 4) 
                        {
                            var_20 *= ((/* implicit */signed char) 4294967295U);
                            var_21 *= ((/* implicit */unsigned short) arr_2 [i_0] [(signed char)7] [i_7]);
                            var_22 ^= ((/* implicit */unsigned long long int) (_Bool)1);
                            var_23 = ((/* implicit */unsigned short) (_Bool)1);
                            var_24 ^= ((/* implicit */short) (unsigned char)72);
                        }
                    }
                    for (short i_8 = 3; i_8 < 19; i_8 += 1) /* same iter space */
                    {
                        var_25 *= ((/* implicit */short) arr_19 [i_0] [8U] [(unsigned char)10] [i_2] [i_0] [i_2] [i_8]);
                        arr_25 [i_0] [i_1] [i_2] [i_8] [i_8 - 1] [i_8 - 1] = ((/* implicit */short) (unsigned char)72);
                        var_26 *= ((/* implicit */_Bool) arr_12 [i_0] [(_Bool)1] [6U] [i_8] [0ULL] [(_Bool)1]);
                        var_27 += ((/* implicit */_Bool) ((short) ((short) arr_5 [i_0] [i_1 + 2] [i_2])));
                    }
                    var_28 = ((/* implicit */int) arr_3 [i_2] [i_2]);
                }
            } 
        } 
    }
}
