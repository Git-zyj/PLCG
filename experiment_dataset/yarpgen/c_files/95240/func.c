/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95240
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95240 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95240
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
    var_18 = ((/* implicit */short) (+(((((/* implicit */_Bool) (unsigned char)180)) ? (((((/* implicit */_Bool) 274877906944ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)170))) : (16465574209983872050ULL))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_6)))))))));
    /* LoopSeq 1 */
    for (short i_0 = 2; i_0 < 20; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */unsigned long long int) min((var_19), (min((14577913814563969013ULL), (((/* implicit */unsigned long long int) (short)21055))))));
                    var_20 -= ((unsigned long long int) 16465574209983872050ULL);
                    var_21 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned char) var_16)))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 3; i_3 < 19; i_3 += 1) 
                    {
                        for (short i_4 = 4; i_4 < 21; i_4 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) ((11826547411083970554ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) var_10))) ? (((/* implicit */int) (unsigned char)85)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_2] [i_3])))))))) : (min((((/* implicit */unsigned long long int) ((var_7) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))), (((1981169863725679566ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)47)))))))));
                                var_23 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_5 [i_0 - 1]))));
                                arr_13 [i_0] [8ULL] [i_2] [i_2] [8ULL] [i_4] = ((/* implicit */unsigned long long int) (-((-(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (short)-30736)) : (((/* implicit */int) var_3))))))));
                                var_24 &= ((/* implicit */unsigned char) 274877906944ULL);
                            }
                        } 
                    } 
                }
            } 
        } 
        var_25 = ((/* implicit */unsigned char) (((~(((arr_10 [9ULL] [(short)8] [(short)21] [9ULL]) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)210))))))) ^ ((~(min((var_17), (((/* implicit */unsigned long long int) (short)30766))))))));
        arr_14 [i_0] = (-(((((/* implicit */_Bool) ((short) var_3))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) | (var_1))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_10), (((/* implicit */short) (unsigned char)97)))))))));
        /* LoopSeq 1 */
        for (unsigned char i_5 = 0; i_5 < 23; i_5 += 3) 
        {
            arr_17 [i_5] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_5] [(short)0] [i_5])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) var_14))))) : (var_17)))) ? (min((var_7), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_0])) - (((/* implicit */int) var_6))))))) : (((unsigned long long int) (!(((/* implicit */_Bool) var_8))))));
            arr_18 [i_5] [i_5] = ((/* implicit */unsigned char) max((((/* implicit */int) (((~(((/* implicit */int) arr_1 [i_5])))) == (((/* implicit */int) min((((/* implicit */short) (unsigned char)160)), (var_5))))))), (((((/* implicit */_Bool) arr_2 [i_5])) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) : (((/* implicit */int) var_2))))));
            var_26 = max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_5])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_16))))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */int) var_9)) + (2147483647))) << (((((/* implicit */int) arr_7 [i_0] [(short)5] [(short)5] [7ULL])) - (137)))))) : (18446744073709551613ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) max((var_9), (var_3)))) ^ (((((/* implicit */int) var_4)) ^ (((/* implicit */int) var_9))))))));
            var_27 = ((/* implicit */unsigned char) ((arr_3 [i_0] [i_0] [i_0]) | (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767)))));
        }
        var_28 = ((/* implicit */short) (~(((/* implicit */int) (short)21266))));
    }
}
