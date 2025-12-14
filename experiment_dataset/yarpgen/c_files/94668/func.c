/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94668
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (unsigned int i_2 = 4; i_2 < 9; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        var_19 = ((unsigned int) var_12);
                        var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((2968488701U) * (((/* implicit */unsigned int) ((/* implicit */int) (short)-12857))))))));
                    }
                    /* LoopSeq 2 */
                    for (unsigned char i_4 = 0; i_4 < 11; i_4 += 4) 
                    {
                        var_21 = ((/* implicit */unsigned int) ((((/* implicit */int) var_12)) / (((((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_0] [i_4]))))) ? ((-(((/* implicit */int) (unsigned char)250)))) : ((+(var_9)))))));
                        /* LoopSeq 1 */
                        for (unsigned short i_5 = 0; i_5 < 11; i_5 += 4) 
                        {
                            var_22 = ((/* implicit */unsigned int) min((var_22), (((((/* implicit */_Bool) ((((/* implicit */long long int) ((int) var_14))) + (arr_7 [i_2] [i_2] [i_2])))) ? ((((~(var_5))) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (unsigned char)255))))))));
                            var_23 *= ((/* implicit */unsigned char) 9934277567870279773ULL);
                            var_24 = ((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_2 - 3])) ? (arr_12 [7ULL] [7U]) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) ((((/* implicit */_Bool) var_17)) ? (var_13) : (((/* implicit */int) var_11)))))))));
                            arr_19 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)178)) <= (((int) (unsigned char)13))));
                            var_25 = ((/* implicit */unsigned char) (~(((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_10 [i_1] [i_1] [i_1] [i_1] [i_1])) | (((/* implicit */int) (unsigned char)0))))) | (((unsigned long long int) (_Bool)1))))));
                        }
                        var_26 += ((unsigned long long int) ((arr_9 [i_2 - 4] [i_1] [i_2 - 2] [i_1]) != (arr_9 [i_2 + 2] [i_1] [i_2 - 3] [i_2 + 2])));
                    }
                    for (int i_6 = 3; i_6 < 8; i_6 += 3) 
                    {
                        var_27 |= ((/* implicit */int) arr_20 [i_0] [i_0]);
                        var_28 -= ((/* implicit */unsigned char) (~((~(((/* implicit */int) (unsigned char)1))))));
                        /* LoopSeq 2 */
                        for (unsigned int i_7 = 2; i_7 < 9; i_7 += 3) 
                        {
                            var_29 = (+(var_13));
                            arr_24 [i_2] [i_2] [i_2 - 3] [i_2 - 2] [i_2 + 2] |= ((/* implicit */int) ((((/* implicit */_Bool) ((int) (-(arr_7 [i_0] [i_1] [i_2 + 1]))))) ? (((((/* implicit */_Bool) arr_22 [i_6 + 1] [i_6 + 2] [i_6 - 2] [i_1] [i_6 - 2])) ? (((arr_11 [i_1] [i_1] [i_1] [i_1]) - (var_18))) : (2080768U))) : (((/* implicit */unsigned int) ((((109978429) >= (((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [1U] [i_0])))) ? (arr_13 [i_2] [i_6] [i_6 - 1] [i_7 + 1]) : (((/* implicit */int) (unsigned char)15)))))));
                            arr_25 [i_0] [i_0] [i_6] [i_0] [(unsigned char)6] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) ((9934277567870279762ULL) >= (((/* implicit */unsigned long long int) 0U))))) << (((((375540435) % (-1123771353))) - (375540424)))));
                            var_30 = ((/* implicit */unsigned char) max((var_30), (((/* implicit */unsigned char) (((-(((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [9ULL] [i_0])))) >= (((/* implicit */int) max(((short)-26468), (((/* implicit */short) (unsigned char)0))))))))));
                            var_31 *= ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)15)) << (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_15) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)45)))))))))));
                        }
                        for (unsigned char i_8 = 3; i_8 < 10; i_8 += 1) 
                        {
                            arr_30 [i_0] [5] [i_0] [i_6] [i_6] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((((/* implicit */int) (unsigned char)239)) * (((/* implicit */int) (unsigned char)16)))), ((~(2123978973)))))) ? (min((((((/* implicit */_Bool) (unsigned char)139)) ? (var_2) : (((/* implicit */unsigned int) 205376189)))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_6] [i_8])) + (((/* implicit */int) arr_21 [i_6] [i_1] [i_2] [i_1] [(signed char)5]))))))) : (((((/* implicit */_Bool) (unsigned char)159)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_21 [i_6] [i_6] [i_6] [i_6] [i_6 - 2])))) : (((unsigned int) var_6))))));
                            arr_31 [i_0] [i_1] [i_6] [i_6] [i_6] [i_6] [i_8] = ((/* implicit */unsigned long long int) (unsigned char)216);
                            var_32 = ((/* implicit */_Bool) max((var_32), (((/* implicit */_Bool) (short)-27580))));
                            var_33 = ((/* implicit */int) ((short) -12255880015935280LL));
                        }
                        arr_32 [i_6] [i_6] = ((((/* implicit */int) var_12)) * (((/* implicit */int) arr_10 [(_Bool)1] [i_1] [i_1] [i_1] [i_1])));
                    }
                    var_34 ^= ((/* implicit */unsigned long long int) ((unsigned int) min((((var_10) << (0U))), (((/* implicit */unsigned int) ((-1059765824) + (((/* implicit */int) (unsigned char)192))))))));
                    arr_33 [i_2] [i_1] [i_0] = ((/* implicit */unsigned int) arr_1 [i_2]);
                    /* LoopNest 2 */
                    for (unsigned int i_9 = 2; i_9 < 9; i_9 += 4) 
                    {
                        for (unsigned int i_10 = 0; i_10 < 11; i_10 += 3) 
                        {
                            {
                                var_35 = ((/* implicit */unsigned int) min((6071801050173487012ULL), (((/* implicit */unsigned long long int) (short)6144))));
                                arr_38 [3ULL] [i_1] [i_1] [i_1] [(unsigned char)10] [i_1] [i_10] = ((((/* implicit */_Bool) (+(max((((/* implicit */unsigned long long int) var_6)), (144080003703767040ULL)))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_11))) * (arr_37 [i_9] [i_9] [i_9 + 1] [i_9] [i_9]))) : (max((((/* implicit */unsigned int) arr_13 [i_10] [(unsigned char)3] [i_2] [i_0])), (var_8))));
                                var_36 -= ((/* implicit */_Bool) min((((var_6) - (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (2103509081) : (((/* implicit */int) (unsigned char)32))))))), (((/* implicit */unsigned int) min((((/* implicit */int) ((_Bool) var_3))), (((((((/* implicit */int) (short)-12320)) + (2147483647))) << (((2399887202U) - (2399887202U))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_37 = 5U;
}
