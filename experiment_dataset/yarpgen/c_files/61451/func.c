/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61451
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61451 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61451
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
    var_10 = ((/* implicit */long long int) ((unsigned long long int) (short)26803));
    var_11 -= ((/* implicit */int) (-(var_8)));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        arr_2 [(unsigned char)5] = ((short) arr_1 [i_0]);
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                for (short i_3 = 0; i_3 < 22; i_3 += 2) 
                {
                    {
                        arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) (short)3449))) ^ (var_2))) + (((/* implicit */unsigned int) ((/* implicit */int) max((var_5), (var_9)))))))) ? ((~((+(arr_5 [i_2] [i_2]))))) : (((/* implicit */long long int) ((/* implicit */int) ((short) ((((/* implicit */_Bool) (short)-14801)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)41))) : (7849760272576408085LL))))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned char i_4 = 0; i_4 < 22; i_4 += 1) 
                        {
                            var_12 = ((/* implicit */unsigned long long int) (+((-9223372036854775807LL - 1LL))));
                            arr_17 [i_0] [i_1] = ((/* implicit */_Bool) -8524315486277920345LL);
                        }
                        for (unsigned long long int i_5 = 0; i_5 < 22; i_5 += 4) 
                        {
                            var_13 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) (-(((/* implicit */int) (short)-14792))))) ? (((arr_8 [i_1] [i_1] [i_2]) - (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_5]))))) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_3])))))));
                            var_14 = ((/* implicit */_Bool) ((-1587401333237131784LL) ^ (((((/* implicit */long long int) ((/* implicit */int) var_6))) - (arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))));
                            var_15 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_15 [i_3] [i_3] [i_3] [i_3] [i_3]), (arr_15 [i_0] [i_0] [i_0] [i_0] [i_0])))) ? ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (short)14800))) : (6318465763782671146LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_0] [i_0])))));
                        }
                        arr_22 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)48))) | (9223372036854775807LL)));
                        arr_23 [i_1] [i_1] [16ULL] [i_1] = ((/* implicit */unsigned long long int) arr_19 [i_0] [(unsigned char)11] [i_2] [3ULL] [i_1]);
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_6 = 4; i_6 < 19; i_6 += 1) 
        {
            for (unsigned short i_7 = 0; i_7 < 22; i_7 += 4) 
            {
                {
                    arr_28 [i_0] [i_6] [i_7] [i_6] = (-((~(((/* implicit */int) (unsigned char)35)))));
                    arr_29 [(_Bool)1] [i_6 - 3] [(_Bool)1] = ((/* implicit */_Bool) arr_24 [i_7]);
                }
            } 
        } 
        var_16 = ((/* implicit */int) max((6318465763782671146LL), (-1587401333237131784LL)));
        arr_30 [i_0] [i_0] = ((/* implicit */_Bool) ((max((((var_9) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_16 [2ULL])))), (((/* implicit */int) ((_Bool) arr_27 [i_0] [i_0]))))) - ((~(((/* implicit */int) (_Bool)1))))));
    }
    /* vectorizable */
    for (unsigned short i_8 = 2; i_8 < 21; i_8 += 4) 
    {
        var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) (~(((int) var_8)))))));
        arr_33 [i_8] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_6)) ? (arr_31 [20LL]) : (((/* implicit */unsigned long long int) var_2)))) + (((/* implicit */unsigned long long int) (-(var_2))))));
    }
    var_18 = ((/* implicit */int) ((((/* implicit */_Bool) (~((-(((/* implicit */int) var_1))))))) ? (((/* implicit */unsigned long long int) (~(((var_3) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (-6318465763782671147LL)))))) : (((unsigned long long int) ((((/* implicit */int) var_1)) < (((/* implicit */int) (unsigned char)33)))))));
}
