/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76248
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76248 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76248
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
    var_15 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) var_3)) ^ (((/* implicit */int) var_13)))))));
    var_16 ^= ((/* implicit */long long int) ((max((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)0)) >> (((((/* implicit */int) var_11)) + (32085)))))), (var_5))) % (((/* implicit */unsigned int) ((/* implicit */int) var_11)))));
    var_17 = ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_0)))) > (((((/* implicit */_Bool) var_12)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))))) : ((+(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_7)))))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 3; i_0 < 14; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) max(((~(((/* implicit */int) arr_2 [i_0 + 3])))), (((/* implicit */int) (!(((/* implicit */_Bool) 0ULL)))))));
        var_18 = (!(((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [9U]))) : (var_5))))));
    }
    for (signed char i_1 = 1; i_1 < 18; i_1 += 3) 
    {
        var_19 = ((/* implicit */int) ((((((/* implicit */int) ((_Bool) arr_4 [(_Bool)1]))) != (((/* implicit */int) (_Bool)0)))) ? (((/* implicit */long long int) 994516019)) : (((((63050394783186944LL) + (((/* implicit */long long int) ((/* implicit */int) (unsigned short)47583))))) + (((/* implicit */long long int) -1260546739))))));
        arr_6 [(unsigned short)8] = ((/* implicit */unsigned int) ((unsigned short) min((arr_4 [i_1 - 1]), (((/* implicit */unsigned long long int) var_6)))));
        /* LoopSeq 3 */
        for (long long int i_2 = 2; i_2 < 18; i_2 += 3) 
        {
            arr_9 [i_2 - 2] [(short)9] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_5 [i_1 - 1])) ? (((/* implicit */int) arr_5 [i_1 + 2])) : (((/* implicit */int) arr_5 [i_1 + 1])))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_1 - 1])))))));
            var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [i_2 + 2]))))) ? ((~(arr_4 [i_1 - 1]))) : (((unsigned long long int) arr_8 [i_2 + 2])))))));
        }
        for (unsigned short i_3 = 2; i_3 < 17; i_3 += 4) 
        {
            /* LoopNest 2 */
            for (short i_4 = 1; i_4 < 19; i_4 += 4) 
            {
                for (unsigned char i_5 = 3; i_5 < 17; i_5 += 3) 
                {
                    {
                        var_21 *= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (-(var_0)))) ? (((/* implicit */int) ((signed char) arr_15 [0] [i_3] [i_3] [i_1 + 2]))) : (((/* implicit */int) ((unsigned char) arr_7 [i_1]))))) != (((/* implicit */int) var_7))));
                        var_22 = ((/* implicit */unsigned short) arr_16 [(_Bool)1] [(unsigned short)2] [i_4 + 1] [i_3 + 1] [(short)10]);
                    }
                } 
            } 
            var_23 *= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_10 [(unsigned short)6] [4]))))) ? (((((/* implicit */_Bool) var_3)) ? (var_8) : (arr_7 [i_1 + 2]))) : (((/* implicit */unsigned long long int) arr_12 [i_3])))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))));
            /* LoopSeq 3 */
            for (short i_6 = 1; i_6 < 17; i_6 += 4) 
            {
                arr_19 [(unsigned char)16] [7U] [(unsigned char)16] [(unsigned char)16] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) -1260546739)), (-7779439822704905149LL)));
                arr_20 [(unsigned short)9] = ((/* implicit */short) (~(arr_7 [i_1 - 1])));
            }
            for (short i_7 = 1; i_7 < 18; i_7 += 2) 
            {
                arr_23 [i_1] [i_1] [i_1 - 1] [i_1] = ((/* implicit */long long int) min((((min((((/* implicit */unsigned long long int) var_10)), (arr_4 [i_3]))) + (((/* implicit */unsigned long long int) arr_17 [i_3 - 2] [i_1 - 1] [i_1 + 1])))), (((/* implicit */unsigned long long int) (-((+(((/* implicit */int) var_11)))))))));
                var_24 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_5 [i_3]))));
            }
            for (int i_8 = 3; i_8 < 19; i_8 += 4) 
            {
                var_25 ^= ((/* implicit */unsigned int) ((_Bool) (-(((/* implicit */int) arr_5 [i_1 + 1])))));
                /* LoopSeq 1 */
                for (unsigned char i_9 = 1; i_9 < 19; i_9 += 1) 
                {
                    arr_29 [8ULL] [i_3] [i_8] [i_9 - 1] [i_9] [(signed char)6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) min((var_13), (arr_10 [(_Bool)1] [(_Bool)1])))) : (((/* implicit */int) min((var_11), (((/* implicit */short) var_13)))))))) ? (arr_28 [i_9] [i_3] [(unsigned short)4] [i_9 + 1]) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_26 [i_9 + 1] [(unsigned short)17] [i_9] [(short)4] [i_9] [i_9 + 1])) >= ((+(((/* implicit */int) (unsigned char)220))))))))));
                    arr_30 [(short)2] [i_9] [i_8 - 3] [i_1 + 2] [19LL] [i_8 + 1] = (i_9 % 2 == zero) ? (((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_24 [i_9 - 1] [14] [10LL] [i_9 - 1])) ? (arr_24 [i_9 - 1] [3U] [i_9] [i_9 - 1]) : (arr_24 [i_9 - 1] [i_9] [15U] [i_9 - 1])))) != (((arr_28 [i_9] [i_9 - 1] [(unsigned short)15] [i_9 - 1]) + (arr_28 [i_9] [i_9] [i_9 + 1] [i_9 - 1])))))) : (((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_24 [i_9 - 1] [14] [10LL] [i_9 - 1])) ? (arr_24 [i_9 - 1] [3U] [i_9] [i_9 - 1]) : (arr_24 [i_9 - 1] [i_9] [15U] [i_9 - 1])))) != (((arr_28 [i_9] [i_9 - 1] [(unsigned short)15] [i_9 - 1]) - (arr_28 [i_9] [i_9] [i_9 + 1] [i_9 - 1]))))));
                }
            }
        }
        for (unsigned short i_10 = 2; i_10 < 18; i_10 += 3) 
        {
            /* LoopSeq 4 */
            for (unsigned char i_11 = 2; i_11 < 17; i_11 += 1) 
            {
                var_26 = ((/* implicit */unsigned char) (((!((!(((/* implicit */_Bool) 3)))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_32 [i_11 + 1] [i_1 + 2] [i_10 + 1])))))) : (min((arr_8 [i_1 - 1]), (arr_8 [i_1 - 1])))));
                arr_35 [i_1 + 2] [i_10] [(_Bool)1] [i_1 - 1] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_12 [(signed char)4])) ? (arr_28 [(_Bool)0] [i_10 + 1] [i_10] [i_10 - 2]) : (((/* implicit */long long int) (~(var_0))))))));
                var_27 = ((/* implicit */unsigned int) var_6);
                var_28 = ((/* implicit */unsigned short) ((unsigned int) var_13));
            }
            for (unsigned long long int i_12 = 1; i_12 < 18; i_12 += 4) 
            {
                var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_11 [i_1 + 2])) ? (((((/* implicit */_Bool) arr_11 [i_1 - 1])) ? (((/* implicit */int) arr_11 [i_1 - 1])) : (((/* implicit */int) arr_11 [i_1 + 2])))) : (((((/* implicit */_Bool) arr_11 [i_1 - 1])) ? (((/* implicit */int) arr_11 [i_1 + 2])) : (((/* implicit */int) arr_11 [i_1 - 1]))))));
                var_30 *= (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_1] [(unsigned char)18] [i_1 - 1])) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) arr_25 [i_1 - 1] [i_1 + 2] [i_1 + 2])))))));
            }
            for (int i_13 = 2; i_13 < 17; i_13 += 3) 
            {
                var_31 = ((/* implicit */unsigned short) min((var_31), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((-63050394783186942LL), (8205113027634373914LL)))))))));
                arr_42 [i_1 + 2] [(unsigned char)18] [i_1] = ((/* implicit */long long int) (((+(var_5))) / (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_24 [i_1 + 1] [i_10 - 2] [i_13 + 2] [i_13 + 1])) ? (arr_24 [i_1 - 1] [i_1 - 1] [0U] [i_13 + 2]) : (arr_24 [i_1 - 1] [i_13] [i_13] [i_13 + 3]))))));
                var_32 = ((/* implicit */unsigned long long int) var_12);
                arr_43 [i_13 + 1] [i_10] [i_13 - 2] = (!(((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1)))) ^ (0U)))) || (((/* implicit */_Bool) (+(((/* implicit */int) arr_40 [i_1 - 1]))))))));
            }
            /* vectorizable */
            for (signed char i_14 = 4; i_14 < 19; i_14 += 2) 
            {
                var_33 = ((/* implicit */int) arr_21 [i_10] [i_10] [i_1] [i_1]);
                var_34 = ((/* implicit */unsigned int) arr_10 [i_10 - 1] [i_1 + 2]);
            }
            var_35 = ((/* implicit */long long int) arr_44 [i_1] [i_10 + 2] [i_1 + 2] [i_1]);
            var_36 = ((/* implicit */unsigned int) arr_37 [i_1] [10U] [i_10 - 1]);
        }
        var_37 = ((/* implicit */short) ((arr_4 [i_1]) * (((((/* implicit */unsigned long long int) arr_22 [i_1 + 2] [(_Bool)1])) * (((unsigned long long int) arr_11 [2]))))));
    }
    for (short i_15 = 1; i_15 < 19; i_15 += 2) 
    {
        var_38 = (+(((/* implicit */int) ((_Bool) arr_38 [(short)6] [i_15 + 1]))));
        arr_50 [i_15] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_15 [i_15] [i_15 + 1] [(_Bool)1] [i_15 + 1])) ? (arr_15 [i_15] [8LL] [(unsigned char)18] [i_15 - 1]) : (arr_15 [i_15] [(short)4] [0ULL] [(_Bool)1]))) <= (((/* implicit */unsigned int) ((/* implicit */int) ((arr_15 [16LL] [(_Bool)1] [14U] [i_15 + 1]) > (arr_15 [(short)10] [(unsigned short)4] [(unsigned short)2] [(short)10])))))));
    }
}
