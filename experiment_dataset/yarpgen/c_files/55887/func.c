/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55887
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55887 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55887
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
    for (long long int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (long long int i_1 = 4; i_1 < 18; i_1 += 1) 
        {
            for (unsigned short i_2 = 1; i_2 < 16; i_2 += 3) 
            {
                for (signed char i_3 = 0; i_3 < 19; i_3 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (short i_4 = 0; i_4 < 19; i_4 += 3) 
                        {
                            var_18 = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((((/* implicit */unsigned int) ((/* implicit */int) var_15))) >= (2U))))))));
                            var_19 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) var_0)) ? (var_11) : (arr_8 [5LL] [i_3] [i_1] [i_1]))) : (var_11))), (var_11)));
                            var_20 = ((/* implicit */long long int) var_5);
                            var_21 = ((/* implicit */short) max((min((-339498959), (((/* implicit */int) (signed char)87)))), (var_8)));
                            var_22 = ((/* implicit */signed char) min((((/* implicit */int) ((unsigned char) (~(((/* implicit */int) (signed char)-77)))))), (var_17)));
                        }
                        /* vectorizable */
                        for (int i_5 = 2; i_5 < 17; i_5 += 2) 
                        {
                            arr_15 [i_3] [i_2 + 1] = ((/* implicit */unsigned short) ((4971574281411876917LL) == (4971574281411876904LL)));
                            arr_16 [i_3] [i_3] [i_2] [i_3] [(_Bool)1] = ((((/* implicit */_Bool) -4971574281411876899LL)) ? (339498958) : (((/* implicit */int) (_Bool)1)));
                        }
                        var_23 = ((((/* implicit */unsigned long long int) ((((max((-4971574281411876918LL), (((/* implicit */long long int) (signed char)-112)))) + (9223372036854775807LL))) >> (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_1))) >= (arr_4 [i_3] [i_3]))))))) + (7698879102725937993ULL));
                        var_24 ^= ((/* implicit */_Bool) (((-((-(-339498958))))) - (((((/* implicit */int) var_15)) + (((/* implicit */int) min(((unsigned short)30726), (((/* implicit */unsigned short) (unsigned char)252)))))))));
                    }
                } 
            } 
        } 
        var_25 = ((/* implicit */_Bool) ((long long int) (-(((((/* implicit */_Bool) (unsigned char)1)) ? (-4971574281411876906LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-4721))))))));
        /* LoopNest 2 */
        for (unsigned long long int i_6 = 0; i_6 < 19; i_6 += 1) 
        {
            for (unsigned int i_7 = 0; i_7 < 19; i_7 += 2) 
            {
                {
                    var_26 -= ((/* implicit */unsigned char) (((-(arr_4 [5ULL] [i_6]))) / (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) arr_0 [i_0] [i_0]))) ? (((arr_8 [i_7] [i_7] [i_0] [i_0]) + (((/* implicit */unsigned int) var_8)))) : (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-77))))))))));
                    arr_22 [i_0] [i_6] [i_6] = ((/* implicit */int) (-(max((max((-4971574281411876900LL), (((/* implicit */long long int) var_1)))), (((/* implicit */long long int) ((((/* implicit */int) var_5)) << (((((/* implicit */int) arr_1 [i_0])) - (45))))))))));
                }
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned short i_8 = 0; i_8 < 19; i_8 += 1) 
        {
            arr_25 [i_8] [i_8] [i_0] = ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) arr_23 [i_8])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_1)))) : ((-(((/* implicit */int) var_1)))));
            var_27 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (+(var_10)))), (max((((/* implicit */unsigned long long int) (unsigned char)3)), (0ULL)))));
        }
        for (short i_9 = 0; i_9 < 19; i_9 += 3) 
        {
            var_28 = ((/* implicit */short) (-(max((((/* implicit */unsigned int) ((((/* implicit */int) var_5)) + (((/* implicit */int) var_1))))), (arr_26 [i_9])))));
            /* LoopSeq 1 */
            for (signed char i_10 = 1; i_10 < 18; i_10 += 2) 
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (int i_11 = 0; i_11 < 19; i_11 += 1) 
                {
                    var_29 = ((/* implicit */int) ((unsigned int) arr_3 [i_0]));
                    var_30 *= ((/* implicit */long long int) (!(var_1)));
                    arr_32 [i_0] [i_0] [i_10] [i_11] [i_10] [(_Bool)1] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) % (13729568429854957779ULL)));
                }
                for (unsigned long long int i_12 = 0; i_12 < 19; i_12 += 3) 
                {
                    /* LoopSeq 2 */
                    for (short i_13 = 2; i_13 < 18; i_13 += 2) /* same iter space */
                    {
                        var_31 = ((/* implicit */signed char) (!(((((/* implicit */long long int) ((/* implicit */int) var_15))) != (((((/* implicit */_Bool) var_11)) ? (var_6) : (var_6)))))));
                        arr_40 [i_0] [i_12] [i_10] [(unsigned short)14] [i_0] = ((/* implicit */int) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) max(((short)18570), (var_14))))))) == (((((/* implicit */_Bool) arr_38 [i_0] [i_0] [(signed char)16] [i_0] [8ULL] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) 1508291564U)))) : (arr_37 [i_13 - 1] [i_10 + 1] [i_13 - 2] [i_10 + 1] [i_9])))));
                        var_32 = ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -2576029957103085650LL)) ? (2147483647) : (((/* implicit */int) (short)-1))))) ? (((/* implicit */unsigned int) var_17)) : (var_11)))) != (((long long int) var_1))));
                    }
                    for (short i_14 = 2; i_14 < 18; i_14 += 2) /* same iter space */
                    {
                        var_33 = ((/* implicit */_Bool) min((var_33), (((/* implicit */_Bool) var_15))));
                        var_34 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) 2097024)), (4971574281411876895LL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_9]))))) : (((/* implicit */int) ((((/* implicit */int) var_16)) == (((/* implicit */int) arr_43 [12LL] [i_14 - 1])))))));
                        var_35 ^= ((/* implicit */unsigned long long int) ((((/* implicit */int) min(((short)-12549), (((/* implicit */short) (signed char)103))))) >= (((int) var_11))));
                        var_36 += min((((arr_30 [(short)12] [i_10 + 1] [i_10 + 1] [i_14]) ? (((/* implicit */int) arr_30 [i_0] [i_10 + 1] [i_10] [i_10])) : (((/* implicit */int) var_0)))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_30 [i_9] [i_10 - 1] [i_9] [i_12])) : (var_8))));
                    }
                    arr_45 [i_0] [i_9] [i_0] [i_10] [i_12] = ((/* implicit */unsigned char) var_17);
                }
                /* LoopNest 2 */
                for (int i_15 = 0; i_15 < 19; i_15 += 1) 
                {
                    for (signed char i_16 = 1; i_16 < 16; i_16 += 3) 
                    {
                        {
                            arr_50 [i_16] = ((/* implicit */int) ((unsigned short) arr_42 [5LL] [5LL] [i_10] [i_15] [i_16] [i_15] [i_15]));
                            var_37 = ((/* implicit */signed char) ((unsigned short) (-(((/* implicit */int) ((arr_37 [i_0] [i_0] [i_10] [i_15] [i_16]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)44)))))))));
                            arr_51 [(short)4] [i_9] [i_10] [i_15] [(short)8] |= ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((_Bool) arr_33 [i_10 - 1] [i_10] [i_10 - 1] [i_16 + 1] [i_16 + 3])))));
                        }
                    } 
                } 
            }
            var_38 = ((/* implicit */unsigned char) ((long long int) ((unsigned long long int) arr_21 [i_0] [i_0])));
            var_39 = ((/* implicit */int) var_16);
            var_40 *= ((/* implicit */unsigned long long int) max((((/* implicit */int) max((((/* implicit */unsigned short) (((_Bool)1) && (((/* implicit */_Bool) var_16))))), (var_0)))), (max((((/* implicit */int) var_1)), (min((var_17), (((/* implicit */int) (_Bool)1))))))));
        }
    }
    var_41 = ((((((/* implicit */_Bool) min((1275688235U), (((/* implicit */unsigned int) var_8))))) ? ((+(((/* implicit */int) var_12)))) : (((/* implicit */int) var_0)))) > (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))));
    var_42 = ((/* implicit */signed char) ((long long int) var_1));
}
