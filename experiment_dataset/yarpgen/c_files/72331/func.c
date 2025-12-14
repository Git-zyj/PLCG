/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72331
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72331 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72331
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
    var_12 *= ((/* implicit */unsigned long long int) (short)14242);
    var_13 |= ((/* implicit */_Bool) (short)-14230);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 3) /* same iter space */
    {
        var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) (short)14242))));
        /* LoopSeq 1 */
        for (long long int i_1 = 2; i_1 < 18; i_1 += 1) 
        {
            var_15 ^= ((/* implicit */unsigned char) -307351392513886945LL);
            var_16 = ((/* implicit */signed char) arr_3 [i_1] [i_1 + 1] [i_1 + 1]);
        }
        var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) 307351392513886945LL)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) var_0))));
        var_18 = ((/* implicit */unsigned short) (!(arr_0 [i_0] [i_0])));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 19; i_2 += 3) 
        {
            for (long long int i_3 = 0; i_3 < 19; i_3 += 2) 
            {
                {
                    var_19 = ((/* implicit */unsigned char) arr_7 [i_0]);
                    /* LoopSeq 1 */
                    for (int i_4 = 1; i_4 < 18; i_4 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (short i_5 = 0; i_5 < 19; i_5 += 1) /* same iter space */
                        {
                            var_20 -= ((/* implicit */long long int) ((unsigned int) 9221120237041090560LL));
                            arr_13 [i_3] [(unsigned char)15] [i_0] = ((/* implicit */_Bool) (short)8191);
                        }
                        for (short i_6 = 0; i_6 < 19; i_6 += 1) /* same iter space */
                        {
                            var_21 = ((/* implicit */int) (unsigned char)156);
                            var_22 += ((/* implicit */unsigned int) (~((~(arr_14 [i_0] [1ULL] [i_3] [14LL] [i_6])))));
                            var_23 *= ((/* implicit */unsigned int) (+(((/* implicit */int) (short)(-32767 - 1)))));
                        }
                        var_24 |= ((/* implicit */unsigned char) ((((/* implicit */int) arr_16 [i_0])) | (((/* implicit */int) arr_1 [i_4 - 1]))));
                    }
                }
            } 
        } 
    }
    for (unsigned int i_7 = 0; i_7 < 19; i_7 += 3) /* same iter space */
    {
        arr_19 [i_7] = ((/* implicit */unsigned int) (-((+(((/* implicit */int) arr_16 [i_7]))))));
        var_25 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_9 [i_7] [i_7] [i_7])) ? (9428072243292727401ULL) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_7] [(_Bool)1] [i_7])) ? (((/* implicit */int) (short)29011)) : (((/* implicit */int) (unsigned char)0))))), (((long long int) var_3)))))));
    }
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
    {
        var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) (short)-8191))));
        var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 2347690129580895355LL)) ? (((/* implicit */long long int) max((((((/* implicit */_Bool) arr_10 [i_8])) ? (((/* implicit */int) arr_10 [i_8])) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))))) : (-9221120237041090549LL))))));
        arr_22 [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 2450813257895559236LL)) ? (843500584988415567ULL) : (((/* implicit */unsigned long long int) 8323399874865281225LL))));
    }
}
