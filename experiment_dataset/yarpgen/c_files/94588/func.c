/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94588
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94588 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94588
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
    for (int i_0 = 2; i_0 < 21; i_0 += 3) /* same iter space */
    {
        var_12 = ((/* implicit */signed char) var_3);
        /* LoopSeq 2 */
        for (int i_1 = 1; i_1 < 22; i_1 += 3) 
        {
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 20; i_2 += 1) 
            {
                for (unsigned long long int i_3 = 1; i_3 < 22; i_3 += 3) 
                {
                    {
                        var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) max((((/* implicit */long long int) (-2147483647 - 1))), (-4158578767114032307LL))))));
                        var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? (var_3) : (((var_11) % (arr_2 [i_0 - 1])))));
                        var_15 = ((/* implicit */int) ((((/* implicit */_Bool) min((var_1), (((/* implicit */short) (unsigned char)239))))) ? (((((/* implicit */_Bool) arr_13 [i_0] [i_0 + 2] [i_2 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)17))) : (var_3))) : (((unsigned int) arr_6 [i_1] [i_0 + 1]))));
                    }
                } 
            } 
            var_16 |= ((((/* implicit */_Bool) ((((/* implicit */long long int) var_2)) / (var_8)))) ? (((/* implicit */long long int) ((unsigned int) arr_7 [i_0] [i_0 + 2] [i_0]))) : (((((/* implicit */_Bool) 0)) ? (-4158578767114032320LL) : (arr_7 [i_0] [i_0 + 1] [i_1 - 1]))));
            /* LoopSeq 3 */
            for (unsigned char i_4 = 1; i_4 < 21; i_4 += 3) /* same iter space */
            {
                arr_19 [i_1] = ((int) ((((/* implicit */_Bool) arr_13 [i_0 + 1] [i_1 - 1] [i_4 + 2])) ? (var_5) : (((((/* implicit */_Bool) var_7)) ? (var_8) : (((/* implicit */long long int) 449944375))))));
                /* LoopSeq 4 */
                for (unsigned int i_5 = 2; i_5 < 20; i_5 += 3) /* same iter space */
                {
                    arr_22 [i_0] [i_1] [i_1] [i_1] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_8 [i_5] [i_5 - 1] [i_5] [i_5])))) ? (((/* implicit */long long int) ((((((/* implicit */_Bool) arr_12 [i_0] [i_4] [i_4])) && (((/* implicit */_Bool) arr_7 [i_0 - 1] [i_1] [i_5])))) ? (((/* implicit */int) ((signed char) var_5))) : ((-(-183611590)))))) : (((((/* implicit */_Bool) ((int) arr_6 [i_0 - 1] [i_1]))) ? (max((((/* implicit */long long int) var_10)), (var_8))) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))));
                    arr_23 [i_1] = ((/* implicit */int) ((var_6) != (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)49393)) ? (1281008508U) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))));
                }
                for (unsigned int i_6 = 2; i_6 < 20; i_6 += 3) /* same iter space */
                {
                    var_17 = ((/* implicit */int) var_1);
                    var_18 = ((/* implicit */short) min((var_18), (((short) 552256895U))));
                    var_19 |= ((/* implicit */_Bool) var_1);
                }
                for (unsigned int i_7 = 0; i_7 < 23; i_7 += 3) 
                {
                    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0 - 2] [i_4 + 2]))) : (var_6)))) || (((/* implicit */_Bool) min((((/* implicit */short) (_Bool)0)), (arr_11 [i_0 + 1] [i_4 + 1]))))));
                    arr_29 [i_0] [i_1] [i_0] [i_0 - 1] [i_0 - 1] = ((/* implicit */int) max((((((/* implicit */_Bool) max((11821563872571496934ULL), (((/* implicit */unsigned long long int) (_Bool)1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_4 + 2] [(unsigned char)10] [i_4] [i_4]))) : (arr_8 [i_0 - 1] [i_1 + 1] [i_4 + 2] [i_4 + 2]))), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) (short)-7330)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (signed char)-39)))) | ((~(var_2))))))));
                }
                for (int i_8 = 1; i_8 < 19; i_8 += 1) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_9 = 1; i_9 < 22; i_9 += 3) 
                    {
                        var_21 = ((/* implicit */int) var_3);
                        arr_35 [i_0] [10] [i_1] [i_1 + 1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)8))) & (arr_2 [i_4 + 2])));
                        var_22 = ((/* implicit */short) ((var_6) + (arr_9 [i_8 + 1] [i_4 + 1] [i_4] [i_1 + 1])));
                        arr_36 [i_0] [i_0] [i_1] [(signed char)20] [i_9] [i_8] = ((/* implicit */long long int) var_9);
                    }
                    var_23 &= var_2;
                    var_24 -= ((/* implicit */unsigned long long int) (!(((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) 1585644005U))))));
                }
                arr_37 [i_0] [i_1] [i_4] = ((/* implicit */signed char) max(((short)-10667), ((short)-22795)));
            }
            /* vectorizable */
            for (unsigned char i_10 = 1; i_10 < 21; i_10 += 3) /* same iter space */
            {
                /* LoopSeq 1 */
                for (unsigned char i_11 = 2; i_11 < 21; i_11 += 1) 
                {
                    var_25 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)60)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)60))) : (6625180201138054682ULL)));
                    var_26 = ((/* implicit */long long int) ((arr_41 [i_10 - 1] [i_1 - 1] [i_1 - 1] [i_0 - 2]) >> (((1973839220U) - (1973839172U)))));
                }
                arr_44 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_0 + 2] [i_1 + 1] [i_1 + 1] [i_10])) ? (arr_9 [i_1 + 1] [i_1 + 1] [i_10 + 2] [i_0 - 2]) : (var_6)));
            }
            /* vectorizable */
            for (unsigned char i_12 = 1; i_12 < 21; i_12 += 3) /* same iter space */
            {
                var_27 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_1))));
                var_28 = ((/* implicit */int) ((unsigned long long int) arr_12 [i_12] [i_1] [i_1 - 1]));
            }
        }
        for (unsigned short i_13 = 0; i_13 < 23; i_13 += 1) 
        {
            var_29 = ((/* implicit */int) var_3);
            var_30 = ((/* implicit */unsigned long long int) ((short) ((max((((/* implicit */long long int) (signed char)39)), (8507568626325124206LL))) & (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) (signed char)1)), (var_1))))))));
        }
        var_31 ^= ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) var_0)), (arr_7 [4] [i_0] [i_0 + 1]))))));
    }
    /* vectorizable */
    for (int i_14 = 2; i_14 < 21; i_14 += 3) /* same iter space */
    {
        var_32 = ((/* implicit */unsigned int) ((int) var_9));
        arr_52 [i_14] = ((/* implicit */short) ((((/* implicit */_Bool) 1577249915)) ? (897795759U) : (2965678349U)));
        arr_53 [i_14] = ((/* implicit */int) var_4);
    }
    var_33 += ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_10)) : (-183611563)))) != (var_8)));
    var_34 = ((/* implicit */unsigned long long int) ((int) var_4));
}
