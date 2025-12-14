/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70397
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70397 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70397
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
    var_19 = ((/* implicit */short) (!(((/* implicit */_Bool) 12520834761234382666ULL))));
    var_20 = (~(max((((/* implicit */unsigned long long int) (unsigned short)16230)), (var_4))));
    var_21 ^= var_18;
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 13; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 4) 
                {
                    arr_7 [i_0] [(_Bool)1] [i_2] [i_0] = ((/* implicit */signed char) (unsigned short)19187);
                    var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) arr_1 [i_2] [i_2]))));
                    var_23 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_3))));
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
                    {
                        var_24 *= ((/* implicit */unsigned long long int) ((var_7) / (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                        arr_10 [i_0] [i_0] [i_0] = var_6;
                    }
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
                    {
                        var_25 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_11))));
                        var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_1 [i_1 + 1] [i_1 - 3])))))));
                        var_27 = ((/* implicit */unsigned long long int) min((var_27), (((((/* implicit */_Bool) arr_8 [(_Bool)1] [(_Bool)1] [i_2] [i_4])) ? (((/* implicit */unsigned long long int) arr_8 [i_1 - 1] [(short)13] [i_1] [i_1])) : (523776ULL)))));
                        arr_15 [i_2] [i_2] [i_2] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) 5152618982730871082ULL)) ? (((/* implicit */int) (signed char)-24)) : (((/* implicit */int) (short)24383))));
                    }
                }
                var_28 = ((/* implicit */unsigned long long int) var_11);
                /* LoopSeq 1 */
                for (unsigned short i_5 = 0; i_5 < 15; i_5 += 1) 
                {
                    var_29 = ((/* implicit */short) ((int) ((unsigned char) ((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_5] [14U])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)6908))))));
                    arr_19 [i_0] = ((((/* implicit */_Bool) (+(((/* implicit */int) ((signed char) arr_14 [i_1])))))) ? (((/* implicit */unsigned int) (-(((((/* implicit */_Bool) 523792ULL)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (signed char)9))))))) : ((+(arr_3 [i_1] [i_1] [i_0]))));
                    var_30 = ((/* implicit */unsigned short) ((short) (~(arr_9 [i_1] [i_1] [i_0] [i_0] [4LL] [4LL]))));
                    var_31 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-24383)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) : (((((/* implicit */_Bool) 3305818869U)) ? (((((/* implicit */_Bool) (signed char)-21)) ? (((/* implicit */unsigned long long int) 1592417655U)) : (16173943149294929639ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 5152618982730871067ULL)) ? (arr_3 [i_0] [i_0] [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)1))))))))));
                    var_32 |= ((/* implicit */short) (((!(((/* implicit */_Bool) max((509158393U), (((/* implicit */unsigned int) arr_0 [(short)14]))))))) ? (((/* implicit */unsigned int) min((((/* implicit */int) arr_2 [i_0] [i_0] [i_0])), ((-(((/* implicit */int) var_2))))))) : (((unsigned int) arr_8 [i_0] [i_1] [i_1] [i_1]))));
                }
            }
        } 
    } 
}
