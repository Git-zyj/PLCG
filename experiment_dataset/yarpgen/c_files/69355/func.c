/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69355
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69355 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69355
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
    for (short i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */unsigned int) (+(((/* implicit */int) (short)-28870))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 2; i_2 < 10; i_2 += 2) 
                {
                    for (long long int i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        {
                            var_15 += ((/* implicit */short) ((((2949904761718448550LL) & (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_2 - 1]))))) & (((/* implicit */long long int) (-(852318960U))))));
                            var_16 = ((/* implicit */unsigned char) ((long long int) min((((/* implicit */long long int) arr_0 [i_0] [i_0])), (((arr_11 [i_1] [i_0] [i_1] [i_2] [i_3]) * (((/* implicit */long long int) ((/* implicit */int) var_3))))))));
                            arr_12 [i_0] [i_1] [i_0] [i_1] [i_0] = ((/* implicit */long long int) var_1);
                            var_17 = ((/* implicit */unsigned int) arr_2 [i_0]);
                            arr_13 [i_2] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) 852318960U)) ? (852318971U) : (852318954U)));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_4 = 0; i_4 < 24; i_4 += 2) 
    {
        arr_17 [i_4] = ((/* implicit */long long int) (-((-(arr_14 [i_4])))));
        /* LoopNest 2 */
        for (unsigned short i_5 = 0; i_5 < 24; i_5 += 4) 
        {
            for (long long int i_6 = 0; i_6 < 24; i_6 += 2) 
            {
                {
                    arr_24 [i_4] [i_5] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(arr_20 [1LL] [i_5])))) ? (((long long int) var_9)) : (((4782608830309331665LL) * (((/* implicit */long long int) ((/* implicit */int) var_2)))))));
                    /* LoopSeq 2 */
                    for (unsigned int i_7 = 1; i_7 < 22; i_7 += 1) /* same iter space */
                    {
                        arr_27 [i_5] [i_7] [i_6] [i_7] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_23 [i_7 + 2]))));
                        var_18 = ((/* implicit */long long int) ((int) 3442648336U));
                    }
                    for (unsigned int i_8 = 1; i_8 < 22; i_8 += 1) /* same iter space */
                    {
                        arr_30 [i_6] [i_5] [i_4] = ((/* implicit */int) ((unsigned int) var_11));
                        var_19 = ((/* implicit */long long int) ((unsigned long long int) 7759645288182019116ULL));
                        var_20 = (-((-(var_5))));
                    }
                }
            } 
        } 
    }
    var_21 = ((/* implicit */unsigned short) 154804279U);
    var_22 = ((/* implicit */unsigned char) (+(min((((/* implicit */long long int) min((852318931U), (((/* implicit */unsigned int) var_10))))), (min((((/* implicit */long long int) var_5)), (var_11)))))));
}
