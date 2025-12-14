/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95434
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95434 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95434
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
    for (unsigned int i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 2; i_2 < 20; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        {
                            var_13 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)1))));
                            arr_10 [i_1] [i_1] [(unsigned short)4] = min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0 - 1])) ? (arr_6 [i_0 - 1] [(unsigned char)8] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0 - 1])))))), (arr_9 [i_0] [i_2 - 2] [i_0 + 2] [i_3]));
                        }
                    } 
                } 
                var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) ((((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) (unsigned short)65507)))))) + (((/* implicit */int) ((unsigned short) ((unsigned long long int) arr_7 [i_0] [i_0 - 1] [(unsigned char)12])))))))));
                /* LoopSeq 3 */
                for (unsigned char i_4 = 0; i_4 < 21; i_4 += 4) 
                {
                    var_15 = ((/* implicit */int) arr_8 [i_0 + 1] [(unsigned short)8] [i_0] [10ULL] [i_0]);
                    var_16 = ((/* implicit */long long int) ((short) ((((((/* implicit */int) arr_3 [i_4])) == (((/* implicit */int) arr_4 [i_1] [i_1])))) ? (((/* implicit */int) ((arr_9 [i_0] [i_1] [i_4] [i_4]) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535)))))) : (((/* implicit */int) ((short) arr_6 [i_1] [i_1] [i_1]))))));
                }
                for (unsigned long long int i_5 = 0; i_5 < 21; i_5 += 1) 
                {
                    /* LoopNest 2 */
                    for (short i_6 = 0; i_6 < 21; i_6 += 4) 
                    {
                        for (unsigned short i_7 = 1; i_7 < 17; i_7 += 2) 
                        {
                            {
                                var_17 = ((/* implicit */_Bool) arr_16 [i_7] [i_0 + 2] [i_1] [i_0 + 2]);
                                arr_19 [(unsigned char)13] [i_1] [i_1] [19LL] [i_0] [i_1] = ((/* implicit */int) arr_9 [16LL] [(signed char)10] [(unsigned char)8] [i_6]);
                                arr_20 [i_7] [i_6] [i_6] [i_0] &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) 17403370664320446982ULL))))) - (((/* implicit */int) (short)-32747))))) ? (((int) arr_6 [i_7 + 3] [i_0 - 1] [i_6])) : (((/* implicit */int) arr_12 [i_6] [i_6] [i_6]))));
                                var_18 = ((/* implicit */unsigned char) ((unsigned long long int) arr_11 [i_5]));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */unsigned long long int) min((arr_7 [i_5] [i_1] [i_0]), (((/* implicit */long long int) ((((/* implicit */int) ((short) (short)13068))) != (((/* implicit */int) ((signed char) arr_0 [i_0]))))))));
                }
                for (long long int i_8 = 2; i_8 < 19; i_8 += 2) 
                {
                    var_20 = ((/* implicit */unsigned char) ((_Bool) ((short) (~(((/* implicit */int) (unsigned short)65530))))));
                    /* LoopNest 2 */
                    for (short i_9 = 2; i_9 < 20; i_9 += 1) 
                    {
                        for (unsigned char i_10 = 0; i_10 < 21; i_10 += 3) 
                        {
                            {
                                arr_32 [i_1] [i_9] [i_8 - 1] [19] [i_1] = ((/* implicit */unsigned long long int) ((unsigned int) (unsigned short)65530));
                                var_21 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((unsigned char) arr_31 [i_0 + 1] [i_0 - 1] [i_8 - 1] [i_8 - 2] [i_9 - 1])))));
                                var_22 = ((/* implicit */long long int) (((~(((((/* implicit */int) (unsigned char)247)) >> (((/* implicit */int) (unsigned char)0)))))) & (((/* implicit */int) (((!(((/* implicit */_Bool) arr_8 [i_10] [i_10] [i_10] [i_10] [i_10])))) || (((((/* implicit */_Bool) (unsigned char)0)) && (((/* implicit */_Bool) arr_29 [i_1] [i_1])))))))));
                                var_23 = ((/* implicit */_Bool) ((unsigned int) ((short) arr_23 [i_0 + 1])));
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */unsigned char) ((int) ((int) ((_Bool) arr_28 [i_8] [(unsigned char)18] [i_1] [16LL] [(unsigned char)18]))));
                }
            }
        } 
    } 
    var_25 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min(((+(((/* implicit */int) var_8)))), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_12))) != (var_5))))))) ? (((/* implicit */int) max(((!(((/* implicit */_Bool) var_10)))), (((var_0) == (((/* implicit */int) var_12))))))) : (((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)228)), ((unsigned short)62))))));
}
