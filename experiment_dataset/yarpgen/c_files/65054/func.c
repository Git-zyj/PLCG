/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65054
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65054 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65054
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
    var_14 = ((/* implicit */signed char) (~(((/* implicit */int) var_1))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 3; i_0 < 24; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */signed char) ((arr_0 [i_0]) + (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0 - 3])) ? (arr_2 [i_0 - 3]) : (arr_2 [i_0 - 3]))))));
                /* LoopSeq 2 */
                for (short i_2 = 0; i_2 < 25; i_2 += 3) 
                {
                    /* LoopSeq 3 */
                    for (unsigned int i_3 = 0; i_3 < 25; i_3 += 3) 
                    {
                        arr_9 [i_0 - 2] [i_0] [i_0 - 2] [i_0] = ((/* implicit */unsigned char) ((int) (~(((/* implicit */int) var_12)))));
                        var_16 = ((/* implicit */unsigned char) ((int) var_7));
                    }
                    /* vectorizable */
                    for (signed char i_4 = 0; i_4 < 25; i_4 += 4) 
                    {
                        /* LoopSeq 3 */
                        for (int i_5 = 4; i_5 < 23; i_5 += 4) /* same iter space */
                        {
                            arr_16 [i_0] [i_0] [i_0] = (signed char)-47;
                            var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) (-(((long long int) var_1)))))));
                            arr_17 [i_0] [i_0] = ((/* implicit */int) ((_Bool) (signed char)-49));
                            var_18 = ((/* implicit */unsigned int) (~(((int) var_4))));
                        }
                        for (int i_6 = 4; i_6 < 23; i_6 += 4) /* same iter space */
                        {
                            var_19 = ((/* implicit */_Bool) ((short) (_Bool)1));
                            var_20 = ((/* implicit */signed char) (-(var_4)));
                            var_21 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0ULL)) ? (arr_0 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */int) var_5)) : ((+(arr_20 [i_0] [i_0 + 1] [i_1] [i_0] [i_4] [i_6])))));
                        }
                        for (int i_7 = 4; i_7 < 23; i_7 += 4) /* same iter space */
                        {
                            arr_26 [i_0] [i_0] [i_0] [i_0] = ((((/* implicit */int) ((((/* implicit */int) arr_7 [i_0 - 3] [i_7])) != (((/* implicit */int) arr_7 [i_1] [i_1]))))) > (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_12))) >= (arr_13 [i_7] [i_4] [i_2] [i_1] [i_0 - 2])))));
                            var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) ((unsigned long long int) (signed char)43)))));
                        }
                        var_23 ^= ((/* implicit */int) (-(((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)43))) : (arr_10 [i_0] [i_1] [i_0] [i_4])))));
                        var_24 = ((/* implicit */_Bool) (unsigned char)0);
                    }
                    for (unsigned char i_8 = 0; i_8 < 25; i_8 += 2) 
                    {
                        var_25 -= ((/* implicit */_Bool) ((int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)34)) <= (((/* implicit */int) arr_1 [i_8])))))) | (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)126))) ^ (arr_0 [i_0 - 3]))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (short i_9 = 1; i_9 < 24; i_9 += 2) 
                        {
                            var_26 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_21 [i_0] [i_1] [i_1] [i_0] [i_1] [i_8])) ? (((/* implicit */int) arr_28 [i_8] [i_8])) : (var_7))) * (((/* implicit */int) arr_28 [i_0 + 1] [i_0 - 3]))));
                            arr_31 [i_9] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) (((-(((/* implicit */int) var_5)))) == (((int) arr_14 [i_0 - 2] [i_0] [i_0] [i_0 - 2] [i_0] [i_0] [i_0]))));
                            var_27 &= ((/* implicit */short) ((unsigned int) (+(((/* implicit */int) (_Bool)1)))));
                        }
                        arr_32 [i_8] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((signed char) var_7))) ? (((/* implicit */int) ((((/* implicit */unsigned int) arr_2 [i_0])) != (arr_3 [i_0] [i_0] [i_0])))) : ((~(((/* implicit */int) arr_23 [i_0] [i_1] [i_2] [i_8] [i_2] [i_2])))))), (((int) (~(((/* implicit */int) (signed char)-43)))))));
                    }
                    var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (((-(((/* implicit */int) var_9)))) - ((((_Bool)1) ? (((/* implicit */int) (signed char)43)) : (498473366)))))) ? (((max((1945732359U), (((/* implicit */unsigned int) (short)21501)))) >> (((((/* implicit */int) (signed char)43)) - (42))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) (unsigned short)8191))) ? (((/* implicit */int) var_3)) : (((int) var_3))))))))));
                }
                for (short i_10 = 0; i_10 < 25; i_10 += 4) 
                {
                    var_29 -= ((/* implicit */long long int) (signed char)-43);
                    var_30 = ((/* implicit */_Bool) max((((/* implicit */int) (!(((/* implicit */_Bool) (-(2760440791U))))))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_5 [i_0] [i_0 - 3] [i_0 - 3] [i_0 - 3]))))));
                }
                var_31 = (signed char)-23;
                var_32 = ((((((((var_2) ^ (((/* implicit */int) (signed char)(-127 - 1))))) + (2147483647))) << (((((/* implicit */int) max((((/* implicit */unsigned short) (signed char)43)), (var_5)))) - (57155))))) | ((~(((/* implicit */int) (signed char)-43)))));
            }
        } 
    } 
}
