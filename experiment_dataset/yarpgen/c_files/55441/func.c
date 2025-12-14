/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55441
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55441 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55441
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
    for (unsigned int i_0 = 1; i_0 < 19; i_0 += 3) 
    {
        var_16 -= ((/* implicit */short) var_7);
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            var_17 += ((/* implicit */unsigned char) arr_0 [0U]);
            var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1272353314)) ? (((/* implicit */int) (unsigned short)58806)) : (((/* implicit */int) (signed char)-115))))) ? (((/* implicit */int) ((((/* implicit */int) arr_1 [8])) >= (1832284545)))) : (((/* implicit */int) min(((unsigned char)239), (((/* implicit */unsigned char) (signed char)(-127 - 1)))))))))));
        }
        /* LoopSeq 1 */
        for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned char i_3 = 0; i_3 < 21; i_3 += 4) 
            {
                var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((455727064U), (((/* implicit */unsigned int) (_Bool)1))))))))));
                var_20 &= ((/* implicit */_Bool) min((((/* implicit */long long int) 1272353333)), (-1192376544353251388LL)));
                arr_9 [i_0] [i_0] [i_3] |= ((/* implicit */unsigned int) -1832284517);
            }
            /* vectorizable */
            for (long long int i_4 = 1; i_4 < 19; i_4 += 3) 
            {
                var_21 = ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (short)16324))));
                arr_13 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_2])) ? (125841296) : (((/* implicit */int) arr_11 [i_0 + 1] [i_0] [i_0 + 2]))))) || (((/* implicit */_Bool) (short)26331))));
                arr_14 [i_0] [i_2] [0LL] [i_0] = ((/* implicit */long long int) (-(-125841296)));
                /* LoopSeq 2 */
                for (short i_5 = 1; i_5 < 18; i_5 += 4) 
                {
                    /* LoopSeq 3 */
                    for (unsigned short i_6 = 3; i_6 < 20; i_6 += 1) 
                    {
                        arr_21 [i_2] [20U] [i_5 + 3] [i_6 - 2] &= ((/* implicit */unsigned int) -1272353314);
                        arr_22 [(unsigned char)6] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [4U])) ? (((/* implicit */int) var_2)) : (arr_0 [2LL])));
                    }
                    for (short i_7 = 4; i_7 < 20; i_7 += 4) 
                    {
                        arr_25 [i_0] [i_2] [i_4] [(_Bool)1] [i_7] = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)56675)) + (((/* implicit */int) (unsigned char)255))));
                        var_22 -= ((/* implicit */int) ((signed char) arr_19 [i_7 - 1] [i_7 - 2] [i_7] [i_7] [i_5] [i_4 + 2]));
                        arr_26 [i_0] = ((/* implicit */unsigned short) ((unsigned char) -1272353303));
                        arr_27 [i_0] = ((/* implicit */unsigned long long int) arr_23 [i_0] [i_7]);
                    }
                    for (unsigned char i_8 = 1; i_8 < 19; i_8 += 4) 
                    {
                        arr_30 [i_0 + 1] [i_2] [i_4] [i_4] [i_0] [i_5 + 3] [i_8] = ((/* implicit */short) 5132855205765662000ULL);
                        arr_31 [i_5] [i_5] [i_5] [i_5 + 2] [i_5] [i_0] = ((/* implicit */int) (_Bool)1);
                    }
                    var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) arr_3 [2] [i_2]))));
                    var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) ((((/* implicit */_Bool) 67385939U)) ? (((/* implicit */int) arr_29 [i_0 - 1] [(unsigned short)2])) : (((/* implicit */int) arr_29 [i_0 - 1] [18U])))))));
                    /* LoopSeq 2 */
                    for (unsigned char i_9 = 0; i_9 < 21; i_9 += 3) /* same iter space */
                    {
                        arr_36 [i_0] [i_4] [i_4] [i_0] [i_5 - 1] = (i_0 % 2 == zero) ? (((/* implicit */signed char) ((((/* implicit */int) arr_6 [i_0 - 1] [i_4] [i_5 - 1])) << (((arr_16 [i_0 + 1] [i_4] [i_4 + 2] [i_0]) - (1890364526U)))))) : (((/* implicit */signed char) ((((/* implicit */int) arr_6 [i_0 - 1] [i_4] [i_5 - 1])) << (((((arr_16 [i_0 + 1] [i_4] [i_4 + 2] [i_0]) - (1890364526U))) - (3662914784U))))));
                        var_25 -= ((/* implicit */unsigned char) (+(((2147483647) % (((/* implicit */int) arr_8 [(short)4]))))));
                        arr_37 [i_0] [i_2] [(unsigned short)8] [i_5 + 1] [(signed char)2] [i_5] &= ((/* implicit */unsigned short) ((unsigned char) var_2));
                    }
                    for (unsigned char i_10 = 0; i_10 < 21; i_10 += 3) /* same iter space */
                    {
                        var_26 ^= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned short)41180)) ? (((/* implicit */int) (unsigned char)3)) : (((/* implicit */int) (signed char)1)))) != (((/* implicit */int) arr_8 [(_Bool)1]))));
                        arr_40 [i_0] = ((/* implicit */short) arr_23 [i_0] [i_5 + 3]);
                    }
                }
                for (unsigned int i_11 = 0; i_11 < 21; i_11 += 4) 
                {
                    arr_44 [i_0] [10LL] [i_11] = ((/* implicit */unsigned short) (-(2140911434U)));
                    /* LoopSeq 1 */
                    for (unsigned char i_12 = 0; i_12 < 21; i_12 += 3) 
                    {
                        arr_47 [i_0] = ((/* implicit */_Bool) var_0);
                        var_27 = ((/* implicit */unsigned long long int) 4294967295U);
                        arr_48 [i_12] [i_11] [i_0] [i_2] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 2462835720U)) ? (((/* implicit */int) (signed char)124)) : (((/* implicit */int) (unsigned char)246))));
                    }
                    /* LoopSeq 2 */
                    for (unsigned int i_13 = 1; i_13 < 18; i_13 += 1) 
                    {
                        arr_51 [i_0] [(unsigned char)10] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_38 [i_13] [i_13] [i_13] [(short)4] [i_13] [i_13 + 3] [i_13 + 3])) || (((/* implicit */_Bool) arr_45 [i_0 + 1] [i_0] [i_0] [i_13 + 1] [i_4 - 1]))));
                        arr_52 [i_11] &= ((/* implicit */unsigned short) 125841296);
                    }
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        var_28 = ((/* implicit */unsigned short) max((var_28), ((unsigned short)16)));
                        var_29 = ((/* implicit */unsigned short) max((var_29), (((/* implicit */unsigned short) (_Bool)1))));
                        var_30 = ((/* implicit */unsigned short) max((var_30), (((/* implicit */unsigned short) ((signed char) 0)))));
                    }
                }
            }
            arr_55 [i_0] = ((/* implicit */signed char) arr_3 [i_0] [i_2]);
        }
    }
    var_31 = ((/* implicit */unsigned char) max((var_31), (((/* implicit */unsigned char) var_4))));
    var_32 = ((/* implicit */unsigned long long int) max((var_32), (((/* implicit */unsigned long long int) max(((((((_Bool)1) || (((/* implicit */_Bool) var_1)))) ? (((var_1) * (3858648434U))) : (((/* implicit */unsigned int) ((var_7) ? (383170757) : (((/* implicit */int) var_15))))))), (((/* implicit */unsigned int) var_7)))))));
}
