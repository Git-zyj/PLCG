/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78207
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78207 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78207
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 4) /* same iter space */
    {
        /* LoopSeq 3 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            var_13 = ((/* implicit */_Bool) (+(((/* implicit */int) var_7))));
            var_14 = ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)66))));
            var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_11)), (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))))) ? (arr_1 [i_1]) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [17U])))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_4)))))))));
        }
        for (unsigned int i_2 = 0; i_2 < 19; i_2 += 1) 
        {
            arr_10 [(_Bool)1] [(_Bool)1] = ((/* implicit */unsigned char) arr_7 [i_0]);
            /* LoopSeq 2 */
            for (unsigned int i_3 = 0; i_3 < 19; i_3 += 4) 
            {
                arr_13 [i_0] [i_2] [i_2] [i_2] = min((((/* implicit */unsigned long long int) ((var_10) ? (((/* implicit */int) arr_0 [7ULL] [i_2])) : (((/* implicit */int) arr_7 [i_0]))))), (((((/* implicit */_Bool) var_2)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) * (var_2))) : (((/* implicit */unsigned long long int) (-(var_5)))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned char i_4 = 0; i_4 < 19; i_4 += 2) /* same iter space */
                {
                    var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) var_5))));
                    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)31475)) << (((/* implicit */int) arr_2 [i_0] [i_0]))));
                }
                for (unsigned char i_5 = 0; i_5 < 19; i_5 += 2) /* same iter space */
                {
                    var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (((+(((/* implicit */int) var_10)))) != (((((/* implicit */int) var_3)) / (((/* implicit */int) var_7)))))))) < (max((var_5), (((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)189))) == (1073741823LL)))))))))));
                    var_19 += ((/* implicit */unsigned short) arr_11 [i_0] [i_2]);
                }
                arr_19 [i_0] [i_2] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) var_10))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [15ULL]))) : ((-(arr_11 [i_0] [i_2])))));
            }
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                var_20 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-18070)) ? (((((/* implicit */int) (unsigned char)228)) * (((/* implicit */int) (unsigned char)63)))) : (((/* implicit */int) max((var_11), (((/* implicit */unsigned char) var_4)))))));
                arr_23 [i_0] [i_0] [i_6] &= ((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-18053))));
                arr_24 [i_2] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((max((((/* implicit */long long int) var_6)), (5857431970991403063LL))) >= (((/* implicit */long long int) ((/* implicit */int) var_11))))))) * (max((var_5), (((/* implicit */unsigned int) var_12))))));
            }
        }
        for (unsigned long long int i_7 = 2; i_7 < 17; i_7 += 2) 
        {
            arr_28 [i_7] [(unsigned char)15] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (short)4515))) * (2432062961U)))) ? (((/* implicit */int) min((var_7), (var_7)))) : (((/* implicit */int) arr_27 [(unsigned short)10]))))) ? (var_2) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) arr_6 [i_0] [i_7 - 1] [i_7 - 1])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_4)))) : (((/* implicit */int) arr_27 [i_7 - 2])))))));
            /* LoopSeq 2 */
            for (unsigned char i_8 = 0; i_8 < 19; i_8 += 2) /* same iter space */
            {
                var_21 = ((/* implicit */unsigned int) ((var_8) * (var_9)));
                arr_32 [i_8] [(short)0] = ((/* implicit */short) ((long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_7 [i_8]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_1)))) : (max((((/* implicit */unsigned long long int) arr_15 [i_0] [i_7 + 1] [i_8] [i_7] [i_8])), (arr_6 [i_0] [i_7] [9LL]))))));
                arr_33 [12LL] [i_7] [12ULL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_16 [7LL] [7LL] [0LL] [i_7 - 2] [i_7 + 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_10)))) : (min((((((/* implicit */_Bool) arr_12 [i_0] [15U] [i_0])) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [(unsigned char)12]))))), (((/* implicit */unsigned long long int) var_1))))));
            }
            for (unsigned char i_9 = 0; i_9 < 19; i_9 += 2) /* same iter space */
            {
                var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) min((((long long int) min((((/* implicit */unsigned char) var_10)), (var_11)))), (((/* implicit */long long int) var_0)))))));
                var_23 = ((/* implicit */unsigned short) arr_20 [i_0] [i_0] [i_9]);
                /* LoopSeq 1 */
                for (int i_10 = 0; i_10 < 19; i_10 += 1) 
                {
                    var_24 &= ((/* implicit */short) (-(((arr_20 [i_0] [i_7] [i_9]) ? (max((arr_9 [i_0]), (((/* implicit */unsigned long long int) var_12)))) : (var_2)))));
                    arr_41 [i_0] [i_0] [i_7] [i_9] [i_10] = ((/* implicit */unsigned long long int) (unsigned short)24965);
                }
            }
        }
        arr_42 [i_0] = ((/* implicit */unsigned long long int) var_1);
        var_25 = ((/* implicit */unsigned long long int) ((long long int) ((long long int) ((arr_26 [i_0]) + (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))));
    }
    for (unsigned char i_11 = 0; i_11 < 19; i_11 += 4) /* same iter space */
    {
        arr_45 [i_11] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_11 [i_11] [i_11]))));
        arr_46 [i_11] [i_11] &= ((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_11]))));
        var_26 = ((/* implicit */short) arr_1 [i_11]);
        arr_47 [(short)1] [i_11] = ((/* implicit */unsigned long long int) arr_5 [i_11]);
        var_27 ^= ((/* implicit */unsigned char) min(((~((((_Bool)1) ? (((/* implicit */int) (short)-4516)) : (((/* implicit */int) (unsigned char)43)))))), (((((/* implicit */_Bool) ((unsigned int) var_5))) ? (((/* implicit */int) arr_36 [i_11] [(_Bool)1] [i_11] [4ULL])) : (((/* implicit */int) (unsigned char)255))))));
    }
    var_28 = ((/* implicit */unsigned char) max((((/* implicit */long long int) var_7)), (((((/* implicit */_Bool) ((unsigned char) var_0))) ? (((long long int) var_4)) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_3)))))))));
    var_29 ^= ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((unsigned short) var_0)))));
}
