/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8172
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8172 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8172
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
    var_14 = ((/* implicit */short) (unsigned char)64);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                arr_8 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) * (4299880147814637731ULL)));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_2 = 0; i_2 < 18; i_2 += 3) 
                {
                    /* LoopSeq 2 */
                    for (long long int i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        var_15 ^= ((/* implicit */short) ((((((/* implicit */_Bool) var_1)) ? (var_4) : (var_10))) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_13)) >= (((/* implicit */int) (_Bool)1))))))));
                        var_16 = ((/* implicit */unsigned long long int) ((((_Bool) var_0)) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((short) arr_9 [i_0] [i_0] [i_0])))));
                        arr_14 [i_3] [(short)13] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) arr_0 [17LL])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_8)))));
                        var_17 -= ((/* implicit */unsigned short) var_1);
                    }
                    for (short i_4 = 2; i_4 < 16; i_4 += 3) 
                    {
                        var_18 = ((/* implicit */unsigned short) (_Bool)1);
                        var_19 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_9))));
                        /* LoopSeq 3 */
                        for (unsigned short i_5 = 3; i_5 < 16; i_5 += 3) 
                        {
                            var_20 = ((/* implicit */short) ((((/* implicit */_Bool) arr_6 [i_4 + 1] [i_4 - 1] [i_5 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_4 + 2] [i_4 - 2] [i_4 + 1] [i_0] [i_4]))) : (var_1)));
                            var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (signed char)5)) : (((/* implicit */int) (_Bool)1)))))));
                        }
                        for (short i_6 = 2; i_6 < 17; i_6 += 3) /* same iter space */
                        {
                            arr_22 [i_0] [i_0] [(unsigned short)15] [i_1] [i_2] [i_4] [i_6] = ((/* implicit */long long int) ((short) (-(((/* implicit */int) (_Bool)1)))));
                            var_22 = ((/* implicit */long long int) ((((/* implicit */int) arr_11 [i_4] [(short)9] [i_4 + 1] [i_4 - 1])) | (((/* implicit */int) var_5))));
                            arr_23 [6LL] [i_4] [i_0] [(unsigned char)15] [i_0] [(unsigned short)3] [(unsigned short)3] = ((/* implicit */short) (!(((/* implicit */_Bool) var_4))));
                        }
                        for (short i_7 = 2; i_7 < 17; i_7 += 3) /* same iter space */
                        {
                            var_23 = ((/* implicit */long long int) (~(((/* implicit */int) arr_16 [i_1] [i_7 - 2] [i_1]))));
                            arr_26 [i_7] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned short)28659))))) ? (arr_1 [i_0] [i_0]) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_0)))))));
                            arr_27 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 5211634202981926704LL)) ? (((/* implicit */int) (unsigned short)28667)) : (((/* implicit */int) (signed char)(-127 - 1)))))) || (((((/* implicit */int) (unsigned short)0)) >= (((/* implicit */int) (_Bool)1))))));
                            var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) 4939184663198972526LL)) || (((/* implicit */_Bool) (short)12288))));
                            var_25 = ((/* implicit */short) ((((var_10) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) : (((/* implicit */int) var_8))));
                        }
                    }
                    var_26 &= ((/* implicit */short) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)54517))))) - (((((/* implicit */_Bool) 2199023255548LL)) ? (12515217619283129647ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))));
                    var_27 = ((/* implicit */short) (!(((/* implicit */_Bool) ((short) var_0)))));
                    var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)1)) ? (7039905278157044512ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)36850)))));
                    var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) var_8))) / (arr_25 [i_0] [i_0] [i_0] [i_1] [i_1] [i_1] [i_2]))))));
                }
            }
        } 
    } 
}
